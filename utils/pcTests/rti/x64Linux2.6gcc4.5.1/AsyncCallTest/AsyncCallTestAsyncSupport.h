#ifndef _AsyncCallTest_ASYNC_SUPPORT_H_
#define _AsyncCallTest_ASYNC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/AsyncTask.h"


/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getLong from the server in an asynchronous call.
 */
class AsyncCallTest_getLongTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        AsyncCallTest_getLongTask(AsyncCallTest_getLongCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~AsyncCallTest_getLongTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        AsyncCallTest_getLongCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           AsyncCallTest_getLongCallbackHandler &m_obj;
           
           AsyncCallTest_getLongReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getBoolean from the server in an asynchronous call.
 */
class AsyncCallTest_getBooleanTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        AsyncCallTest_getBooleanTask(AsyncCallTest_getBooleanCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~AsyncCallTest_getBooleanTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        AsyncCallTest_getBooleanCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           AsyncCallTest_getBooleanCallbackHandler &m_obj;
           
           AsyncCallTest_getBooleanReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getString from the server in an asynchronous call.
 */
class AsyncCallTest_getStringTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        AsyncCallTest_getStringTask(AsyncCallTest_getStringCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~AsyncCallTest_getStringTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        AsyncCallTest_getStringCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           AsyncCallTest_getStringCallbackHandler &m_obj;
           
           AsyncCallTest_getStringReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure duplicate from the server in an asynchronous call.
 */
class AsyncCallTest_duplicateTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        AsyncCallTest_duplicateTask(AsyncCallTest_duplicateCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~AsyncCallTest_duplicateTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        AsyncCallTest_duplicateCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           AsyncCallTest_duplicateCallbackHandler &m_obj;
           
           AsyncCallTest_duplicateReply m_reply;
};

#endif // _AsyncCallTest_ASYNC_SUPPORT_H_