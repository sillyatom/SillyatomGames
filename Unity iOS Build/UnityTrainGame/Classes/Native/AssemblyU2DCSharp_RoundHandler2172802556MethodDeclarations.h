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

// RoundHandler
struct RoundHandler_t2172802556;
// System.Action
struct Action_t437523947;
// System.String
struct String_t;
// GameEvent
struct GameEvent_t2981166504;
// InGameEvent
struct InGameEvent_t511087107;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"
#include "AssemblyU2DCSharp_InGameEvent511087107.h"

// System.Void RoundHandler::.ctor()
extern "C"  void RoundHandler__ctor_m1935710239 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::.cctor()
extern "C"  void RoundHandler__cctor_m3690346350 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action RoundHandler::get_OnRoundCompleteCallback()
extern "C"  Action_t437523947 * RoundHandler_get_OnRoundCompleteCallback_m3342306211 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::set_OnRoundCompleteCallback(System.Action)
extern "C"  void RoundHandler_set_OnRoundCompleteCallback_m3093727632 (RoundHandler_t2172802556 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoundHandler::get_GetRoundNumber()
extern "C"  int32_t RoundHandler_get_GetRoundNumber_m780187549 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoundHandler::get_GetActivePlayerId()
extern "C"  String_t* RoundHandler_get_GetActivePlayerId_m3690731145 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::set_SetActivePlayerId(System.String)
extern "C"  void RoundHandler_set_SetActivePlayerId_m367756958 (RoundHandler_t2172802556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoundHandler::get_IsActivePlayerLocal()
extern "C"  bool RoundHandler_get_IsActivePlayerLocal_m3242918010 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::Init()
extern "C"  void RoundHandler_Init_m2507830869 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::OnGameEvent(GameEvent)
extern "C"  void RoundHandler_OnGameEvent_m2386591652 (RoundHandler_t2172802556 * __this, GameEvent_t2981166504 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::OnInGameEvent(InGameEvent)
extern "C"  void RoundHandler_OnInGameEvent_m1941447854 (RoundHandler_t2172802556 * __this, InGameEvent_t511087107 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::StartMatch()
extern "C"  void RoundHandler_StartMatch_m3028602888 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::StartRound()
extern "C"  void RoundHandler_StartRound_m3573209489 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::StopTimer()
extern "C"  void RoundHandler_StopTimer_m2741023456 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::StopRound()
extern "C"  void RoundHandler_StopRound_m1145433833 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::StartTimer()
extern "C"  void RoundHandler_StartTimer_m873831816 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::OnRoundEnd()
extern "C"  void RoundHandler_OnRoundEnd_m1197676209 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoundHandler::Update()
extern "C"  void RoundHandler_Update_m1604337358 (RoundHandler_t2172802556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
