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

// SpinHandler
struct SpinHandler_t631124104;
// System.Collections.Generic.List`1<Card>
struct List_1_t799051817;
// Card
struct Card_t2092848;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Card2092848.h"

// System.Void SpinHandler::.ctor()
extern "C"  void SpinHandler__ctor_m730293219 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> SpinHandler::get_Reel()
extern "C"  List_1_t799051817 * SpinHandler_get_Reel_m550430401 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::set_Reel(System.Collections.Generic.List`1<Card>)
extern "C"  void SpinHandler_set_Reel_m1821242570 (SpinHandler_t631124104 * __this, List_1_t799051817 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpinHandler::get_SelectedIndex()
extern "C"  int32_t SpinHandler_get_SelectedIndex_m802777437 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SpinHandler::get_LastSpinTime()
extern "C"  float SpinHandler_get_LastSpinTime_m1308183651 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::set_LastSpinTime(System.Single)
extern "C"  void SpinHandler_set_LastSpinTime_m2547742312 (SpinHandler_t631124104 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::Init()
extern "C"  void SpinHandler_Init_m2468946449 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::OnSelectedCardDealt()
extern "C"  void SpinHandler_OnSelectedCardDealt_m1781174623 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::InitReel(System.Collections.Generic.List`1<Card>)
extern "C"  void SpinHandler_InitReel_m2997443255 (SpinHandler_t631124104 * __this, List_1_t799051817 * ___symbols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card SpinHandler::GetSymbolAtIndex(System.Int32)
extern "C"  Card_t2092848 * SpinHandler_GetSymbolAtIndex_m192472790 (SpinHandler_t631124104 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::SetSymbolPosition(System.Single,Card)
extern "C"  void SpinHandler_SetSymbolPosition_m370375983 (SpinHandler_t631124104 * __this, float ___pos, Card_t2092848 * ___symbol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::ResetReel()
extern "C"  void SpinHandler_ResetReel_m2050856650 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::Spin(System.Single)
extern "C"  void SpinHandler_Spin_m398190024 (SpinHandler_t631124104 * __this, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::StopSpin()
extern "C"  void SpinHandler_StopSpin_m2757303141 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::OnSpinAnimCompleteDelay()
extern "C"  void SpinHandler_OnSpinAnimCompleteDelay_m1299027833 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::OnSpinAnimComplete()
extern "C"  void SpinHandler_OnSpinAnimComplete_m4048051724 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpinHandler::CanStopSpin()
extern "C"  bool SpinHandler_CanStopSpin_m2854760713 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinHandler::Update()
extern "C"  void SpinHandler_Update_m2891115402 (SpinHandler_t631124104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
