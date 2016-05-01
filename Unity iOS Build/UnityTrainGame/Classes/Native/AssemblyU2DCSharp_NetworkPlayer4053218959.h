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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkPlayer
struct  NetworkPlayer_t4053218959  : public Il2CppObject
{
public:
	// System.String NetworkPlayer::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String NetworkPlayer::<PlayerId>k__BackingField
	String_t* ___U3CPlayerIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NetworkPlayer_t4053218959, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetworkPlayer_t4053218959, ___U3CPlayerIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CPlayerIdU3Ek__BackingField_1() const { return ___U3CPlayerIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPlayerIdU3Ek__BackingField_1() { return &___U3CPlayerIdU3Ek__BackingField_1; }
	inline void set_U3CPlayerIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CPlayerIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPlayerIdU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
