
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FooInterface.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FooInterfacePlugin_511704831_h
#define FooInterfacePlugin_511704831_h

#include "FooInterface.h"




struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


namespace FooInterface{

#define FooInterface_Emptyvoid_LAST_MEMBER_ID 0

#define EmptyvoidPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EmptyvoidPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EmptyvoidPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EmptyvoidPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EmptyvoidPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EmptyvoidPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Emptyvoid*
EmptyvoidPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Emptyvoid*
EmptyvoidPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EmptyvoidPluginSupport_copy_data(
    Emptyvoid *out,
    const Emptyvoid *in);

NDDSUSERDllExport extern void 
EmptyvoidPluginSupport_destroy_data_ex(
    Emptyvoid *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EmptyvoidPluginSupport_destroy_data(
    Emptyvoid *sample);

NDDSUSERDllExport extern void 
EmptyvoidPluginSupport_print_data(
    const Emptyvoid *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
EmptyvoidPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Emptyvoid *out,
    const Emptyvoid *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EmptyvoidPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Emptyvoid *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyvoidPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Emptyvoid *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyvoidPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Emptyvoid **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EmptyvoidPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EmptyvoidPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EmptyvoidPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EmptyvoidPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Emptyvoid * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EmptyvoidPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EmptyvoidPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EmptyvoidPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Emptyvoid *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyvoidPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Emptyvoid * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyvoidPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Emptyvoid ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EmptyvoidPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Emptyvoid *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


} /* namespace FooInterface */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FooInterfacePlugin_511704831_h */
