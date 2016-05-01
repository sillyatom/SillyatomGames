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

// Newtonsoft.Json.Schema.JsonSchemaNode
struct JsonSchemaNode_t2256819293;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// System.String
struct String_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Newtonsoft.Json.Schema.JsonSchema>
struct ReadOnlyCollection_1_t3095823167;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>
struct Dictionary_2_t3894517197;
// System.Collections.Generic.List`1<Newtonsoft.Json.Schema.JsonSchemaNode>
struct List_1_t3053778262;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchema>
struct IEnumerable_1_t2804832175;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem4227645115.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem2256819293.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::.ctor(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaNode__ctor_m1278434601 (JsonSchemaNode_t2256819293 * __this, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::.ctor(Newtonsoft.Json.Schema.JsonSchemaNode,Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaNode__ctor_m3910165202 (JsonSchemaNode_t2256819293 * __this, JsonSchemaNode_t2256819293 * ___source, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaNode::get_Id()
extern "C"  String_t* JsonSchemaNode_get_Id_m3812282813 (JsonSchemaNode_t2256819293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_Id(System.String)
extern "C"  void JsonSchemaNode_set_Id_m3118735054 (JsonSchemaNode_t2256819293 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchemaNode::get_Schemas()
extern "C"  ReadOnlyCollection_1_t3095823167 * JsonSchemaNode_get_Schemas_m2927624032 (JsonSchemaNode_t2256819293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_Schemas(System.Collections.ObjectModel.ReadOnlyCollection`1<Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchemaNode_set_Schemas_m817478255 (JsonSchemaNode_t2256819293 * __this, ReadOnlyCollection_1_t3095823167 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode> Newtonsoft.Json.Schema.JsonSchemaNode::get_Properties()
extern "C"  Dictionary_2_t3894517197 * JsonSchemaNode_get_Properties_m3675965143 (JsonSchemaNode_t2256819293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_Properties(System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>)
extern "C"  void JsonSchemaNode_set_Properties_m3530988656 (JsonSchemaNode_t2256819293 * __this, Dictionary_2_t3894517197 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode> Newtonsoft.Json.Schema.JsonSchemaNode::get_PatternProperties()
extern "C"  Dictionary_2_t3894517197 * JsonSchemaNode_get_PatternProperties_m2481028705 (JsonSchemaNode_t2256819293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_PatternProperties(System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>)
extern "C"  void JsonSchemaNode_set_PatternProperties_m3707332208 (JsonSchemaNode_t2256819293 * __this, Dictionary_2_t3894517197 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Newtonsoft.Json.Schema.JsonSchemaNode> Newtonsoft.Json.Schema.JsonSchemaNode::get_Items()
extern "C"  List_1_t3053778262 * JsonSchemaNode_get_Items_m1136502209 (JsonSchemaNode_t2256819293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_Items(System.Collections.Generic.List`1<Newtonsoft.Json.Schema.JsonSchemaNode>)
extern "C"  void JsonSchemaNode_set_Items_m469361424 (JsonSchemaNode_t2256819293 * __this, List_1_t3053778262 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaNode Newtonsoft.Json.Schema.JsonSchemaNode::get_AdditionalProperties()
extern "C"  JsonSchemaNode_t2256819293 * JsonSchemaNode_get_AdditionalProperties_m2752292559 (JsonSchemaNode_t2256819293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaNode::set_AdditionalProperties(Newtonsoft.Json.Schema.JsonSchemaNode)
extern "C"  void JsonSchemaNode_set_AdditionalProperties_m3153307772 (JsonSchemaNode_t2256819293 * __this, JsonSchemaNode_t2256819293 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaNode Newtonsoft.Json.Schema.JsonSchemaNode::Combine(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  JsonSchemaNode_t2256819293 * JsonSchemaNode_Combine_m293848348 (JsonSchemaNode_t2256819293 * __this, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaNode::GetId(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  String_t* JsonSchemaNode_GetId_m3957288242 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___schemata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaNode::<GetId>m__17(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  String_t* JsonSchemaNode_U3CGetIdU3Em__17_m2658397966 (Il2CppObject * __this /* static, unused */, JsonSchema_t4227645115 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaNode::<GetId>m__18(System.String)
extern "C"  String_t* JsonSchemaNode_U3CGetIdU3Em__18_m3159768926 (Il2CppObject * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
