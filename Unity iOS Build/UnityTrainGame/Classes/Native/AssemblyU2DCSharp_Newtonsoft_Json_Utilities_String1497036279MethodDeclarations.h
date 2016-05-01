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
// System.IFormatProvider
struct IFormatProvider_t3436592966;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Action`1<System.String>
struct Action_1_t1116941607;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// Newtonsoft.Json.Utilities.StringUtils/ActionLine
struct ActionLine_t3845092202;
// System.IO.StringWriter
struct StringWriter_t2384730283;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Utilities_String3845092202.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m3260740632 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___provider, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::ContainsWhiteSpace(System.String)
extern "C"  bool StringUtils_ContainsWhiteSpace_m2122709882 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsWhiteSpace(System.String)
extern "C"  bool StringUtils_IsWhiteSpace_m2491032207 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::EnsureEndsWith(System.String,System.String)
extern "C"  String_t* StringUtils_EnsureEndsWith_m2768656901 (Il2CppObject * __this /* static, unused */, String_t* ___target, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsNullOrEmptyOrWhiteSpace(System.String)
extern "C"  bool StringUtils_IsNullOrEmptyOrWhiteSpace_m259533395 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::IfNotNullOrEmpty(System.String,System.Action`1<System.String>)
extern "C"  void StringUtils_IfNotNullOrEmpty_m4284518285 (Il2CppObject * __this /* static, unused */, String_t* ___value, Action_1_t1116941607 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::IfNotNullOrEmpty(System.String,System.Action`1<System.String>,System.Action`1<System.String>)
extern "C"  void StringUtils_IfNotNullOrEmpty_m2348658805 (Il2CppObject * __this /* static, unused */, String_t* ___value, Action_1_t1116941607 * ___trueAction, Action_1_t1116941607 * ___falseAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::Indent(System.String,System.Int32)
extern "C"  String_t* StringUtils_Indent_m3889443934 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___indentation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::Indent(System.String,System.Int32,System.Char)
extern "C"  String_t* StringUtils_Indent_m1706730997 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___indentation, uint16_t ___indentChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::ActionTextReaderLine(System.IO.TextReader,System.IO.TextWriter,Newtonsoft.Json.Utilities.StringUtils/ActionLine)
extern "C"  void StringUtils_ActionTextReaderLine_m1955858648 (Il2CppObject * __this /* static, unused */, TextReader_t1534522647 * ___textReader, TextWriter_t1689927879 * ___textWriter, ActionLine_t3845092202 * ___lineAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::NumberLines(System.String)
extern "C"  String_t* StringUtils_NumberLines_m2143165063 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::NullEmptyString(System.String)
extern "C"  String_t* StringUtils_NullEmptyString_m1623599078 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::ReplaceNewLines(System.String,System.String)
extern "C"  String_t* StringUtils_ReplaceNewLines_m2363437766 (Il2CppObject * __this /* static, unused */, String_t* ___s, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::Truncate(System.String,System.Int32)
extern "C"  String_t* StringUtils_Truncate_m3670298392 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___maximumLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::Truncate(System.String,System.Int32,System.String)
extern "C"  String_t* StringUtils_Truncate_m3868798292 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___maximumLength, String_t* ___suffix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StringWriter Newtonsoft.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
extern "C"  StringWriter_t2384730283 * StringUtils_CreateStringWriter_m4015224769 (Il2CppObject * __this /* static, unused */, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.StringUtils::GetLength(System.String)
extern "C"  Nullable_1_t1438485399  StringUtils_GetLength_m3269432277 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char)
extern "C"  String_t* StringUtils_ToCharAsUnicode_m4026369150 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::WriteCharAsUnicode(System.IO.TextWriter,System.Char)
extern "C"  void StringUtils_WriteCharAsUnicode_m368627844 (Il2CppObject * __this /* static, unused */, TextWriter_t1689927879 * ___writer, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::ToCamelCase(System.String)
extern "C"  String_t* StringUtils_ToCamelCase_m3833750098 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
