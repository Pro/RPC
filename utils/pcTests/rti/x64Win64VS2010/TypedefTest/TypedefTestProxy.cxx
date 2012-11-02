/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "TypedefTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "TypedefTestRequestReplyPlugin.h"
#include "TypedefTestAsyncSupport.h"
#include "exceptions/Exceptions.h"

TypedefTestProxy::TypedefTestProxy(int domainId, long timeout) :
    Client(NULL, domainId, timeout)
{
    createRPCs();
}

TypedefTestProxy::TypedefTestProxy(eProsima::DDSRPC::Transport *transport, int domainId, long timeout) :
    Client(transport, domainId, timeout)
{
    createRPCs();
}

TypedefTestProxy::~TypedefTestProxy()
{
    delete getLargo_Service;
    delete getLarguisimo_Service;
    delete getDatosDef_Service;
    delete getDatosDefondo_Service;
    delete getCadena_Service;
    delete getCorrea_Service;
}

void TypedefTestProxy::createRPCs()
{
    this->getLargo_Service = new getLargoClientRPC("getLargo",
                                  getLargoRequestUtils::registerType(getParticipant()),
                                  getLargoReplyUtils::registerType(getParticipant()),
                                  this);
    this->getLarguisimo_Service = new getLarguisimoClientRPC("getLarguisimo",
                                  getLarguisimoRequestUtils::registerType(getParticipant()),
                                  getLarguisimoReplyUtils::registerType(getParticipant()),
                                  this);
    this->getDatosDef_Service = new getDatosDefClientRPC("getDatosDef",
                                  getDatosDefRequestUtils::registerType(getParticipant()),
                                  getDatosDefReplyUtils::registerType(getParticipant()),
                                  this);
    this->getDatosDefondo_Service = new getDatosDefondoClientRPC("getDatosDefondo",
                                  getDatosDefondoRequestUtils::registerType(getParticipant()),
                                  getDatosDefondoReplyUtils::registerType(getParticipant()),
                                  this);
    this->getCadena_Service = new getCadenaClientRPC("getCadena",
                                  getCadenaRequestUtils::registerType(getParticipant()),
                                  getCadenaReplyUtils::registerType(getParticipant()),
                                  this);
    this->getCorrea_Service = new getCorreaClientRPC("getCorrea",
                                  getCorreaRequestUtils::registerType(getParticipant()),
                                  getCorreaReplyUtils::registerType(getParticipant()),
                                  this);

}

 
largo TypedefTestProxy::getLargo(/*in*/ largo l1, /*out*/ largo& l2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    largo  getLargo_ret = 0;    
    getLargoRequest instance;
    getLargoReply retInstance;

    getLargoReply_initialize(&retInstance);    
    getLargoRequestUtils::setTypeData(instance, l1);
    retcode = getLargo_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        getLargoReplyUtils::extractTypeData(retInstance, retcode, l2, getLargo_ret); 
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            throw eProsima::DDSRPC::ServerException("Error in server side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getLargo_ret;
}
 
larguisimo TypedefTestProxy::getLarguisimo(/*in*/ larguisimo ll1, /*out*/ larguisimo& ll2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    larguisimo  getLarguisimo_ret = 0;    
    getLarguisimoRequest instance;
    getLarguisimoReply retInstance;

    getLarguisimoReply_initialize(&retInstance);    
    getLarguisimoRequestUtils::setTypeData(instance, ll1);
    retcode = getLarguisimo_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        getLarguisimoReplyUtils::extractTypeData(retInstance, retcode, ll2, getLarguisimo_ret); 
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            throw eProsima::DDSRPC::ServerException("Error in server side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getLarguisimo_ret;
}
 
DatosDef TypedefTestProxy::getDatosDef(/*in*/ const DatosDef& d1, /*out*/ DatosDef& d2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    DatosDef getDatosDef_ret;
        
    getDatosDefRequest instance;
    getDatosDefReply retInstance;

    getDatosDefReply_initialize(&retInstance);    
    getDatosDefRequestUtils::setTypeData(instance, d1);
    retcode = getDatosDef_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        getDatosDefReplyUtils::extractTypeData(retInstance, retcode, d2, getDatosDef_ret); 
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            throw eProsima::DDSRPC::ServerException("Error in server side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getDatosDef_ret;
}
 
DatosDefondo TypedefTestProxy::getDatosDefondo(/*in*/ const DatosDefondo& dd1, /*out*/ DatosDefondo& dd2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    DatosDefondo getDatosDefondo_ret;
        
    getDatosDefondoRequest instance;
    getDatosDefondoReply retInstance;

    getDatosDefondoReply_initialize(&retInstance);    
    getDatosDefondoRequestUtils::setTypeData(instance, dd1);
    retcode = getDatosDefondo_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        getDatosDefondoReplyUtils::extractTypeData(retInstance, retcode, dd2, getDatosDefondo_ret); 
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            throw eProsima::DDSRPC::ServerException("Error in server side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getDatosDefondo_ret;
}
 
cadena TypedefTestProxy::getCadena(/*in*/ cadena c1, /*out*/ cadena& c2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    cadena  getCadena_ret = NULL;    
    getCadenaRequest instance;
    getCadenaReply retInstance;

    getCadenaReply_initialize(&retInstance);    
    getCadenaRequestUtils::setTypeData(instance, c1);
    retcode = getCadena_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        getCadenaReplyUtils::extractTypeData(retInstance, retcode, c2, getCadena_ret); 
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            throw eProsima::DDSRPC::ServerException("Error in server side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getCadena_ret;
}
 
correa TypedefTestProxy::getCorrea(/*in*/ correa cc1, /*out*/ correa& cc2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    correa  getCorrea_ret = NULL;    
    getCorreaRequest instance;
    getCorreaReply retInstance;

    getCorreaReply_initialize(&retInstance);    
    getCorreaRequestUtils::setTypeData(instance, cc1);
    retcode = getCorrea_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        getCorreaReplyUtils::extractTypeData(retInstance, retcode, cc2, getCorrea_ret); 
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            throw eProsima::DDSRPC::ServerException("Error in server side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getCorrea_ret;
}

 
void TypedefTestProxy::getLargo_async(TypedefTest_getLargo &obj, /*in*/ largo l1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    getLargoRequest instance;
    TypedefTest_getLargoTask *task = NULL;
    getLargoRequestUtils::setTypeData(instance, l1);
    task = new TypedefTest_getLargoTask(obj, this);
    retcode = getLargo_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void TypedefTestProxy::getLarguisimo_async(TypedefTest_getLarguisimo &obj, /*in*/ larguisimo ll1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    getLarguisimoRequest instance;
    TypedefTest_getLarguisimoTask *task = NULL;
    getLarguisimoRequestUtils::setTypeData(instance, ll1);
    task = new TypedefTest_getLarguisimoTask(obj, this);
    retcode = getLarguisimo_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void TypedefTestProxy::getDatosDef_async(TypedefTest_getDatosDef &obj, /*in*/ const DatosDef& d1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    getDatosDefRequest instance;
    TypedefTest_getDatosDefTask *task = NULL;
    getDatosDefRequestUtils::setTypeData(instance, d1);
    task = new TypedefTest_getDatosDefTask(obj, this);
    retcode = getDatosDef_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void TypedefTestProxy::getDatosDefondo_async(TypedefTest_getDatosDefondo &obj, /*in*/ const DatosDefondo& dd1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    getDatosDefondoRequest instance;
    TypedefTest_getDatosDefondoTask *task = NULL;
    getDatosDefondoRequestUtils::setTypeData(instance, dd1);
    task = new TypedefTest_getDatosDefondoTask(obj, this);
    retcode = getDatosDefondo_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void TypedefTestProxy::getCadena_async(TypedefTest_getCadena &obj, /*in*/ cadena c1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    getCadenaRequest instance;
    TypedefTest_getCadenaTask *task = NULL;
    getCadenaRequestUtils::setTypeData(instance, c1);
    task = new TypedefTest_getCadenaTask(obj, this);
    retcode = getCadena_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void TypedefTestProxy::getCorrea_async(TypedefTest_getCorrea &obj, /*in*/ correa cc1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    getCorreaRequest instance;
    TypedefTest_getCorreaTask *task = NULL;
    getCorreaRequestUtils::setTypeData(instance, cc1);
    task = new TypedefTest_getCorreaTask(obj, this);
    retcode = getCorrea_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}