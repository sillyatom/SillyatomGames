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

// GameSelectionScreen
struct GameSelectionScreen_t839734950;
// GameEvent
struct GameEvent_t2981166504;
// InGameEvent
struct InGameEvent_t511087107;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"
#include "AssemblyU2DCSharp_InGameEvent511087107.h"

// System.Void GameSelectionScreen::.ctor()
extern "C"  void GameSelectionScreen__ctor_m2186336133 (GameSelectionScreen_t839734950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::.cctor()
extern "C"  void GameSelectionScreen__cctor_m2869814472 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameSelectionScreen::GetSweepCount()
extern "C"  int32_t GameSelectionScreen_GetSweepCount_m2322534634 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameSelectionScreen::GetEntryFees()
extern "C"  int32_t GameSelectionScreen_GetEntryFees_m821613210 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::Init()
extern "C"  void GameSelectionScreen_Init_m2238820911 (GameSelectionScreen_t839734950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::OnGameEvent(GameEvent)
extern "C"  void GameSelectionScreen_OnGameEvent_m2265499518 (GameSelectionScreen_t839734950 * __this, GameEvent_t2981166504 * ___gEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::OnInGameEvent(InGameEvent)
extern "C"  void GameSelectionScreen_OnInGameEvent_m3171217288 (GameSelectionScreen_t839734950 * __this, InGameEvent_t511087107 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::OnSetToView()
extern "C"  void GameSelectionScreen_OnSetToView_m3351624198 (GameSelectionScreen_t839734950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameSelectionScreen::UpdateIndex(System.Int32)
extern "C"  bool GameSelectionScreen_UpdateIndex_m50862449 (GameSelectionScreen_t839734950 * __this, int32_t ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::UpdateInteractivity()
extern "C"  void GameSelectionScreen_UpdateInteractivity_m3450296901 (GameSelectionScreen_t839734950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::Next()
extern "C"  void GameSelectionScreen_Next_m2374101842 (GameSelectionScreen_t839734950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::Previous()
extern "C"  void GameSelectionScreen_Previous_m1882647382 (GameSelectionScreen_t839734950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::Play()
extern "C"  void GameSelectionScreen_Play_m2437144403 (GameSelectionScreen_t839734950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::MoveBy(System.Single)
extern "C"  void GameSelectionScreen_MoveBy_m1352856932 (GameSelectionScreen_t839734950 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSelectionScreen::OnMoveComplete()
extern "C"  void GameSelectionScreen_OnMoveComplete_m123468040 (GameSelectionScreen_t839734950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
