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

// Networking
struct Networking_t1515242260;
// System.String
struct String_t;
// System.Collections.Generic.List`1<NetworkPlayer>
struct List_1_t555210632;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// NetworkPlayer
struct NetworkPlayer_t4053218959;
// GameEvent
struct GameEvent_t2981166504;
// NetworkResponse
struct NetworkResponse_t1683455087;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GameEvent2981166504.h"
#include "AssemblyU2DCSharp_NetworkResponse1683455087.h"

// System.Void Networking::.ctor()
extern "C"  void Networking__ctor_m3798141959 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::.cctor()
extern "C"  void Networking__cctor_m1296187526 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::sendDataToAll(System.String)
extern "C"  void Networking_sendDataToAll_m3741350505 (Il2CppObject * __this /* static, unused */, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::sendDataToPlayer(System.String,System.String)
extern "C"  void Networking_sendDataToPlayer_m4247746419 (Il2CppObject * __this /* static, unused */, String_t* ___playerId, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Networking::get_HostId()
extern "C"  String_t* Networking_get_HostId_m3636325228 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Networking::get_LocalId()
extern "C"  String_t* Networking_get_LocalId_m589514783 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Networking::get_numPlayers()
extern "C"  int32_t Networking_get_numPlayers_m3270147296 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<NetworkPlayer> Networking::get_Players()
extern "C"  List_1_t555210632 * Networking_get_Players_m2083950494 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Networking::get_PlayersIds()
extern "C"  List_1_t1765447871 * Networking_get_PlayersIds_m2292660285 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<NetworkPlayer> Networking::get_PlayersExcludingThis()
extern "C"  List_1_t555210632 * Networking_get_PlayersExcludingThis_m4242695033 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Networking::get_PlayersIdsExcludingThis()
extern "C"  List_1_t1765447871 * Networking_get_PlayersIdsExcludingThis_m2072180026 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NetworkPlayer Networking::GetPlayerById(System.String)
extern "C"  NetworkPlayer_t4053218959 * Networking_GetPlayerById_m2192672952 (Networking_t1515242260 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::Init()
extern "C"  void Networking_Init_m4091929965 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::OnSinglePlayerMode()
extern "C"  void Networking_OnSinglePlayerMode_m504645416 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::UpdateSinglePlayerData()
extern "C"  void Networking_UpdateSinglePlayerData_m2490043865 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Networking::isIdHost(System.String)
extern "C"  bool Networking_isIdHost_m3288564196 (Networking_t1515242260 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::OnGameEvent(GameEvent)
extern "C"  void Networking_OnGameEvent_m3990535868 (Networking_t1515242260 * __this, GameEvent_t2981166504 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::OnReceiveData(System.String)
extern "C"  void Networking_OnReceiveData_m2148239983 (Networking_t1515242260 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::ExecuteEvent(NetworkResponse)
extern "C"  void Networking_ExecuteEvent_m1821441377 (Networking_t1515242260 * __this, NetworkResponse_t1683455087 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::ProcessData(NetworkResponse)
extern "C"  void Networking_ProcessData_m4119988869 (Networking_t1515242260 * __this, NetworkResponse_t1683455087 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::Acknowledge(NetworkResponse,System.Boolean)
extern "C"  void Networking_Acknowledge_m1947611707 (Networking_t1515242260 * __this, NetworkResponse_t1683455087 * ___response, bool ___isSenderHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::OnAcknowledge()
extern "C"  void Networking_OnAcknowledge_m221945122 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::OnAPISuccess(System.Int32,NetworkResponse)
extern "C"  void Networking_OnAPISuccess_m3301231507 (Networking_t1515242260 * __this, int32_t ___api, NetworkResponse_t1683455087 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::Update()
extern "C"  void Networking_Update_m3505145830 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Networking::UpdatePlayersData()
extern "C"  void Networking_UpdatePlayersData_m4188696152 (Networking_t1515242260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
