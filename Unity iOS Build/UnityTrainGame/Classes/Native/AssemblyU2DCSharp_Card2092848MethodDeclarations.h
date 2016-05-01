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

// Card
struct Card_t2092848;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"

// System.Void Card::.ctor()
extern "C"  void Card__ctor_m245477739 (Card_t2092848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Card::get_Value()
extern "C"  String_t* Card_get_Value_m3098864654 (Card_t2092848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::set_Value(System.String)
extern "C"  void Card_set_Value_m1977110853 (Card_t2092848 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Card::get_Type()
extern "C"  String_t* Card_get_Type_m480613471 (Card_t2092848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::set_Type(System.String)
extern "C"  void Card_set_Type_m3950350162 (Card_t2092848 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Card::get_ValueType()
extern "C"  String_t* Card_get_ValueType_m2362782312 (Card_t2092848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::set_ValueType(System.String)
extern "C"  void Card_set_ValueType_m3781852331 (Card_t2092848 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::UpdateCard(System.String,System.String)
extern "C"  void Card_UpdateCard_m75797196 (Card_t2092848 * __this, String_t* ___value, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::UpdateSkin()
extern "C"  void Card_UpdateSkin_m3256011999 (Card_t2092848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::ShowFrontFace()
extern "C"  void Card_ShowFrontFace_m3400762866 (Card_t2092848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::ShowBackFace()
extern "C"  void Card_ShowBackFace_m2874975290 (Card_t2092848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Card_OnPointerClick_m1481370139 (Card_t2092848 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
