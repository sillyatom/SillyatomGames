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

// UnityEngine.Analytics.CustomEvent
struct CustomEvent_t2312766398;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Analytics.CustomEvent::.ctor(System.String)
extern "C"  void CustomEvent__ctor_m2864323170 (CustomEvent_t2312766398 * __this, String_t* ___customEventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.CustomEvent::SetEventData(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void CustomEvent_SetEventData_m61333782 (CustomEvent_t2312766398 * __this, Il2CppObject* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
