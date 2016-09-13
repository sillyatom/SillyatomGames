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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled_pinvoke;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Advertisements.AsyncExec::.cctor()
extern "C"  void AsyncExec__cctor_m2666769919 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MonoBehaviour UnityEngine.Advertisements.AsyncExec::get_coroutineHost()
extern "C"  MonoBehaviour_t3012272455 * AsyncExec_get_coroutineHost_m2018533427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Advertisements.AsyncExec::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t2246592261 * AsyncExec_StartCoroutine_m137798441 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___enumerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
