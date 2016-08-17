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

// MultiplayerMainGame
struct MultiplayerMainGame_t4046083237;
// System.String
struct String_t;
// InGameEvent
struct InGameEvent_t511087107;
// Player
struct Player_t2393081601;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// ResultVO
struct ResultVO_t4023821238;
// GameEvent
struct GameEvent_t2981166504;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_InGameEvent511087107.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_ResultVO4023821238.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"

// System.Void MultiplayerMainGame::.ctor()
extern "C"  void MultiplayerMainGame__ctor_m3970443366 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MultiplayerMainGame::GetDPPath(System.String)
extern "C"  String_t* MultiplayerMainGame_GetDPPath_m1101217716 (Il2CppObject * __this /* static, unused */, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::Init()
extern "C"  void MultiplayerMainGame_Init_m3127656750 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::InitGame()
extern "C"  void MultiplayerMainGame_InitGame_m1931109952 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnInGameEvent(InGameEvent)
extern "C"  void MultiplayerMainGame_OnInGameEvent_m361302279 (MultiplayerMainGame_t4046083237 * __this, InGameEvent_t511087107 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::DealCard(Player,System.Boolean)
extern "C"  void MultiplayerMainGame_DealCard_m747093444 (MultiplayerMainGame_t4046083237 * __this, Player_t2393081601 * ___player, bool ___isAutoDeal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnDealComplete(System.Object)
extern "C"  void MultiplayerMainGame_OnDealComplete_m1518237874 (MultiplayerMainGame_t4046083237 * __this, Il2CppObject * ___pArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnAutoDealAnimationComplete(System.Object)
extern "C"  void MultiplayerMainGame_OnAutoDealAnimationComplete_m3604132397 (MultiplayerMainGame_t4046083237 * __this, Il2CppObject * ___pArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::CheckWinnings()
extern "C"  void MultiplayerMainGame_CheckWinnings_m3943219407 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnDistributeWinningCard(System.Object)
extern "C"  void MultiplayerMainGame_OnDistributeWinningCard_m2574405840 (MultiplayerMainGame_t4046083237 * __this, Il2CppObject * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MultiplayerMainGame::OnShiftComplete(System.Single)
extern "C"  Il2CppObject * MultiplayerMainGame_OnShiftComplete_m4273595235 (MultiplayerMainGame_t4046083237 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnDistributeAllWinningCards(System.Object)
extern "C"  void MultiplayerMainGame_OnDistributeAllWinningCards_m4220136092 (MultiplayerMainGame_t4046083237 * __this, Il2CppObject * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Player MultiplayerMainGame::GetPlayerById(System.String)
extern "C"  Player_t2393081601 * MultiplayerMainGame_GetPlayerById_m1959206393 (MultiplayerMainGame_t4046083237 * __this, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::DispatchRoundResult(ResultVO)
extern "C"  void MultiplayerMainGame_DispatchRoundResult_m3513127295 (MultiplayerMainGame_t4046083237 * __this, ResultVO_t4023821238 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::DispatchHostSelected()
extern "C"  void MultiplayerMainGame_DispatchHostSelected_m217010395 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::UpdatePlayerCards(System.Int32)
extern "C"  void MultiplayerMainGame_UpdatePlayerCards_m2497097998 (MultiplayerMainGame_t4046083237 * __this, int32_t ___numPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::DispatchCardsData()
extern "C"  void MultiplayerMainGame_DispatchCardsData_m706330263 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::UpdatePlayers()
extern "C"  void MultiplayerMainGame_UpdatePlayers_m104739053 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnGameEvent(GameEvent)
extern "C"  void MultiplayerMainGame_OnGameEvent_m442202237 (MultiplayerMainGame_t4046083237 * __this, GameEvent_t2981166504 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::InitCardsData(GameEvent)
extern "C"  void MultiplayerMainGame_InitCardsData_m3006629097 (MultiplayerMainGame_t4046083237 * __this, GameEvent_t2981166504 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::DistributeFailedCards(System.Int32,System.Object)
extern "C"  void MultiplayerMainGame_DistributeFailedCards_m1378212840 (MultiplayerMainGame_t4046083237 * __this, int32_t ___numPlayers, Il2CppObject * ___oArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnDistributeAllFailedCards(System.Object)
extern "C"  void MultiplayerMainGame_OnDistributeAllFailedCards_m821197137 (MultiplayerMainGame_t4046083237 * __this, Il2CppObject * ___oArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::DistributeCards(System.Int32)
extern "C"  void MultiplayerMainGame_DistributeCards_m772136855 (MultiplayerMainGame_t4046083237 * __this, int32_t ___numPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::ResetScale(System.Object)
extern "C"  void MultiplayerMainGame_ResetScale_m3709387099 (MultiplayerMainGame_t4046083237 * __this, Il2CppObject * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnDistributeAllCards()
extern "C"  void MultiplayerMainGame_OnDistributeAllCards_m4252258592 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnDistributeFailedAnimationComplete(System.Object)
extern "C"  void MultiplayerMainGame_OnDistributeFailedAnimationComplete_m3518080240 (MultiplayerMainGame_t4046083237 * __this, Il2CppObject * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnDistributeAnimationComplete(System.Object)
extern "C"  void MultiplayerMainGame_OnDistributeAnimationComplete_m1894607443 (MultiplayerMainGame_t4046083237 * __this, Il2CppObject * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::DispatchNextRound()
extern "C"  void MultiplayerMainGame_DispatchNextRound_m3515514821 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnRoundEnd()
extern "C"  void MultiplayerMainGame_OnRoundEnd_m3044907722 (MultiplayerMainGame_t4046083237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerMainGame::OnRoundResult(GameEvent)
extern "C"  void MultiplayerMainGame_OnRoundResult_m1984846874 (MultiplayerMainGame_t4046083237 * __this, GameEvent_t2981166504 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
