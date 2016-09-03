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

// InGameEvent
struct InGameEvent_t511087107;
// System.String
struct String_t;
// Player
struct Player_t2393081601;
// Card
struct Card_t2092848;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "AssemblyU2DCSharp_Card2092848.h"

// System.Void InGameEvent::.ctor(System.String)
extern "C"  void InGameEvent__ctor_m2728077114 (InGameEvent_t511087107 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameEvent::.ctor(System.String,System.Int32)
extern "C"  void InGameEvent__ctor_m2522809309 (InGameEvent_t511087107 * __this, String_t* ___type, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameEvent::.ctor(System.String,System.String)
extern "C"  void InGameEvent__ctor_m1354375670 (InGameEvent_t511087107 * __this, String_t* ___type, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameEvent::.ctor(System.String,Player)
extern "C"  void InGameEvent__ctor_m2639266667 (InGameEvent_t511087107 * __this, String_t* ___type, Player_t2393081601 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameEvent::.ctor(System.String,Card)
extern "C"  void InGameEvent__ctor_m3208302044 (InGameEvent_t511087107 * __this, String_t* ___type, Card_t2092848 * ___card, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InGameEvent::get_playerId()
extern "C"  String_t* InGameEvent_get_playerId_m2478433726 (InGameEvent_t511087107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameEvent::set_playerId(System.String)
extern "C"  void InGameEvent_set_playerId_m4245859309 (InGameEvent_t511087107 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card InGameEvent::get_card()
extern "C"  Card_t2092848 * InGameEvent_get_card_m1665257800 (InGameEvent_t511087107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameEvent::set_card(Card)
extern "C"  void InGameEvent_set_card_m1793598009 (InGameEvent_t511087107 * __this, Card_t2092848 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InGameEvent::get_status()
extern "C"  int32_t InGameEvent_get_status_m20898569 (InGameEvent_t511087107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameEvent::set_status(System.Int32)
extern "C"  void InGameEvent_set_status_m3406780060 (InGameEvent_t511087107 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Player InGameEvent::get_player()
extern "C"  Player_t2393081601 * InGameEvent_get_player_m3780532458 (InGameEvent_t511087107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameEvent::set_player(Player)
extern "C"  void InGameEvent_set_player_m1548975449 (InGameEvent_t511087107 * __this, Player_t2393081601 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
