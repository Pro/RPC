/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this RPCDDS distribution.
 *
 *************************************************************************
 * 
 * @file BankServerImplExample.h
 * This header file contains an example of the declaration of a servant.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _BankSERVER_IMPL_EXAMPLE_H_
#define _BankSERVER_IMPL_EXAMPLE_H_

#include "BankServerImpl.h"

/**
 * \brief This class is an example of a servant and it implements the remote procedures of the servant.
 */
class account_accountNumberResourceServerImplExample : public account_accountNumberResourceServerImpl
{
    public:

        //! @brief The default constructor.
        account_accountNumberResourceServerImplExample(){}

        //! @brief The default destructor.
        virtual ~account_accountNumberResourceServerImplExample(){}





        GetAccountDetailsResponse getAccountDetails(/*in*/ const account_accountNumber& account_accountNumber, /*in*/ const char* user, /*in*/ const GetAccountDetailsRequest& GetAccountDetailsRequest);
;
};


#endif // _BankSERVER_IMPL_EXAMPLE_H_