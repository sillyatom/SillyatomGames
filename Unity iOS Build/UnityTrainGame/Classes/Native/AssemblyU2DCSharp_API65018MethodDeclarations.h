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

// API
struct API_t65019;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void API::.ctor()
extern "C"  void API__ctor_m547684017 (API_t65019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 API::get_id()
extern "C"  int32_t API_get_id_m1238024745 (API_t65019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void API::set_id(System.Int32)
extern "C"  void API_set_id_m3398296764 (API_t65019 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 API::get_api()
extern "C"  int32_t API_get_api_m4012060526 (API_t65019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void API::set_api(System.Int32)
extern "C"  void API_set_api_m300885309 (API_t65019 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String API::get_data()
extern "C"  String_t* API_get_data_m641030403 (API_t65019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void API::set_data(System.String)
extern "C"  void API_set_data_m3876223560 (API_t65019 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> API::get_playerIds()
extern "C"  List_1_t1765447871 * API_get_playerIds_m2484426830 (API_t65019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void API::set_playerIds(System.Collections.Generic.List`1<System.String>)
extern "C"  void API_set_playerIds_m2661364253 (API_t65019 * __this, List_1_t1765447871 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 API::RemoveId(System.String)
extern "C"  int32_t API_RemoveId_m87998686 (API_t65019 * __this, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
