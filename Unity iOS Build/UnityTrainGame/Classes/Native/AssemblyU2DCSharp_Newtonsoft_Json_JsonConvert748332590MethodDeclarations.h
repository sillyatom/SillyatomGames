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

// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.Enum
struct Enum_t2778772662;
// System.Uri
struct Uri_t2776692961;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t1140441370;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t622975392;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_DateTimeOffset3712260035.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "mscorlib_System_DateTimeKind3550648708.h"
#include "mscorlib_System_Enum2778772662.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_Guid2778838590.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_TypeCode2164429820.h"
#include "mscorlib_System_Type2779229935.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Formatting1733320232.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializerSet622975392.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"

// System.Void Newtonsoft.Json.JsonConvert::.cctor()
extern "C"  void JsonConvert__cctor_m3054884120 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.DateTime)
extern "C"  String_t* JsonConvert_ToString_m3527749856 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.DateTimeOffset)
extern "C"  String_t* JsonConvert_ToString_m1294160205 (Il2CppObject * __this /* static, unused */, DateTimeOffset_t3712260035  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.JsonConvert::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t763862892  JsonConvert_GetUtcOffset_m2311143013 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::WriteDateTimeString(System.IO.TextWriter,System.DateTime)
extern "C"  void JsonConvert_WriteDateTimeString_m1251812455 (Il2CppObject * __this /* static, unused */, TextWriter_t1689927879 * ___writer, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::WriteDateTimeString(System.IO.TextWriter,System.DateTime,System.TimeSpan,System.DateTimeKind)
extern "C"  void JsonConvert_WriteDateTimeString_m2217067899 (Il2CppObject * __this /* static, unused */, TextWriter_t1689927879 * ___writer, DateTime_t339033936  ___value, TimeSpan_t763862892  ___offset, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ToUniversalTicks(System.DateTime)
extern "C"  int64_t JsonConvert_ToUniversalTicks_m3167476146 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ToUniversalTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t JsonConvert_ToUniversalTicks_m3182670344 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, TimeSpan_t763862892  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t JsonConvert_ConvertDateTimeToJavaScriptTicks_m1053952366 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, TimeSpan_t763862892  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ConvertDateTimeToJavaScriptTicks(System.DateTime)
extern "C"  int64_t JsonConvert_ConvertDateTimeToJavaScriptTicks_m1147256088 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
extern "C"  int64_t JsonConvert_ConvertDateTimeToJavaScriptTicks_m792314725 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, bool ___convertToUtc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.JsonConvert::UniversialTicksToJavaScriptTicks(System.Int64)
extern "C"  int64_t JsonConvert_UniversialTicksToJavaScriptTicks_m3995657022 (Il2CppObject * __this /* static, unused */, int64_t ___universialTicks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.JsonConvert::ConvertJavaScriptTicksToDateTime(System.Int64)
extern "C"  DateTime_t339033936  JsonConvert_ConvertJavaScriptTicksToDateTime_m3057513940 (Il2CppObject * __this /* static, unused */, int64_t ___javaScriptTicks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m188564943 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Char)
extern "C"  String_t* JsonConvert_ToString_m1483640197 (Il2CppObject * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Enum)
extern "C"  String_t* JsonConvert_ToString_m1485685050 (Il2CppObject * __this /* static, unused */, Enum_t2778772662 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Int32)
extern "C"  String_t* JsonConvert_ToString_m3220994985 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Int16)
extern "C"  String_t* JsonConvert_ToString_m3220993187 (Il2CppObject * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.UInt16)
extern "C"  String_t* JsonConvert_ToString_m2063822492 (Il2CppObject * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.UInt32)
extern "C"  String_t* JsonConvert_ToString_m2063824290 (Il2CppObject * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Int64)
extern "C"  String_t* JsonConvert_ToString_m3220997930 (Il2CppObject * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.UInt64)
extern "C"  String_t* JsonConvert_ToString_m2063827235 (Il2CppObject * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Single)
extern "C"  String_t* JsonConvert_ToString_m1204618835 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Double)
extern "C"  String_t* JsonConvert_ToString_m955056106 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureDecimalPlace(System.Double,System.String)
extern "C"  String_t* JsonConvert_EnsureDecimalPlace_m719734846 (Il2CppObject * __this /* static, unused */, double ___value, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureDecimalPlace(System.String)
extern "C"  String_t* JsonConvert_EnsureDecimalPlace_m2406944578 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Byte)
extern "C"  String_t* JsonConvert_ToString_m1483240979 (Il2CppObject * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.SByte)
extern "C"  String_t* JsonConvert_ToString_m3466864572 (Il2CppObject * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Decimal)
extern "C"  String_t* JsonConvert_ToString_m3043001286 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Guid)
extern "C"  String_t* JsonConvert_ToString_m1487728818 (Il2CppObject * __this /* static, unused */, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.TimeSpan)
extern "C"  String_t* JsonConvert_ToString_m3812545604 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Uri)
extern "C"  String_t* JsonConvert_ToString_m186952715 (Il2CppObject * __this /* static, unused */, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String)
extern "C"  String_t* JsonConvert_ToString_m1523295146 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String,System.Char)
extern "C"  String_t* JsonConvert_ToString_m3169420097 (Il2CppObject * __this /* static, unused */, String_t* ___value, uint16_t ___delimter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Object)
extern "C"  String_t* JsonConvert_ToString_m1745405500 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonConvert::IsJsonPrimitiveTypeCode(System.TypeCode)
extern "C"  bool JsonConvert_IsJsonPrimitiveTypeCode_m570975977 (Il2CppObject * __this /* static, unused */, int32_t ___typeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonConvert::IsJsonPrimitiveType(System.Type)
extern "C"  bool JsonConvert_IsJsonPrimitiveType_m2233907267 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonConvert::IsJsonPrimitive(System.Object)
extern "C"  bool JsonConvert_IsJsonPrimitive_m4189109496 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
extern "C"  String_t* JsonConvert_SerializeObject_m695676031 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.Formatting)
extern "C"  String_t* JsonConvert_SerializeObject_m1579456237 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, int32_t ___formatting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.JsonConverter[])
extern "C"  String_t* JsonConvert_SerializeObject_m3179709574 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.Formatting,Newtonsoft.Json.JsonConverter[])
extern "C"  String_t* JsonConvert_SerializeObject_m1690220276 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, int32_t ___formatting, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.Formatting,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  String_t* JsonConvert_SerializeObject_m3789630151 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, int32_t ___formatting, JsonSerializerSettings_t622975392 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m3773224604 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m2493363256 (Il2CppObject * __this /* static, unused */, String_t* ___value, JsonSerializerSettings_t622975392 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,System.Type)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m43867087 (Il2CppObject * __this /* static, unused */, String_t* ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,System.Type,Newtonsoft.Json.JsonConverter[])
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m1838904278 (Il2CppObject * __this /* static, unused */, String_t* ___value, Type_t * ___type, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,System.Type,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m2067958693 (Il2CppObject * __this /* static, unused */, String_t* ___value, Type_t * ___type, JsonSerializerSettings_t622975392 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::PopulateObject(System.String,System.Object)
extern "C"  void JsonConvert_PopulateObject_m1210203352 (Il2CppObject * __this /* static, unused */, String_t* ___value, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::PopulateObject(System.String,System.Object,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  void JsonConvert_PopulateObject_m704643708 (Il2CppObject * __this /* static, unused */, String_t* ___value, Il2CppObject * ___target, JsonSerializerSettings_t622975392 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeXmlNode(System.Xml.XmlNode)
extern "C"  String_t* JsonConvert_SerializeXmlNode_m1224997954 (Il2CppObject * __this /* static, unused */, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeXmlNode(System.Xml.XmlNode,Newtonsoft.Json.Formatting)
extern "C"  String_t* JsonConvert_SerializeXmlNode_m1531381066 (Il2CppObject * __this /* static, unused */, XmlNode_t3592213601 * ___node, int32_t ___formatting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeXmlNode(System.Xml.XmlNode,Newtonsoft.Json.Formatting,System.Boolean)
extern "C"  String_t* JsonConvert_SerializeXmlNode_m3868774643 (Il2CppObject * __this /* static, unused */, XmlNode_t3592213601 * ___node, int32_t ___formatting, bool ___omitRootObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument Newtonsoft.Json.JsonConvert::DeserializeXmlNode(System.String)
extern "C"  XmlDocument_t3705263098 * JsonConvert_DeserializeXmlNode_m1661705114 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument Newtonsoft.Json.JsonConvert::DeserializeXmlNode(System.String,System.String)
extern "C"  XmlDocument_t3705263098 * JsonConvert_DeserializeXmlNode_m2878828118 (Il2CppObject * __this /* static, unused */, String_t* ___value, String_t* ___deserializeRootElementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument Newtonsoft.Json.JsonConvert::DeserializeXmlNode(System.String,System.String,System.Boolean)
extern "C"  XmlDocument_t3705263098 * JsonConvert_DeserializeXmlNode_m1394585191 (Il2CppObject * __this /* static, unused */, String_t* ___value, String_t* ___deserializeRootElementName, bool ___writeArrayAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
