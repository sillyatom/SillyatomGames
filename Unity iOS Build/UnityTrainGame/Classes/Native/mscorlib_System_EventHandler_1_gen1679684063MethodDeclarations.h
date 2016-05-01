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

// System.EventHandler`1<System.Object>
struct EventHandler_1_t1679684063;
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

// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler_1__ctor_m1337593804_gshared (EventHandler_1_t1679684063 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventHandler_1__ctor_m1337593804(__this, ___object, ___method, method) ((  void (*) (EventHandler_1_t1679684063 *, Il2CppObject *, IntPtr_t, const MethodInfo*))EventHandler_1__ctor_m1337593804_gshared)(__this, ___object, ___method, method)
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
extern "C"  void EventHandler_1_Invoke_m2623239957_gshared (EventHandler_1_t1679684063 * __this, Il2CppObject * ___sender, Il2CppObject * ___e, const MethodInfo* method);
#define EventHandler_1_Invoke_m2623239957(__this, ___sender, ___e, method) ((  void (*) (EventHandler_1_t1679684063 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))EventHandler_1_Invoke_m2623239957_gshared)(__this, ___sender, ___e, method)
// System.IAsyncResult System.EventHandler`1<System.Object>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventHandler_1_BeginInvoke_m996893970_gshared (EventHandler_1_t1679684063 * __this, Il2CppObject * ___sender, Il2CppObject * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define EventHandler_1_BeginInvoke_m996893970(__this, ___sender, ___e, ___callback, ___object, method) ((  Il2CppObject * (*) (EventHandler_1_t1679684063 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))EventHandler_1_BeginInvoke_m996893970_gshared)(__this, ___sender, ___e, ___callback, ___object, method)
// System.Void System.EventHandler`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandler_1_EndInvoke_m2479179740_gshared (EventHandler_1_t1679684063 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define EventHandler_1_EndInvoke_m2479179740(__this, ___result, method) ((  void (*) (EventHandler_1_t1679684063 *, Il2CppObject *, const MethodInfo*))EventHandler_1_EndInvoke_m2479179740_gshared)(__this, ___result, method)
