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

// UnityEngine.Analytics.GameObserver
struct GameObserver_t3114543933;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1632812876;
// UnityEngine.Analytics.IGameObserverListener
struct IGameObserverListener_t912772570;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Analytics.GameObserver::.ctor()
extern "C"  void GameObserver__ctor_m1427892661 (GameObserver_t3114543933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.GameObserver UnityEngine.Analytics.GameObserver::CreateComponent(UnityEngine.Analytics.IPlatformWrapper,UnityEngine.Analytics.IGameObserverListener)
extern "C"  GameObserver_t3114543933 * GameObserver_CreateComponent_m836205100 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___platformWrapper, Il2CppObject * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::Update()
extern "C"  void GameObserver_Update_m3041861624 (GameObserver_t3114543933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnLevelWasLoaded(System.Int32)
extern "C"  void GameObserver_OnLevelWasLoaded_m2719151081 (GameObserver_t3114543933 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnClick()
extern "C"  void GameObserver_OnClick_m3954484988 (GameObserver_t3114543933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnApplicationPause(System.Boolean)
extern "C"  void GameObserver_OnApplicationPause_m3495924779 (GameObserver_t3114543933 * __this, bool ___didPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnApplicationQuit()
extern "C"  void GameObserver_OnApplicationQuit_m1429368755 (GameObserver_t3114543933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnDestroy()
extern "C"  void GameObserver_OnDestroy_m3167214638 (GameObserver_t3114543933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
