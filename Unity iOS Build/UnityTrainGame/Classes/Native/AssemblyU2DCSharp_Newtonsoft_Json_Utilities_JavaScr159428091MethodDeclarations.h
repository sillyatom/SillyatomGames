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

// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::WriteEscapedJavaScriptString(System.IO.TextWriter,System.String,System.Char,System.Boolean)
extern "C"  void JavaScriptUtils_WriteEscapedJavaScriptString_m3530770797 (Il2CppObject * __this /* static, unused */, TextWriter_t1689927879 * ___writer, String_t* ___value, uint16_t ___delimiter, bool ___appendDelimiters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.JavaScriptUtils::ToEscapedJavaScriptString(System.String)
extern "C"  String_t* JavaScriptUtils_ToEscapedJavaScriptString_m2746513563 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.JavaScriptUtils::ToEscapedJavaScriptString(System.String,System.Char,System.Boolean)
extern "C"  String_t* JavaScriptUtils_ToEscapedJavaScriptString_m3737412235 (Il2CppObject * __this /* static, unused */, String_t* ___value, uint16_t ___delimiter, bool ___appendDelimiters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
