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

// SceneMonoBehaviour
struct SceneMonoBehaviour_t4246217742;
// System.String
struct String_t;
// GameEvent
struct GameEvent_t2981166504;
// InGameEvent
struct InGameEvent_t511087107;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"
#include "AssemblyU2DCSharp_InGameEvent511087107.h"

// System.Void SceneMonoBehaviour::.ctor()
extern "C"  void SceneMonoBehaviour__ctor_m3321531469 (SceneMonoBehaviour_t4246217742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMonoBehaviour::Init()
extern "C"  void SceneMonoBehaviour_Init_m1859798119 (SceneMonoBehaviour_t4246217742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMonoBehaviour::AddListeners()
extern "C"  void SceneMonoBehaviour_AddListeners_m2489556085 (SceneMonoBehaviour_t4246217742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMonoBehaviour::RemoveListeners()
extern "C"  void SceneMonoBehaviour_RemoveListeners_m4293273670 (SceneMonoBehaviour_t4246217742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMonoBehaviour::MoveToScene(System.String)
extern "C"  void SceneMonoBehaviour_MoveToScene_m2765100343 (SceneMonoBehaviour_t4246217742 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMonoBehaviour::OnGameEvent(GameEvent)
extern "C"  void SceneMonoBehaviour_OnGameEvent_m641067446 (SceneMonoBehaviour_t4246217742 * __this, GameEvent_t2981166504 * ___gEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMonoBehaviour::OnInGameEvent(InGameEvent)
extern "C"  void SceneMonoBehaviour_OnInGameEvent_m3756406208 (SceneMonoBehaviour_t4246217742 * __this, InGameEvent_t511087107 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
