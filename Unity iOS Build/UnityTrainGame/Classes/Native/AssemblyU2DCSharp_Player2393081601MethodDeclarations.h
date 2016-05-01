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
// System.String
struct String_t;
// Card
struct Card_t2092848;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Card2092848.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m871706298 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardSelectionHandler Player::get_CardSelectionHandler()
extern "C"  CardSelectionHandler_t2914958190 * Player_get_CardSelectionHandler_m97634160 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Player::get_Cards()
extern "C"  List_1_t799051817 * Player_get_Cards_m2643897007 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Player::get_SelectedCardValueType()
extern "C"  String_t* Player_get_SelectedCardValueType_m3899190188 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Player::get_SelectedCard()
extern "C"  Card_t2092848 * Player_get_SelectedCard_m249687851 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Player::get_GetCardsValueType()
extern "C"  List_1_t1765447871 * Player_get_GetCardsValueType_m1254267132 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Player::GetCardByValueType(System.String)
extern "C"  Card_t2092848 * Player_GetCardByValueType_m2104611901 (Player_t2393081601 * __this, String_t* ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::get_IsLocalPlayer()
extern "C"  bool Player_get_IsLocalPlayer_m840128861 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Init()
extern "C"  void Player_Init_m3304792154 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::AddCard(Card)
extern "C"  void Player_AddCard_m2388479993 (Player_t2393081601 * __this, Card_t2092848 * ___card, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Player::RemoveCardWithValue(System.String)
extern "C"  Card_t2092848 * Player_RemoveCardWithValue_m2478900832 (Player_t2393081601 * __this, String_t* ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetSelectedCard(Card)
extern "C"  void Player_SetSelectedCard_m1287222901 (Player_t2393081601 * __this, Card_t2092848 * ___card, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::AutoDeal()
extern "C"  void Player_AutoDeal_m2757988037 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnRoundResult(System.String)
extern "C"  void Player_OnRoundResult_m2111082430 (Player_t2393081601 * __this, String_t* ___cardValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnRoundEnd()
extern "C"  void Player_OnRoundEnd_m3267062006 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnShout()
extern "C"  void Player_OnShout_m3242061266 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::UpdateAngle(System.Single)
extern "C"  void Player_UpdateAngle_m3770627913 (Player_t2393081601 * __this, float ___startAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::UpdateCardsPosition()
extern "C"  void Player_UpdateCardsPosition_m1738611259 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Player::CalculateCardsHolderBounds()
extern "C"  Vector2_t3525329788  Player_CalculateCardsHolderBounds_m1279546019 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m2979953555 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
