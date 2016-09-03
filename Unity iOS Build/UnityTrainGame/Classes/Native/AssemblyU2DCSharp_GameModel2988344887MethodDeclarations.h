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

// GameModel
struct GameModel_t2988344887;
// GameEvent
struct GameEvent_t2981166504;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"

// System.Void GameModel::.ctor()
extern "C"  void GameModel__ctor_m968531220 (GameModel_t2988344887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::.cctor()
extern "C"  void GameModel__cctor_m3772567833 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_sweepCount()
extern "C"  int32_t GameModel_get_sweepCount_m2860013326 (GameModel_t2988344887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_sweepCount(System.Int32)
extern "C"  void GameModel_set_sweepCount_m2029286817 (GameModel_t2988344887 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameModel::get_isGameOver()
extern "C"  bool GameModel_get_isGameOver_m1638125845 (GameModel_t2988344887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_isGameOver(System.Boolean)
extern "C"  void GameModel_set_isGameOver_m4188364148 (GameModel_t2988344887 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameModel GameModel::get_Instance()
extern "C"  GameModel_t2988344887 * GameModel_get_Instance_m4055778066 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::Reset()
extern "C"  void GameModel_Reset_m2909931457 (GameModel_t2988344887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::OnGameEvent(GameEvent)
extern "C"  void GameModel_OnGameEvent_m817320463 (GameModel_t2988344887 * __this, GameEvent_t2981166504 * ___gEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
