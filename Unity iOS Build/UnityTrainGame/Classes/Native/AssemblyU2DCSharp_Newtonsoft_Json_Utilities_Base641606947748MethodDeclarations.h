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

// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t1606947748;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"

// System.Void Newtonsoft.Json.Utilities.Base64Encoder::.ctor(System.IO.TextWriter)
extern "C"  void Base64Encoder__ctor_m2259717102 (Base64Encoder_t1606947748 * __this, TextWriter_t1689927879 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.Base64Encoder::Encode(System.Byte[],System.Int32,System.Int32)
extern "C"  void Base64Encoder_Encode_m2944931046 (Base64Encoder_t1606947748 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.Base64Encoder::Flush()
extern "C"  void Base64Encoder_Flush_m795512185 (Base64Encoder_t1606947748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.Base64Encoder::WriteChars(System.Char[],System.Int32,System.Int32)
extern "C"  void Base64Encoder_WriteChars_m4143291184 (Base64Encoder_t1606947748 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
