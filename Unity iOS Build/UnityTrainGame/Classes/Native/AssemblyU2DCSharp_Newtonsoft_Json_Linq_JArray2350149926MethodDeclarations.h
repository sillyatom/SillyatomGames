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

// Newtonsoft.Json.Linq.JArray
struct JArray_t2350149926;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t1133600099;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t239125856;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.String
struct String_t;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t1140441370;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JArray2350149926.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"

// System.Void Newtonsoft.Json.Linq.JArray::.ctor()
extern "C"  void JArray__ctor_m2818036547 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(Newtonsoft.Json.Linq.JArray)
extern "C"  void JArray__ctor_m505908391 (JArray_t2350149926 * __this, JArray_t2350149926 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(System.Object[])
extern "C"  void JArray__ctor_m1160401423 (JArray_t2350149926 * __this, ObjectU5BU5D_t11523773* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(System.Object)
extern "C"  void JArray__ctor_m255955761 (JArray_t2350149926 * __this, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
extern "C"  void JArray_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_CopyTo_m3256419700 (JArray_t2350149926 * __this, JTokenU5BU5D_t1133600099* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly()
extern "C"  bool JArray_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_get_IsReadOnly_m1315846294 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::get_ChildrenTokens()
extern "C"  Il2CppObject* JArray_get_ChildrenTokens_m2090035513 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JArray::get_Type()
extern "C"  int32_t JArray_get_Type_m2052067859 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::DeepEquals(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_DeepEquals_m880007346 (JArray_t2350149926 * __this, JToken_t2367600838 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::CloneToken()
extern "C"  JToken_t2367600838 * JArray_CloneToken_m3470042066 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader)
extern "C"  JArray_t2350149926 * JArray_Load_m1319409372 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Parse(System.String)
extern "C"  JArray_t2350149926 * JArray_Parse_m139214627 (Il2CppObject * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::FromObject(System.Object)
extern "C"  JArray_t2350149926 * JArray_FromObject_m3927320085 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::FromObject(System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  JArray_t2350149926 * JArray_FromObject_m1263001474 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o, JsonSerializer_t4019458909 * ___jsonSerializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JArray_WriteTo_m944467282 (JArray_t2350149926 * __this, JsonWriter_t1972966974 * ___writer, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::get_Item(System.Object)
extern "C"  JToken_t2367600838 * JArray_get_Item_m138481154 (JArray_t2350149926 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::set_Item(System.Object,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_set_Item_m807916071 (JArray_t2350149926 * __this, Il2CppObject * ___key, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::get_Item(System.Int32)
extern "C"  JToken_t2367600838 * JArray_get_Item_m2337874723 (JArray_t2350149926 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_set_Item_m3760123174 (JArray_t2350149926 * __this, int32_t ___index, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JArray::IndexOf(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JArray_IndexOf_m2136073010 (JArray_t2350149926 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_Insert_m687796175 (JArray_t2350149926 * __this, int32_t ___index, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::RemoveAt(System.Int32)
extern "C"  void JArray_RemoveAt_m953404681 (JArray_t2350149926 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Add(Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_Add_m2763501608 (JArray_t2350149926 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Clear()
extern "C"  void JArray_Clear_m224169838 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::Contains(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_Contains_m2493935582 (JArray_t2350149926 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::Remove(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_Remove_m3058964633 (JArray_t2350149926 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JArray::GetDeepHashCode()
extern "C"  int32_t JArray_GetDeepHashCode_m2305145420 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
