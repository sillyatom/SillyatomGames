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

// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader_State80204913.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonToken326031476.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.JsonReader::.ctor()
extern "C"  void JsonReader__ctor_m1338977659 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::System.IDisposable.Dispose()
extern "C"  void JsonReader_System_IDisposable_Dispose_m3337186564 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::get_CurrentState()
extern "C"  int32_t JsonReader_get_CurrentState_m2983480069 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::get_CloseInput()
extern "C"  bool JsonReader_get_CloseInput_m1741953432 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_CloseInput(System.Boolean)
extern "C"  void JsonReader_set_CloseInput_m3596208847 (JsonReader_t1817561742 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonReader::get_QuoteChar()
extern "C"  uint16_t JsonReader_get_QuoteChar_m80257380 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_QuoteChar(System.Char)
extern "C"  void JsonReader_set_QuoteChar_m367677551 (JsonReader_t1817561742 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType()
extern "C"  int32_t JsonReader_get_TokenType_m3421711116 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonReader::get_Value()
extern "C"  Il2CppObject * JsonReader_get_Value_m2725732748 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.JsonReader::get_ValueType()
extern "C"  Type_t * JsonReader_get_ValueType_m1207464289 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonReader::get_Depth()
extern "C"  int32_t JsonReader_get_Depth_m4256655077 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Push(Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JsonReader_Push_m3059214381 (JsonReader_t1817561742 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonReader::Pop()
extern "C"  int32_t JsonReader_Pop_m4088401049 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonReader::Peek()
extern "C"  int32_t JsonReader_Peek_m2176882421 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Skip()
extern "C"  void JsonReader_Skip_m693888552 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken)
extern "C"  void JsonReader_SetToken_m3582873174 (JsonReader_t1817561742 * __this, int32_t ___newToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object)
extern "C"  void JsonReader_SetToken_m752470692 (JsonReader_t1817561742 * __this, int32_t ___newToken, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ValidateEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonReader_ValidateEnd_m2202249784 (JsonReader_t1817561742 * __this, int32_t ___endToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetStateBasedOnCurrent()
extern "C"  void JsonReader_SetStateBasedOnCurrent_m1895545919 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::IsPrimitiveToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonReader_IsPrimitiveToken_m3137510301 (Il2CppObject * __this /* static, unused */, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::IsStartToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonReader_IsStartToken_m3699172376 (Il2CppObject * __this /* static, unused */, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonReader::GetTypeForCloseToken(Newtonsoft.Json.JsonToken)
extern "C"  int32_t JsonReader_GetTypeForCloseToken_m2733216674 (JsonReader_t1817561742 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Dispose(System.Boolean)
extern "C"  void JsonReader_Dispose_m2361707119 (JsonReader_t1817561742 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Close()
extern "C"  void JsonReader_Close_m3049837201 (JsonReader_t1817561742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
