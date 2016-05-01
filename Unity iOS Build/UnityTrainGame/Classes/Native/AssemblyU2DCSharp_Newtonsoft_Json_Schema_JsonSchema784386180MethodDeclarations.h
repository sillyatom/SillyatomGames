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

// Newtonsoft.Json.Schema.JsonSchemaBuilder
struct JsonSchemaBuilder_t784386180;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t1524499937;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem1524499937.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem4227645115.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen848078633.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem2257008021.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::.ctor(Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  void JsonSchemaBuilder__ctor_m3640194314 (JsonSchemaBuilder_t784386180 * __this, JsonSchemaResolver_t1524499937 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::Push(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaBuilder_Push_m1711915188 (JsonSchemaBuilder_t784386180 * __this, JsonSchema_t4227645115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::Pop()
extern "C"  JsonSchema_t4227645115 * JsonSchemaBuilder_Pop_m2021407486 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::get_CurrentSchema()
extern "C"  JsonSchema_t4227645115 * JsonSchemaBuilder_get_CurrentSchema_m268885758 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::Parse(Newtonsoft.Json.JsonReader)
extern "C"  JsonSchema_t4227645115 * JsonSchemaBuilder_Parse_m2498143744 (JsonSchemaBuilder_t784386180 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::BuildSchema()
extern "C"  JsonSchema_t4227645115 * JsonSchemaBuilder_BuildSchema_m3553843932 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessSchemaProperty(System.String)
extern "C"  void JsonSchemaBuilder_ProcessSchemaProperty_m1330449662 (JsonSchemaBuilder_t784386180 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessExtends()
extern "C"  void JsonSchemaBuilder_ProcessExtends_m2987724173 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessEnum()
extern "C"  void JsonSchemaBuilder_ProcessEnum_m337484911 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessOptions()
extern "C"  void JsonSchemaBuilder_ProcessOptions_m1151205970 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessDefault()
extern "C"  void JsonSchemaBuilder_ProcessDefault_m2098591029 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessIdentity()
extern "C"  void JsonSchemaBuilder_ProcessIdentity_m2630180460 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessAdditionalProperties()
extern "C"  void JsonSchemaBuilder_ProcessAdditionalProperties_m2157682664 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessPatternProperties()
extern "C"  void JsonSchemaBuilder_ProcessPatternProperties_m830815127 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessItems()
extern "C"  void JsonSchemaBuilder_ProcessItems_m1284215732 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessProperties()
extern "C"  void JsonSchemaBuilder_ProcessProperties_m1405999713 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.Schema.JsonSchemaBuilder::ProcessType()
extern "C"  Nullable_1_t848078633  JsonSchemaBuilder_ProcessType_m3913635737 (JsonSchemaBuilder_t784386180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchemaType Newtonsoft.Json.Schema.JsonSchemaBuilder::MapType(System.String)
extern "C"  int32_t JsonSchemaBuilder_MapType_m869536421 (Il2CppObject * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Schema.JsonSchemaBuilder::MapType(Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  String_t* JsonSchemaBuilder_MapType_m2251695781 (Il2CppObject * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
