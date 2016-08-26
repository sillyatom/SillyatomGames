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

// HUD
struct HUD_t71895;
// GameEvent
struct GameEvent_t2981166504;
// LocalPlayerModelVO
struct LocalPlayerModelVO_t4243963894;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"
#include "AssemblyU2DCSharp_LocalPlayerModelVO4243963894.h"

// System.Void HUD::.ctor()
extern "C"  void HUD__ctor_m2039008372 (HUD_t71895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUD::Init()
extern "C"  void HUD_Init_m3758089056 (HUD_t71895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUD::OnGameEvent(GameEvent)
extern "C"  void HUD_OnGameEvent_m4187518639 (HUD_t71895 * __this, GameEvent_t2981166504 * ___gEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUD::UpdateModel(LocalPlayerModelVO)
extern "C"  void HUD_UpdateModel_m758038332 (HUD_t71895 * __this, LocalPlayerModelVO_t4243963894 * ___vo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
