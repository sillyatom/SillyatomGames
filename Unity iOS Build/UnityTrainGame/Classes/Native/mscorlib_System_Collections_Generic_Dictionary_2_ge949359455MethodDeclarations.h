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

// System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>
struct Dictionary_2_t949359455;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Collections.Generic.IDictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>
struct IDictionary_2_t2125025242;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.ICollection`1<Newtonsoft.Json.Schema.JsonSchemaType>
struct ICollection_1_t2722839407;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>[]
struct KeyValuePair_2U5BU5D_t1493737756;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>>
struct IEnumerator_1_t1920997201;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>
struct KeyCollection_t3272634735;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>
struct ValueCollection_t2871496549;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_437890753.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem2257008021.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En716387396.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor()
extern "C"  void Dictionary_2__ctor_m3494754108_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3494754108(__this, method) ((  void (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2__ctor_m3494754108_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m396683187_gshared (Dictionary_2_t949359455 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m396683187(__this, ___comparer, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m396683187_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m3722970076_gshared (Dictionary_2_t949359455 * __this, Il2CppObject* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m3722970076(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3722970076_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1807118989_gshared (Dictionary_2_t949359455 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1807118989(__this, ___capacity, method) ((  void (*) (Dictionary_2_t949359455 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1807118989_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2267065761_gshared (Dictionary_2_t949359455 * __this, Il2CppObject* ___dictionary, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m2267065761(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2267065761_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3692996221_gshared (Dictionary_2_t949359455 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m3692996221(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t949359455 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m3692996221_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3737064338_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3737064338(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3737064338_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2959516754_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2959516754(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2959516754_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m3612130306_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m3612130306(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m3612130306_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m3291203696_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m3291203696(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m3291203696_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2665339557_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2665339557(__this, method) ((  bool (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2665339557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m4142218164_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m4142218164(__this, method) ((  bool (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m4142218164_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1394457804_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1394457804(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t949359455 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1394457804_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1410313073_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1410313073(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1410313073_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3777196096_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3777196096(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3777196096_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2094688950_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2094688950(__this, ___key, method) ((  bool (*) (Dictionary_2_t949359455 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2094688950_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1187063727_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1187063727(__this, ___key, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1187063727_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1582313566_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1582313566(__this, method) ((  bool (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1582313566_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m562885962_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m562885962(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m562885962_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3663288098_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3663288098(__this, method) ((  bool (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3663288098_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4253413573_gshared (Dictionary_2_t949359455 * __this, KeyValuePair_2_t437890753  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4253413573(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t949359455 *, KeyValuePair_2_t437890753 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4253413573_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3683699613_gshared (Dictionary_2_t949359455 * __this, KeyValuePair_2_t437890753  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3683699613(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t949359455 *, KeyValuePair_2_t437890753 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3683699613_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1394874729_gshared (Dictionary_2_t949359455 * __this, KeyValuePair_2U5BU5D_t1493737756* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1394874729(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t949359455 *, KeyValuePair_2U5BU5D_t1493737756*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1394874729_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3509007874_gshared (Dictionary_2_t949359455 * __this, KeyValuePair_2_t437890753  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3509007874(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t949359455 *, KeyValuePair_2_t437890753 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3509007874_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1924706696_gshared (Dictionary_2_t949359455 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1924706696(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1924706696_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3379416963_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3379416963(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3379416963_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3207770176_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3207770176(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3207770176_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3328505115_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3328505115(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3328505115_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m4018214052_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m4018214052(__this, method) ((  int32_t (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_get_Count_m4018214052_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m3840284487_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m3840284487(__this, ___key, method) ((  int32_t (*) (Dictionary_2_t949359455 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m3840284487_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2380436476_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m2380436476(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m2380436476_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1680518836_gshared (Dictionary_2_t949359455 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1680518836(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t949359455 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1680518836_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m346178435_gshared (Dictionary_2_t949359455 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m346178435(__this, ___size, method) ((  void (*) (Dictionary_2_t949359455 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m346178435_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2226863679_gshared (Dictionary_2_t949359455 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2226863679(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2226863679_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t437890753  Dictionary_2_make_pair_m828004235_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m828004235(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t437890753  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m828004235_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m3168070411_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m3168070411(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m3168070411_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m2939687179_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m2939687179(__this /* static, unused */, ___key, ___value, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m2939687179_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2574458032_gshared (Dictionary_2_t949359455 * __this, KeyValuePair_2U5BU5D_t1493737756* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2574458032(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t949359455 *, KeyValuePair_2U5BU5D_t1493737756*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2574458032_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Resize()
extern "C"  void Dictionary_2_Resize_m1020991612_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1020991612(__this, method) ((  void (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_Resize_m1020991612_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1668145401_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1668145401(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_Add_m1668145401_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Clear()
extern "C"  void Dictionary_2_Clear_m900887399_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m900887399(__this, method) ((  void (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_Clear_m900887399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m4012308877_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m4012308877(__this, ___key, method) ((  bool (*) (Dictionary_2_t949359455 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m4012308877_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2636168973_gshared (Dictionary_2_t949359455 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2636168973(__this, ___value, method) ((  bool (*) (Dictionary_2_t949359455 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m2636168973_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m600056026_gshared (Dictionary_2_t949359455 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m600056026(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t949359455 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m600056026_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2511439306_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2511439306(__this, ___sender, method) ((  void (*) (Dictionary_2_t949359455 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2511439306_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2891758403_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m2891758403(__this, ___key, method) ((  bool (*) (Dictionary_2_t949359455 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m2891758403_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2992338150_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2992338150(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t949359455 *, Il2CppObject *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m2992338150_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::get_Keys()
extern "C"  KeyCollection_t3272634735 * Dictionary_2_get_Keys_m360154201_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m360154201(__this, method) ((  KeyCollection_t3272634735 * (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_get_Keys_m360154201_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::get_Values()
extern "C"  ValueCollection_t2871496549 * Dictionary_2_get_Values_m2297627801_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2297627801(__this, method) ((  ValueCollection_t2871496549 * (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_get_Values_m2297627801_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m2617929318_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2617929318(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t949359455 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2617929318_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m1252001318_gshared (Dictionary_2_t949359455 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1252001318(__this, ___value, method) ((  int32_t (*) (Dictionary_2_t949359455 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1252001318_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1145196838_gshared (Dictionary_2_t949359455 * __this, KeyValuePair_2_t437890753  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1145196838(__this, ___pair, method) ((  bool (*) (Dictionary_2_t949359455 *, KeyValuePair_2_t437890753 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1145196838_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::GetEnumerator()
extern "C"  Enumerator_t716387397  Dictionary_2_GetEnumerator_m32373825_gshared (Dictionary_2_t949359455 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m32373825(__this, method) ((  Enumerator_t716387397  (*) (Dictionary_2_t949359455 *, const MethodInfo*))Dictionary_2_GetEnumerator_m32373825_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m316044112_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m316044112(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m316044112_gshared)(__this /* static, unused */, ___key, ___value, method)
