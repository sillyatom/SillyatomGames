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
// HeaderVO
struct HeaderVO_t3244352038;
// System.Action`2<NetworkResponse,System.Boolean>
struct Action_2_t2863572912;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_NetworkResponse1683455087.h"
#include "AssemblyU2DCSharp_HeaderVO3244352038.h"

// System.Void GameEvent::.ctor(System.String)
extern "C"  void GameEvent__ctor_m1494597407 (GameEvent_t2981166504 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::.ctor(System.String,NetworkResponse)
extern "C"  void GameEvent__ctor_m685722812 (GameEvent_t2981166504 * __this, String_t* ___type, NetworkResponse_t1683455087 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::.ctor(System.String,HeaderVO)
extern "C"  void GameEvent__ctor_m3060632033 (GameEvent_t2981166504 * __this, String_t* ___type, HeaderVO_t3244352038 * ___vo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
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
// HeaderVO GameEvent::get_vo()
extern "C"  HeaderVO_t3244352038 * GameEvent_get_vo_m187295500 (GameEvent_t2981166504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEvent::set_vo(HeaderVO)
extern "C"  void GameEvent_set_vo_m2866285265 (GameEvent_t2981166504 * __this, HeaderVO_t3244352038 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
