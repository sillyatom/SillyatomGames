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

// Newtonsoft.Json.Linq.JTokenWriter
struct JTokenWriter_t1418523161;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t103968846;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Linq.JValue
struct JValue_t2369032254;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JContainer103968846.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonToken326031476.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JValue2369032254.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_DateTimeOffset3712260035.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Guid2778838590.h"
#include "System_System_Uri2776692961.h"

// System.Void Newtonsoft.Json.Linq.JTokenWriter::.ctor(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JTokenWriter__ctor_m1907918130 (JTokenWriter_t1418523161 * __this, JContainer_t103968846 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::.ctor()
extern "C"  void JTokenWriter__ctor_m4075727984 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenWriter::get_Token()
extern "C"  JToken_t2367600838 * JTokenWriter_get_Token_m2502113641 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::Flush()
extern "C"  void JTokenWriter_Flush_m4159675282 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::Close()
extern "C"  void JTokenWriter_Close_m1491620230 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteStartObject()
extern "C"  void JTokenWriter_WriteStartObject_m3471040182 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::AddParent(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JTokenWriter_AddParent_m4063243145 (JTokenWriter_t1418523161 * __this, JContainer_t103968846 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::RemoveParent()
extern "C"  void JTokenWriter_RemoveParent_m2023771810 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteStartArray()
extern "C"  void JTokenWriter_WriteStartArray_m3392478244 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteStartConstructor(System.String)
extern "C"  void JTokenWriter_WriteStartConstructor_m954704157 (JTokenWriter_t1418523161 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JTokenWriter_WriteEnd_m4106799846 (JTokenWriter_t1418523161 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WritePropertyName(System.String)
extern "C"  void JTokenWriter_WritePropertyName_m4061348437 (JTokenWriter_t1418523161 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::AddValue(System.Object,Newtonsoft.Json.JsonToken)
extern "C"  void JTokenWriter_AddValue_m2425355104 (JTokenWriter_t1418523161 * __this, Il2CppObject * ___value, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::AddValue(Newtonsoft.Json.Linq.JValue,Newtonsoft.Json.JsonToken)
extern "C"  void JTokenWriter_AddValue_m3994850558 (JTokenWriter_t1418523161 * __this, JValue_t2369032254 * ___value, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteNull()
extern "C"  void JTokenWriter_WriteNull_m2966365076 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteUndefined()
extern "C"  void JTokenWriter_WriteUndefined_m1558516485 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteRaw(System.String)
extern "C"  void JTokenWriter_WriteRaw_m3711189829 (JTokenWriter_t1418523161 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteComment(System.String)
extern "C"  void JTokenWriter_WriteComment_m2284368430 (JTokenWriter_t1418523161 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.String)
extern "C"  void JTokenWriter_WriteValue_m4151610332 (JTokenWriter_t1418523161 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Int32)
extern "C"  void JTokenWriter_WriteValue_m257738039 (JTokenWriter_t1418523161 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.UInt32)
extern "C"  void JTokenWriter_WriteValue_m397172180 (JTokenWriter_t1418523161 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Int64)
extern "C"  void JTokenWriter_WriteValue_m257740984 (JTokenWriter_t1418523161 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.UInt64)
extern "C"  void JTokenWriter_WriteValue_m397175125 (JTokenWriter_t1418523161 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Single)
extern "C"  void JTokenWriter_WriteValue_m3832934021 (JTokenWriter_t1418523161 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Double)
extern "C"  void JTokenWriter_WriteValue_m3583371292 (JTokenWriter_t1418523161 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Boolean)
extern "C"  void JTokenWriter_WriteValue_m61957085 (JTokenWriter_t1418523161 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Int16)
extern "C"  void JTokenWriter_WriteValue_m257736241 (JTokenWriter_t1418523161 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.UInt16)
extern "C"  void JTokenWriter_WriteValue_m397170382 (JTokenWriter_t1418523161 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Char)
extern "C"  void JTokenWriter_WriteValue_m1110956599 (JTokenWriter_t1418523161 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Byte)
extern "C"  void JTokenWriter_WriteValue_m1110557381 (JTokenWriter_t1418523161 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.SByte)
extern "C"  void JTokenWriter_WriteValue_m503607626 (JTokenWriter_t1418523161 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Decimal)
extern "C"  void JTokenWriter_WriteValue_m2916393428 (JTokenWriter_t1418523161 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.DateTime)
extern "C"  void JTokenWriter_WriteValue_m3897873554 (JTokenWriter_t1418523161 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.DateTimeOffset)
extern "C"  void JTokenWriter_WriteValue_m3150047103 (JTokenWriter_t1418523161 * __this, DateTimeOffset_t3712260035  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Byte[])
extern "C"  void JTokenWriter_WriteValue_m2093804707 (JTokenWriter_t1418523161 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.TimeSpan)
extern "C"  void JTokenWriter_WriteValue_m4182669302 (JTokenWriter_t1418523161 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Guid)
extern "C"  void JTokenWriter_WriteValue_m1115045220 (JTokenWriter_t1418523161 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Uri)
extern "C"  void JTokenWriter_WriteValue_m1837498649 (JTokenWriter_t1418523161 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
