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

// Newtonsoft.Json.Linq.JValue
struct JValue_t2369032254;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Uri
struct Uri_t2776692961;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t1140441370;
// System.IFormatProvider
struct IFormatProvider_t3436592966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JValue2369032254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Guid2778838590.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "mscorlib_System_Nullable_1_gen3542462004.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"

// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Object,Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JValue__ctor_m1246320787 (JValue_t2369032254 * __this, Il2CppObject * ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(Newtonsoft.Json.Linq.JValue)
extern "C"  void JValue__ctor_m1552139175 (JValue_t2369032254 * __this, JValue_t2369032254 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Int64)
extern "C"  void JValue__ctor_m2947450749 (JValue_t2369032254 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.UInt64)
extern "C"  void JValue__ctor_m2173799216 (JValue_t2369032254 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Double)
extern "C"  void JValue__ctor_m1065028087 (JValue_t2369032254 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.DateTime)
extern "C"  void JValue__ctor_m1836641197 (JValue_t2369032254 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Boolean)
extern "C"  void JValue__ctor_m3597696354 (JValue_t2369032254 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.String)
extern "C"  void JValue__ctor_m1633267127 (JValue_t2369032254 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Guid)
extern "C"  void JValue__ctor_m1063262719 (JValue_t2369032254 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Uri)
extern "C"  void JValue__ctor_m2112922910 (JValue_t2369032254 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.TimeSpan)
extern "C"  void JValue__ctor_m2121436945 (JValue_t2369032254 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Object)
extern "C"  void JValue__ctor_m1855377481 (JValue_t2369032254 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t JValue_System_IComparable_CompareTo_m1767108947 (JValue_t2369032254 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::DeepEquals(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JValue_DeepEquals_m3930035354 (JValue_t2369032254 * __this, JToken_t2367600838 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::get_HasValues()
extern "C"  bool JValue_get_HasValues_m4064322288 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::Compare(Newtonsoft.Json.Linq.JTokenType,System.Object,System.Object)
extern "C"  int32_t JValue_Compare_m114514864 (Il2CppObject * __this /* static, unused */, int32_t ___valueType, Il2CppObject * ___objA, Il2CppObject * ___objB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::CompareFloat(System.Object,System.Object)
extern "C"  int32_t JValue_CompareFloat_m1448268672 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___objA, Il2CppObject * ___objB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JValue::CloneToken()
extern "C"  JToken_t2367600838 * JValue_CloneToken_m1449425130 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateComment(System.String)
extern "C"  JValue_t2369032254 * JValue_CreateComment_m1421088579 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateString(System.String)
extern "C"  JValue_t2369032254 * JValue_CreateString_m2955768687 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::GetValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType>,System.Object)
extern "C"  int32_t JValue_GetValueType_m3860067780 (Il2CppObject * __this /* static, unused */, Nullable_1_t3542462004  ___current, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::GetStringValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType>)
extern "C"  int32_t JValue_GetStringValueType_m2661569061 (Il2CppObject * __this /* static, unused */, Nullable_1_t3542462004  ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::get_Type()
extern "C"  int32_t JValue_get_Type_m92425515 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JValue::get_Value()
extern "C"  Il2CppObject * JValue_get_Value_m3578355014 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::set_Value(System.Object)
extern "C"  void JValue_set_Value_m3011325463 (JValue_t2369032254 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JValue_WriteTo_m1810349370 (JValue_t2369032254 * __this, JsonWriter_t1972966974 * ___writer, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::GetDeepHashCode()
extern "C"  int32_t JValue_GetDeepHashCode_m73880628 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::ValuesEquals(Newtonsoft.Json.Linq.JValue,Newtonsoft.Json.Linq.JValue)
extern "C"  bool JValue_ValuesEquals_m139630744 (Il2CppObject * __this /* static, unused */, JValue_t2369032254 * ___v1, JValue_t2369032254 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::Equals(Newtonsoft.Json.Linq.JValue)
extern "C"  bool JValue_Equals_m1702790830 (JValue_t2369032254 * __this, JValue_t2369032254 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::Equals(System.Object)
extern "C"  bool JValue_Equals_m3343276944 (JValue_t2369032254 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::GetHashCode()
extern "C"  int32_t JValue_GetHashCode_m3044702248 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString()
extern "C"  String_t* JValue_ToString_m3436326050 (JValue_t2369032254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.String)
extern "C"  String_t* JValue_ToString_m4224747936 (JValue_t2369032254 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.IFormatProvider)
extern "C"  String_t* JValue_ToString_m1959234576 (JValue_t2369032254 * __this, Il2CppObject * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* JValue_ToString_m1582317396 (JValue_t2369032254 * __this, String_t* ___format, Il2CppObject * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::CompareTo(Newtonsoft.Json.Linq.JValue)
extern "C"  int32_t JValue_CompareTo_m2626646203 (JValue_t2369032254 * __this, JValue_t2369032254 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
