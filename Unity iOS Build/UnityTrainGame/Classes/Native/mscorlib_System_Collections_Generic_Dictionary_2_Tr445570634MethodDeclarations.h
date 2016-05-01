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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>>
struct Transform_1_t445570634;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_833222460.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_Js2652339728.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3099390276_gshared (Transform_1_t445570634 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3099390276(__this, ___object, ___method, method) ((  void (*) (Transform_1_t445570634 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3099390276_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t833222460  Transform_1_Invoke_m200965556_gshared (Transform_1_t445570634 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m200965556(__this, ___key, ___value, method) ((  KeyValuePair_2_t833222460  (*) (Transform_1_t445570634 *, Il2CppObject *, int32_t, const MethodInfo*))Transform_1_Invoke_m200965556_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m79763039_gshared (Transform_1_t445570634 * __this, Il2CppObject * ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m79763039(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t445570634 *, Il2CppObject *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m79763039_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t833222460  Transform_1_EndInvoke_m3306703446_gshared (Transform_1_t445570634 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3306703446(__this, ___result, method) ((  KeyValuePair_2_t833222460  (*) (Transform_1_t445570634 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3306703446_gshared)(__this, ___result, method)
