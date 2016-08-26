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

// LocalPlayerModel
struct LocalPlayerModel_t1751900285;
// System.String
struct String_t;
// GameEvent
struct GameEvent_t2981166504;
// LocalPlayerModelVO
struct LocalPlayerModelVO_t4243963894;
// GCStatusVO
struct GCStatusVO_t3770382119;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"
#include "AssemblyU2DCSharp_LocalPlayerModelVO4243963894.h"
#include "AssemblyU2DCSharp_GCStatusVO3770382119.h"

// System.Void LocalPlayerModel::.ctor()
extern "C"  void LocalPlayerModel__ctor_m1394705086 (LocalPlayerModel_t1751900285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalPlayerModel::.cctor()
extern "C"  void LocalPlayerModel__cctor_m4099055791 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LocalPlayerModel::get_localPlayerId()
extern "C"  String_t* LocalPlayerModel_get_localPlayerId_m3356930807 (LocalPlayerModel_t1751900285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalPlayerModel::set_localPlayerId(System.String)
extern "C"  void LocalPlayerModel_set_localPlayerId_m3846465660 (LocalPlayerModel_t1751900285 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LocalPlayerModel::get_localPlayerName()
extern "C"  String_t* LocalPlayerModel_get_localPlayerName_m632555943 (LocalPlayerModel_t1751900285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalPlayerModel::set_localPlayerName(System.String)
extern "C"  void LocalPlayerModel_set_localPlayerName_m1092415372 (LocalPlayerModel_t1751900285 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LocalPlayerModel::get_localPlayerUID()
extern "C"  String_t* LocalPlayerModel_get_localPlayerUID_m995944726 (LocalPlayerModel_t1751900285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalPlayerModel::set_localPlayerUID(System.String)
extern "C"  void LocalPlayerModel_set_localPlayerUID_m3613546683 (LocalPlayerModel_t1751900285 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LocalPlayerModel::get_tokens()
extern "C"  int32_t LocalPlayerModel_get_tokens_m3923705431 (LocalPlayerModel_t1751900285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalPlayerModel::set_tokens(System.Int32)
extern "C"  void LocalPlayerModel_set_tokens_m468511502 (LocalPlayerModel_t1751900285 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LocalPlayerModel::get_xp()
extern "C"  int32_t LocalPlayerModel_get_xp_m336340533 (LocalPlayerModel_t1751900285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalPlayerModel::set_xp(System.Int32)
extern "C"  void LocalPlayerModel_set_xp_m3282049260 (LocalPlayerModel_t1751900285 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LocalPlayerModel LocalPlayerModel::GetInstance()
extern "C"  LocalPlayerModel_t1751900285 * LocalPlayerModel_GetInstance_m4081594375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalPlayerModel::OnGameEvent(GameEvent)
extern "C"  void LocalPlayerModel_OnGameEvent_m2766611237 (LocalPlayerModel_t1751900285 * __this, GameEvent_t2981166504 * ___gameEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalPlayerModel::UpdateModel(LocalPlayerModelVO)
extern "C"  void LocalPlayerModel_UpdateModel_m1266399110 (LocalPlayerModel_t1751900285 * __this, LocalPlayerModelVO_t4243963894 * ___vo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalPlayerModel::UpdatePlayerDetails(GCStatusVO)
extern "C"  void LocalPlayerModel_UpdatePlayerDetails_m1789618285 (LocalPlayerModel_t1751900285 * __this, GCStatusVO_t3770382119 * ___vo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
