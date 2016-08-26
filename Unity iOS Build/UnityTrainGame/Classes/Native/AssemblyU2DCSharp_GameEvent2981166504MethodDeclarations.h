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

// GameEvent
struct GameEvent_t2981166504;
// System.String
struct String_t;
// NetworkResponse
struct NetworkResponse_t1683455087;
// LocalPlayerModelVO
struct LocalPlayerModelVO_t4243963894;
// System.Action`2<NetworkResponse,System.Boolean>
struct Action_2_t2863572912;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_NetworkResponse1683455087.h"
#include "AssemblyU2DCSharp_LocalPlayerModelVO4243963894.h"
#include "mscorlib_System_Object837106420.h"

// System.Void GameEvent::.ctor(System.String)
extern "C"  void GameEvent__ctor_m1494597407 (GameEvent_t2981166504 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::.ctor(System.String,System.String)
extern "C"  void GameEvent__ctor_m4138108187 (GameEvent_t2981166504 * __this, String_t* ___type, String_t* ___postResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::.ctor(System.String,NetworkResponse)
extern "C"  void GameEvent__ctor_m685722812 (GameEvent_t2981166504 * __this, String_t* ___type, NetworkResponse_t1683455087 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::.ctor(System.String,LocalPlayerModelVO)
extern "C"  void GameEvent__ctor_m3237779601 (GameEvent_t2981166504 * __this, String_t* ___type, LocalPlayerModelVO_t4243963894 * ___vo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameEvent::get_type()
extern "C"  String_t* GameEvent_get_type_m3917904769 (GameEvent_t2981166504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::set_type(System.String)
extern "C"  void GameEvent_set_type_m3926350538 (GameEvent_t2981166504 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`2<NetworkResponse,System.Boolean> GameEvent::get_callback()
extern "C"  Action_2_t2863572912 * GameEvent_get_callback_m1531979647 (GameEvent_t2981166504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::set_callback(System.Action`2<NetworkResponse,System.Boolean>)
extern "C"  void GameEvent_set_callback_m4090578444 (GameEvent_t2981166504 * __this, Action_2_t2863572912 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NetworkResponse GameEvent::get_response()
extern "C"  NetworkResponse_t1683455087 * GameEvent_get_response_m1142487431 (GameEvent_t2981166504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::set_response(NetworkResponse)
extern "C"  void GameEvent_set_response_m304452356 (GameEvent_t2981166504 * __this, NetworkResponse_t1683455087 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameEvent::get_postResponse()
extern "C"  String_t* GameEvent_get_postResponse_m4192395656 (GameEvent_t2981166504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::set_postResponse(System.String)
extern "C"  void GameEvent_set_postResponse_m1756462883 (GameEvent_t2981166504 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object GameEvent::get_vo()
extern "C"  Il2CppObject * GameEvent_get_vo_m236630254 (GameEvent_t2981166504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::set_vo(System.Object)
extern "C"  void GameEvent_set_vo_m1200897213 (GameEvent_t2981166504 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
