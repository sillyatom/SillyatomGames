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

// ExtMonoBehaviour
struct ExtMonoBehaviour_t2624599193;
// System.Action
struct Action_t437523947;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// GameEvent
struct GameEvent_t2981166504;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"

// System.Void ExtMonoBehaviour::.ctor()
extern "C"  void ExtMonoBehaviour__ctor_m885263906 (ExtMonoBehaviour_t2624599193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExtMonoBehaviour::get_isInitialized()
extern "C"  bool ExtMonoBehaviour_get_isInitialized_m952256653 (ExtMonoBehaviour_t2624599193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExtMonoBehaviour::Init()
extern "C"  void ExtMonoBehaviour_Init_m949924850 (ExtMonoBehaviour_t2624599193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExtMonoBehaviour::OnDestroy()
extern "C"  void ExtMonoBehaviour_OnDestroy_m2310930971 (ExtMonoBehaviour_t2624599193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExtMonoBehaviour::AddListeners()
extern "C"  void ExtMonoBehaviour_AddListeners_m2272350464 (ExtMonoBehaviour_t2624599193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExtMonoBehaviour::RemoveListeners()
extern "C"  void ExtMonoBehaviour_RemoveListeners_m1741366235 (ExtMonoBehaviour_t2624599193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExtMonoBehaviour::DelayedCall(System.Single,System.Action)
extern "C"  void ExtMonoBehaviour_DelayedCall_m1718849090 (ExtMonoBehaviour_t2624599193 * __this, float ___delay, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ExtMonoBehaviour::StartDelay(System.Single,System.Action)
extern "C"  Il2CppObject * ExtMonoBehaviour_StartDelay_m1484571095 (ExtMonoBehaviour_t2624599193 * __this, float ___delay, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExtMonoBehaviour::OnGameEvent(GameEvent)
extern "C"  void ExtMonoBehaviour_OnGameEvent_m1534583617 (ExtMonoBehaviour_t2624599193 * __this, GameEvent_t2981166504 * ___gEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExtMonoBehaviour::OnMoveOutOfView()
extern "C"  void ExtMonoBehaviour_OnMoveOutOfView_m4152219546 (ExtMonoBehaviour_t2624599193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExtMonoBehaviour::OnSetToView()
extern "C"  void ExtMonoBehaviour_OnSetToView_m2578106083 (ExtMonoBehaviour_t2624599193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExtMonoBehaviour::Reset()
extern "C"  void ExtMonoBehaviour_Reset_m2826664143 (ExtMonoBehaviour_t2624599193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
