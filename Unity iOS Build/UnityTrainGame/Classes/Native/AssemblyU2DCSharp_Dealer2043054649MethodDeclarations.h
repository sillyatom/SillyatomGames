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

// Dealer
struct Dealer_t2043054649;
// System.Collections.Generic.List`1<Card>
struct List_1_t799051817;
// Card
struct Card_t2092848;
// System.String
struct String_t;
// ResultVO
struct ResultVO_t4023821238;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Card2092848.h"

// System.Void Dealer::.ctor()
extern "C"  void Dealer__ctor_m1821788802 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Dealer::get_Cards()
extern "C"  List_1_t799051817 * Dealer_get_Cards_m624206455 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Dealer::set_Cards(System.Collections.Generic.List`1<Card>)
extern "C"  void Dealer_set_Cards_m320147516 (Dealer_t2043054649 * __this, List_1_t799051817 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Dealer::Init()
extern "C"  void Dealer_Init_m425946002 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Dealer::Reset()
extern "C"  void Dealer_Reset_m3763189039 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Dealer::GetDeckSize()
extern "C"  int32_t Dealer_GetDeckSize_m1851388114 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Dealer::SetGrayEffect(System.Single)
extern "C"  void Dealer_SetGrayEffect_m507993717 (Dealer_t2043054649 * __this, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Dealer::PopBack()
extern "C"  Card_t2092848 * Dealer_PopBack_m1962333771 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Dealer::RemoveCardByValueType(System.String)
extern "C"  Card_t2092848 * Dealer_RemoveCardByValueType_m2372030607 (Dealer_t2043054649 * __this, String_t* ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Dealer::ShuffleCards()
extern "C"  void Dealer_ShuffleCards_m452971244 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Dealer::ShiftCards()
extern "C"  float Dealer_ShiftCards_m1364653135 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Dealer::GetPositionForIndex(System.Int32)
extern "C"  Vector3_t3525329789  Dealer_GetPositionForIndex_m2589089215 (Dealer_t2043054649 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Dealer::MoveCardToPosition(Card,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  void Dealer_MoveCardToPosition_m1759962004 (Dealer_t2043054649 * __this, Card_t2092848 * ___card, Vector3_t3525329789  ___pos, float ___time, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Dealer::AddCard(Card)
extern "C"  void Dealer_AddCard_m2791077313 (Dealer_t2043054649 * __this, Card_t2092848 * ___card, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Dealer::CreateCards(System.Int32)
extern "C"  void Dealer_CreateCards_m4016770360 (Dealer_t2043054649 * __this, int32_t ___numOfPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Dealer::HasMatch()
extern "C"  bool Dealer_HasMatch_m3915893825 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ResultVO Dealer::GetResult()
extern "C"  ResultVO_t4023821238 * Dealer_GetResult_m3792994124 (Dealer_t2043054649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
