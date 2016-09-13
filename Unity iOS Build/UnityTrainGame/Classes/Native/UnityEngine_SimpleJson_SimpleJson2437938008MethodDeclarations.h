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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t4110884692;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Char[]
struct CharU5BU5D_t3416858730;
// SimpleJson.JsonArray
struct JsonArray_t2769828783;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Collections.IEnumerable
struct IEnumerable_t287189635;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t1373207638;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Object SimpleJson.SimpleJson::DeserializeObject(System.String)
extern "C"  Il2CppObject * SimpleJson_DeserializeObject_m2622513661 (Il2CppObject * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C"  bool SimpleJson_TryDeserializeObject_m3409014601 (Il2CppObject * __this /* static, unused */, String_t* ___json, Il2CppObject ** ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C"  String_t* SimpleJson_SerializeObject_m471576100 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json, Il2CppObject * ___jsonSerializerStrategy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C"  String_t* SimpleJson_SerializeObject_m290152864 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject* SimpleJson_ParseObject_m3340076222 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C"  JsonArray_t2769828783 * SimpleJson_ParseArray_m740903547 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * SimpleJson_ParseValue_m3072681190 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C"  String_t* SimpleJson_ParseString_m4269726726 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C"  String_t* SimpleJson_ConvertFromUtf32_m1610721511 (Il2CppObject * __this /* static, unused */, int32_t ___utf32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * SimpleJson_ParseNumber_m1686696700 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t SimpleJson_GetLastIndexOfNumber_m3739068370 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C"  void SimpleJson_EatWhitespace_m499340649 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C"  int32_t SimpleJson_LookAhead_m1099107504 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t SimpleJson_NextToken_m647118648 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeValue_m656357451 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___jsonSerializerStrategy, Il2CppObject * ___value, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeObject_m953411705 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___jsonSerializerStrategy, Il2CppObject * ___keys, Il2CppObject * ___values, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeArray_m138026960 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___jsonSerializerStrategy, Il2CppObject * ___anArray, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeString_m1869609533 (Il2CppObject * __this /* static, unused */, String_t* ___aString, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeNumber_m90746391 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___number, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C"  bool SimpleJson_IsNumeric_m2865724665 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C"  Il2CppObject * SimpleJson_get_CurrentJsonSerializerStrategy_m3012545884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C"  PocoJsonSerializerStrategy_t1373207638 * SimpleJson_get_PocoJsonSerializerStrategy_m2944344906 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
