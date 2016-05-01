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

// Newtonsoft.Json.Linq.JProperty
struct JProperty_t2926881078;
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
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JProperty2926881078.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"

// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(Newtonsoft.Json.Linq.JProperty)
extern "C"  void JProperty__ctor_m1736115663 (JProperty_t2926881078 * __this, JProperty_t2926881078 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String)
extern "C"  void JProperty__ctor_m3440048749 (JProperty_t2926881078 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String,System.Object[])
extern "C"  void JProperty__ctor_m1031411417 (JProperty_t2926881078 * __this, String_t* ___name, ObjectU5BU5D_t11523773* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String,System.Object)
extern "C"  void JProperty__ctor_m3647996539 (JProperty_t2926881078 * __this, String_t* ___name, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty::get_ChildrenTokens()
extern "C"  Il2CppObject* JProperty_get_ChildrenTokens_m1382921243 (JProperty_t2926881078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JProperty::get_Name()
extern "C"  String_t* JProperty_get_Name_m2764667942 (JProperty_t2926881078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::get_Value()
extern "C"  JToken_t2367600838 * JProperty_get_Value_m3171771760 (JProperty_t2926881078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::set_Value(Newtonsoft.Json.Linq.JToken)
extern "C"  void JProperty_set_Value_m637899939 (JProperty_t2926881078 * __this, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::GetItem(System.Int32)
extern "C"  JToken_t2367600838 * JProperty_GetItem_m4286853890 (JProperty_t2926881078 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::SetItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JProperty_SetItem_m982472797 (JProperty_t2926881078 * __this, int32_t ___index, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JProperty::RemoveItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JProperty_RemoveItem_m3702404048 (JProperty_t2926881078 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::RemoveItemAt(System.Int32)
extern "C"  void JProperty_RemoveItemAt_m2778348426 (JProperty_t2926881078 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JProperty_InsertItem_m3814345872 (JProperty_t2926881078 * __this, int32_t ___index, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JProperty::ContainsItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JProperty_ContainsItem_m2786010645 (JProperty_t2926881078 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::ClearItems()
extern "C"  void JProperty_ClearItems_m2824977954 (JProperty_t2926881078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JProperty::DeepEquals(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JProperty_DeepEquals_m4287289916 (JProperty_t2926881078 * __this, JToken_t2367600838 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::CloneToken()
extern "C"  JToken_t2367600838 * JProperty_CloneToken_m931887702 (JProperty_t2926881078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JProperty::get_Type()
extern "C"  int32_t JProperty_get_Type_m1975905699 (JProperty_t2926881078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JProperty_WriteTo_m3392406980 (JProperty_t2926881078 * __this, JsonWriter_t1972966974 * ___writer, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JProperty::GetDeepHashCode()
extern "C"  int32_t JProperty_GetDeepHashCode_m705211746 (JProperty_t2926881078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JProperty::Load(Newtonsoft.Json.JsonReader)
extern "C"  JProperty_t2926881078 * JProperty_Load_m416865356 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
