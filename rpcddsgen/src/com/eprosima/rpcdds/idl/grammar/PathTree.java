package com.eprosima.rpcdds.idl.grammar;

import java.util.ArrayList;
import java.util.List;

import com.eprosima.rpcdds.tree.Interface;
import com.eprosima.rpcdds.tree.Operation;
import com.eprosima.rpcdds.tree.Param;

public class PathTree {
	private PathTree parent;
	private String tag;
	private boolean variableNode;
	private ArrayList<PathTree> children;
	
	private boolean numericVariable;
	private boolean booleanVariable;
	private boolean charVariable;
	
	private ArrayList<PathTreeMethod> methods;
	private String interfaceName;
		
	public PathTree() {
		this(null, "");
	}
	
	public PathTree(PathTree parent, String tag) {
		this.parent = parent;
		this.tag = tag;
		children = new ArrayList<PathTree>();
		methods = new ArrayList<PathTreeMethod>();
		interfaceName = "";
				
		if(tag.length() == 0 || (tag.charAt(0) == '{' && tag.charAt(tag.length() - 1) == '}'))
			variableNode = true;
		else
			variableNode = false;
		
		numericVariable = false;
		booleanVariable = false;
		charVariable = false;
	}
	
	public PathTree getParent() { return parent; }
	public String getTag() { return tag; }
	public boolean isVariableNode() { return variableNode; }
	public ArrayList<PathTree> getChildren() { return children; }
	
	private void addChild(String tag) {
		PathTree child = new PathTree(this, tag);
		children.add(child);
	}
	
	private PathTree getChild(String tag) {
		for(PathTree child: children) {
			if(child.getTag().equals(tag))
				return child;
		}
		return null;
	}
	
	private boolean existsChild(String tag) {
		for(PathTree child: children) {
			if(child.getTag().equals(tag))
				return true;
		}
		return false;
	}
	
	public void addPath(String path) {
		
		while(path.length()>0 && path.charAt(0) == '/')
			path = path.substring(1);
		if(path.length()==0)
			return; // End of algorithm

		int pos = path.indexOf("/");
		String tag = path;
		String rest = "";
		if(pos != -1) {	
			tag = path.substring(0, pos);
			rest = path.substring(pos+1, path.length());
		}
		
		if(!existsChild(tag)) {
			// Child doesn't exist
			addChild(tag); // Child is added
		}

		// Add the rest of the path to the child
		getChild(tag).addPath(rest);
	}
	
	
	public void addMethod(Operation operation) {
		String path = "";
		PathTree node = this;
		boolean pathHasBrackets = false;
		if (operation.getParent() instanceof Interface) {
			Interface iface = (Interface)operation.getParent();
			path = iface.getPath();
			addPath(path);
			node = resolvePath(path);
			pathHasBrackets = iface.getPathHasBrackets();
		}
		
		PathTreeMethod method = new PathTreeMethod(operation.getName(), node);		
		List<Param> params;
		if(pathHasBrackets) {
			params = operation.getParameters().subList(1, operation.getParameters().size());
		} else {
			params = operation.getParameters();
		}
				
		for(Param param: params) {
			if(param.getBodyParam())
				continue;			
			method.addQueryParameter(param.getName());
		}
		
		node.methods.add(method);
	}
			
	public boolean isNumeric() { return numericVariable; }
	public boolean isBoolean() { return booleanVariable; }
	public boolean isChar() { return charVariable; }
	
	private boolean isNumeric(String type) {
		if(type.equals("short") ||
				type.equals("unsigned short") ||
				type.equals("long") ||
				type.equals("unsigned long") ||
				type.equals("long long") ||
				type.equals("unsigned long long") ||
				type.equals("float") ||
				type.equals("double"))
			return true;
		return false;
	}
		
	private boolean isBoolean(String type) {
		if(type.equals("bool"))
			return true;
		return false;
	}
	
	private boolean isChar(String type) {
		if(type.equals("char"))
			return true;
		return false;
	}
	
