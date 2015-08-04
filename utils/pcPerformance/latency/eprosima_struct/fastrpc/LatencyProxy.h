/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * fastrpc_LICENSE file included in this fastrpc distribution.
 *
 *************************************************************************
 * 
 * @file LatencyProxy.h
 * This header file contains the declaration of the proxy for all interfaces.
 *
 * This file was generated by the tool fastrpcgen.
 */

#ifndef _Latency_PROXY_H_
#define _Latency_PROXY_H_

#include "fastrpc/client/Proxy.h"
#include "Latency.h"


namespace eprosima
{
    namespace rpc
    {
        namespace protocol
        {
            class LatencyProtocol;
        }
    }
}



/*!
 * @brief This class implements a specific server's proxy for the defined interface Latency.
 * @ingroup LATENCY
 */
class FASTRPCUSERDllExport LatencyProxy : public eprosima::rpc::proxy::Proxy, public Latency
{
    public:
   
        /*!
         * @brief This constructor sets the transport that will be used by the server's proxy.
         *
         * @param transport The network transport that server's proxy has to use.
         *        This transport's object is not deleted by this class in its destructor. Cannot be NULL.
         * @param protocol The protocol used to send the information over the transport.
         *        This protocol's object is not deleted by this class in its destructor. Cannot be NULL.
         * @exception eprosima::rpc::exception::InitializeException This exception is thrown when the initialization was wrong.
         */
        LatencyProxy(eprosima::rpc::transport::ProxyTransport &transport,
            eprosima::rpc::protocol::LatencyProtocol &protocol);

        //! @brief Destructor.
        virtual ~LatencyProxy();

                //! @brief Proxy method for the operation latency.
                st latency(/*in*/ const st& param);

                
        
};


#endif // _Latency_PROXY_H_