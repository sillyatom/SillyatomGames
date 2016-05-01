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

// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_t3203536954;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t1893523982;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_DateTimeKind3550648708.h"
#include "mscorlib_System_Nullable_1_gen279627866.h"
#include "mscorlib_System_Nullable_1_gen2303330647.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonReader_1893523982.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonType556079793.h"

// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream)
extern "C"  void BsonReader__ctor_m1288782854 (BsonReader_t3203536954 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
extern "C"  void BsonReader__ctor_m602330229 (BsonReader_t3203536954 * __this, Stream_t219029575 * ___stream, bool ___readRootValueAsArray, int32_t ___dateTimeKindHandling, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::.cctor()
extern "C"  void BsonReader__cctor_m2753265182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_JsonNet35BinaryCompatibility()
extern "C"  bool BsonReader_get_JsonNet35BinaryCompatibility_m1044281218 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::set_JsonNet35BinaryCompatibility(System.Boolean)
extern "C"  void BsonReader_set_JsonNet35BinaryCompatibility_m3617458209 (BsonReader_t3203536954 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_ReadRootValueAsArray()
extern "C"  bool BsonReader_get_ReadRootValueAsArray_m4138334360 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::set_ReadRootValueAsArray(System.Boolean)
extern "C"  void BsonReader_set_ReadRootValueAsArray_m3916698295 (BsonReader_t3203536954 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
extern "C"  int32_t BsonReader_get_DateTimeKindHandling_m1038475661 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::set_DateTimeKindHandling(System.DateTimeKind)
extern "C"  void BsonReader_set_DateTimeKindHandling_m1087010430 (BsonReader_t3203536954 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
extern "C"  String_t* BsonReader_ReadElement_m2092907382 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t58506160* BsonReader_ReadAsBytes_m3897108762 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::IsWrappedInTypeObject()
extern "C"  bool BsonReader_IsWrappedInTypeObject_m899943098 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.Bson.BsonReader::ReadAsDecimal()
extern "C"  Nullable_1_t279627866  BsonReader_ReadAsDecimal_m2095667016 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.Bson.BsonReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t2303330647  BsonReader_ReadAsDateTimeOffset_m8606698 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::Read()
extern "C"  bool BsonReader_Read_m3483779799 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::Close()
extern "C"  void BsonReader_Close_m152658053 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
extern "C"  bool BsonReader_ReadCodeWScope_m2410612065 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
extern "C"  bool BsonReader_ReadReference_m2196060246 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
extern "C"  bool BsonReader_ReadNormal_m1860144542 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
extern "C"  void BsonReader_PopContext_m3361882003 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
extern "C"  void BsonReader_PushContext_m1711245665 (BsonReader_t3203536954 * __this, ContainerContext_t1893523982 * ___newContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
extern "C"  uint8_t BsonReader_ReadByte_m3378240423 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
extern "C"  void BsonReader_ReadType_m2577523738 (BsonReader_t3203536954 * __this, int8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary()
extern "C"  ByteU5BU5D_t58506160* BsonReader_ReadBinary_m1158328770 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
extern "C"  String_t* BsonReader_ReadString_m762481465 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
extern "C"  String_t* BsonReader_ReadLengthString_m853162751 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
extern "C"  String_t* BsonReader_GetString_m719053896 (BsonReader_t3203536954 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
extern "C"  int32_t BsonReader_GetLastFullCharStop_m2477586431 (BsonReader_t3203536954 * __this, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
extern "C"  int32_t BsonReader_BytesInSequence_m658835775 (BsonReader_t3203536954 * __this, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
extern "C"  void BsonReader_EnsureBuffers_m1399648610 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
extern "C"  double BsonReader_ReadDouble_m2344895161 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
extern "C"  int32_t BsonReader_ReadInt32_m651205683 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
extern "C"  int64_t BsonReader_ReadInt64_m4197420755 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
extern "C"  int8_t BsonReader_ReadType_m3648727781 (BsonReader_t3203536954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
extern "C"  void BsonReader_MovePosition_m2914919520 (BsonReader_t3203536954 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t58506160* BsonReader_ReadBytes_m408464637 (BsonReader_t3203536954 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
