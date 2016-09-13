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

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t1771086527;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ThreadSafeDictionaryValueFactory_2__ctor_m4269874522_gshared (ThreadSafeDictionaryValueFactory_2_t1771086527 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2__ctor_m4269874522(__this, ___object, ___method, method) ((  void (*) (ThreadSafeDictionaryValueFactory_2_t1771086527 *, Il2CppObject *, IntPtr_t, const MethodInfo*))ThreadSafeDictionaryValueFactory_2__ctor_m4269874522_gshared)(__this, ___object, ___method, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey)
extern "C"  Il2CppObject * ThreadSafeDictionaryValueFactory_2_Invoke_m893533719_gshared (ThreadSafeDictionaryValueFactory_2_t1771086527 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_Invoke_m893533719(__this, ___key, method) ((  Il2CppObject * (*) (ThreadSafeDictionaryValueFactory_2_t1771086527 *, Il2CppObject *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_Invoke_m893533719_gshared)(__this, ___key, method)
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ThreadSafeDictionaryValueFactory_2_BeginInvoke_m3377846226_gshared (ThreadSafeDictionaryValueFactory_2_t1771086527 * __this, Il2CppObject * ___key, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_BeginInvoke_m3377846226(__this, ___key, ___callback, ___object, method) ((  Il2CppObject * (*) (ThreadSafeDictionaryValueFactory_2_t1771086527 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_BeginInvoke_m3377846226_gshared)(__this, ___key, ___callback, ___object, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * ThreadSafeDictionaryValueFactory_2_EndInvoke_m3819842136_gshared (ThreadSafeDictionaryValueFactory_2_t1771086527 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_EndInvoke_m3819842136(__this, ___result, method) ((  Il2CppObject * (*) (ThreadSafeDictionaryValueFactory_2_t1771086527 *, Il2CppObject *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_EndInvoke_m3819842136_gshared)(__this, ___result, method)
