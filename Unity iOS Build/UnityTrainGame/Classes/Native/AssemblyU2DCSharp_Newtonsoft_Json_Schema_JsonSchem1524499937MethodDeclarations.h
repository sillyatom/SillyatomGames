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

// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t1524499937;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>
struct IList_1_t2099170133;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaResolver::.ctor()
extern "C"  void JsonSchemaResolver__ctor_m4119934948 (JsonSchemaResolver_t1524499937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchemaResolver::get_LoadedSchemas()
extern "C"  Il2CppObject* JsonSchemaResolver_get_LoadedSchemas_m3892697129 (JsonSchemaResolver_t1524499937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaResolver::set_LoadedSchemas(System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchemaResolver_set_LoadedSchemas_m61670256 (JsonSchemaResolver_t1524499937 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaResolver::GetSchema(System.String)
extern "C"  JsonSchema_t4227645115 * JsonSchemaResolver_GetSchema_m3258389463 (JsonSchemaResolver_t1524499937 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
