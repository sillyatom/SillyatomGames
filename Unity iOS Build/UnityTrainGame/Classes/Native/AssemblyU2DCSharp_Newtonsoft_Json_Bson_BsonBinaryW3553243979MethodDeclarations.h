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

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t3553243979;
// System.IO.Stream
struct Stream_t219029575;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t1714632464;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_DateTimeKind3550648708.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonToken1714632464.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.ctor(System.IO.Stream)
extern "C"  void BsonBinaryWriter__ctor_m2590765781 (BsonBinaryWriter_t3553243979 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.cctor()
extern "C"  void BsonBinaryWriter__cctor_m3574131503 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
extern "C"  int32_t BsonBinaryWriter_get_DateTimeKindHandling_m2296583198 (BsonBinaryWriter_t3553243979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
extern "C"  void BsonBinaryWriter_set_DateTimeKindHandling_m3005845517 (BsonBinaryWriter_t3553243979 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Flush()
extern "C"  void BsonBinaryWriter_Flush_m3124287328 (BsonBinaryWriter_t3553243979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
extern "C"  void BsonBinaryWriter_Close_m456232276 (BsonBinaryWriter_t3553243979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonBinaryWriter_WriteToken_m3710807552 (BsonBinaryWriter_t3553243979 * __this, BsonToken_t1714632464 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonBinaryWriter_WriteTokenInternal_m3348649437 (BsonBinaryWriter_t3553243979 * __this, BsonToken_t1714632464 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
extern "C"  void BsonBinaryWriter_WriteString_m1462600969 (BsonBinaryWriter_t3553243979 * __this, String_t* ___s, int32_t ___byteCount, Nullable_1_t1438485399  ___calculatedlengthPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
extern "C"  int32_t BsonBinaryWriter_CalculateSize_m3040964738 (BsonBinaryWriter_t3553243979 * __this, int32_t ___stringByteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
extern "C"  int32_t BsonBinaryWriter_CalculateSizeWithLength_m3963235023 (BsonBinaryWriter_t3553243979 * __this, int32_t ___stringByteCount, bool ___includeSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
extern "C"  int32_t BsonBinaryWriter_CalculateSize_m3429806737 (BsonBinaryWriter_t3553243979 * __this, BsonToken_t1714632464 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
