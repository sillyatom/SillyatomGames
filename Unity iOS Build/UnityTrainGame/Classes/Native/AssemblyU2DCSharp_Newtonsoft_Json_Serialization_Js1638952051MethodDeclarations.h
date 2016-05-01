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

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t1638952051;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t2267638131;
// System.Type
struct Type_t;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t2629456141;
// Newtonsoft.Json.Serialization.JsonFormatterConverter
struct JsonFormatterConverter_t3202368087;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t1841444406;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t1632130460;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t128316969;
// Newtonsoft.Json.Utilities.IWrappedDictionary
struct IWrappedDictionary_t890148009;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t2996753073;
// System.Collections.IList
struct IList_t1612618265;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t3363619915;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t3651158994;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Serialization.JsonProperty,System.Object>
struct IDictionary_2_t3448113839;
// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Dictionary_2_t4087681360;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js2267638131.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1841444406.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonConverter757201947.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_DefaultValueHand3337232248.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Jso128316969.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1632130460.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js3363619915.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js3651158994.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_133927179.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js2652339728.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalReader__ctor_m3803103007 (JsonSerializerInternalReader_t1638952051 * __this, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::Populate(Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializerInternalReader_Populate_m3134576366 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetContractSafe(System.Type)
extern "C"  JsonContract_t2267638131 * JsonSerializerInternalReader_GetContractSafe_m2847704936 (JsonSerializerInternalReader_t1638952051 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetContractSafe(System.Type,System.Object)
extern "C"  JsonContract_t2267638131 * JsonSerializerInternalReader_GetContractSafe_m1151188022 (JsonSerializerInternalReader_t1638952051 * __this, Type_t * ___type, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::Deserialize(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject * JsonSerializerInternalReader_Deserialize_m2498181577 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetInternalSerializer()
extern "C"  JsonSerializerProxy_t2629456141 * JsonSerializerInternalReader_GetInternalSerializer_m484459679 (JsonSerializerInternalReader_t1638952051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonFormatterConverter Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetFormatterConverter()
extern "C"  JsonFormatterConverter_t3202368087 * JsonSerializerInternalReader_GetFormatterConverter_m2127903372 (JsonSerializerInternalReader_t1638952051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateJToken(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  JToken_t2367600838 * JsonSerializerInternalReader_CreateJToken_m3172053069 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateJObject(Newtonsoft.Json.JsonReader)
extern "C"  JToken_t2367600838 * JsonSerializerInternalReader_CreateJObject_m3341452782 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateValueProperty(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.Boolean,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateValueProperty_m699751592 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonProperty_t1841444406 * ___property, Il2CppObject * ___target, bool ___gottenCurrentValue, Il2CppObject * ___currentValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateValueNonProperty(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateValueNonProperty_m3821777518 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateValueInternal(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateValueInternal_m4181586183 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___member, Il2CppObject * ___existingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetConverter(Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.JsonConverter)
extern "C"  JsonConverter_t757201947 * JsonSerializerInternalReader_GetConverter_m44426892 (JsonSerializerInternalReader_t1638952051 * __this, JsonContract_t2267638131 * ___contract, JsonConverter_t757201947 * ___memberConverter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateObject(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateObject_m4292628100 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___member, Il2CppObject * ___existingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonArrayContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EnsureArrayContract(System.Type,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  JsonArrayContract_t1632130460 * JsonSerializerInternalReader_EnsureArrayContract_m507392118 (JsonSerializerInternalReader_t1638952051 * __this, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CheckedRead(Newtonsoft.Json.JsonReader)
extern "C"  void JsonSerializerInternalReader_CheckedRead_m2978886089 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateList(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateList_m3376612831 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, JsonContract_t2267638131 * ___contract, JsonProperty_t1841444406 * ___member, Il2CppObject * ___existingValue, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HasDefinedType(System.Type)
extern "C"  bool JsonSerializerInternalReader_HasDefinedType_m1072819558 (JsonSerializerInternalReader_t1638952051 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EnsureType(System.Object,System.Globalization.CultureInfo,System.Type)
extern "C"  Il2CppObject * JsonSerializerInternalReader_EnsureType_m2085624120 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___value, CultureInfo_t3603717042 * ___culture, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader::FormatValueForPrint(System.Object)
extern "C"  String_t* JsonSerializerInternalReader_FormatValueForPrint_m2626955181 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetPropertyValue(Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializerInternalReader_SetPropertyValue_m2999701588 (JsonSerializerInternalReader_t1638952051 * __this, JsonProperty_t1841444406 * ___property, JsonReader_t1817561742 * ___reader, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSerializerInternalReader_HasFlag_m2754275272 (JsonSerializerInternalReader_t1638952051 * __this, int32_t ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ShouldSetPropertyValue(Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalReader_ShouldSetPropertyValue_m987587829 (JsonSerializerInternalReader_t1638952051 * __this, JsonProperty_t1841444406 * ___property, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateAndPopulateDictionary(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonDictionaryContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateAndPopulateDictionary_m4034315917 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonDictionaryContract_t128316969 * ___contract, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateDictionary(Newtonsoft.Json.Utilities.IWrappedDictionary,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonDictionaryContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateDictionary_m564122905 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___dictionary, JsonReader_t1817561742 * ___reader, JsonDictionaryContract_t128316969 * ___contract, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateAndPopulateList(Newtonsoft.Json.JsonReader,System.String,Newtonsoft.Json.Serialization.JsonArrayContract)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateAndPopulateList_m2200321362 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, String_t* ___reference, JsonArrayContract_t1632130460 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadForTypeArrayHack(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  bool JsonSerializerInternalReader_ReadForTypeArrayHack_m3853733130 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateList(Newtonsoft.Json.Utilities.IWrappedCollection,Newtonsoft.Json.JsonReader,System.String,Newtonsoft.Json.Serialization.JsonArrayContract)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateList_m3527589118 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___wrappedList, JsonReader_t1817561742 * ___reader, String_t* ___reference, JsonArrayContract_t1632130460 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateMultidimensionalArray(System.Collections.IList,Newtonsoft.Json.JsonReader,System.String,Newtonsoft.Json.Serialization.JsonArrayContract)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateMultidimensionalArray_m1969988895 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___list, JsonReader_t1817561742 * ___reader, String_t* ___reference, JsonArrayContract_t1632130460 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateISerializable(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonISerializableContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateISerializable_m1336685036 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonISerializableContract_t3363619915 * ___contract, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateAndPopulateObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateAndPopulateObject_m2799672315 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonObjectContract_t3651158994 * ___contract, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateObjectFromNonDefaultConstructor(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,System.Reflection.ConstructorInfo,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor_m1226450854 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonObjectContract_t3651158994 * ___contract, ConstructorInfo_t3542137334 * ___constructorInfo, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Serialization.JsonProperty,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ResolvePropertyAndConstructorValues(Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject* JsonSerializerInternalReader_ResolvePropertyAndConstructorValues_m329246478 (JsonSerializerInternalReader_t1638952051 * __this, JsonObjectContract_t3651158994 * ___contract, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadForType(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.JsonConverter)
extern "C"  bool JsonSerializerInternalReader_ReadForType_m4241498817 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___t, JsonConverter_t757201947 * ___propertyConverter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateObject(System.Object,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateObject_m152147056 (JsonSerializerInternalReader_t1638952051 * __this, Il2CppObject * ___newObject, JsonReader_t1817561742 * ___reader, JsonObjectContract_t3651158994 * ___contract, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetPropertyPresence(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonProperty,System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>)
extern "C"  void JsonSerializerInternalReader_SetPropertyPresence_m310205921 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, JsonProperty_t1841444406 * ___property, Dictionary_2_t4087681360 * ___requiredProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HandleError(Newtonsoft.Json.JsonReader,System.Int32)
extern "C"  void JsonSerializerInternalReader_HandleError_m4186217003 (JsonSerializerInternalReader_t1638952051 * __this, JsonReader_t1817561742 * ___reader, int32_t ___initialDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<CreateObjectFromNonDefaultConstructor>m__25(System.Reflection.ParameterInfo)
extern "C"  ParameterInfo_t2610273829 * JsonSerializerInternalReader_U3CCreateObjectFromNonDefaultConstructorU3Em__25_m1230731410 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<CreateObjectFromNonDefaultConstructor>m__26(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject * JsonSerializerInternalReader_U3CCreateObjectFromNonDefaultConstructorU3Em__26_m532490204 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<CreateObjectFromNonDefaultConstructor>m__27(System.Collections.Generic.KeyValuePair`2<System.Reflection.ParameterInfo,System.Object>)
extern "C"  String_t* JsonSerializerInternalReader_U3CCreateObjectFromNonDefaultConstructorU3Em__27_m1440543146 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t133927179  ___kv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<PopulateObject>m__28(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  JsonProperty_t1841444406 * JsonSerializerInternalReader_U3CPopulateObjectU3Em__28_m335707273 (Il2CppObject * __this /* static, unused */, JsonProperty_t1841444406 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<PopulateObject>m__29(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  int32_t JsonSerializerInternalReader_U3CPopulateObjectU3Em__29_m488875958 (Il2CppObject * __this /* static, unused */, JsonProperty_t1841444406 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
