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

// SceneTransitionManager
struct SceneTransitionManager_t1210711436;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"
#include "mscorlib_System_String968488902.h"

// System.Void SceneTransitionManager::.ctor()
extern "C"  void SceneTransitionManager__ctor_m2716382351 (SceneTransitionManager_t1210711436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneTransitionManager::Init()
extern "C"  void SceneTransitionManager_Init_m3225750501 (SceneTransitionManager_t1210711436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneTransitionManager::SetActiveScreen(UnityEngine.RectTransform)
extern "C"  void SceneTransitionManager_SetActiveScreen_m3383367968 (SceneTransitionManager_t1210711436 * __this, RectTransform_t3317474837 * ___screen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneTransitionManager::SetActiveScreen(System.String,System.Boolean)
extern "C"  void SceneTransitionManager_SetActiveScreen_m2555694844 (SceneTransitionManager_t1210711436 * __this, String_t* ___tag, bool ___doInit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneTransitionManager::RearrangeScreens()
extern "C"  void SceneTransitionManager_RearrangeScreens_m1562589827 (SceneTransitionManager_t1210711436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
