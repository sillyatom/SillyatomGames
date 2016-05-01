﻿#pragma once

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
// Card
struct Card_t2092848;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Card2092848.h"

// System.Void InGameEvent::.ctor(System.String)
extern "C"  void InGameEvent__ctor_m2728077114 (InGameEvent_t511087107 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameEvent::.ctor(System.String,System.String)
extern "C"  void InGameEvent__ctor_m1354375670 (InGameEvent_t511087107 * __this, String_t* ___type, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
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
