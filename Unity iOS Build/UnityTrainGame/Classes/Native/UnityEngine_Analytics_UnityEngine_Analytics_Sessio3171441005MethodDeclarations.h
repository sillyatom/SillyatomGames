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

// UnityEngine.Analytics.SessionValues
struct SessionValues_t3171441005;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t2243436510;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Analytics.SessionValues::.ctor(UnityEngine.Analytics.ICloudService,System.String)
extern "C"  void SessionValues__ctor_m1586195 (SessionValues_t3171441005 * __this, Il2CppObject * ___cloudService, String_t* ___valueFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void SessionValues__ctor_m4006777323 (SessionValues_t3171441005 * __this, Il2CppObject* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::.ctor(System.String)
extern "C"  void SessionValues__ctor_m1194183761 (SessionValues_t3171441005 * __this, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::PutItems(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void SessionValues_PutItems_m1966795416 (SessionValues_t3171441005 * __this, Il2CppObject* ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::PutItems(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Boolean)
extern "C"  void SessionValues_PutItems_m2117068261 (SessionValues_t3171441005 * __this, Il2CppObject* ___items, bool ___saveOnValueChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::PutItem(System.String,System.Object)
extern "C"  void SessionValues_PutItem_m127069567 (SessionValues_t3171441005 * __this, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::PutItem(System.String,System.Object,System.Boolean)
extern "C"  void SessionValues_PutItem_m2670909470 (SessionValues_t3171441005 * __this, String_t* ___name, Il2CppObject * ___value, bool ___saveOnValueChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionValues::TryGetBool(System.String,System.Boolean)
extern "C"  bool SessionValues_TryGetBool_m1296924381 (SessionValues_t3171441005 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionValues::TryGetInt(System.String,System.Int32)
extern "C"  int32_t SessionValues_TryGetInt_m3659547912 (SessionValues_t3171441005 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Analytics.SessionValues::TryGetLong(System.String,System.Int64)
extern "C"  int64_t SessionValues_TryGetLong_m25919055 (SessionValues_t3171441005 * __this, String_t* ___name, int64_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionValues::TryGetString(System.String,System.String)
extern "C"  String_t* SessionValues_TryGetString_m350580258 (SessionValues_t3171441005 * __this, String_t* ___name, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> UnityEngine.Analytics.SessionValues::TryGetStringList(System.String,System.Collections.Generic.List`1<System.String>)
extern "C"  List_1_t1765447871 * SessionValues_TryGetStringList_m3634692450 (SessionValues_t3171441005 * __this, String_t* ___name, List_1_t1765447871 * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Analytics.SessionValues::TryGetStringArray(System.String,System.String[])
extern "C"  StringU5BU5D_t2956870243* SessionValues_TryGetStringArray_m4073771359 (SessionValues_t3171441005 * __this, String_t* ___name, StringU5BU5D_t2956870243* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> UnityEngine.Analytics.SessionValues::TryGetIntList(System.String,System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t3644373756 * SessionValues_TryGetIntList_m3872360570 (SessionValues_t3171441005 * __this, String_t* ___name, List_1_t3644373756 * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Analytics.SessionValues::TryGetIntArray(System.String,System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* SessionValues_TryGetIntArray_m4062138141 (SessionValues_t3171441005 * __this, String_t* ___name, Int32U5BU5D_t1809983122* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.SessionValues UnityEngine.Analytics.SessionValues::TryGetValue(System.String)
extern "C"  SessionValues_t3171441005 * SessionValues_TryGetValue_m1484383459 (SessionValues_t3171441005 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionValues::Restore(System.String)
extern "C"  bool SessionValues_Restore_m1677995279 (SessionValues_t3171441005 * __this, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionValues::Restore()
extern "C"  bool SessionValues_Restore_m753836243 (SessionValues_t3171441005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionValues::Save()
extern "C"  bool SessionValues_Save_m419626234 (SessionValues_t3171441005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionValues::<TryGetIntArray>m__0(System.Int64)
extern "C"  int32_t SessionValues_U3CTryGetIntArrayU3Em__0_m2570260981 (Il2CppObject * __this /* static, unused */, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
