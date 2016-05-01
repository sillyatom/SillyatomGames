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

// EventManager/EventDelegate
struct EventDelegate_t4004424223;
// System.Object
struct Il2CppObject;
// GameEvent
struct GameEvent_t2981166504;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void EventManager/EventDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EventDelegate__ctor_m4124179978 (EventDelegate_t4004424223 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager/EventDelegate::Invoke(GameEvent)
extern "C"  void EventDelegate_Invoke_m918255398 (EventDelegate_t4004424223 * __this, GameEvent_t2981166504 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventDelegate_t4004424223(Il2CppObject* delegate, GameEvent_t2981166504 * ___e);
// System.IAsyncResult EventManager/EventDelegate::BeginInvoke(GameEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventDelegate_BeginInvoke_m1563626523 (EventDelegate_t4004424223 * __this, GameEvent_t2981166504 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager/EventDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void EventDelegate_EndInvoke_m2568619290 (EventDelegate_t4004424223 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
