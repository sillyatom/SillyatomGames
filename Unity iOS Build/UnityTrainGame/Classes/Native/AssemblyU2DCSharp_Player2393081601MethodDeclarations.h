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

// Player
struct Player_t2393081601;
// CardSelectionHandler
struct CardSelectionHandler_t2914958190;
// System.Collections.Generic.List`1<Card>
struct List_1_t799051817;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.String
struct String_t;
// Card
struct Card_t2092848;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_E_PLAYER_TURN3347637793.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Card2092848.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m871706298 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardSelectionHandler Player::get_CardSelectionHandler()
extern "C"  CardSelectionHandler_t2914958190 * Player_get_CardSelectionHandler_m97634160 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Player::get_Cards()
extern "C"  List_1_t799051817 * Player_get_Cards_m2643897007 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Player::get_CardsRewarded()
extern "C"  List_1_t1765447871 * Player_get_CardsRewarded_m1644079663 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_CardsRewarded(System.Collections.Generic.List`1<System.String>)
extern "C"  void Player_set_CardsRewarded_m3167286272 (Player_t2393081601 * __this, List_1_t1765447871 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::get_DidPullOver()
extern "C"  bool Player_get_DidPullOver_m1102557715 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_DidPullOver(System.Boolean)
extern "C"  void Player_set_DidPullOver_m4156915338 (Player_t2393081601 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Player::get_SelectedCardValueType()
extern "C"  String_t* Player_get_SelectedCardValueType_m3899190188 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Player::get_SelectedCard()
extern "C"  Card_t2092848 * Player_get_SelectedCard_m249687851 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetTurnStatus(E_PLAYER_TURN)
extern "C"  void Player_SetTurnStatus_m1956600040 (Player_t2393081601 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetGrayEffectAmount(System.Single)
extern "C"  void Player_SetGrayEffectAmount_m533122949 (Player_t2393081601 * __this, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Player::get_GetCardsValueType()
extern "C"  List_1_t1765447871 * Player_get_GetCardsValueType_m1254267132 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Player::GetCardByValueType(System.String)
extern "C"  Card_t2092848 * Player_GetCardByValueType_m2104611901 (Player_t2393081601 * __this, String_t* ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::get_IsLocalPlayer()
extern "C"  bool Player_get_IsLocalPlayer_m840128861 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnRoundStart()
extern "C"  void Player_OnRoundStart_m4031893565 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::UpdateDP(System.String)
extern "C"  void Player_UpdateDP_m4160431299 (Player_t2393081601 * __this, String_t* ___imagePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Init()
extern "C"  void Player_Init_m3304792154 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::AddCard(Card,System.Boolean)
extern "C"  void Player_AddCard_m3248222820 (Player_t2393081601 * __this, Card_t2092848 * ___card, bool ___updateCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::AddCount(System.Int32)
extern "C"  void Player_AddCount_m531903881 (Player_t2393081601 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::RemoveCount(System.Int32)
extern "C"  void Player_RemoveCount_m737381268 (Player_t2393081601 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::UpdateCount(System.Int32)
extern "C"  void Player_UpdateCount_m2085950255 (Player_t2393081601 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Player::RemoveCardWithValue(System.String,System.Boolean)
extern "C"  Card_t2092848 * Player_RemoveCardWithValue_m1598406941 (Player_t2393081601 * __this, String_t* ___valueType, bool ___updateCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetSelectedCard(Card)
extern "C"  void Player_SetSelectedCard_m1287222901 (Player_t2393081601 * __this, Card_t2092848 * ___card, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::AutoDeal()
extern "C"  void Player_AutoDeal_m2757988037 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnRoundResult(System.String,System.Boolean)
extern "C"  void Player_OnRoundResult_m2417922047 (Player_t2393081601 * __this, String_t* ___cardValueType, bool ___didPullOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnRoundEnd()
extern "C"  void Player_OnRoundEnd_m3267062006 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnPullOver()
extern "C"  void Player_OnPullOver_m568651330 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::UpdateAngle(System.Single)
extern "C"  void Player_UpdateAngle_m3770627913 (Player_t2393081601 * __this, float ___startAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::UpdateCardsPosition()
extern "C"  void Player_UpdateCardsPosition_m1738611259 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::CalculateCardsHolderBounds()
extern "C"  Vector2_t3525329788  Player_CalculateCardsHolderBounds_m1279546019 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m2979953555 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
