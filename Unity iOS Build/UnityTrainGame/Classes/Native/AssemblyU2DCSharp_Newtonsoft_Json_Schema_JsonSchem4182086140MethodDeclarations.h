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

// Newtonsoft.Json.Schema.JsonSchemaGenerator
struct JsonSchemaGenerator_t4182086140;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1994304730;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema
struct TypeSchema_t554744219;
// System.Type
struct Type_t;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t1524499937;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t3651158994;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t3363619915;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_UndefinedS576293603.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchema554744219.h"
#include "mscorlib_System_Type2779229935.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem1524499937.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Required3381566050.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem2257008021.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_DefaultValueHand3337232248.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js3651158994.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js3363619915.h"
#include "mscorlib_System_Nullable_1_gen848078633.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::.ctor()
extern "C"  void JsonSchemaGenerator__ctor_m223066953 (JsonSchemaGenerator_t4182086140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.UndefinedSchemaIdHandling Newtonsoft.Json.Schema.JsonSchemaGenerator::get_UndefinedSchemaIdHandling()
extern "C"  int32_t JsonSchemaGenerator_get_UndefinedSchemaIdHandling_m2528940267 (JsonSchemaGenerator_t4182086140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::set_UndefinedSchemaIdHandling(Newtonsoft.Json.Schema.UndefinedSchemaIdHandling)
extern "C"  void JsonSchemaGenerator_set_UndefinedSchemaIdHandling_m4239230850 (JsonSchemaGenerator_t4182086140 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Schema.JsonSchemaGenerator::get_ContractResolver()
extern "C"  Il2CppObject * JsonSchemaGenerator_get_ContractResolver_m2629544257 (JsonSchemaGenerator_t4182086140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
extern "C"  void JsonSchemaGenerator_set_ContractResolver_m396477236 (JsonSchemaGenerator_t4182086140 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::get_CurrentSchema()
extern "C"  JsonSchema_t4227645115 * JsonSchemaGenerator_get_CurrentSchema_m3951968518 (JsonSchemaGenerator_t4182086140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::Push(Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema)
extern "C"  void JsonSchemaGenerator_Push_m2208542501 (JsonSchemaGenerator_t4182086140 * __this, TypeSchema_t554744219 * ___typeSchema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Pop()
extern "C"  TypeSchema_t554744219 * JsonSchemaGenerator_Pop_m404386493 (JsonSchemaGenerator_t4182086140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Generate(System.Type)
extern "C"  JsonSchema_t4227645115 * JsonSchemaGenerator_Generate_m2336631927 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Generate(System.Type,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  JsonSchema_t4227645115 * JsonSchemaGenerator_Generate_m1262763932 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, JsonSchemaResolver_t1524499937 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Generate(System.Type,System.Boolean)
extern "C"  JsonSchema_t4227645115 * JsonSchemaGenerator_Generate_m3089812006 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, bool ___rootSchemaNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::Generate(System.Type,Newtonsoft.Json.Schema.JsonSchemaResolver,System.Boolean)
extern "C"  JsonSchema_t4227645115 * JsonSchemaGenerator_Generate_m2851694689 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, JsonSchemaResolver_t1524499937 * ___resolver, bool ___rootSchemaNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaGenerator::GetTitle(System.Type)
extern "C"  String_t* JsonSchemaGenerator_GetTitle_m2279448985 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaGenerator::GetDescription(System.Type)
extern "C"  String_t* JsonSchemaGenerator_GetDescription_m1391924149 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaGenerator::GetTypeId(System.Type,System.Boolean)
extern "C"  String_t* JsonSchemaGenerator_GetTypeId_m2231528499 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, bool ___explicitOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::GenerateInternal(System.Type,Newtonsoft.Json.Required,System.Boolean)
extern "C"  JsonSchema_t4227645115 * JsonSchemaGenerator_GenerateInternal_m2491174181 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, int32_t ___valueRequired, bool ___required, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaType Newtonsoft.Json.Schema.JsonSchemaGenerator::AddNullType(Newtonsoft.Json.Schema.JsonSchemaType,Newtonsoft.Json.Required)
extern "C"  int32_t JsonSchemaGenerator_AddNullType_m3203789932 (JsonSchemaGenerator_t4182086140 * __this, int32_t ___type, int32_t ___valueRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaGenerator::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSchemaGenerator_HasFlag_m3628958477 (JsonSchemaGenerator_t4182086140 * __this, int32_t ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::GenerateObjectSchema(System.Type,Newtonsoft.Json.Serialization.JsonObjectContract)
extern "C"  void JsonSchemaGenerator_GenerateObjectSchema_m1181619249 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, JsonObjectContract_t3651158994 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaGenerator::GenerateISerializableContract(System.Type,Newtonsoft.Json.Serialization.JsonISerializableContract)
extern "C"  void JsonSchemaGenerator_GenerateISerializableContract_m3261479610 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, JsonISerializableContract_t3363619915 * ___contract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaGenerator::HasFlag(System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType>,Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  bool JsonSchemaGenerator_HasFlag_m218382716 (Il2CppObject * __this /* static, unused */, Nullable_1_t848078633  ___value, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaType Newtonsoft.Json.Schema.JsonSchemaGenerator::GetJsonSchemaType(System.Type,Newtonsoft.Json.Required)
extern "C"  int32_t JsonSchemaGenerator_GetJsonSchemaType_m3509475073 (JsonSchemaGenerator_t4182086140 * __this, Type_t * ___type, int32_t ___valueRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
