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

// Newtonsoft.Json.Linq.JConstructor
struct JConstructor_t1209704007;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t239125856;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t1140441370;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JConstructo1209704007.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"

// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor()
extern "C"  void JConstructor__ctor_m3946107906 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(Newtonsoft.Json.Linq.JConstructor)
extern "C"  void JConstructor__ctor_m1250314503 (JConstructor_t1209704007 * __this, JConstructor_t1209704007 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(System.String,System.Object[])
extern "C"  void JConstructor__ctor_m1890317484 (JConstructor_t1209704007 * __this, String_t* ___name, ObjectU5BU5D_t11523773* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(System.String,System.Object)
extern "C"  void JConstructor__ctor_m1628780814 (JConstructor_t1209704007 * __this, String_t* ___name, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(System.String)
extern "C"  void JConstructor__ctor_m778100288 (JConstructor_t1209704007 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JConstructor::get_ChildrenTokens()
extern "C"  Il2CppObject* JConstructor_get_ChildrenTokens_m2882883162 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JConstructor::get_Name()
extern "C"  String_t* JConstructor_get_Name_m3112763411 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::set_Name(System.String)
extern "C"  void JConstructor_set_Name_m873303160 (JConstructor_t1209704007 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JConstructor::get_Type()
extern "C"  int32_t JConstructor_get_Type_m3771393460 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JConstructor::DeepEquals(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JConstructor_DeepEquals_m5817969 (JConstructor_t1209704007 * __this, JToken_t2367600838 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JConstructor::CloneToken()
extern "C"  JToken_t2367600838 * JConstructor_CloneToken_m428555955 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JConstructor_WriteTo_m1472933265 (JConstructor_t1209704007 * __this, JsonWriter_t1972966974 * ___writer, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JConstructor::get_Item(System.Object)
extern "C"  JToken_t2367600838 * JConstructor_get_Item_m2959641729 (JConstructor_t1209704007 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::set_Item(System.Object,Newtonsoft.Json.Linq.JToken)
extern "C"  void JConstructor_set_Item_m2849370214 (JConstructor_t1209704007 * __this, Il2CppObject * ___key, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JConstructor::GetDeepHashCode()
extern "C"  int32_t JConstructor_GetDeepHashCode_m1003107787 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JConstructor Newtonsoft.Json.Linq.JConstructor::Load(Newtonsoft.Json.JsonReader)
extern "C"  JConstructor_t1209704007 * JConstructor_Load_m679228766 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
