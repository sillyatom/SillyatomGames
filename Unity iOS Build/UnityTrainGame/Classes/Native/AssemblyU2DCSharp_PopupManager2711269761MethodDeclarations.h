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

// PopupManager
struct PopupManager_t2711269761;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"

// System.Void PopupManager::.ctor()
extern "C"  void PopupManager__ctor_m4087767610 (PopupManager_t2711269761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopupManager::Init()
extern "C"  void PopupManager_Init_m2023062746 (PopupManager_t2711269761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopupManager::AddPopup(UnityEngine.GameObject)
extern "C"  void PopupManager_AddPopup_m2875530957 (PopupManager_t2711269761 * __this, GameObject_t4012695102 * ___popup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopupManager::RemovePopup(UnityEngine.GameObject)
extern "C"  void PopupManager_RemovePopup_m3955612184 (PopupManager_t2711269761 * __this, GameObject_t4012695102 * ___popup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopupManager::RemoveActivePopup()
extern "C"  void PopupManager_RemoveActivePopup_m4117325434 (PopupManager_t2711269761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopupManager::ShowPopup()
extern "C"  void PopupManager_ShowPopup_m867864519 (PopupManager_t2711269761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PopupManager::CreateGenericPopup(System.String,System.String)
extern "C"  GameObject_t4012695102 * PopupManager_CreateGenericPopup_m2827790414 (PopupManager_t2711269761 * __this, String_t* ___header, String_t* ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
