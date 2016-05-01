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

// Newtonsoft.Json.Schema.JsonSchemaWriter
struct JsonSchemaWriter_t424268942;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t1524499937;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>
struct IDictionary_2_t2746041510;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem1524499937.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem4227645115.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem2257008021.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::.ctor(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Schema.JsonSchemaResolver)
extern "C"  void JsonSchemaWriter__ctor_m3948718252 (JsonSchemaWriter_t424268942 * __this, JsonWriter_t1972966974 * ___writer, JsonSchemaResolver_t1524499937 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::ReferenceOrWriteSchema(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaWriter_ReferenceOrWriteSchema_m1671254770 (JsonSchemaWriter_t424268942 * __this, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WriteSchema(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaWriter_WriteSchema_m1999116124 (JsonSchemaWriter_t424268942 * __this, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WriteSchemaDictionaryIfNotNull(Newtonsoft.Json.JsonWriter,System.String,System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>)
extern "C"  void JsonSchemaWriter_WriteSchemaDictionaryIfNotNull_m2142863641 (JsonSchemaWriter_t424268942 * __this, JsonWriter_t1972966974 * ___writer, String_t* ___propertyName, Il2CppObject* ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WriteItems(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonSchemaWriter_WriteItems_m3091439203 (JsonSchemaWriter_t424268942 * __this, JsonSchema_t4227645115 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WriteType(System.String,Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  void JsonSchemaWriter_WriteType_m488222291 (JsonSchemaWriter_t424268942 * __this, String_t* ___propertyName, JsonWriter_t1972966974 * ___writer, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.JsonSchemaWriter::WritePropertyIfNotNull(Newtonsoft.Json.JsonWriter,System.String,System.Object)
extern "C"  void JsonSchemaWriter_WritePropertyIfNotNull_m1827451376 (JsonSchemaWriter_t424268942 * __this, JsonWriter_t1972966974 * ___writer, String_t* ___propertyName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Schema.JsonSchemaWriter::<WriteType>m__1A(Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  bool JsonSchemaWriter_U3CWriteTypeU3Em__1A_m2223945794 (Il2CppObject * __this /* static, unused */, int32_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
