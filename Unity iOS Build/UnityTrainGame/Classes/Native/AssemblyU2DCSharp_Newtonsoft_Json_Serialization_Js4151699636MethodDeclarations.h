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

// Newtonsoft.Json.Serialization.JsonPropertyCollection
struct JsonPropertyCollection_t4151699636;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t1841444406;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js1841444406.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_StringComparison1653470895.h"

// System.Void Newtonsoft.Json.Serialization.JsonPropertyCollection::.ctor(System.Type)
extern "C"  void JsonPropertyCollection__ctor_m2906839884 (JsonPropertyCollection_t4151699636 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonPropertyCollection::GetKeyForItem(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  String_t* JsonPropertyCollection_GetKeyForItem_m1638406699 (JsonPropertyCollection_t4151699636 * __this, JsonProperty_t1841444406 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonPropertyCollection::AddProperty(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonPropertyCollection_AddProperty_m350438961 (JsonPropertyCollection_t4151699636 * __this, JsonProperty_t1841444406 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonPropertyCollection::GetClosestMatchProperty(System.String)
extern "C"  JsonProperty_t1841444406 * JsonPropertyCollection_GetClosestMatchProperty_m3585371245 (JsonPropertyCollection_t4151699636 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonPropertyCollection::GetProperty(System.String,System.StringComparison)
extern "C"  JsonProperty_t1841444406 * JsonPropertyCollection_GetProperty_m3848037100 (JsonPropertyCollection_t4151699636 * __this, String_t* ___propertyName, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
