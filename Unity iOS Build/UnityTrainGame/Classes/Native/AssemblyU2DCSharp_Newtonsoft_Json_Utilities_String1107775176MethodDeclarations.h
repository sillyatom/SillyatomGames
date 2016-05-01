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

// Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t1107775176;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"

// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor()
extern "C"  void StringBuffer__ctor_m1224086481 (StringBuffer_t1107775176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Int32)
extern "C"  void StringBuffer__ctor_m284661666 (StringBuffer_t1107775176 * __this, int32_t ___initalSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.cctor()
extern "C"  void StringBuffer__cctor_m3104846332 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
extern "C"  int32_t StringBuffer_get_Position_m1022372947 (StringBuffer_t1107775176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
extern "C"  void StringBuffer_set_Position_m3506404362 (StringBuffer_t1107775176 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(System.Char)
extern "C"  void StringBuffer_Append_m1612122448 (StringBuffer_t1107775176 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear()
extern "C"  void StringBuffer_Clear_m2925187068 (StringBuffer_t1107775176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(System.Int32)
extern "C"  void StringBuffer_EnsureSize_m3363550659 (StringBuffer_t1107775176 * __this, int32_t ___appendLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
extern "C"  String_t* StringBuffer_ToString_m1959630114 (StringBuffer_t1107775176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuffer_ToString_m1149331524 (StringBuffer_t1107775176 * __this, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::GetInternalBuffer()
extern "C"  CharU5BU5D_t3416858730* StringBuffer_GetInternalBuffer_m1805620774 (StringBuffer_t1107775176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
