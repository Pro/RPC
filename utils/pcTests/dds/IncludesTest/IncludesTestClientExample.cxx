/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file Client.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "IncludesTestProxy.h"
#include "IncludesTest.h"
#include "IncludesTestDDSProtocol.h"
#include "rpcdds/transports/dds/UDPProxyTransport.h"
#include "rpcdds/exceptions/Exceptions.h"

#include "SameDirectoryExceptions.h"
#include "util/UtilExceptions.h"

#include <iostream>

using namespace eprosima::rpcdds;
using namespace ::exception;
using namespace ::transport::dds;
using namespace ::protocol::dds;

int main(int argc, char **argv)
{
    IncludesTestProtocol *protocol = NULL;
    UDPProxyTransport *transport = NULL;
    IncludesTestNS::IncludesTestIfcProxy *proxy = NULL;
    
    // Creation of the proxy for interface "IncludesTestNS::IncludesTestIfc".
    try
    {
        protocol = new IncludesTestProtocol();
        transport = new UDPProxyTransport("IncludesTestService");
        proxy = new IncludesTestNS::IncludesTestIfcProxy(*transport, *protocol);
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }
    
    // Create and initialize parameters.
    SameDirectoryNS::SameDirectory sd;
    Level2NS::Level2 lvl;
    IncludesTestNS::IncludesTest incl;
    SameDirectoryNS::SameDirectory_initialize(&sd);
    Level2NS::Level2_initialize(&lvl);
    IncludesTestNS::IncludesTest_initialize(&incl);

    // Create and initialize return value.
    IncludesTestNS::IncludesTest set_ret;
    IncludesTestNS::IncludesTest_initialize(&set_ret);

    lvl.count = 3;
    sd.count = 100;

    // Call to remote procedure "set".
    try
    {
        set_ret = proxy->set(sd, lvl, incl);

        if(!incl.count == 3 ||
                !incl.level.count == 3 ||
                !incl.sd.count == 3 ||
                !incl.sd.level.count == 3 ||
                !lvl.count == 100 ||
                !set_ret.count == 100 ||
                !set_ret.level.count == 100 ||
                !set_ret.sd.count == 100 ||
                !set_ret.sd.level.count == 100)
        {
            std::cout << "TEST FAILED<set>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }
    
    SameDirectoryNS::SameDirectory_finalize(&sd);
    Level2NS::Level2_finalize(&lvl);
    IncludesTestNS::IncludesTest_finalize(&incl);

    IncludesTestNS::IncludesTest_finalize(&set_ret);

    UtilNS::Util get_ret;
    UtilNS::Util_initialize(&get_ret);

    try
    {
        get_ret = proxy->get();

        if(get_ret.count != 1010)
        {
            std::cout << "TEST FAILED<get>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }
    
    UtilNS::Util_finalize(&get_ret);

    HideNS::Hide h;
    HideNS::Hide_initialize(&h);

    HideNS::Hide ho;
    HideNS::Hide_initialize(&ho);

    h.count = 3043;

    try
    {
        proxy->hide(h, ho);

        if(ho.count != 3043)
        {
            std::cout << "TEST FAILED<hide>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(Exception &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }

    HideNS::Hide_finalize(&h);
    HideNS::Hide_finalize(&ho);

    ZetaNS::Zeta z, zeta_ret;
    ZetaNS::Zeta_initialize(&z);
    ZetaNS::Zeta_initialize(&zeta_ret);

    z.count = 1021;

    try
    {
        zeta_ret = proxy->zeta(z);

        if(zeta_ret.count != 1021)
        {
            std::cout << "TEST FAILED<zeta>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(Exception &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }
    
    delete proxy;
    delete transport;
    delete protocol;
   
    return 0;
}




