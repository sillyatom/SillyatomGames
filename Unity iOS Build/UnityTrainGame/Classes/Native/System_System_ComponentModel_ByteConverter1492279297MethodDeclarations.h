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

// System.ComponentModel.ByteConverter
struct ByteConverter_t1492279297;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3411951076;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_NumberFormatInfo3411951076.h"

// System.Boolean System.ComponentModel.ByteConverter::get_SupportHex()
extern "C"  bool ByteConverter_get_SupportHex_m2170634606 (ByteConverter_t1492279297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * ByteConverter_ConvertFromString_m2426199774 (ByteConverter_t1492279297 * __this, String_t* ___value, NumberFormatInfo_t3411951076 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ByteConverter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * ByteConverter_ConvertFromString_m1602537867 (ByteConverter_t1492279297 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
