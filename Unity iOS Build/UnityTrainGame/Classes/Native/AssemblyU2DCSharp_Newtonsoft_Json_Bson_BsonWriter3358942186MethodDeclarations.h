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

// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_t3358942186;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t1714632464;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_DateTimeKind3550648708.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonToken326031476.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonToken1714632464.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonType556079793.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_DateTimeOffset3712260035.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "System_System_Uri2776692961.h"

// System.Void Newtonsoft.Json.Bson.BsonWriter::.ctor(System.IO.Stream)
extern "C"  void BsonWriter__ctor_m363953750 (BsonWriter_t3358942186 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonWriter::get_DateTimeKindHandling()
extern "C"  int32_t BsonWriter_get_DateTimeKindHandling_m1669842237 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::set_DateTimeKindHandling(System.DateTimeKind)
extern "C"  void BsonWriter_set_DateTimeKindHandling_m2380469454 (BsonWriter_t3358942186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::Flush()
extern "C"  void BsonWriter_Flush_m3504309473 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void BsonWriter_WriteEnd_m2547562421 (BsonWriter_t3358942186 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteComment(System.String)
extern "C"  void BsonWriter_WriteComment_m2923290109 (BsonWriter_t3358942186 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartConstructor(System.String)
extern "C"  void BsonWriter_WriteStartConstructor_m4157951534 (BsonWriter_t3358942186 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRaw(System.String)
extern "C"  void BsonWriter_WriteRaw_m2006822548 (BsonWriter_t3358942186 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRawValue(System.String)
extern "C"  void BsonWriter_WriteRawValue_m3378293533 (BsonWriter_t3358942186 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartArray()
extern "C"  void BsonWriter_WriteStartArray_m2645094067 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartObject()
extern "C"  void BsonWriter_WriteStartObject_m1776967175 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WritePropertyName(System.String)
extern "C"  void BsonWriter_WritePropertyName_m314318822 (BsonWriter_t3358942186 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::Close()
extern "C"  void BsonWriter_Close_m836254421 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonWriter_AddParent_m2017448552 (BsonWriter_t3358942186 * __this, BsonToken_t1714632464 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
extern "C"  void BsonWriter_RemoveParent_m2233802355 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
extern "C"  void BsonWriter_AddValue_m1951859608 (BsonWriter_t3358942186 * __this, Il2CppObject * ___value, int8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonWriter_AddToken_m4001526365 (BsonWriter_t3358942186 * __this, BsonToken_t1714632464 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteNull()
extern "C"  void BsonWriter_WriteNull_m1375456611 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteUndefined()
extern "C"  void BsonWriter_WriteUndefined_m1534407318 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.String)
extern "C"  void BsonWriter_WriteValue_m2637193067 (BsonWriter_t3358942186 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int32)
extern "C"  void BsonWriter_WriteValue_m3256927176 (BsonWriter_t3358942186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt32)
extern "C"  void BsonWriter_WriteValue_m3177722211 (BsonWriter_t3358942186 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int64)
extern "C"  void BsonWriter_WriteValue_m3256930121 (BsonWriter_t3358942186 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt64)
extern "C"  void BsonWriter_WriteValue_m3177725156 (BsonWriter_t3358942186 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Single)
extern "C"  void BsonWriter_WriteValue_m2318516756 (BsonWriter_t3358942186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Double)
extern "C"  void BsonWriter_WriteValue_m2068954027 (BsonWriter_t3358942186 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Boolean)
extern "C"  void BsonWriter_WriteValue_m359662126 (BsonWriter_t3358942186 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int16)
extern "C"  void BsonWriter_WriteValue_m3256925378 (BsonWriter_t3358942186 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt16)
extern "C"  void BsonWriter_WriteValue_m3177720413 (BsonWriter_t3358942186 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Char)
extern "C"  void BsonWriter_WriteValue_m3701556614 (BsonWriter_t3358942186 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte)
extern "C"  void BsonWriter_WriteValue_m3701157396 (BsonWriter_t3358942186 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.SByte)
extern "C"  void BsonWriter_WriteValue_m3502796763 (BsonWriter_t3358942186 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Decimal)
extern "C"  void BsonWriter_WriteValue_m3214098469 (BsonWriter_t3358942186 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTime)
extern "C"  void BsonWriter_WriteValue_m241827937 (BsonWriter_t3358942186 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTimeOffset)
extern "C"  void BsonWriter_WriteValue_m2956246030 (BsonWriter_t3358942186 * __this, DateTimeOffset_t3712260035  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte[])
extern "C"  void BsonWriter_WriteValue_m579387442 (BsonWriter_t3358942186 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Guid)
extern "C"  void BsonWriter_WriteValue_m3705645235 (BsonWriter_t3358942186 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.TimeSpan)
extern "C"  void BsonWriter_WriteValue_m526623685 (BsonWriter_t3358942186 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Uri)
extern "C"  void BsonWriter_WriteValue_m397045738 (BsonWriter_t3358942186 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteObjectId(System.Byte[])
extern "C"  void BsonWriter_WriteObjectId_m3866943795 (BsonWriter_t3358942186 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
extern "C"  void BsonWriter_WriteRegex_m3976169809 (BsonWriter_t3358942186 * __this, String_t* ___pattern, String_t* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
