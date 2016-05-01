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

// EventManager
struct EventManager_t1907836883;
// GameEvent
struct GameEvent_t2981166504;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"

// System.Void EventManager::.ctor()
extern "C"  void EventManager__ctor_m3403204648 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::.cctor()
extern "C"  void EventManager__cctor_m1938032773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventManager EventManager::get_instance()
extern "C"  EventManager_t1907836883 * EventManager_get_instance_m1155482276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Raise(GameEvent)
extern "C"  void EventManager_Raise_m2130241432 (EventManager_t1907836883 * __this, GameEvent_t2981166504 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
