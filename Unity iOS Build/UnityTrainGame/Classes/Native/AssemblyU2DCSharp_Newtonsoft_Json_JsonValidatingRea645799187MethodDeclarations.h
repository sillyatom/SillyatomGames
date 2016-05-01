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

// Newtonsoft.Json.JsonValidatingReader/SchemaScope
struct SchemaScope_t645799187;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IList_1_t1001534060;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1848703245;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t3130009042;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem3130009042.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24256238244.h"

// System.Void Newtonsoft.Json.JsonValidatingReader/SchemaScope::.ctor(Newtonsoft.Json.Linq.JTokenType,System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel>)
extern "C"  void SchemaScope__ctor_m3154225047 (SchemaScope_t645799187 * __this, int32_t ___tokenType, Il2CppObject* ___schemas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_CurrentPropertyName()
extern "C"  String_t* SchemaScope_get_CurrentPropertyName_m695327471 (SchemaScope_t645799187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader/SchemaScope::set_CurrentPropertyName(System.String)
extern "C"  void SchemaScope_set_CurrentPropertyName_m4230540996 (SchemaScope_t645799187 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_ArrayItemCount()
extern "C"  int32_t SchemaScope_get_ArrayItemCount_m2854769690 (SchemaScope_t645799187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader/SchemaScope::set_ArrayItemCount(System.Int32)
extern "C"  void SchemaScope_set_ArrayItemCount_m3581224529 (SchemaScope_t645799187 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_Schemas()
extern "C"  Il2CppObject* SchemaScope_get_Schemas_m2475447121 (SchemaScope_t645799187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_RequiredProperties()
extern "C"  Dictionary_2_t1848703245 * SchemaScope_get_RequiredProperties_m4015232698 (SchemaScope_t645799187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonValidatingReader/SchemaScope::get_TokenType()
extern "C"  int32_t SchemaScope_get_TokenType_m2766293275 (SchemaScope_t645799187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Newtonsoft.Json.JsonValidatingReader/SchemaScope::GetRequiredProperties(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  Il2CppObject* SchemaScope_GetRequiredProperties_m3604444294 (SchemaScope_t645799187 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonValidatingReader/SchemaScope::<SchemaScope>m__C(System.String)
extern "C"  String_t* SchemaScope_U3CSchemaScopeU3Em__C_m121885894 (Il2CppObject * __this /* static, unused */, String_t* ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader/SchemaScope::<SchemaScope>m__D(System.String)
extern "C"  bool SchemaScope_U3CSchemaScopeU3Em__D_m689126646 (Il2CppObject * __this /* static, unused */, String_t* ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader/SchemaScope::<GetRequiredProperties>m__E(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>)
extern "C"  bool SchemaScope_U3CGetRequiredPropertiesU3Em__E_m3817278223 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t4256238244  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonValidatingReader/SchemaScope::<GetRequiredProperties>m__F(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>)
extern "C"  String_t* SchemaScope_U3CGetRequiredPropertiesU3Em__F_m1424197725 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t4256238244  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
