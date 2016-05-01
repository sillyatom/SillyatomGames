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

// Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t2286755275;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t1606947748;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonToken326031476.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_DateTimeOffset3712260035.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "System_System_Uri2776692961.h"

// System.Void Newtonsoft.Json.JsonTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void JsonTextWriter__ctor_m355031413 (JsonTextWriter_t2286755275 * __this, TextWriter_t1689927879 * ___textWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.Base64Encoder Newtonsoft.Json.JsonTextWriter::get_Base64Encoder()
extern "C"  Base64Encoder_t1606947748 * JsonTextWriter_get_Base64Encoder_m2833371713 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextWriter::get_Indentation()
extern "C"  int32_t JsonTextWriter_get_Indentation_m1657715406 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::set_Indentation(System.Int32)
extern "C"  void JsonTextWriter_set_Indentation_m1864968313 (JsonTextWriter_t2286755275 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextWriter::get_QuoteChar()
extern "C"  uint16_t JsonTextWriter_get_QuoteChar_m2378229063 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::set_QuoteChar(System.Char)
extern "C"  void JsonTextWriter_set_QuoteChar_m2146566060 (JsonTextWriter_t2286755275 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextWriter::get_IndentChar()
extern "C"  uint16_t JsonTextWriter_get_IndentChar_m865596495 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::set_IndentChar(System.Char)
extern "C"  void JsonTextWriter_set_IndentChar_m3060169080 (JsonTextWriter_t2286755275 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextWriter::get_QuoteName()
extern "C"  bool JsonTextWriter_get_QuoteName_m2029453382 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::set_QuoteName(System.Boolean)
extern "C"  void JsonTextWriter_set_QuoteName_m3074435965 (JsonTextWriter_t2286755275 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::Flush()
extern "C"  void JsonTextWriter_Flush_m2019959936 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::Close()
extern "C"  void JsonTextWriter_Close_m3646872180 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartObject()
extern "C"  void JsonTextWriter_WriteStartObject_m263197960 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartArray()
extern "C"  void JsonTextWriter_WriteStartArray_m2596262802 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartConstructor(System.String)
extern "C"  void JsonTextWriter_WriteStartConstructor_m803579631 (JsonTextWriter_t2286755275 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonTextWriter_WriteEnd_m2716451540 (JsonTextWriter_t2286755275 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WritePropertyName(System.String)
extern "C"  void JsonTextWriter_WritePropertyName_m4002480423 (JsonTextWriter_t2286755275 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIndent()
extern "C"  void JsonTextWriter_WriteIndent_m2138453223 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValueDelimiter()
extern "C"  void JsonTextWriter_WriteValueDelimiter_m3817823057 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIndentSpace()
extern "C"  void JsonTextWriter_WriteIndentSpace_m1641231425 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValueInternal(System.String,Newtonsoft.Json.JsonToken)
extern "C"  void JsonTextWriter_WriteValueInternal_m2134942589 (JsonTextWriter_t2286755275 * __this, String_t* ___value, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteNull()
extern "C"  void JsonTextWriter_WriteNull_m2413528450 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteUndefined()
extern "C"  void JsonTextWriter_WriteUndefined_m563000791 (JsonTextWriter_t2286755275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteRaw(System.String)
extern "C"  void JsonTextWriter_WriteRaw_m3985059891 (JsonTextWriter_t2286755275 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.String)
extern "C"  void JsonTextWriter_WriteValue_m1052767562 (JsonTextWriter_t2286755275 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int32)
extern "C"  void JsonTextWriter_WriteValue_m157775369 (JsonTextWriter_t2286755275 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt32)
extern "C"  void JsonTextWriter_WriteValue_m1593296706 (JsonTextWriter_t2286755275 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int64)
extern "C"  void JsonTextWriter_WriteValue_m157778314 (JsonTextWriter_t2286755275 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt64)
extern "C"  void JsonTextWriter_WriteValue_m1593299651 (JsonTextWriter_t2286755275 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Single)
extern "C"  void JsonTextWriter_WriteValue_m734091251 (JsonTextWriter_t2286755275 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Double)
extern "C"  void JsonTextWriter_WriteValue_m484528522 (JsonTextWriter_t2286755275 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Boolean)
extern "C"  void JsonTextWriter_WriteValue_m2782079023 (JsonTextWriter_t2286755275 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int16)
extern "C"  void JsonTextWriter_WriteValue_m157773571 (JsonTextWriter_t2286755275 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt16)
extern "C"  void JsonTextWriter_WriteValue_m1593294908 (JsonTextWriter_t2286755275 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Char)
extern "C"  void JsonTextWriter_WriteValue_m1384826661 (JsonTextWriter_t2286755275 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Byte)
extern "C"  void JsonTextWriter_WriteValue_m1384427443 (JsonTextWriter_t2286755275 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.SByte)
extern "C"  void JsonTextWriter_WriteValue_m403644956 (JsonTextWriter_t2286755275 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Decimal)
extern "C"  void JsonTextWriter_WriteValue_m1341548070 (JsonTextWriter_t2286755275 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.DateTime)
extern "C"  void JsonTextWriter_WriteValue_m2322307712 (JsonTextWriter_t2286755275 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Byte[])
extern "C"  void JsonTextWriter_WriteValue_m3289929233 (JsonTextWriter_t2286755275 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.DateTimeOffset)
extern "C"  void JsonTextWriter_WriteValue_m1325138669 (JsonTextWriter_t2286755275 * __this, DateTimeOffset_t3712260035  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Guid)
extern "C"  void JsonTextWriter_WriteValue_m1388915282 (JsonTextWriter_t2286755275 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.TimeSpan)
extern "C"  void JsonTextWriter_WriteValue_m2607103460 (JsonTextWriter_t2286755275 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Uri)
extern "C"  void JsonTextWriter_WriteValue_m1707785835 (JsonTextWriter_t2286755275 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteComment(System.String)
extern "C"  void JsonTextWriter_WriteComment_m708802588 (JsonTextWriter_t2286755275 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteWhitespace(System.String)
extern "C"  void JsonTextWriter_WriteWhitespace_m8619146 (JsonTextWriter_t2286755275 * __this, String_t* ___ws, const MethodInfo* method) IL2CPP_METHOD_ATTR;
