#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Dealer
struct Dealer_t2043054649;
// Networking
struct Networking_t1515242260;
// System.Collections.Generic.List`1<Player>
struct List_1_t3190040570;
// RoundHandler
struct RoundHandler_t2172802556;
// NetworkResponse
struct NetworkResponse_t1683455087;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_GameScreenMonoBehaviour3269764764.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultiplayerMainGame
struct  MultiplayerMainGame_t4046083237  : public GameScreenMonoBehaviour_t3269764764
{
public:
	// Dealer MultiplayerMainGame::dealer
	Dealer_t2043054649 * ___dealer_5;
	// Networking MultiplayerMainGame::network
	Networking_t1515242260 * ___network_6;
	// System.Collections.Generic.List`1<Player> MultiplayerMainGame::_players
	List_1_t3190040570 * ____players_7;
	// RoundHandler MultiplayerMainGame::_roundHandler
	RoundHandler_t2172802556 * ____roundHandler_8;
	// NetworkResponse MultiplayerMainGame::_lastResponse
	NetworkResponse_t1683455087 * ____lastResponse_9;
	// System.Int32 MultiplayerMainGame::WinAmount
	int32_t ___WinAmount_10;

public:
	inline static int32_t get_offset_of_dealer_5() { return static_cast<int32_t>(offsetof(MultiplayerMainGame_t4046083237, ___dealer_5)); }
	inline Dealer_t2043054649 * get_dealer_5() const { return ___dealer_5; }
	inline Dealer_t2043054649 ** get_address_of_dealer_5() { return &___dealer_5; }
	inline void set_dealer_5(Dealer_t2043054649 * value)
	{
		___dealer_5 = value;
		Il2CppCodeGenWriteBarrier(&___dealer_5, value);
	}

	inline static int32_t get_offset_of_network_6() { return static_cast<int32_t>(offsetof(MultiplayerMainGame_t4046083237, ___network_6)); }
	inline Networking_t1515242260 * get_network_6() const { return ___network_6; }
	inline Networking_t1515242260 ** get_address_of_network_6() { return &___network_6; }
	inline void set_network_6(Networking_t1515242260 * value)
	{
		___network_6 = value;
		Il2CppCodeGenWriteBarrier(&___network_6, value);
	}

	inline static int32_t get_offset_of__players_7() { return static_cast<int32_t>(offsetof(MultiplayerMainGame_t4046083237, ____players_7)); }
	inline List_1_t3190040570 * get__players_7() const { return ____players_7; }
	inline List_1_t3190040570 ** get_address_of__players_7() { return &____players_7; }
	inline void set__players_7(List_1_t3190040570 * value)
	{
		____players_7 = value;
		Il2CppCodeGenWriteBarrier(&____players_7, value);
	}

	inline static int32_t get_offset_of__roundHandler_8() { return static_cast<int32_t>(offsetof(MultiplayerMainGame_t4046083237, ____roundHandler_8)); }
	inline RoundHandler_t2172802556 * get__roundHandler_8() const { return ____roundHandler_8; }
	inline RoundHandler_t2172802556 ** get_address_of__roundHandler_8() { return &____roundHandler_8; }
	inline void set__roundHandler_8(RoundHandler_t2172802556 * value)
	{
		____roundHandler_8 = value;
		Il2CppCodeGenWriteBarrier(&____roundHandler_8, value);
	}

	inline static int32_t get_offset_of__lastResponse_9() { return static_cast<int32_t>(offsetof(MultiplayerMainGame_t4046083237, ____lastResponse_9)); }
	inline NetworkResponse_t1683455087 * get__lastResponse_9() const { return ____lastResponse_9; }
	inline NetworkResponse_t1683455087 ** get_address_of__lastResponse_9() { return &____lastResponse_9; }
	inline void set__lastResponse_9(NetworkResponse_t1683455087 * value)
	{
		____lastResponse_9 = value;
		Il2CppCodeGenWriteBarrier(&____lastResponse_9, value);
	}

	inline static int32_t get_offset_of_WinAmount_10() { return static_cast<int32_t>(offsetof(MultiplayerMainGame_t4046083237, ___WinAmount_10)); }
	inline int32_t get_WinAmount_10() const { return ___WinAmount_10; }
	inline int32_t* get_address_of_WinAmount_10() { return &___WinAmount_10; }
	inline void set_WinAmount_10(int32_t value)
	{
		___WinAmount_10 = value;
	}
};

struct MultiplayerMainGame_t4046083237_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MultiplayerMainGame::<>f__switch$mapC
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24mapC_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MultiplayerMainGame::<>f__switch$mapD
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24mapD_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_11() { return static_cast<int32_t>(offsetof(MultiplayerMainGame_t4046083237_StaticFields, ___U3CU3Ef__switchU24mapC_11)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24mapC_11() const { return ___U3CU3Ef__switchU24mapC_11; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24mapC_11() { return &___U3CU3Ef__switchU24mapC_11; }
	inline void set_U3CU3Ef__switchU24mapC_11(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24mapC_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapC_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_12() { return static_cast<int32_t>(offsetof(MultiplayerMainGame_t4046083237_StaticFields, ___U3CU3Ef__switchU24mapD_12)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24mapD_12() const { return ___U3CU3Ef__switchU24mapD_12; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24mapD_12() { return &___U3CU3Ef__switchU24mapD_12; }
	inline void set_U3CU3Ef__switchU24mapD_12(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24mapD_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapD_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
