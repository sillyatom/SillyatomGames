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

// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// Newtonsoft.Json.Schema.ValidationEventHandler
struct ValidationEventHandler_t3025778811;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem4227645115.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_Validatio3025778811.h"

// System.Boolean Newtonsoft.Json.Schema.SchemaExtensions::IsValid(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  bool SchemaExtensions_IsValid_m49735123 (Il2CppObject * __this /* static, unused */, JToken_t2367600838 * ___source, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.SchemaExtensions::Validate(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void SchemaExtensions_Validate_m2989695417 (Il2CppObject * __this /* static, unused */, JToken_t2367600838 * ___source, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.SchemaExtensions::Validate(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Schema.JsonSchema,Newtonsoft.Json.Schema.ValidationEventHandler)
extern "C"  void SchemaExtensions_Validate_m68313348 (Il2CppObject * __this /* static, unused */, JToken_t2367600838 * ___source, JsonSchema_t4227645115 * ___schema, ValidationEventHandler_t3025778811 * ___validationEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
