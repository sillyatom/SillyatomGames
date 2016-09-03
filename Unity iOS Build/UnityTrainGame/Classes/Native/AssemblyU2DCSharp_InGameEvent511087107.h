#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Card
struct Card_t2092848;
// Player
struct Player_t2393081601;

#include "AssemblyU2DCSharp_GameEvent2981166504.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGameEvent
struct  InGameEvent_t511087107  : public GameEvent_t2981166504
{
public:
	// System.String InGameEvent::<playerId>k__BackingField
	String_t* ___U3CplayerIdU3Ek__BackingField_30;
	// Card InGameEvent::<card>k__BackingField
	Card_t2092848 * ___U3CcardU3Ek__BackingField_31;
	// System.Int32 InGameEvent::<status>k__BackingField
	int32_t ___U3CstatusU3Ek__BackingField_32;
	// Player InGameEvent::<player>k__BackingField
	Player_t2393081601 * ___U3CplayerU3Ek__BackingField_33;

public:
	inline static int32_t get_offset_of_U3CplayerIdU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(InGameEvent_t511087107, ___U3CplayerIdU3Ek__BackingField_30)); }
	inline String_t* get_U3CplayerIdU3Ek__BackingField_30() const { return ___U3CplayerIdU3Ek__BackingField_30; }
	inline String_t** get_address_of_U3CplayerIdU3Ek__BackingField_30() { return &___U3CplayerIdU3Ek__BackingField_30; }
	inline void set_U3CplayerIdU3Ek__BackingField_30(String_t* value)
	{
		___U3CplayerIdU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerIdU3Ek__BackingField_30, value);
	}

	inline static int32_t get_offset_of_U3CcardU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(InGameEvent_t511087107, ___U3CcardU3Ek__BackingField_31)); }
	inline Card_t2092848 * get_U3CcardU3Ek__BackingField_31() const { return ___U3CcardU3Ek__BackingField_31; }
	inline Card_t2092848 ** get_address_of_U3CcardU3Ek__BackingField_31() { return &___U3CcardU3Ek__BackingField_31; }
	inline void set_U3CcardU3Ek__BackingField_31(Card_t2092848 * value)
	{
		___U3CcardU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcardU3Ek__BackingField_31, value);
	}

	inline static int32_t get_offset_of_U3CstatusU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(InGameEvent_t511087107, ___U3CstatusU3Ek__BackingField_32)); }
	inline int32_t get_U3CstatusU3Ek__BackingField_32() const { return ___U3CstatusU3Ek__BackingField_32; }
	inline int32_t* get_address_of_U3CstatusU3Ek__BackingField_32() { return &___U3CstatusU3Ek__BackingField_32; }
	inline void set_U3CstatusU3Ek__BackingField_32(int32_t value)
	{
		___U3CstatusU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CplayerU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InGameEvent_t511087107, ___U3CplayerU3Ek__BackingField_33)); }
	inline Player_t2393081601 * get_U3CplayerU3Ek__BackingField_33() const { return ___U3CplayerU3Ek__BackingField_33; }
	inline Player_t2393081601 ** get_address_of_U3CplayerU3Ek__BackingField_33() { return &___U3CplayerU3Ek__BackingField_33; }
	inline void set_U3CplayerU3Ek__BackingField_33(Player_t2393081601 * value)
	{
		___U3CplayerU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerU3Ek__BackingField_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
