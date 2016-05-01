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

// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t1794357283;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t2629456141;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;
// Newtonsoft.Json.Serialization.JsonPrimitiveContract
struct JsonPrimitiveContract_t1219024426;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t1841444406;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonStringContract
struct JsonStringContract_t2937851556;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t3651158994;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t2996753073;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t1632130460;
// System.Array
struct Il2CppArray;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Runtime.Serialization.ISerializable
struct ISerializable_t1415126241;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t3363619915;
// Newtonsoft.Json.Utilities.IWrappedDictionary
struct IWrappedDictionary_t890148009;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t128316969;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1219024426.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1841444406.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js2267638131.h"
#include "mscorlib_System_Nullable_1_gen319467179.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js2937851556.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js3651158994.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_DefaultValueHand3337232248.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_PreserveReferenc1434533308.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_TypeNameHandling2373316525.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonConverter757201947.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1632130460.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js3363619915.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Jso128316969.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalWriter__ctor_m1848814959 (JsonSerializerInternalWriter_t1794357283 * __this, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::get_SerializeStack()
extern "C"  List_1_t1634065389 * JsonSerializerInternalWriter_get_SerializeStack_m1412853750 (JsonSerializerInternalWriter_t1794357283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializerInternalWriter_Serialize_m2835988858 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___jsonWriter, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetInternalSerializer()
extern "C"  JsonSerializerProxy_t2629456141 * JsonSerializerInternalWriter_GetInternalSerializer_m3854597871 (JsonSerializerInternalWriter_t1794357283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetContractSafe(System.Object)
extern "C"  JsonContract_t2267638131 * JsonSerializerInternalWriter_GetContractSafe_m4065236339 (JsonSerializerInternalWriter_t1794357283 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializePrimitive(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonPrimitiveContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializePrimitive_m3054056572 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonPrimitiveContract_t1219024426 * ___contract, JsonProperty_t1841444406 * ___member, JsonContract_t2267638131 * ___collectionValueContract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeValue(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeValue_m4265338791 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonContract_t2267638131 * ___valueContract, JsonProperty_t1841444406 * ___member, JsonContract_t2267638131 * ___collectionValueContract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteReference(System.Object,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteReference_m2495927838 (JsonSerializerInternalWriter_t1794357283 * __this, Il2CppObject * ___value, JsonProperty_t1841444406 * ___property, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteMemberInfoProperty(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_WriteMemberInfoProperty_m1842446617 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___memberValue, JsonProperty_t1841444406 * ___property, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::CheckForCircularReference(System.Object,System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  bool JsonSerializerInternalWriter_CheckForCircularReference_m3431206558 (JsonSerializerInternalWriter_t1794357283 * __this, Il2CppObject * ___value, Nullable_1_t319467179  ___referenceLoopHandling, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteReference(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializerInternalWriter_WriteReference_m540678128 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::TryConvertToString(System.Object,System.Type,System.String&)
extern "C"  bool JsonSerializerInternalWriter_TryConvertToString_m4077103143 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___type, String_t** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeString(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonStringContract)
extern "C"  void JsonSerializerInternalWriter_SerializeString_m1686419901 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonStringContract_t2937851556 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeObject(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeObject_m919761476 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonObjectContract_t3651158994 * ___contract, JsonProperty_t1841444406 * ___member, JsonContract_t2267638131 * ___collectionValueContract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteTypeProperty(Newtonsoft.Json.JsonWriter,System.Type)
extern "C"  void JsonSerializerInternalWriter_WriteTypeProperty_m2339993005 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m2358115192 (JsonSerializerInternalWriter_t1794357283 * __this, int32_t ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.PreserveReferencesHandling,Newtonsoft.Json.PreserveReferencesHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m3934316280 (JsonSerializerInternalWriter_t1794357283 * __this, int32_t ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.TypeNameHandling,Newtonsoft.Json.TypeNameHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m180899544 (JsonSerializerInternalWriter_t1794357283 * __this, int32_t ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeConvertable(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter,System.Object,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeConvertable_m1388543327 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, JsonConverter_t757201947 * ___converter, Il2CppObject * ___value, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeList(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Utilities.IWrappedCollection,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeList_m3696374760 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___values, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___member, JsonContract_t2267638131 * ___collectionValueContract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeMultidimensionalArray(Newtonsoft.Json.JsonWriter,System.Array,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeMultidimensionalArray_m1782728244 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppArray * ___values, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___member, JsonContract_t2267638131 * ___collectionContract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeMultidimensionalArray(Newtonsoft.Json.JsonWriter,System.Array,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,System.Int32,System.Int32[])
extern "C"  void JsonSerializerInternalWriter_SerializeMultidimensionalArray_m2663095491 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppArray * ___values, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___member, int32_t ___initialDepth, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetReference(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  String_t* JsonSerializerInternalWriter_GetReference_m2491323324 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteStartArray(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  bool JsonSerializerInternalWriter_WriteStartArray_m964750875 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___values, JsonArrayContract_t1632130460 * ___contract, JsonProperty_t1841444406 * ___member, JsonContract_t2267638131 * ___containerContract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeISerializable(Newtonsoft.Json.JsonWriter,System.Runtime.Serialization.ISerializable,Newtonsoft.Json.Serialization.JsonISerializableContract)
extern "C"  void JsonSerializerInternalWriter_SerializeISerializable_m3673091936 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonISerializableContract_t3363619915 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteType(Newtonsoft.Json.TypeNameHandling,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteType_m2384757453 (JsonSerializerInternalWriter_t1794357283 * __this, int32_t ___typeNameHandlingFlag, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___member, JsonContract_t2267638131 * ___collectionValueContract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeDictionary(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Utilities.IWrappedDictionary,Newtonsoft.Json.Serialization.JsonDictionaryContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void JsonSerializerInternalWriter_SerializeDictionary_m3859124877 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___values, JsonDictionaryContract_t128316969 * ___contract, JsonProperty_t1841444406 * ___member, JsonContract_t2267638131 * ___collectionValueContract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetPropertyName(System.Collections.DictionaryEntry)
extern "C"  String_t* JsonSerializerInternalWriter_GetPropertyName_m2239834123 (JsonSerializerInternalWriter_t1794357283 * __this, DictionaryEntry_t130027246  ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HandleError(Newtonsoft.Json.JsonWriter,System.Int32)
extern "C"  void JsonSerializerInternalWriter_HandleError_m3631831435 (JsonSerializerInternalWriter_t1794357283 * __this, JsonWriter_t1972966974 * ___writer, int32_t ___initialDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldSerialize(Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalWriter_ShouldSerialize_m1285789587 (JsonSerializerInternalWriter_t1794357283 * __this, JsonProperty_t1841444406 * ___property, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::IsSpecified(Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalWriter_IsSpecified_m3458256652 (JsonSerializerInternalWriter_t1794357283 * __this, JsonProperty_t1841444406 * ___property, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
