/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this RPCDDS distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorAsyncCallbackHandlers.h
 * This header file contains the declaration of callback handlers used in asynchronous calls.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _Calculator_ASYNC_CALLBACK_HANDLERS_H_
#define _Calculator_ASYNC_CALLBACK_HANDLERS_H_

#include "rpcdds/exceptions/SystemException.h"
#include "rpcdds/exceptions/UserException.h"
#include "Calculator.h"

/*!
 * @brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class Calculator_additionCallbackHandler
{
    public:
        /*!
         * This function is called when is received the reply from the server.
         */
        virtual void addition(/*out*/ DDS_Long addition_ret) = 0;
        
        /*!
         * @brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * @param ex The exception that will be launched.
         */
        virtual void on_exception(const eprosima::rpcdds::exception::SystemException &ex) = 0;
};

/*!
 * @brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class Calculator_subtractionCallbackHandler
{
    public:
        /*!
         * This function is called when is received the reply from the server.
         */
        virtual void subtraction(/*out*/ DDS_Long subtraction_ret) = 0;
        
        /*!
         * @brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * @param ex The exception that will be launched.
         */
        virtual void on_exception(const eprosima::rpcdds::exception::SystemException &ex) = 0;
};



#endif // _Calculator_ASYNC_CALLBACK_HANDLERS_H_