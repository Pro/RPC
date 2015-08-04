/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file OnewayCallTestServerImplExample.cxx
 * This source file contains the definition of the skeleton for all interfaces.
 *
 * This file was generated by the tool fastrpcgen.
 */

#include "OnewayCallTestServerImplExample.h"
#include <fastrpc/utils/Utilities.h>

static int32_t l = 0;
static bool setLong_call = false;
static bool b = false;
static bool setBoolean_call = false;
static std::string s;
static bool setString_call = false;
static Structure st;
static bool setStruct_call = false;
 
void OnewayCallTestServerImplExample::setLong(/*in*/ int32_t lo1) 
{
	l = lo1;
    setLong_call = true;
} 
 
int32_t OnewayCallTestServerImplExample::getLong() 
{
    while(!setLong_call)
        eprosima::rpc::sleep(100);
    return l;
} 
 
void OnewayCallTestServerImplExample::setBoolean(/*in*/ bool bo1) 
{
    b = bo1;
    setBoolean_call = true;
} 
 
bool OnewayCallTestServerImplExample::getBoolean() 
{
    while(!setBoolean_call)
        eprosima::rpc::sleep(100);
    return b;
} 
 
void OnewayCallTestServerImplExample::setString(/*in*/ const std::string& s1) 
{
    s = s1;
    setString_call = true;
} 
 
std::string OnewayCallTestServerImplExample::getString() 
{
    while(!setString_call)
        eprosima::rpc::sleep(100);
    return s;
} 
 
void OnewayCallTestServerImplExample::setStruct(/*in*/ const Structure& ev) 
{
    st = ev;
    setStruct_call = true;
} 
 
Structure OnewayCallTestServerImplExample::getStruct() 
{
    while(!setStruct_call)
        eprosima::rpc::sleep(100);
    return st;
} 
