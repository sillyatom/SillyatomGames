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

// Newtonsoft.Json.Linq.JTokenReader
struct JTokenReader_t1263117929;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t103968846;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "mscorlib_System_Nullable_1_gen279627866.h"
#include "mscorlib_System_Nullable_1_gen2303330647.h"
#include "mscorlib_System_Nullable_1_gen3212069384.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JContainer103968846.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Linq.JTokenReader::.ctor(Newtonsoft.Json.Linq.JToken)
extern "C"  void JTokenReader__ctor_m3146962954 (JTokenReader_t1263117929 * __this, JToken_t2367600838 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
extern "C"  bool JTokenReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m3600556638 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
extern "C"  int32_t JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m3610966988 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
extern "C"  int32_t JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m1580292396 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Linq.JTokenReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t58506160* JTokenReader_ReadAsBytes_m2952856715 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.Linq.JTokenReader::ReadAsDecimal()
extern "C"  Nullable_1_t279627866  JTokenReader_ReadAsDecimal_m1214326905 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.Linq.JTokenReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t2303330647  JTokenReader_ReadAsDateTimeOffset_m597993817 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::Read()
extern "C"  bool JTokenReader_Read_m2443153158 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadOver(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JTokenReader_ReadOver_m2908174704 (JTokenReader_t1263117929 * __this, JToken_t2367600838 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadToEnd()
extern "C"  bool JTokenReader_ReadToEnd_m1006903900 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::get_IsEndElement()
extern "C"  bool JTokenReader_get_IsEndElement_m4037807140 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.JsonToken> Newtonsoft.Json.Linq.JTokenReader::GetEndToken(Newtonsoft.Json.Linq.JContainer)
extern "C"  Nullable_1_t3212069384  JTokenReader_GetEndToken_m4080662016 (JTokenReader_t1263117929 * __this, JContainer_t103968846 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadInto(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JTokenReader_ReadInto_m2423463900 (JTokenReader_t1263117929 * __this, JContainer_t103968846 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::SetEnd(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JTokenReader_SetEnd_m2814491769 (JTokenReader_t1263117929 * __this, JContainer_t103968846 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenReader::SetToken(Newtonsoft.Json.Linq.JToken)
extern "C"  void JTokenReader_SetToken_m662224559 (JTokenReader_t1263117929 * __this, JToken_t2367600838 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JTokenReader::SafeToString(System.Object)
extern "C"  String_t* JTokenReader_SafeToString_m2278660250 (JTokenReader_t1263117929 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
