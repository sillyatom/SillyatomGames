﻿#pragma once

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
	String_t* ___U3CplayerIdU3Ek__BackingField_21;
	// Card InGameEvent::<card>k__BackingField
	Card_t2092848 * ___U3CcardU3Ek__BackingField_22;
	// System.Int32 InGameEvent::<status>k__BackingField
	int32_t ___U3CstatusU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CplayerIdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InGameEvent_t511087107, ___U3CplayerIdU3Ek__BackingField_21)); }
	inline String_t* get_U3CplayerIdU3Ek__BackingField_21() const { return ___U3CplayerIdU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CplayerIdU3Ek__BackingField_21() { return &___U3CplayerIdU3Ek__BackingField_21; }
	inline void set_U3CplayerIdU3Ek__BackingField_21(String_t* value)
	{
		___U3CplayerIdU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerIdU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3CcardU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InGameEvent_t511087107, ___U3CcardU3Ek__BackingField_22)); }
	inline Card_t2092848 * get_U3CcardU3Ek__BackingField_22() const { return ___U3CcardU3Ek__BackingField_22; }
	inline Card_t2092848 ** get_address_of_U3CcardU3Ek__BackingField_22() { return &___U3CcardU3Ek__BackingField_22; }
	inline void set_U3CcardU3Ek__BackingField_22(Card_t2092848 * value)
	{
		___U3CcardU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcardU3Ek__BackingField_22, value);
	}

	inline static int32_t get_offset_of_U3CstatusU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InGameEvent_t511087107, ___U3CstatusU3Ek__BackingField_23)); }
	inline int32_t get_U3CstatusU3Ek__BackingField_23() const { return ___U3CstatusU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CstatusU3Ek__BackingField_23() { return &___U3CstatusU3Ek__BackingField_23; }
	inline void set_U3CstatusU3Ek__BackingField_23(int32_t value)
	{
		___U3CstatusU3Ek__BackingField_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
