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
// System.Action`2<NetworkResponse,System.Boolean>
struct Action_2_t2863572912;
// NetworkResponse
struct NetworkResponse_t1683455087;
// HeaderVO
struct HeaderVO_t3244352038;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameEvent
struct  GameEvent_t2981166504  : public Il2CppObject
{
public:
	// System.String GameEvent::<type>k__BackingField
	String_t* ___U3CtypeU3Ek__BackingField_9;
	// System.Action`2<NetworkResponse,System.Boolean> GameEvent::<callback>k__BackingField
	Action_2_t2863572912 * ___U3CcallbackU3Ek__BackingField_10;
	// NetworkResponse GameEvent::<response>k__BackingField
	NetworkResponse_t1683455087 * ___U3CresponseU3Ek__BackingField_11;
	// HeaderVO GameEvent::<vo>k__BackingField
	HeaderVO_t3244352038 * ___U3CvoU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CtypeU3Ek__BackingField_9)); }
	inline String_t* get_U3CtypeU3Ek__BackingField_9() const { return ___U3CtypeU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CtypeU3Ek__BackingField_9() { return &___U3CtypeU3Ek__BackingField_9; }
	inline void set_U3CtypeU3Ek__BackingField_9(String_t* value)
	{
		___U3CtypeU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtypeU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CcallbackU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CcallbackU3Ek__BackingField_10)); }
	inline Action_2_t2863572912 * get_U3CcallbackU3Ek__BackingField_10() const { return ___U3CcallbackU3Ek__BackingField_10; }
	inline Action_2_t2863572912 ** get_address_of_U3CcallbackU3Ek__BackingField_10() { return &___U3CcallbackU3Ek__BackingField_10; }
	inline void set_U3CcallbackU3Ek__BackingField_10(Action_2_t2863572912 * value)
	{
		___U3CcallbackU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcallbackU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CresponseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CresponseU3Ek__BackingField_11)); }
	inline NetworkResponse_t1683455087 * get_U3CresponseU3Ek__BackingField_11() const { return ___U3CresponseU3Ek__BackingField_11; }
	inline NetworkResponse_t1683455087 ** get_address_of_U3CresponseU3Ek__BackingField_11() { return &___U3CresponseU3Ek__BackingField_11; }
	inline void set_U3CresponseU3Ek__BackingField_11(NetworkResponse_t1683455087 * value)
	{
		___U3CresponseU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CresponseU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CvoU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CvoU3Ek__BackingField_12)); }
	inline HeaderVO_t3244352038 * get_U3CvoU3Ek__BackingField_12() const { return ___U3CvoU3Ek__BackingField_12; }
	inline HeaderVO_t3244352038 ** get_address_of_U3CvoU3Ek__BackingField_12() { return &___U3CvoU3Ek__BackingField_12; }
	inline void set_U3CvoU3Ek__BackingField_12(HeaderVO_t3244352038 * value)
	{
		___U3CvoU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CvoU3Ek__BackingField_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
