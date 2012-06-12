/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "StructTestProxy.h"
#include "client/ClientRemoteService.h"
#include "StructTestRequestReplyPlugin.h"


StructTestProxy::StructTestProxy(int domainId, unsigned int timeout) : DDSCSClient(domainId)
{
    m_timeout = timeout;

        this->duplicate_Service = new duplicateClientRemoteService("duplicate",
                                  duplicateRequestUtils::registerType(getParticipant()),
    "StructTest_Library",
    "StructTest_Profile",
                                  duplicateReplyUtils::registerType(getParticipant()),
    "StructTest_Library",
    "StructTest_Profile",
                                  getParticipant());

        this->suma_Service = new sumaClientRemoteService("suma",
                                  sumaRequestUtils::registerType(getParticipant()),
    "StructTest_Library",
    "StructTest_Profile",
                                  sumaReplyUtils::registerType(getParticipant()),
    "StructTest_Library",
    "StructTest_Profile",
                                  getParticipant());

}

StructTestProxy::~StructTestProxy()
{
    delete duplicate_Service;
    delete suma_Service;
}

unsigned int StructTestProxy::getTimeout()
{
  return m_timeout;
}
 
 void StructTestProxy::setTimeout(unsigned int millis)
 {
    m_timeout = millis;
 }

 
DDSCSMessages
 StructTestProxy::duplicate(Envio & ev ,Recepcion  &duplicate_ret) 
{
    DDSCSMessages  returnedValue ;    
    duplicateRequest *instance = NULL;
    duplicateReply *retInstance = duplicateReplyTypeSupport::create_data();
    instance = duplicateRequestUtils::createTypeData(ev    );
    returnedValue = duplicate_Service->execute(instance, retInstance, m_timeout);
    switch (returnedValue)
    {
        case CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case RECEIVED_OTHER_REQUEST:
            printf("Y ESTE PAQUETE?\n");
            break;
        case SERVER_TIMEOUT:
            printf("TIMEOUT\n");
            break;
        case SERVER_ERROR:
            printf("SERVER ERROR\n");
            break;
        case WITHOUT_RESOURCES:
            printf("SERVER WITHOUT RESOURCES\n");
            break;
        case OPERATION_SUCCESSFUL:
            duplicateReplyUtils::extractTypeData(retInstance, duplicate_ret    );
            //duplicateReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    duplicateReplyTypeSupport::delete_data(retInstance);
    duplicateRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
DDSCSMessages
 StructTestProxy::suma(Envio & ev1, Envio & ev2 ,Recepcion  &suma_ret) 
{
    DDSCSMessages  returnedValue ;    
    sumaRequest *instance = NULL;
    sumaReply *retInstance = sumaReplyTypeSupport::create_data();
    instance = sumaRequestUtils::createTypeData(ev1    , ev2    );
    returnedValue = suma_Service->execute(instance, retInstance, m_timeout);
    switch (returnedValue)
    {
        case CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case RECEIVED_OTHER_REQUEST:
            printf("Y ESTE PAQUETE?\n");
            break;
        case SERVER_TIMEOUT:
            printf("TIMEOUT\n");
            break;
        case SERVER_ERROR:
            printf("SERVER ERROR\n");
            break;
        case WITHOUT_RESOURCES:
            printf("SERVER WITHOUT RESOURCES\n");
            break;
        case OPERATION_SUCCESSFUL:
            sumaReplyUtils::extractTypeData(retInstance, suma_ret    );
            //sumaReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    sumaReplyTypeSupport::delete_data(retInstance);
    sumaRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
