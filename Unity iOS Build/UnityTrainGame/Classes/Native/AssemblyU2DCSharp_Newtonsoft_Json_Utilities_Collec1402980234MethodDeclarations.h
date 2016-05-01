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

// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Collections.IList
struct IList_t1612618265;
// System.Collections.IEnumerable
struct IEnumerable_t287189635;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t2996753073;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Utilities.IWrappedList
struct IWrappedList_t1537464753;
// Newtonsoft.Json.Utilities.IWrappedDictionary
struct IWrappedDictionary_t890148009;
// System.Action`2<System.Collections.IList,System.Boolean>
struct Action_2_t2664340510;
// System.Array
struct Il2CppArray;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t718939805;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"

// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsNullOrEmpty(System.Collections.ICollection)
extern "C"  bool CollectionUtils_IsNullOrEmpty_m3143636493 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange(System.Collections.IList,System.Collections.IEnumerable)
extern "C"  void CollectionUtils_AddRange_m2854786381 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initial, Il2CppObject * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Newtonsoft.Json.Utilities.CollectionUtils::CreateGenericList(System.Type)
extern "C"  Il2CppObject * CollectionUtils_CreateGenericList_m326994755 (Il2CppObject * __this /* static, unused */, Type_t * ___listType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Newtonsoft.Json.Utilities.CollectionUtils::CreateGenericDictionary(System.Type,System.Type)
extern "C"  Il2CppObject * CollectionUtils_CreateGenericDictionary_m1909638454 (Il2CppObject * __this /* static, unused */, Type_t * ___keyType, Type_t * ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsListType(System.Type)
extern "C"  bool CollectionUtils_IsListType_m3964571032 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsCollectionType(System.Type)
extern "C"  bool CollectionUtils_IsCollectionType_m957523352 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsDictionaryType(System.Type)
extern "C"  bool CollectionUtils_IsDictionaryType_m1800409760 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedCollection Newtonsoft.Json.Utilities.CollectionUtils::CreateCollectionWrapper(System.Object)
extern "C"  Il2CppObject * CollectionUtils_CreateCollectionWrapper_m1013539234 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedList Newtonsoft.Json.Utilities.CollectionUtils::CreateListWrapper(System.Object)
extern "C"  Il2CppObject * CollectionUtils_CreateListWrapper_m2713470114 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedDictionary Newtonsoft.Json.Utilities.CollectionUtils::CreateDictionaryWrapper(System.Object)
extern "C"  Il2CppObject * CollectionUtils_CreateDictionaryWrapper_m33770898 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.CollectionUtils::CreateAndPopulateList(System.Type,System.Action`2<System.Collections.IList,System.Boolean>)
extern "C"  Il2CppObject * CollectionUtils_CreateAndPopulateList_m3338216615 (Il2CppObject * __this /* static, unused */, Type_t * ___listType, Action_2_t2664340510 * ___populateList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array Newtonsoft.Json.Utilities.CollectionUtils::ToArray(System.Array,System.Type)
extern "C"  Il2CppArray * CollectionUtils_ToArray_m2477951209 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___initial, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> Newtonsoft.Json.Utilities.CollectionUtils::GetDimensions(System.Collections.IList)
extern "C"  Il2CppObject* CollectionUtils_GetDimensions_m2553219236 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array Newtonsoft.Json.Utilities.CollectionUtils::ToMultidimensionalArray(System.Collections.IList,System.Type,System.Int32)
extern "C"  Il2CppArray * CollectionUtils_ToMultidimensionalArray_m3333505339 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values, Type_t * ___type, int32_t ___rank, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.CollectionUtils::JaggedArrayGetValue(System.Collections.IList,System.Int32[])
extern "C"  Il2CppObject * CollectionUtils_JaggedArrayGetValue_m3503854466 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::CopyFromJaggedToMultidimensionalArray(System.Collections.IList,System.Array,System.Int32[])
extern "C"  void CollectionUtils_CopyFromJaggedToMultidimensionalArray_m992916538 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values, Il2CppArray * ___multidimensionalArray, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
