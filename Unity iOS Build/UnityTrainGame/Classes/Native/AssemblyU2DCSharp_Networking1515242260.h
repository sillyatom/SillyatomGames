#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<NetworkResponse>
struct List_1_t2480414056;
// System.Collections.Generic.List`1<NetworkPlayer>
struct List_1_t555210632;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Networking
struct  Networking_t1515242260  : public ExtMonoBehaviour_t2624599193
{
public:
	// System.Collections.Generic.List`1<NetworkResponse> Networking::_results
	List_1_t2480414056 * ____results_3;
	// System.Collections.Generic.List`1<NetworkPlayer> Networking::_players
	List_1_t555210632 * ____players_4;
	// System.Collections.Generic.List`1<NetworkPlayer> Networking::_playersExcludingThis
	List_1_t555210632 * ____playersExcludingThis_5;
	// System.Collections.Generic.List`1<System.String> Networking::_playersIdsExcludingThis
	List_1_t1765447871 * ____playersIdsExcludingThis_6;
	// System.Collections.Generic.List`1<System.String> Networking::_playersIds
	List_1_t1765447871 * ____playersIds_7;
	// System.Single Networking::_timeElapsed
	float ____timeElapsed_8;
	// System.Boolean Networking::_pauseUpdate
	bool ____pauseUpdate_13;

public:
	inline static int32_t get_offset_of__results_3() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ____results_3)); }
	inline List_1_t2480414056 * get__results_3() const { return ____results_3; }
	inline List_1_t2480414056 ** get_address_of__results_3() { return &____results_3; }
	inline void set__results_3(List_1_t2480414056 * value)
	{
		____results_3 = value;
		Il2CppCodeGenWriteBarrier(&____results_3, value);
	}

	inline static int32_t get_offset_of__players_4() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ____players_4)); }
	inline List_1_t555210632 * get__players_4() const { return ____players_4; }
	inline List_1_t555210632 ** get_address_of__players_4() { return &____players_4; }
	inline void set__players_4(List_1_t555210632 * value)
	{
		____players_4 = value;
		Il2CppCodeGenWriteBarrier(&____players_4, value);
	}

	inline static int32_t get_offset_of__playersExcludingThis_5() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ____playersExcludingThis_5)); }
	inline List_1_t555210632 * get__playersExcludingThis_5() const { return ____playersExcludingThis_5; }
	inline List_1_t555210632 ** get_address_of__playersExcludingThis_5() { return &____playersExcludingThis_5; }
	inline void set__playersExcludingThis_5(List_1_t555210632 * value)
	{
		____playersExcludingThis_5 = value;
		Il2CppCodeGenWriteBarrier(&____playersExcludingThis_5, value);
	}

	inline static int32_t get_offset_of__playersIdsExcludingThis_6() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ____playersIdsExcludingThis_6)); }
	inline List_1_t1765447871 * get__playersIdsExcludingThis_6() const { return ____playersIdsExcludingThis_6; }
	inline List_1_t1765447871 ** get_address_of__playersIdsExcludingThis_6() { return &____playersIdsExcludingThis_6; }
	inline void set__playersIdsExcludingThis_6(List_1_t1765447871 * value)
	{
		____playersIdsExcludingThis_6 = value;
		Il2CppCodeGenWriteBarrier(&____playersIdsExcludingThis_6, value);
	}

	inline static int32_t get_offset_of__playersIds_7() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ____playersIds_7)); }
	inline List_1_t1765447871 * get__playersIds_7() const { return ____playersIds_7; }
	inline List_1_t1765447871 ** get_address_of__playersIds_7() { return &____playersIds_7; }
	inline void set__playersIds_7(List_1_t1765447871 * value)
	{
		____playersIds_7 = value;
		Il2CppCodeGenWriteBarrier(&____playersIds_7, value);
	}

	inline static int32_t get_offset_of__timeElapsed_8() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ____timeElapsed_8)); }
	inline float get__timeElapsed_8() const { return ____timeElapsed_8; }
	inline float* get_address_of__timeElapsed_8() { return &____timeElapsed_8; }
	inline void set__timeElapsed_8(float value)
	{
		____timeElapsed_8 = value;
	}

	inline static int32_t get_offset_of__pauseUpdate_13() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ____pauseUpdate_13)); }
	inline bool get__pauseUpdate_13() const { return ____pauseUpdate_13; }
	inline bool* get_address_of__pauseUpdate_13() { return &____pauseUpdate_13; }
	inline void set__pauseUpdate_13(bool value)
	{
		____pauseUpdate_13 = value;
	}
};

struct Networking_t1515242260_StaticFields
{
public:
	// System.Boolean Networking::IsHost
	bool ___IsHost_9;
	// System.Boolean Networking::IsSinglePlayerMode
	bool ___IsSinglePlayerMode_10;
	// System.String Networking::hostId
	String_t* ___hostId_11;
	// System.String Networking::localId
	String_t* ___localId_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Networking::<>f__switch$mapA
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24mapA_14;

public:
	inline static int32_t get_offset_of_IsHost_9() { return static_cast<int32_t>(offsetof(Networking_t1515242260_StaticFields, ___IsHost_9)); }
	inline bool get_IsHost_9() const { return ___IsHost_9; }
	inline bool* get_address_of_IsHost_9() { return &___IsHost_9; }
	inline void set_IsHost_9(bool value)
	{
		___IsHost_9 = value;
	}

	inline static int32_t get_offset_of_IsSinglePlayerMode_10() { return static_cast<int32_t>(offsetof(Networking_t1515242260_StaticFields, ___IsSinglePlayerMode_10)); }
	inline bool get_IsSinglePlayerMode_10() const { return ___IsSinglePlayerMode_10; }
	inline bool* get_address_of_IsSinglePlayerMode_10() { return &___IsSinglePlayerMode_10; }
	inline void set_IsSinglePlayerMode_10(bool value)
	{
		___IsSinglePlayerMode_10 = value;
	}

	inline static int32_t get_offset_of_hostId_11() { return static_cast<int32_t>(offsetof(Networking_t1515242260_StaticFields, ___hostId_11)); }
	inline String_t* get_hostId_11() const { return ___hostId_11; }
	inline String_t** get_address_of_hostId_11() { return &___hostId_11; }
	inline void set_hostId_11(String_t* value)
	{
		___hostId_11 = value;
		Il2CppCodeGenWriteBarrier(&___hostId_11, value);
	}

	inline static int32_t get_offset_of_localId_12() { return static_cast<int32_t>(offsetof(Networking_t1515242260_StaticFields, ___localId_12)); }
	inline String_t* get_localId_12() const { return ___localId_12; }
	inline String_t** get_address_of_localId_12() { return &___localId_12; }
	inline void set_localId_12(String_t* value)
	{
		___localId_12 = value;
		Il2CppCodeGenWriteBarrier(&___localId_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_14() { return static_cast<int32_t>(offsetof(Networking_t1515242260_StaticFields, ___U3CU3Ef__switchU24mapA_14)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24mapA_14() const { return ___U3CU3Ef__switchU24mapA_14; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24mapA_14() { return &___U3CU3Ef__switchU24mapA_14; }
	inline void set_U3CU3Ef__switchU24mapA_14(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24mapA_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapA_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
