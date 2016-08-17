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

// MainScreen
struct MainScreen_t2442698661;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// GameEvent
struct GameEvent_t2981166504;
// InGameEvent
struct InGameEvent_t511087107;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"
#include "AssemblyU2DCSharp_InGameEvent511087107.h"

// System.Void MainScreen::.ctor()
extern "C"  void MainScreen__ctor_m1707852438 (MainScreen_t2442698661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScreen::Init()
extern "C"  void MainScreen_Init_m3193217278 (MainScreen_t2442698661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScreen::AuthGC()
extern "C"  void MainScreen_AuthGC_m3239920690 (MainScreen_t2442698661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainScreen::StartSignInProcess()
extern "C"  Il2CppObject * MainScreen_StartSignInProcess_m1885858753 (MainScreen_t2442698661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScreen::OnGameEvent(GameEvent)
extern "C"  void MainScreen_OnGameEvent_m3786029133 (MainScreen_t2442698661 * __this, GameEvent_t2981166504 * ___gEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScreen::OnInGameEvent(InGameEvent)
extern "C"  void MainScreen_OnInGameEvent_m349397207 (MainScreen_t2442698661 * __this, InGameEvent_t511087107 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScreen::OnPlay()
extern "C"  void MainScreen_OnPlay_m3220741537 (MainScreen_t2442698661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
