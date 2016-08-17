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

// SinglePlayerMainGame
struct SinglePlayerMainGame_t3863033300;
// System.Object
struct Il2CppObject;
// GameEvent
struct GameEvent_t2981166504;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"

// System.Void SinglePlayerMainGame::.ctor()
extern "C"  void SinglePlayerMainGame__ctor_m725906247 (SinglePlayerMainGame_t3863033300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePlayerMainGame::Init()
extern "C"  void SinglePlayerMainGame_Init_m1637520941 (SinglePlayerMainGame_t3863033300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePlayerMainGame::InitGame()
extern "C"  void SinglePlayerMainGame_InitGame_m2164794303 (SinglePlayerMainGame_t3863033300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePlayerMainGame::UpdatePlayers()
extern "C"  void SinglePlayerMainGame_UpdatePlayers_m18221774 (SinglePlayerMainGame_t3863033300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePlayerMainGame::OnDistributeAllWinningCards(System.Object)
extern "C"  void SinglePlayerMainGame_OnDistributeAllWinningCards_m3377081371 (SinglePlayerMainGame_t3863033300 * __this, Il2CppObject * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SinglePlayerMainGame::GetPrevPlayerIndex()
extern "C"  int32_t SinglePlayerMainGame_GetPrevPlayerIndex_m2147577523 (SinglePlayerMainGame_t3863033300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePlayerMainGame::OnDistributeAllCards()
extern "C"  void SinglePlayerMainGame_OnDistributeAllCards_m2662254623 (SinglePlayerMainGame_t3863033300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePlayerMainGame::OnGameEvent(GameEvent)
extern "C"  void SinglePlayerMainGame_OnGameEvent_m3147165564 (SinglePlayerMainGame_t3863033300 * __this, GameEvent_t2981166504 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SinglePlayerMainGame::AutoPlay()
extern "C"  Il2CppObject * SinglePlayerMainGame_AutoPlay_m469515816 (SinglePlayerMainGame_t3863033300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePlayerMainGame::DispatchNextRound()
extern "C"  void SinglePlayerMainGame_DispatchNextRound_m2268102950 (SinglePlayerMainGame_t3863033300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePlayerMainGame::OnRoundEnd()
extern "C"  void SinglePlayerMainGame_OnRoundEnd_m4277269641 (SinglePlayerMainGame_t3863033300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
