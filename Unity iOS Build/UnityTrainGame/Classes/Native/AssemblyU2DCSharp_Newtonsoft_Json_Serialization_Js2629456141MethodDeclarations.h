#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t2629456141;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t1638952051;
// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t1794357283;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t1868533683;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t3571235425;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t3995341017;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1994304730;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3161036435;
// Newtonsoft.Json.Serialization.JsonSerializerInternalBase
struct JsonSerializerInternalBase_t1092275265;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1638952051.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1794357283.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_DefaultValueHand3337232248.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_MissingMemberHan1044222760.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_NullValueHandlin3188374962.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_ObjectCreationHa2384618758.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_ReferenceLoopHan1728396567.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_PreserveReferenc1434533308.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_TypeNameHandling2373316525.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3852587989.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_ConstructorHandl2670794114.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3161036435.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::.ctor(Newtonsoft.Json.Serialization.JsonSerializerInternalReader)
extern "C"  void JsonSerializerProxy__ctor_m3169172285 (JsonSerializerProxy_t2629456141 * __this, JsonSerializerInternalReader_t1638952051 * ___serializerReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::.ctor(Newtonsoft.Json.Serialization.JsonSerializerInternalWriter)
extern "C"  void JsonSerializerProxy__ctor_m3691767181 (JsonSerializerProxy_t2629456141 * __this, JsonSerializerInternalWriter_t1794357283 * ___serializerWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::add_Error(System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>)
extern "C"  void JsonSerializerProxy_add_Error_m2367046112 (JsonSerializerProxy_t2629456141 * __this, EventHandler_1_t1868533683 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::remove_Error(System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>)
extern "C"  void JsonSerializerProxy_remove_Error_m2336192779 (JsonSerializerProxy_t2629456141 * __this, EventHandler_1_t1868533683 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ReferenceResolver()
extern "C"  Il2CppObject * JsonSerializerProxy_get_ReferenceResolver_m1919141042 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ReferenceResolver(Newtonsoft.Json.Serialization.IReferenceResolver)
extern "C"  void JsonSerializerProxy_set_ReferenceResolver_m568119425 (JsonSerializerProxy_t2629456141 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.Serialization.JsonSerializerProxy::get_Converters()
extern "C"  JsonConverterCollection_t3995341017 * JsonSerializerProxy_get_Converters_m1538445604 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_DefaultValueHandling()
extern "C"  int32_t JsonSerializerProxy_get_DefaultValueHandling_m698533253 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_DefaultValueHandling(Newtonsoft.Json.DefaultValueHandling)
extern "C"  void JsonSerializerProxy_set_DefaultValueHandling_m1050488002 (JsonSerializerProxy_t2629456141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ContractResolver()
extern "C"  Il2CppObject * JsonSerializerProxy_get_ContractResolver_m2285065430 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
extern "C"  void JsonSerializerProxy_set_ContractResolver_m2896214741 (JsonSerializerProxy_t2629456141 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_MissingMemberHandling()
extern "C"  int32_t JsonSerializerProxy_get_MissingMemberHandling_m2039952935 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_MissingMemberHandling(Newtonsoft.Json.MissingMemberHandling)
extern "C"  void JsonSerializerProxy_set_MissingMemberHandling_m736504754 (JsonSerializerProxy_t2629456141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_NullValueHandling()
extern "C"  int32_t JsonSerializerProxy_get_NullValueHandling_m2454761959 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
extern "C"  void JsonSerializerProxy_set_NullValueHandling_m4222680478 (JsonSerializerProxy_t2629456141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ObjectCreationHandling()
extern "C"  int32_t JsonSerializerProxy_get_ObjectCreationHandling_m953222497 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ObjectCreationHandling(Newtonsoft.Json.ObjectCreationHandling)
extern "C"  void JsonSerializerProxy_set_ObjectCreationHandling_m2050598786 (JsonSerializerProxy_t2629456141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ReferenceLoopHandling()
extern "C"  int32_t JsonSerializerProxy_get_ReferenceLoopHandling_m2079421063 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ReferenceLoopHandling(Newtonsoft.Json.ReferenceLoopHandling)
extern "C"  void JsonSerializerProxy_set_ReferenceLoopHandling_m1248057044 (JsonSerializerProxy_t2629456141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_PreserveReferencesHandling()
extern "C"  int32_t JsonSerializerProxy_get_PreserveReferencesHandling_m716172237 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_PreserveReferencesHandling(Newtonsoft.Json.PreserveReferencesHandling)
extern "C"  void JsonSerializerProxy_set_PreserveReferencesHandling_m3206769730 (JsonSerializerProxy_t2629456141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_TypeNameHandling()
extern "C"  int32_t JsonSerializerProxy_get_TypeNameHandling_m404192751 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_TypeNameHandling(Newtonsoft.Json.TypeNameHandling)
extern "C"  void JsonSerializerProxy_set_TypeNameHandling_m1770915874 (JsonSerializerProxy_t2629456141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.Serialization.JsonSerializerProxy::get_TypeNameAssemblyFormat()
extern "C"  int32_t JsonSerializerProxy_get_TypeNameAssemblyFormat_m1754984955 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_TypeNameAssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void JsonSerializerProxy_set_TypeNameAssemblyFormat_m1345238918 (JsonSerializerProxy_t2629456141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ConstructorHandling()
extern "C"  int32_t JsonSerializerProxy_get_ConstructorHandling_m1957515815 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ConstructorHandling(Newtonsoft.Json.ConstructorHandling)
extern "C"  void JsonSerializerProxy_set_ConstructorHandling_m1248140158 (JsonSerializerProxy_t2629456141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.Serialization.JsonSerializerProxy::get_Binder()
extern "C"  SerializationBinder_t3161036435 * JsonSerializerProxy_get_Binder_m3810755095 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_Binder(System.Runtime.Serialization.SerializationBinder)
extern "C"  void JsonSerializerProxy_set_Binder_m2865085690 (JsonSerializerProxy_t2629456141 * __this, SerializationBinder_t3161036435 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.Serialization.JsonSerializerProxy::get_Context()
extern "C"  StreamingContext_t986364934  JsonSerializerProxy_get_Context_m677295297 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_Context(System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonSerializerProxy_set_Context_m1577261112 (JsonSerializerProxy_t2629456141 * __this, StreamingContext_t986364934  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerInternalBase Newtonsoft.Json.Serialization.JsonSerializerProxy::GetInternalSerializer()
extern "C"  JsonSerializerInternalBase_t1092275265 * JsonSerializerProxy_GetInternalSerializer_m1725235183 (JsonSerializerProxy_t2629456141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerProxy::DeserializeInternal(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject * JsonSerializerProxy_DeserializeInternal_m2481065516 (JsonSerializerProxy_t2629456141 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::PopulateInternal(Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializerProxy_PopulateInternal_m1987257295 (JsonSerializerProxy_t2629456141 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::SerializeInternal(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializerProxy_SerializeInternal_m1033600515 (JsonSerializerProxy_t2629456141 * __this, JsonWriter_t1972966974 * ___jsonWriter, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
