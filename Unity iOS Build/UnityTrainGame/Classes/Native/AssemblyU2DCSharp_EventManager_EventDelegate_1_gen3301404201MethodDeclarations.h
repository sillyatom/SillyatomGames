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

// EventManager/EventDelegate`1<System.Object>
struct EventDelegate_1_t3301404201;
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

// System.Void EventManager/EventDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventDelegate_1__ctor_m4231268031_gshared (EventDelegate_1_t3301404201 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventDelegate_1__ctor_m4231268031(__this, ___object, ___method, method) ((  void (*) (EventDelegate_1_t3301404201 *, Il2CppObject *, IntPtr_t, const MethodInfo*))EventDelegate_1__ctor_m4231268031_gshared)(__this, ___object, ___method, method)
// System.Void EventManager/EventDelegate`1<System.Object>::Invoke(T)
extern "C"  void EventDelegate_1_Invoke_m540564645_gshared (EventDelegate_1_t3301404201 * __this, Il2CppObject * ___e, const MethodInfo* method);
#define EventDelegate_1_Invoke_m540564645(__this, ___e, method) ((  void (*) (EventDelegate_1_t3301404201 *, Il2CppObject *, const MethodInfo*))EventDelegate_1_Invoke_m540564645_gshared)(__this, ___e, method)
// System.IAsyncResult EventManager/EventDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventDelegate_1_BeginInvoke_m3667145466_gshared (EventDelegate_1_t3301404201 * __this, Il2CppObject * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define EventDelegate_1_BeginInvoke_m3667145466(__this, ___e, ___callback, ___object, method) ((  Il2CppObject * (*) (EventDelegate_1_t3301404201 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))EventDelegate_1_BeginInvoke_m3667145466_gshared)(__this, ___e, ___callback, ___object, method)
// System.Void EventManager/EventDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void EventDelegate_1_EndInvoke_m3034493007_gshared (EventDelegate_1_t3301404201 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define EventDelegate_1_EndInvoke_m3034493007(__this, ___result, method) ((  void (*) (EventDelegate_1_t3301404201 *, Il2CppObject *, const MethodInfo*))EventDelegate_1_EndInvoke_m3034493007_gshared)(__this, ___result, method)
