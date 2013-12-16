/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this RPCDDS distribution.
 *
 *************************************************************************
 * 
 * @file FooInterfaceProtocol.h
 * This header file contains the declaration of the interface for all protocols.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _FooInterface_PROTOCOL_H_
#define _FooInterface_PROTOCOL_H_

#include "protocols/Protocol.h"
#include "FooInterface.h"
#include "FooInterfaceServerImpl.h"
#include "ndds_namespace_cpp.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace protocol
        {
            class RPCDDSUSERDllExport FooInterfaceProtocol : public Protocol
            {
                public:
                
                    virtual bool setTransport(eprosima::rpcdds::transport::Transport &transport) = 0;
                    
                    virtual bool activateInterface(const char* interfaceName) = 0;
                    
                                        void linkFooInterface_FooResourceImpl(FooInterface::FooResourceServerImpl &impl)
                                        {
                                            _FooInterface_FooResource_impl = &impl;
                                        }
                                        
                             

                    virtual void FooInterface_FooResource_FooProcedure() = 0;


                    
                protected:
                
                    FooInterfaceProtocol() : Protocol()
                                         
                                        , _FooInterface_FooResource_impl(NULL)
                                        
                    {}
                    
                    virtual ~FooInterfaceProtocol(){}
                
                	                     
                	                    FooInterface::FooResourceServerImpl *_FooInterface_FooResource_impl;
                	                    
                    
            };
        } // namespace protocol
    } // namespace rpcdds
} // namespace eprosima

#endif // _FooInterface_PROTOCOL_H_