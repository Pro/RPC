#ifndef _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_
#define _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace DDSRPC
    {
		/**
		 * \brief This class is thrown as an exception when the server is not found.
		 */
        class DDSRPC_WIN32_DLL_API ServerNotFoundException : public SystemException
        {
		public:

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is copied.
			 */
			ServerNotFoundException(const std::string &message);

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is moved.
			 */
			ServerNotFoundException(std::string&& message);

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex ServerNotFoundException that will be copied.
			 */
			ServerNotFoundException(const ServerNotFoundException &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex ServerNotFoundException that will be moved.
			 */
			ServerNotFoundException(ServerNotFoundException&& ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ServerNotFoundException that will be copied.
			 */
			ServerNotFoundException& operator=(const ServerNotFoundException &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ServerNotFoundException that will be moved.
			 */
			ServerNotFoundException& operator=(ServerNotFoundException&& ex);

			/// \brief Default constructor
			virtual ~ServerNotFoundException() DDSRPC_USE_NOEXCEPT;

			/// \brief This function throws the object as exception.
			virtual void raise() const;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_
