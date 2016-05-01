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

// Newtonsoft.Json.JsonTextReader
struct JsonTextReader_t2131350043;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t549712711;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Nullable_1_gen279627866.h"
#include "mscorlib_System_Nullable_1_gen2303330647.h"

// System.Void Newtonsoft.Json.JsonTextReader::.ctor(System.IO.TextReader)
extern "C"  void JsonTextReader__ctor_m1734909141 (JsonTextReader_t2131350043 * __this, TextReader_t1534522647 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Newtonsoft.Json.JsonTextReader::get_Culture()
extern "C"  CultureInfo_t3603717042 * JsonTextReader_get_Culture_m648108836 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::set_Culture(System.Globalization.CultureInfo)
extern "C"  void JsonTextReader_set_Culture_m3713973037 (JsonTextReader_t2131350043 * __this, CultureInfo_t3603717042 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseString(System.Char)
extern "C"  void JsonTextReader_ParseString_m1781003597 (JsonTextReader_t2131350043 * __this, uint16_t ___quote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ReadStringIntoBuffer(System.Char)
extern "C"  void JsonTextReader_ReadStringIntoBuffer_m2009816736 (JsonTextReader_t2131350043 * __this, uint16_t ___quote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonTextReader::CreateJsonReaderException(System.String,System.Object[])
extern "C"  JsonReaderException_t549712711 * JsonTextReader_CreateJsonReaderException_m4127681662 (JsonTextReader_t2131350043 * __this, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.JsonTextReader::ReadOffset(System.String)
extern "C"  TimeSpan_t763862892  JsonTextReader_ReadOffset_m1923131270 (JsonTextReader_t2131350043 * __this, String_t* ___offsetText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseDate(System.String)
extern "C"  void JsonTextReader_ParseDate_m2393404597 (JsonTextReader_t2131350043 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextReader::MoveNext()
extern "C"  uint16_t JsonTextReader_MoveNext_m729862232 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::HasNext()
extern "C"  bool JsonTextReader_HasNext_m3856665253 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::PeekNext()
extern "C"  int32_t JsonTextReader_PeekNext_m1914498546 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::Read()
extern "C"  bool JsonTextReader_Read_m2556382272 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonTextReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t58506160* JsonTextReader_ReadAsBytes_m3558825317 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonTextReader::ReadAsDecimal()
extern "C"  Nullable_1_t279627866  JsonTextReader_ReadAsDecimal_m1262009155 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.JsonTextReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t2303330647  JsonTextReader_ReadAsDateTimeOffset_m2554141901 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ReadInternal()
extern "C"  bool JsonTextReader_ReadInternal_m1492813021 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParsePostValue(System.Char)
extern "C"  bool JsonTextReader_ParsePostValue_m3298799925 (JsonTextReader_t2131350043 * __this, uint16_t ___currentChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseObject(System.Char)
extern "C"  bool JsonTextReader_ParseObject_m3265400723 (JsonTextReader_t2131350043 * __this, uint16_t ___currentChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseProperty(System.Char)
extern "C"  bool JsonTextReader_ParseProperty_m824099645 (JsonTextReader_t2131350043 * __this, uint16_t ___firstChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ValidIdentifierChar(System.Char)
extern "C"  bool JsonTextReader_ValidIdentifierChar_m1586398794 (JsonTextReader_t2131350043 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextReader::ParseUnquotedProperty(System.Char)
extern "C"  uint16_t JsonTextReader_ParseUnquotedProperty_m904487878 (JsonTextReader_t2131350043 * __this, uint16_t ___firstChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseValue(System.Char)
extern "C"  bool JsonTextReader_ParseValue_m3650705781 (JsonTextReader_t2131350043 * __this, uint16_t ___currentChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::EatWhitespace(System.Char,System.Boolean,System.Char&)
extern "C"  bool JsonTextReader_EatWhitespace_m269304264 (JsonTextReader_t2131350043 * __this, uint16_t ___initialChar, bool ___oneOrMore, uint16_t* ___finalChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseConstructor()
extern "C"  void JsonTextReader_ParseConstructor_m819741309 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumber(System.Char)
extern "C"  void JsonTextReader_ParseNumber_m4159206677 (JsonTextReader_t2131350043 * __this, uint16_t ___firstChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseComment()
extern "C"  void JsonTextReader_ParseComment_m2538972322 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::MatchValue(System.Char,System.String)
extern "C"  bool JsonTextReader_MatchValue_m1036994563 (JsonTextReader_t2131350043 * __this, uint16_t ___firstChar, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::MatchValue(System.Char,System.String,System.Boolean)
extern "C"  bool JsonTextReader_MatchValue_m1085121818 (JsonTextReader_t2131350043 * __this, uint16_t ___firstChar, String_t* ___value, bool ___noTrailingNonSeperatorCharacters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::IsSeperator(System.Char)
extern "C"  bool JsonTextReader_IsSeperator_m3646701614 (JsonTextReader_t2131350043 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseTrue()
extern "C"  void JsonTextReader_ParseTrue_m2133750093 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNull()
extern "C"  void JsonTextReader_ParseNull_m1964484358 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseUndefined()
extern "C"  void JsonTextReader_ParseUndefined_m1392436947 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseFalse()
extern "C"  void JsonTextReader_ParseFalse_m1687062246 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumberNegativeInfinity()
extern "C"  void JsonTextReader_ParseNumberNegativeInfinity_m111375653 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumberPositiveInfinity()
extern "C"  void JsonTextReader_ParseNumberPositiveInfinity_m404463081 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumberNaN()
extern "C"  void JsonTextReader_ParseNumberNaN_m3325348341 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::Close()
extern "C"  void JsonTextReader_Close_m2963275812 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::HasLineInfo()
extern "C"  bool JsonTextReader_HasLineInfo_m140645940 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::get_LineNumber()
extern "C"  int32_t JsonTextReader_get_LineNumber_m3459926954 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::get_LinePosition()
extern "C"  int32_t JsonTextReader_get_LinePosition_m2459707786 (JsonTextReader_t2131350043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
