/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file MultithreadTestServerRPCSupport.cxx
 * This source file contains the definition of the server's RPC endpoints for interface MultithreadTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "server/Server.h"
#include "MultithreadTestServerRPCSupport.h"


/* Defines */
#define TName                   MultithreadTest_testServerRPC
#define TDataReplyTypeSupport   MultithreadTest_testReplyTypeSupport
#define TDataRequestTypeSupport MultithreadTest_testRequestTypeSupport
#define TData                   MultithreadTest_test
#define TDataReader             MultithreadTest_testRequestDataReader
#define TDataWriter             MultithreadTest_testReplyDataWriter


#include "utils/GenericServerRPC.gen"


#undef TName
#undef TDataReplyTypeSupport
#undef TDataRequestTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
