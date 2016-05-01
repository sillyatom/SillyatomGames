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

// Newtonsoft.Json.JsonValidatingReader
struct JsonValidatingReader_t1956143809;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.Schema.ValidationEventHandler
struct ValidationEventHandler_t3025778811;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonValidatingReader/SchemaScope
struct SchemaScope_t645799187;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IEnumerable_1_t1707196102;
// System.String
struct String_t;
// Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t3130009042;
// Newtonsoft.Json.Schema.JsonSchemaException
struct JsonSchemaException_t1081788280;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t4227645115;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_Validatio3025778811.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonToken326031476.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonValidatingRea645799187.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem3130009042.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem1081788280.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem4227645115.h"
#include "mscorlib_System_Nullable_1_gen848078633.h"
#include "mscorlib_System_Nullable_1_gen279627866.h"
#include "mscorlib_System_Nullable_1_gen2303330647.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem2257008021.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21337234543.h"

// System.Void Newtonsoft.Json.JsonValidatingReader::.ctor(Newtonsoft.Json.JsonReader)
extern "C"  void JsonValidatingReader__ctor_m3133094664 (JsonValidatingReader_t1956143809 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::add_ValidationEventHandler(Newtonsoft.Json.Schema.ValidationEventHandler)
extern "C"  void JsonValidatingReader_add_ValidationEventHandler_m3134176654 (JsonValidatingReader_t1956143809 * __this, ValidationEventHandler_t3025778811 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::remove_ValidationEventHandler(Newtonsoft.Json.Schema.ValidationEventHandler)
extern "C"  void JsonValidatingReader_remove_ValidationEventHandler_m3770901831 (JsonValidatingReader_t1956143809 * __this, ValidationEventHandler_t3025778811 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
extern "C"  bool JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m1480527678 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonValidatingReader::Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
extern "C"  int32_t JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m7608672 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonValidatingReader::Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
extern "C"  int32_t JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m496591296 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonValidatingReader::get_Value()
extern "C"  Il2CppObject * JsonValidatingReader_get_Value_m2093970105 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonValidatingReader::get_Depth()
extern "C"  int32_t JsonValidatingReader_get_Depth_m645643090 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonValidatingReader::get_QuoteChar()
extern "C"  uint16_t JsonValidatingReader_get_QuoteChar_m531972945 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::set_QuoteChar(System.Char)
extern "C"  void JsonValidatingReader_set_QuoteChar_m332762594 (JsonValidatingReader_t1956143809 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonValidatingReader::get_TokenType()
extern "C"  int32_t JsonValidatingReader_get_TokenType_m1199861817 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.JsonValidatingReader::get_ValueType()
extern "C"  Type_t * JsonValidatingReader_get_ValueType_m2398488142 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::Push(Newtonsoft.Json.JsonValidatingReader/SchemaScope)
extern "C"  void JsonValidatingReader_Push_m3536351423 (JsonValidatingReader_t1956143809 * __this, SchemaScope_t645799187 * ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonValidatingReader/SchemaScope Newtonsoft.Json.JsonValidatingReader::Pop()
extern "C"  SchemaScope_t645799187 * JsonValidatingReader_Pop_m649612049 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.JsonValidatingReader::get_CurrentSchemas()
extern "C"  Il2CppObject* JsonValidatingReader_get_CurrentSchemas_m1662983214 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.JsonValidatingReader::get_CurrentMemberSchemas()
extern "C"  Il2CppObject* JsonValidatingReader_get_CurrentMemberSchemas_m3943450228 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::RaiseError(System.String,Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_RaiseError_m3617494196 (JsonValidatingReader_t1956143809 * __this, String_t* ___message, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::OnValidationEvent(Newtonsoft.Json.Schema.JsonSchemaException)
extern "C"  void JsonValidatingReader_OnValidationEvent_m1415001530 (JsonValidatingReader_t1956143809 * __this, JsonSchemaException_t1081788280 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.JsonValidatingReader::get_Schema()
extern "C"  JsonSchema_t4227645115 * JsonValidatingReader_get_Schema_m4038150136 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::set_Schema(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonValidatingReader_set_Schema_m2153586327 (JsonValidatingReader_t1956143809 * __this, JsonSchema_t4227645115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReader Newtonsoft.Json.JsonValidatingReader::get_Reader()
extern "C"  JsonReader_t1817561742 * JsonValidatingReader_get_Reader_m847976709 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateInEnumAndNotDisallowed(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateInEnumAndNotDisallowed_m3963151750 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.JsonValidatingReader::GetCurrentNodeSchemaType()
extern "C"  Nullable_1_t848078633  JsonValidatingReader_GetCurrentNodeSchemaType_m2773036555 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonValidatingReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t58506160* JsonValidatingReader_ReadAsBytes_m4025087295 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonValidatingReader::ReadAsDecimal()
extern "C"  Nullable_1_t279627866  JsonValidatingReader_ReadAsDecimal_m3529955997 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.JsonValidatingReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t2303330647  JsonValidatingReader_ReadAsDateTimeOffset_m2591538419 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::Read()
extern "C"  bool JsonValidatingReader_Read_m3627587110 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateCurrentToken()
extern "C"  void JsonValidatingReader_ValidateCurrentToken_m3518454290 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateEndObject(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateEndObject_m431601122 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateEndArray(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateEndArray_m464260008 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateNull(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateNull_m2057165425 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateBoolean(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateBoolean_m2898729936 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateString(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateString_m795185851 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateInteger(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateInteger_m4109099750 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ProcessValue()
extern "C"  void JsonValidatingReader_ProcessValue_m4095948318 (JsonValidatingReader_t1956143809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateFloat(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateFloat_m4071196100 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::IsZero(System.Double)
extern "C"  bool JsonValidatingReader_IsZero_m3978272192 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidatePropertyName(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidatePropertyName_m532046058 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::IsPropertyDefinied(Newtonsoft.Json.Schema.JsonSchemaModel,System.String)
extern "C"  bool JsonValidatingReader_IsPropertyDefinied_m2691295617 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::ValidateArray(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  bool JsonValidatingReader_ValidateArray_m3825956237 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::ValidateObject(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  bool JsonValidatingReader_ValidateObject_m1564969117 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::TestType(Newtonsoft.Json.Schema.JsonSchemaModel,Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  bool JsonValidatingReader_TestType_m880634117 (JsonValidatingReader_t1956143809 * __this, JsonSchemaModel_t3130009042 * ___currentSchema, int32_t ___currentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::<ValidateEndObject>m__A(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern "C"  bool JsonValidatingReader_U3CValidateEndObjectU3Em__A_m700468268 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1337234543  ___kv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonValidatingReader::<ValidateEndObject>m__B(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern "C"  String_t* JsonValidatingReader_U3CValidateEndObjectU3Em__B_m1697812858 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1337234543  ___kv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
