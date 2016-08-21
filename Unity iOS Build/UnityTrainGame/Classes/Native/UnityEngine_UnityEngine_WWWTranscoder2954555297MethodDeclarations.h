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

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C"  void WWWTranscoder__cctor_m1486747496 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* WWWTranscoder_Byte2Hex_m2414999496 (Il2CppObject * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t58506160* ___hexChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* WWWTranscoder_URLEncode_m4039667511 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___toEncode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C"  String_t* WWWTranscoder_QPEncode_m1021207296 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode, Encoding_t180559927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C"  ByteU5BU5D_t58506160* WWWTranscoder_Encode_m2677436946 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t58506160* ___forbidden, bool ___uppercase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C"  bool WWWTranscoder_ByteArrayContains_m3244919989 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___array, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C"  bool WWWTranscoder_SevenBitClean_m1805125217 (Il2CppObject * __this /* static, unused */, String_t* ___s, Encoding_t180559927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C"  bool WWWTranscoder_SevenBitClean_m945043319 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
