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

// NetworkResponse
struct NetworkResponse_t1683455087;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NetworkConstants_API65018.h"
#include "mscorlib_System_String968488902.h"

// System.Void NetworkResponse::.ctor(NetworkConstants/API,System.Int32,System.String,System.String,System.String)
extern "C"  void NetworkResponse__ctor_m1241985979 (NetworkResponse_t1683455087 * __this, int32_t ___api, int32_t ___apiId, String_t* ___sender, String_t* ___playerId, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkResponse::get_data()
extern "C"  String_t* NetworkResponse_get_data_m3318290552 (NetworkResponse_t1683455087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkResponse::set_data(System.String)
extern "C"  void NetworkResponse_set_data_m309304691 (NetworkResponse_t1683455087 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkResponse::get_sender()
extern "C"  String_t* NetworkResponse_get_sender_m1471769859 (NetworkResponse_t1683455087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkResponse::set_sender(System.String)
extern "C"  void NetworkResponse_set_sender_m3758025864 (NetworkResponse_t1683455087 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkResponse::get_playerId()
extern "C"  String_t* NetworkResponse_get_playerId_m2425906602 (NetworkResponse_t1683455087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkResponse::set_playerId(System.String)
extern "C"  void NetworkResponse_set_playerId_m2999497985 (NetworkResponse_t1683455087 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NetworkConstants/API NetworkResponse::get_api()
extern "C"  int32_t NetworkResponse_get_api_m1094341116 (NetworkResponse_t1683455087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkResponse::set_api(NetworkConstants/API)
extern "C"  void NetworkResponse_set_api_m3380039947 (NetworkResponse_t1683455087 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkResponse::get_apiId()
extern "C"  int32_t NetworkResponse_get_apiId_m3616445780 (NetworkResponse_t1683455087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkResponse::set_apiId(System.Int32)
extern "C"  void NetworkResponse_set_apiId_m834314147 (NetworkResponse_t1683455087 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
