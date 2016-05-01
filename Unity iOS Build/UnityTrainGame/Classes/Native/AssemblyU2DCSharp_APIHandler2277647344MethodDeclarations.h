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

// APIHandler
struct APIHandler_t2277647344;
// System.String
struct String_t;
// API
struct API_t65019;
// NetworkResponse
struct NetworkResponse_t1683455087;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_API65018.h"
#include "AssemblyU2DCSharp_NetworkResponse1683455087.h"

// System.Void APIHandler::.ctor()
extern "C"  void APIHandler__ctor_m3181044395 (APIHandler_t2277647344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void APIHandler::.cctor()
extern "C"  void APIHandler__cctor_m3640999522 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void APIHandler::sendDataToAll(System.String)
extern "C"  void APIHandler_sendDataToAll_m4090884677 (Il2CppObject * __this /* static, unused */, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void APIHandler::sendDataToPlayer(System.String,System.String)
extern "C"  void APIHandler_sendDataToPlayer_m1249194775 (Il2CppObject * __this /* static, unused */, String_t* ___playerId, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 APIHandler::get_runningId()
extern "C"  int32_t APIHandler_get_runningId_m1837936236 (APIHandler_t2277647344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void APIHandler::set_runningId(System.Int32)
extern "C"  void APIHandler_set_runningId_m3210420375 (APIHandler_t2277647344 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// APIHandler APIHandler::GetInstance()
extern "C"  APIHandler_t2277647344 * APIHandler_GetInstance_m1918123047 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void APIHandler::SendDataToAll(API)
extern "C"  void APIHandler_SendDataToAll_m2299778395 (APIHandler_t2277647344 * __this, API_t65019 * ___api, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void APIHandler::StartDelayAPISuccess(System.Int32)
extern "C"  void APIHandler_StartDelayAPISuccess_m3204297012 (APIHandler_t2277647344 * __this, int32_t ___api, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void APIHandler::SendDataToPlayer(API)
extern "C"  void APIHandler_SendDataToPlayer_m3160309873 (APIHandler_t2277647344 * __this, API_t65019 * ___api, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void APIHandler::OnReceiveAcknowledgement(System.Int32,System.String,NetworkResponse)
extern "C"  void APIHandler_OnReceiveAcknowledgement_m3383095225 (APIHandler_t2277647344 * __this, int32_t ___apiId, String_t* ___playerId, NetworkResponse_t1683455087 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void APIHandler::RemoveAPIById(System.Int32)
extern "C"  void APIHandler_RemoveAPIById_m282183042 (APIHandler_t2277647344 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// API APIHandler::GetAPIById(System.Int32)
extern "C"  API_t65019 * APIHandler_GetAPIById_m1850387641 (APIHandler_t2277647344 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
