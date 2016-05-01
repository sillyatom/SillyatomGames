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

// Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t3130009042;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3134981216;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IList_1_t1001534060;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>
struct IDictionary_2_t1648405437;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t239125856;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>
struct IList_1_t2099170133;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem2257008021.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Nullable_1_gen3420554522.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem3130009042.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem4227645115.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::.ctor()
extern "C"  void JsonSchemaModel__ctor_m2114281523 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaModel::get_Required()
extern "C"  bool JsonSchemaModel_get_Required_m989294285 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_Required(System.Boolean)
extern "C"  void JsonSchemaModel_set_Required_m55721284 (JsonSchemaModel_t3130009042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaType Newtonsoft.Json.Schema.JsonSchemaModel::get_Type()
extern "C"  int32_t JsonSchemaModel_get_Type_m1804192908 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_Type(Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  void JsonSchemaModel_set_Type_m3792259087 (JsonSchemaModel_t3130009042 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchemaModel::get_MinimumLength()
extern "C"  Nullable_1_t1438485399  JsonSchemaModel_get_MinimumLength_m3230624685 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_MinimumLength(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchemaModel_set_MinimumLength_m2035810886 (JsonSchemaModel_t3130009042 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchemaModel::get_MaximumLength()
extern "C"  Nullable_1_t1438485399  JsonSchemaModel_get_MaximumLength_m46096319 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_MaximumLength(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchemaModel_set_MaximumLength_m1099828212 (JsonSchemaModel_t3130009042 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchemaModel::get_DivisibleBy()
extern "C"  Nullable_1_t3420554522  JsonSchemaModel_get_DivisibleBy_m643764520 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_DivisibleBy(System.Nullable`1<System.Double>)
extern "C"  void JsonSchemaModel_set_DivisibleBy_m484797183 (JsonSchemaModel_t3130009042 * __this, Nullable_1_t3420554522  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchemaModel::get_Minimum()
extern "C"  Nullable_1_t3420554522  JsonSchemaModel_get_Minimum_m1392677554 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_Minimum(System.Nullable`1<System.Double>)
extern "C"  void JsonSchemaModel_set_Minimum_m920816777 (JsonSchemaModel_t3130009042 * __this, Nullable_1_t3420554522  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchemaModel::get_Maximum()
extern "C"  Nullable_1_t3420554522  JsonSchemaModel_get_Maximum_m620198980 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_Maximum(System.Nullable`1<System.Double>)
extern "C"  void JsonSchemaModel_set_Maximum_m1476177435 (JsonSchemaModel_t3130009042 * __this, Nullable_1_t3420554522  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaModel::get_ExclusiveMinimum()
extern "C"  bool JsonSchemaModel_get_ExclusiveMinimum_m864561534 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_ExclusiveMinimum(System.Boolean)
extern "C"  void JsonSchemaModel_set_ExclusiveMinimum_m736767541 (JsonSchemaModel_t3130009042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaModel::get_ExclusiveMaximum()
extern "C"  bool JsonSchemaModel_get_ExclusiveMaximum_m92082960 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_ExclusiveMaximum(System.Boolean)
extern "C"  void JsonSchemaModel_set_ExclusiveMaximum_m1974857799 (JsonSchemaModel_t3130009042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchemaModel::get_MinimumItems()
extern "C"  Nullable_1_t1438485399  JsonSchemaModel_get_MinimumItems_m4097633979 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_MinimumItems(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchemaModel_set_MinimumItems_m1021621838 (JsonSchemaModel_t3130009042 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchemaModel::get_MaximumItems()
extern "C"  Nullable_1_t1438485399  JsonSchemaModel_get_MaximumItems_m3440717929 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_MaximumItems(System.Nullable`1<System.Int32>)
extern "C"  void JsonSchemaModel_set_MaximumItems_m437239520 (JsonSchemaModel_t3130009042 * __this, Nullable_1_t1438485399  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Newtonsoft.Json.Schema.JsonSchemaModel::get_Patterns()
extern "C"  Il2CppObject* JsonSchemaModel_get_Patterns_m184204655 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_Patterns(System.Collections.Generic.IList`1<System.String>)
extern "C"  void JsonSchemaModel_set_Patterns_m4294917824 (JsonSchemaModel_t3130009042 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.Schema.JsonSchemaModel::get_Items()
extern "C"  Il2CppObject* JsonSchemaModel_get_Items_m2114428398 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_Items(System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel>)
extern "C"  void JsonSchemaModel_set_Items_m548187633 (JsonSchemaModel_t3130009042 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.Schema.JsonSchemaModel::get_Properties()
extern "C"  Il2CppObject* JsonSchemaModel_get_Properties_m4193427594 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_Properties(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>)
extern "C"  void JsonSchemaModel_set_Properties_m1473613057 (JsonSchemaModel_t3130009042 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.Schema.JsonSchemaModel::get_PatternProperties()
extern "C"  Il2CppObject* JsonSchemaModel_get_PatternProperties_m3869631822 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_PatternProperties(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>)
extern "C"  void JsonSchemaModel_set_PatternProperties_m1194414263 (JsonSchemaModel_t3130009042 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaModel Newtonsoft.Json.Schema.JsonSchemaModel::get_AdditionalProperties()
extern "C"  JsonSchemaModel_t3130009042 * JsonSchemaModel_get_AdditionalProperties_m1871956041 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_AdditionalProperties(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonSchemaModel_set_AdditionalProperties_m3524954560 (JsonSchemaModel_t3130009042 * __this, JsonSchemaModel_t3130009042 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaModel::get_AllowAdditionalProperties()
extern "C"  bool JsonSchemaModel_get_AllowAdditionalProperties_m2800413591 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_AllowAdditionalProperties(System.Boolean)
extern "C"  void JsonSchemaModel_set_AllowAdditionalProperties_m2886566158 (JsonSchemaModel_t3130009042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Schema.JsonSchemaModel::get_Enum()
extern "C"  Il2CppObject* JsonSchemaModel_get_Enum_m2122520485 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_Enum(System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>)
extern "C"  void JsonSchemaModel_set_Enum_m871152442 (JsonSchemaModel_t3130009042 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaType Newtonsoft.Json.Schema.JsonSchemaModel::get_Disallow()
extern "C"  int32_t JsonSchemaModel_get_Disallow_m345188365 (JsonSchemaModel_t3130009042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::set_Disallow(Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  void JsonSchemaModel_set_Disallow_m1729300270 (JsonSchemaModel_t3130009042 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaModel Newtonsoft.Json.Schema.JsonSchemaModel::Create(System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  JsonSchemaModel_t3130009042 * JsonSchemaModel_Create_m1261950656 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___schemata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModel::Combine(Newtonsoft.Json.Schema.JsonSchemaModel,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaModel_Combine_m2566030451 (Il2CppObject * __this /* static, unused */, JsonSchemaModel_t3130009042 * ___model, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
