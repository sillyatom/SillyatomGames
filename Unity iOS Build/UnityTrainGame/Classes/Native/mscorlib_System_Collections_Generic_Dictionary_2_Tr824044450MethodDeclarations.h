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

// System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>
struct Transform_1_t824044450;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Utilities_Conver3846323878.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1430393155_gshared (Transform_1_t824044450 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1430393155(__this, ___object, ___method, method) ((  void (*) (Transform_1_t824044450 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1430393155_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>::Invoke(TKey,TValue)
extern "C"  TypeConvertKey_t3846323878  Transform_1_Invoke_m1444894809_gshared (Transform_1_t824044450 * __this, TypeConvertKey_t3846323878  ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1444894809(__this, ___key, ___value, method) ((  TypeConvertKey_t3846323878  (*) (Transform_1_t824044450 *, TypeConvertKey_t3846323878 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1444894809_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1505448888_gshared (Transform_1_t824044450 * __this, TypeConvertKey_t3846323878  ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1505448888(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t824044450 *, TypeConvertKey_t3846323878 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1505448888_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>::EndInvoke(System.IAsyncResult)
extern "C"  TypeConvertKey_t3846323878  Transform_1_EndInvoke_m3100034705_gshared (Transform_1_t824044450 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3100034705(__this, ___result, method) ((  TypeConvertKey_t3846323878  (*) (Transform_1_t824044450 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3100034705_gshared)(__this, ___result, method)
