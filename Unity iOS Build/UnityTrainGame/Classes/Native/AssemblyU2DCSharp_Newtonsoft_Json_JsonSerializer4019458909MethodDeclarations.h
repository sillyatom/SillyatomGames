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

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t1868533683;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t3571235425;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3161036435;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t3995341017;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1994304730;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t622975392;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Type
struct Type_t;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t2923694261;
// Newtonsoft.Json.Serialization.ErrorEventArgs
struct ErrorEventArgs_t1025956040;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3161036435.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_TypeNameHandling2373316525.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3852587989.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_PreserveReferenc1434533308.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_ReferenceLoopHan1728396567.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_MissingMemberHan1044222760.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_NullValueHandlin3188374962.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_DefaultValueHand3337232248.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_ObjectCreationHa2384618758.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_ConstructorHandl2670794114.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializerSet622975392.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Er1025956040.h"

// System.Void Newtonsoft.Json.JsonSerializer::.ctor()
extern "C"  void JsonSerializer__ctor_m1979999244 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::add_Error(System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>)
extern "C"  void JsonSerializer_add_Error_m3286323774 (JsonSerializer_t4019458909 * __this, EventHandler_1_t1868533683 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::remove_Error(System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>)
extern "C"  void JsonSerializer_remove_Error_m3825542125 (JsonSerializer_t4019458909 * __this, EventHandler_1_t1868533683 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::get_ReferenceResolver()
extern "C"  Il2CppObject * JsonSerializer_get_ReferenceResolver_m1342858000 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ReferenceResolver(Newtonsoft.Json.Serialization.IReferenceResolver)
extern "C"  void JsonSerializer_set_ReferenceResolver_m1494109667 (JsonSerializer_t4019458909 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializer::get_Binder()
extern "C"  SerializationBinder_t3161036435 * JsonSerializer_get_Binder_m291591969 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_Binder(System.Runtime.Serialization.SerializationBinder)
extern "C"  void JsonSerializer_set_Binder_m224184536 (JsonSerializer_t4019458909 * __this, SerializationBinder_t3161036435 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::get_TypeNameHandling()
extern "C"  int32_t JsonSerializer_get_TypeNameHandling_m1750029897 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_TypeNameHandling(Newtonsoft.Json.TypeNameHandling)
extern "C"  void JsonSerializer_set_TypeNameHandling_m500880000 (JsonSerializer_t4019458909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializer::get_TypeNameAssemblyFormat()
extern "C"  int32_t JsonSerializer_get_TypeNameAssemblyFormat_m366580461 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_TypeNameAssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void JsonSerializer_set_TypeNameAssemblyFormat_m1929259748 (JsonSerializer_t4019458909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::get_PreserveReferencesHandling()
extern "C"  int32_t JsonSerializer_get_PreserveReferencesHandling_m1144526569 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_PreserveReferencesHandling(Newtonsoft.Json.PreserveReferencesHandling)
extern "C"  void JsonSerializer_set_PreserveReferencesHandling_m2807126944 (JsonSerializer_t4019458909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::get_ReferenceLoopHandling()
extern "C"  int32_t JsonSerializer_get_ReferenceLoopHandling_m304536129 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ReferenceLoopHandling(Newtonsoft.Json.ReferenceLoopHandling)
extern "C"  void JsonSerializer_set_ReferenceLoopHandling_m817218482 (JsonSerializer_t4019458909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::get_MissingMemberHandling()
extern "C"  int32_t JsonSerializer_get_MissingMemberHandling_m1435823779 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_MissingMemberHandling(Newtonsoft.Json.MissingMemberHandling)
extern "C"  void JsonSerializer_set_MissingMemberHandling_m305666192 (JsonSerializer_t4019458909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::get_NullValueHandling()
extern "C"  int32_t JsonSerializer_get_NullValueHandling_m2095362487 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
extern "C"  void JsonSerializer_set_NullValueHandling_m3488917628 (JsonSerializer_t4019458909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::get_DefaultValueHandling()
extern "C"  int32_t JsonSerializer_get_DefaultValueHandling_m3037498793 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_DefaultValueHandling(Newtonsoft.Json.DefaultValueHandling)
extern "C"  void JsonSerializer_set_DefaultValueHandling_m1470150944 (JsonSerializer_t4019458909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::get_ObjectCreationHandling()
extern "C"  int32_t JsonSerializer_get_ObjectCreationHandling_m19089449 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ObjectCreationHandling(Newtonsoft.Json.ObjectCreationHandling)
extern "C"  void JsonSerializer_set_ObjectCreationHandling_m331601120 (JsonSerializer_t4019458909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::get_ConstructorHandling()
extern "C"  int32_t JsonSerializer_get_ConstructorHandling_m3488964503 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ConstructorHandling(Newtonsoft.Json.ConstructorHandling)
extern "C"  void JsonSerializer_set_ConstructorHandling_m2902206300 (JsonSerializer_t4019458909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::get_Converters()
extern "C"  JsonConverterCollection_t3995341017 * JsonSerializer_get_Converters_m945106790 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::get_ContractResolver()
extern "C"  Il2CppObject * JsonSerializer_get_ContractResolver_m1596101022 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
extern "C"  void JsonSerializer_set_ContractResolver_m1131817143 (JsonSerializer_t4019458909 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::get_Context()
extern "C"  StreamingContext_t986364934  JsonSerializer_get_Context_m3933367197 (JsonSerializer_t4019458909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::set_Context(System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonSerializer_set_Context_m805798806 (JsonSerializer_t4019458909 * __this, StreamingContext_t986364934  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.JsonSerializer::Create(Newtonsoft.Json.JsonSerializerSettings)
extern "C"  JsonSerializer_t4019458909 * JsonSerializer_Create_m1132421680 (Il2CppObject * __this /* static, unused */, JsonSerializerSettings_t622975392 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::Populate(System.IO.TextReader,System.Object)
extern "C"  void JsonSerializer_Populate_m435505527 (JsonSerializer_t4019458909 * __this, TextReader_t1534522647 * ___reader, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::Populate(Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializer_Populate_m2611706256 (JsonSerializer_t4019458909 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::PopulateInternal(Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializer_PopulateInternal_m1215794989 (JsonSerializer_t4019458909 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonSerializer::Deserialize(Newtonsoft.Json.JsonReader)
extern "C"  Il2CppObject * JsonSerializer_Deserialize_m1491331252 (JsonSerializer_t4019458909 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonSerializer::Deserialize(System.IO.TextReader,System.Type)
extern "C"  Il2CppObject * JsonSerializer_Deserialize_m1334748430 (JsonSerializer_t4019458909 * __this, TextReader_t1534522647 * ___reader, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonSerializer::Deserialize(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject * JsonSerializer_Deserialize_m4191685095 (JsonSerializer_t4019458909 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonSerializer::DeserializeInternal(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject * JsonSerializer_DeserializeInternal_m2352828612 (JsonSerializer_t4019458909 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(System.IO.TextWriter,System.Object)
extern "C"  void JsonSerializer_Serialize_m763129519 (JsonSerializer_t4019458909 * __this, TextWriter_t1689927879 * ___textWriter, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializer_Serialize_m659280072 (JsonSerializer_t4019458909 * __this, JsonWriter_t1972966974 * ___jsonWriter, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::SerializeInternal(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializer_SerializeInternal_m2888072805 (JsonSerializer_t4019458909 * __this, JsonWriter_t1972966974 * ___jsonWriter, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.JsonSerializer::GetMatchingConverter(System.Type)
extern "C"  JsonConverter_t757201947 * JsonSerializer_GetMatchingConverter_m127829860 (JsonSerializer_t4019458909 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.JsonSerializer::GetMatchingConverter(System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>,System.Type)
extern "C"  JsonConverter_t757201947 * JsonSerializer_GetMatchingConverter_m3608745602 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___converters, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializer::OnError(Newtonsoft.Json.Serialization.ErrorEventArgs)
extern "C"  void JsonSerializer_OnError_m2358242801 (JsonSerializer_t4019458909 * __this, ErrorEventArgs_t1025956040 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
