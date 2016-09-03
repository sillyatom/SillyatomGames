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

// Trains
struct Trains_t2513124235;
// Train
struct Train_t81068520;
// GameEvent
struct GameEvent_t2981166504;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"

// System.Void Trains::.ctor()
extern "C"  void Trains__ctor_m2614031728 (Trains_t2513124235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Trains::Awake()
extern "C"  void Trains_Awake_m2851636947 (Trains_t2513124235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Train Trains::GetActiveTrain()
extern "C"  Train_t81068520 * Trains_GetActiveTrain_m2915612267 (Trains_t2513124235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Trains::OnGameEvent(GameEvent)
extern "C"  void Trains_OnGameEvent_m416527923 (Trains_t2513124235 * __this, GameEvent_t2981166504 * ___gEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Trains::RemoveActiveTrain()
extern "C"  void Trains_RemoveActiveTrain_m97481484 (Trains_t2513124235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Trains::EnableTrainById(System.Int32)
extern "C"  void Trains_EnableTrainById_m2530733590 (Trains_t2513124235 * __this, int32_t ___selectedIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
