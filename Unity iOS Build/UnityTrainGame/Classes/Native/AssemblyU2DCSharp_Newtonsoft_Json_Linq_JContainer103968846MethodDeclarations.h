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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_t103968846;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t1133600099;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t944787898;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JContainer103968846.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JEnumerable_724515125.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"

// System.Void Newtonsoft.Json.Linq.JContainer::.ctor()
extern "C"  void JContainer__ctor_m4013080987 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::.ctor(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JContainer__ctor_m3259796135 (JContainer_t103968846 * __this, JContainer_t103968846 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_IndexOf_m4062300942 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_Insert_m1915937323 (JContainer_t103968846 * __this, int32_t ___index, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt(System.Int32)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_RemoveAt_m2431908453 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item(System.Int32)
extern "C"  JToken_t2367600838 * JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_get_Item_m3806947135 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_set_Item_m2887760002 (JContainer_t103968846 * __this, int32_t ___index, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add(Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Add_m390893316 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear()
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Clear_m3737391378 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Contains_m3190548098 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_CopyTo_m985316380 (JContainer_t103968846 * __this, JTokenU5BU5D_t1133600099* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly()
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_get_IsReadOnly_m2026722110 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Remove_m860809277 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Add(System.Object)
extern "C"  int32_t JContainer_System_Collections_IList_Add_m2948342231 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Clear()
extern "C"  void JContainer_System_Collections_IList_Clear_m1504571159 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Contains(System.Object)
extern "C"  bool JContainer_System_Collections_IList_Contains_m3530825481 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t JContainer_System_Collections_IList_IndexOf_m4258895023 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void JContainer_System_Collections_IList_Insert_m1183016624 (JContainer_t103968846 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_IsFixedSize()
extern "C"  bool JContainer_System_Collections_IList_get_IsFixedSize_m1167984952 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_IsReadOnly()
extern "C"  bool JContainer_System_Collections_IList_get_IsReadOnly_m2431348417 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Remove(System.Object)
extern "C"  void JContainer_System_Collections_IList_Remove_m2673812600 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void JContainer_System_Collections_IList_RemoveAt_m2869167680 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * JContainer_System_Collections_IList_get_Item_m3847900858 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void JContainer_System_Collections_IList_set_Item_m3621561991 (JContainer_t103968846 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void JContainer_System_Collections_ICollection_CopyTo_m1381399561 (JContainer_t103968846 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool JContainer_System_Collections_ICollection_get_IsSynchronized_m3067801523 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * JContainer_System_Collections_ICollection_get_SyncRoot_m2787249651 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::CheckReentrancy()
extern "C"  void JContainer_CheckReentrancy_m3679615134 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::get_HasValues()
extern "C"  bool JContainer_get_HasValues_m1725254496 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::ContentsEqual(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JContainer_ContentsEqual_m886382491 (JContainer_t103968846 * __this, JContainer_t103968846 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::get_First()
extern "C"  JToken_t2367600838 * JContainer_get_First_m554020555 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::get_Last()
extern "C"  JToken_t2367600838 * JContainer_get_Last_m736476093 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::Children()
extern "C"  JEnumerable_1_t724515125  JContainer_Children_m4135644061 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::Descendants()
extern "C"  Il2CppObject* JContainer_Descendants_m3165833315 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::IsMultiContent(System.Object)
extern "C"  bool JContainer_IsMultiContent_m1059755285 (JContainer_t103968846 * __this, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::EnsureParentToken(Newtonsoft.Json.Linq.JToken)
extern "C"  JToken_t2367600838 * JContainer_EnsureParentToken_m1817047029 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::IndexOfItem(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JContainer_IndexOfItem_m570137607 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_InsertItem_m250018666 (JContainer_t103968846 * __this, int32_t ___index, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::RemoveItemAt(System.Int32)
extern "C"  void JContainer_RemoveItemAt_m4019111652 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::RemoveItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_RemoveItem_m1201751710 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::GetItem(System.Int32)
extern "C"  JToken_t2367600838 * JContainer_GetItem_m2662951902 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::SetItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_SetItem_m1866115011 (JContainer_t103968846 * __this, int32_t ___index, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ClearItems()
extern "C"  void JContainer_ClearItems_m3906588412 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReplaceItem(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_ReplaceItem_m3610202670 (JContainer_t103968846 * __this, JToken_t2367600838 * ___existing, JToken_t2367600838 * ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::ContainsItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_ContainsItem_m545832291 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::CopyItemsTo(System.Array,System.Int32)
extern "C"  void JContainer_CopyItemsTo_m3933300786 (JContainer_t103968846 * __this, Il2CppArray * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::IsTokenUnchanged(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_IsTokenUnchanged_m3217675789 (Il2CppObject * __this /* static, unused */, JToken_t2367600838 * ___currentValue, JToken_t2367600838 * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ValidateToken(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_ValidateToken_m4251267346 (JContainer_t103968846 * __this, JToken_t2367600838 * ___o, JToken_t2367600838 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::Add(System.Object)
extern "C"  void JContainer_Add_m1908593338 (JContainer_t103968846 * __this, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::AddFirst(System.Object)
extern "C"  void JContainer_AddFirst_m2431705468 (JContainer_t103968846 * __this, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::AddInternal(System.Int32,System.Object)
extern "C"  void JContainer_AddInternal_m1074192214 (JContainer_t103968846 * __this, int32_t ___index, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::CreateFromContent(System.Object)
extern "C"  JToken_t2367600838 * JContainer_CreateFromContent_m3830878173 (JContainer_t103968846 * __this, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonWriter Newtonsoft.Json.Linq.JContainer::CreateWriter()
extern "C"  JsonWriter_t1972966974 * JContainer_CreateWriter_m2310930635 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReplaceAll(System.Object)
extern "C"  void JContainer_ReplaceAll_m130114558 (JContainer_t103968846 * __this, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::RemoveAll()
extern "C"  void JContainer_RemoveAll_m3062163958 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReadTokenFrom(Newtonsoft.Json.JsonReader)
extern "C"  void JContainer_ReadTokenFrom_m2101086822 (JContainer_t103968846 * __this, JsonReader_t1817561742 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReadContentFrom(Newtonsoft.Json.JsonReader)
extern "C"  void JContainer_ReadContentFrom_m1664982118 (JContainer_t103968846 * __this, JsonReader_t1817561742 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::ContentsHashCode()
extern "C"  int32_t JContainer_ContentsHashCode_m256434064 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::EnsureValue(System.Object)
extern "C"  JToken_t2367600838 * JContainer_EnsureValue_m452595869 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::get_Count()
extern "C"  int32_t JContainer_get_Count_m2101807405 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
