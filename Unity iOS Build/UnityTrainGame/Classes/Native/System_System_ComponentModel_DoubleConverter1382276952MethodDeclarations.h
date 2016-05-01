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

// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1382276952;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3411951076;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_NumberFormatInfo3411951076.h"

// System.Boolean System.ComponentModel.DoubleConverter::get_SupportHex()
extern "C"  bool DoubleConverter_get_SupportHex_m3230093573 (DoubleConverter_t1382276952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DoubleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * DoubleConverter_ConvertFromString_m1957849845 (DoubleConverter_t1382276952 * __this, String_t* ___value, NumberFormatInfo_t3411951076 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
