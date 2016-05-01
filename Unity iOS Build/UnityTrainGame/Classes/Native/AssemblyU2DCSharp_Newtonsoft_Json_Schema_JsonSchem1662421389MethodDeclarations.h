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

// Newtonsoft.Json.Schema.JsonSchemaModelBuilder
struct JsonSchemaModelBuilder_t1662421389;
// Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t3130009042;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// Newtonsoft.Json.Schema.JsonSchemaNode
struct JsonSchemaNode_t2256819293;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>
struct IDictionary_2_t2746041510;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>
struct IDictionary_2_t775215688;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem4227645115.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem2256819293.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::.ctor()
extern "C"  void JsonSchemaModelBuilder__ctor_m797138360 (JsonSchemaModelBuilder_t1662421389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaModel Newtonsoft.Json.Schema.JsonSchemaModelBuilder::Build(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  JsonSchemaModel_t3130009042 * JsonSchemaModelBuilder_Build_m160806552 (JsonSchemaModelBuilder_t1662421389 * __this, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaNode Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddSchema(Newtonsoft.Json.Schema.JsonSchemaNode,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  JsonSchemaNode_t2256819293 * JsonSchemaModelBuilder_AddSchema_m1464289778 (JsonSchemaModelBuilder_t1662421389 * __this, JsonSchemaNode_t2256819293 * ___existingNode, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddProperties(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>,System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>)
extern "C"  void JsonSchemaModelBuilder_AddProperties_m3507987280 (JsonSchemaModelBuilder_t1662421389 * __this, Il2CppObject* ___source, Il2CppObject* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddProperty(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>,System.String,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaModelBuilder_AddProperty_m3887368252 (JsonSchemaModelBuilder_t1662421389 * __this, Il2CppObject* ___target, String_t* ___propertyName, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddItem(Newtonsoft.Json.Schema.JsonSchemaNode,System.Int32,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaModelBuilder_AddItem_m3196034109 (JsonSchemaModelBuilder_t1662421389 * __this, JsonSchemaNode_t2256819293 * ___parentNode, int32_t ___index, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaModelBuilder::AddAdditionalProperties(Newtonsoft.Json.Schema.JsonSchemaNode,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaModelBuilder_AddAdditionalProperties_m907721673 (JsonSchemaModelBuilder_t1662421389 * __this, JsonSchemaNode_t2256819293 * ___parentNode, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaModel Newtonsoft.Json.Schema.JsonSchemaModelBuilder::BuildNodeModel(Newtonsoft.Json.Schema.JsonSchemaNode)
extern "C"  JsonSchemaModel_t3130009042 * JsonSchemaModelBuilder_BuildNodeModel_m405771615 (JsonSchemaModelBuilder_t1662421389 * __this, JsonSchemaNode_t2256819293 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
