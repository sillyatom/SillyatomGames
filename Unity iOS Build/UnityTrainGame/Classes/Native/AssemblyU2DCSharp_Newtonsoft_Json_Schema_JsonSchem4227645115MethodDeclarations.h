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

// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>
struct IList_1_t2099170133;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>
struct IDictionary_2_t2746041510;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3134981216;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t239125856;
// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Linq.JToken,System.String>
struct IDictionary_2_t1958582449;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t1524499937;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen848078633.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Nullable_1_gen3420554522.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem4227645115.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem1524499937.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"

// System.Void Newtonsoft.Json.Schema.JsonSchema::.ctor()
extern "C"  void JsonSchema__ctor_m1501643850 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Id()
extern "C"  String_t* JsonSchema_get_Id_m2794450203 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Id(System.String)
extern "C"  void JsonSchema_set_Id_m3972899504 (JsonSchema_t4227645115 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Title()
extern "C"  String_t* JsonSchema_get_Title_m1502932794 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Title(System.String)
extern "C"  void JsonSchema_set_Title_m3213401215 (JsonSchema_t4227645115 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_Required()
extern "C"  Nullable_1_t3097043249  JsonSchema_get_Required_m3744802809 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Required(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_Required_m2062045266 (JsonSchema_t4227645115 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_ReadOnly()
extern "C"  Nullable_1_t3097043249  JsonSchema_get_ReadOnly_m2974124540 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_ReadOnly(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_ReadOnly_m189495983 (JsonSchema_t4227645115 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_Hidden()
extern "C"  Nullable_1_t3097043249  JsonSchema_get_Hidden_m2872980868 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Hidden(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_Hidden_m1301857511 (JsonSchema_t4227645115 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_Transient()
extern "C"  Nullable_1_t3097043249  JsonSchema_get_Transient_m2133667090 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Transient(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_Transient_m3786940595 (JsonSchema_t4227645115 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Description()
extern "C"  String_t* JsonSchema_get_Description_m4111256350 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Description(System.String)
extern "C"  void JsonSchema_set_Description_m2509979099 (JsonSchema_t4227645115 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.Schema.JsonSchema::get_Type()
extern "C"  Nullable_1_t848078633  JsonSchema_get_Type_m3718746478 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Type(System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType>)
extern "C"  void JsonSchema_set_Type_m1258866595 (JsonSchema_t4227645115 * __this, Nullable_1_t848078633  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Pattern()
extern "C"  String_t* JsonSchema_get_Pattern_m3317978674 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Pattern(System.String)
extern "C"  void JsonSchema_set_Pattern_m1416398535 (JsonSchema_t4227645115 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::get_MinimumLength()
extern "C"  Nullable_1_t1438485399  JsonSchema_get_MinimumLength_m3683397442 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_MinimumLength(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchema_set_MinimumLength_m1880298959 (JsonSchema_t4227645115 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::get_MaximumLength()
extern "C"  Nullable_1_t1438485399  JsonSchema_get_MaximumLength_m498869076 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_MaximumLength(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchema_set_MaximumLength_m944316285 (JsonSchema_t4227645115 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchema::get_DivisibleBy()
extern "C"  Nullable_1_t3420554522  JsonSchema_get_DivisibleBy_m790390279 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_DivisibleBy(System.Nullable`1<System.Double>)
extern "C"  void JsonSchema_set_DivisibleBy_m1311064662 (JsonSchema_t4227645115 * __this, Nullable_1_t3420554522  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchema::get_Minimum()
extern "C"  Nullable_1_t3420554522  JsonSchema_get_Minimum_m3627233041 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Minimum(System.Nullable`1<System.Double>)
extern "C"  void JsonSchema_set_Minimum_m2305402720 (JsonSchema_t4227645115 * __this, Nullable_1_t3420554522  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchema::get_Maximum()
extern "C"  Nullable_1_t3420554522  JsonSchema_get_Maximum_m2854754467 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Maximum(System.Nullable`1<System.Double>)
extern "C"  void JsonSchema_set_Maximum_m2860763378 (JsonSchema_t4227645115 * __this, Nullable_1_t3420554522  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_ExclusiveMinimum()
extern "C"  Nullable_1_t3097043249  JsonSchema_get_ExclusiveMinimum_m985659050 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_ExclusiveMinimum(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_ExclusiveMinimum_m471476417 (JsonSchema_t4227645115 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::get_ExclusiveMaximum()
extern "C"  Nullable_1_t3097043249  JsonSchema_get_ExclusiveMaximum_m213180476 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_ExclusiveMaximum(System.Nullable`1<System.Boolean>)
extern "C"  void JsonSchema_set_ExclusiveMaximum_m507787631 (JsonSchema_t4227645115 * __this, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::get_MinimumItems()
extern "C"  Nullable_1_t1438485399  JsonSchema_get_MinimumItems_m2172576902 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_MinimumItems(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchema_set_MinimumItems_m1847889317 (JsonSchema_t4227645115 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::get_MaximumItems()
extern "C"  Nullable_1_t1438485399  JsonSchema_get_MaximumItems_m1515660852 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_MaximumItems(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchema_set_MaximumItems_m1263506999 (JsonSchema_t4227645115 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchema::get_Items()
extern "C"  Il2CppObject* JsonSchema_get_Items_m724780898 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Items(System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchema_set_Items_m3402633687 (JsonSchema_t4227645115 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchema::get_Properties()
extern "C"  Il2CppObject* JsonSchema_get_Properties_m3158179670 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Properties(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchema_set_Properties_m3966693717 (JsonSchema_t4227645115 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::get_AdditionalProperties()
extern "C"  JsonSchema_t4227645115 * JsonSchema_get_AdditionalProperties_m1311570059 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_AdditionalProperties(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchema_set_AdditionalProperties_m1446736704 (JsonSchema_t4227645115 * __this, JsonSchema_t4227645115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchema::get_PatternProperties()
extern "C"  Il2CppObject* JsonSchema_get_PatternProperties_m2145683714 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_PatternProperties(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchema_set_PatternProperties_m732227409 (JsonSchema_t4227645115 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchema::get_AllowAdditionalProperties()
extern "C"  bool JsonSchema_get_AllowAdditionalProperties_m4076711318 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_AllowAdditionalProperties(System.Boolean)
extern "C"  void JsonSchema_set_AllowAdditionalProperties_m4271152101 (JsonSchema_t4227645115 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Requires()
extern "C"  String_t* JsonSchema_get_Requires_m813574062 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Requires(System.String)
extern "C"  void JsonSchema_set_Requires_m3541785661 (JsonSchema_t4227645115 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Newtonsoft.Json.Schema.JsonSchema::get_Identity()
extern "C"  Il2CppObject* JsonSchema_get_Identity_m131355951 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Identity(System.Collections.Generic.IList`1<System.String>)
extern "C"  void JsonSchema_set_Identity_m1091926044 (JsonSchema_t4227645115 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Schema.JsonSchema::get_Enum()
extern "C"  Il2CppObject* JsonSchema_get_Enum_m2923724698 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Enum(System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>)
extern "C"  void JsonSchema_set_Enum_m3577855377 (JsonSchema_t4227645115 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Linq.JToken,System.String> Newtonsoft.Json.Schema.JsonSchema::get_Options()
extern "C"  Il2CppObject* JsonSchema_get_Options_m137339140 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Options(System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Linq.JToken,System.String>)
extern "C"  void JsonSchema_set_Options_m865556861 (JsonSchema_t4227645115 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.Schema.JsonSchema::get_Disallow()
extern "C"  Nullable_1_t848078633  JsonSchema_get_Disallow_m111127535 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Disallow(System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType>)
extern "C"  void JsonSchema_set_Disallow_m1998303652 (JsonSchema_t4227645115 * __this, Nullable_1_t848078633  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Schema.JsonSchema::get_Default()
extern "C"  JToken_t2367600838 * JsonSchema_get_Default_m23838795 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Default(Newtonsoft.Json.Linq.JToken)
extern "C"  void JsonSchema_set_Default_m2743101470 (JsonSchema_t4227645115 * __this, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::get_Extends()
extern "C"  JsonSchema_t4227645115 * JsonSchema_get_Extends_m1949394954 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Extends(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchema_set_Extends_m2190394029 (JsonSchema_t4227645115 * __this, JsonSchema_t4227645115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_Format()
extern "C"  String_t* JsonSchema_get_Format_m1690409335 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::set_Format(System.String)
extern "C"  void JsonSchema_set_Format_m2148880212 (JsonSchema_t4227645115 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::get_InternalId()
extern "C"  String_t* JsonSchema_get_InternalId_m1696551544 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::Read(Newtonsoft.Json.JsonReader)
extern "C"  JsonSchema_t4227645115 * JsonSchema_Read_m2910164350 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::Read(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  JsonSchema_t4227645115 * JsonSchema_Read_m1575645155 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, JsonSchemaResolver_t1524499937 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::Parse(System.String)
extern "C"  JsonSchema_t4227645115 * JsonSchema_Parse_m2509859861 (Il2CppObject * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::Parse(System.String,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  JsonSchema_t4227645115 * JsonSchema_Parse_m1450908090 (Il2CppObject * __this /* static, unused */, String_t* ___json, JsonSchemaResolver_t1524499937 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::WriteTo(Newtonsoft.Json.JsonWriter)
extern "C"  void JsonSchema_WriteTo_m2915530194 (JsonSchema_t4227645115 * __this, JsonWriter_t1972966974 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchema::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  void JsonSchema_WriteTo_m3814500151 (JsonSchema_t4227645115 * __this, JsonWriter_t1972966974 * ___writer, JsonSchemaResolver_t1524499937 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchema::ToString()
extern "C"  String_t* JsonSchema_ToString_m616299875 (JsonSchema_t4227645115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