	public void setVariableType(String path, String type) {
		addPath(path);
		PathTree node = resolvePath(path);
		
		System.out.println("-> " + path);
		
		if(node.isVariableNode()) {
			System.out.println("Variable");
			if(isNumeric(type))
				node.numericVariable = true;
			else if(isBoolean(type))
				node.booleanVariable = true;
			else if(isChar(type))
				node.charVariable = true;	
		}
	}
	
	public boolean hasOperations() {
		return methods.size() > 0;
	}
	

	public void addInterfaceName(String path, String interfaceName) {
		addPath(path);
		PathTree node = resolvePath(path);
		node.interfaceName = interfaceName;
	}
	
	public PathTree resolvePath(String path) {
		while(path.length()>0 && path.charAt(0) == '/')
			path = path.substring(1);
		if(path.length()==0)
			return this; // End of algorithm

		int pos = path.indexOf("/");
		String tag = path;
		String rest = "";
		if(pos != -1) {	
			tag = path.substring(0, pos);
			rest = path.substring(pos+1, path.length());
		}

		// If child tag exists, resolve rest of the path with child
		if(existsChild(tag)) { 
			return getChild(tag).resolvePath(rest);
		}

		// if it doesn't exist, it can be an embedded parameter
		PathTree resolvedNode = null;
		for(PathTree child: children) {
			if(child.isVariableNode()) {
				if((resolvedNode = getChild(tag).resolvePath(rest)) != null)
					return resolvedNode;
			}
		}

		return resolvedNode;
	}
	
	public String getIterationCode() {		
		
		String code = "// BEGIN ITERATION " + tag + "\n";
		if(tag.length() == 0) {
			code += "string tag;\n";
			code += "string rest;\n";
			code += "string aux;\n";
			code += "int pos;\n";
			code += "char* p;\n";
		}
				
		code += "pos = path.find(\"/\");\n" +
		"tag = path.substr(0, pos);\n" +
		"rest = \"\";\n" +
		"if(pos != string::npos) {\n" +	
		"\trest = path.substr(pos+1, path.size());\n" +
		"}\n";
		
		code += "if(tag.size() == 0) {\n";
		if(hasOperations()) {
			for(PathTreeMethod method: methods) {
				code += method.getIterationCode();
			}
		} else {
			code += "return NULL; // ERROR NO OPERATIONS\n";
		}
		code += "}\n";
				
		for(PathTree child: children) {
			if(!child.isVariableNode()) {
				code += "aux = path;\n";
				code += "path = rest;\n";
				code += "if(tag.compare(\""+ child.getTag() +"\") == 0) {\n";
				code += child.getIterationCode();
				code += "}\n";
				code += "path = aux;\n";
			}
		}
		
		for(PathTree child: children) {
			if(child.isVariableNode()) {
				if(child.isNumeric()) {
					code += "strtol(_strdup(tag.c_str()), &p, 10);\n";
					code += "if(!*p) {\n";
					code += "aux = path;\n";
					code += "path = rest;\n";
					code += child.getIterationCode();
					code += "path = aux;\n";
					code += "}\n";
				} else if(child.isBoolean()) {
					code += "if(tag.compare(\"true\") == 0 || tag.compare(\"false\") == 0) {\n";
					code += "aux = path;\n";
					code += "path = rest;\n";
					code += child.getIterationCode();
					code += "path = aux;\n";
					code += "}\n";
				} else if(child.isChar()) {
					code += "if(tag.size() == 1) {\n";
					code += "aux = path;\n";
					code += "path = rest;\n";
					code += child.getIterationCode();
					code += "path = aux;\n";
					code += "}\n";
				} else {
					code += "aux = path;\n";
					code += "path = rest;\n";
					code += child.getIterationCode();
					code += "path = aux;\n";
				}
			}
		}
		
		if(tag.length() == 0) {
			code += "// ERROR NO MATCH FOUND\n";
		}
		
		code += "// END ITERATION " + tag + "\n";
		return code;
	}

	public String getInterfaceName() {
		return interfaceName;
	}

}
