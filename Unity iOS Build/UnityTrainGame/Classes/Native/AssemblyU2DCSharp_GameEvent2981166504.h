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
// System.Object
struct Il2CppObject;

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
	String_t* ___U3CtypeU3Ek__BackingField_14;
	// System.Action`2<NetworkResponse,System.Boolean> GameEvent::<callback>k__BackingField
	Action_2_t2863572912 * ___U3CcallbackU3Ek__BackingField_15;
	// NetworkResponse GameEvent::<response>k__BackingField
	NetworkResponse_t1683455087 * ___U3CresponseU3Ek__BackingField_16;
	// System.String GameEvent::<postResponse>k__BackingField
	String_t* ___U3CpostResponseU3Ek__BackingField_17;
	// System.Object GameEvent::<vo>k__BackingField
	Il2CppObject * ___U3CvoU3Ek__BackingField_18;
	// System.Int32 GameEvent::<val>k__BackingField
	int32_t ___U3CvalU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CtypeU3Ek__BackingField_14)); }
	inline String_t* get_U3CtypeU3Ek__BackingField_14() const { return ___U3CtypeU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CtypeU3Ek__BackingField_14() { return &___U3CtypeU3Ek__BackingField_14; }
	inline void set_U3CtypeU3Ek__BackingField_14(String_t* value)
	{
		___U3CtypeU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtypeU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CcallbackU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CcallbackU3Ek__BackingField_15)); }
	inline Action_2_t2863572912 * get_U3CcallbackU3Ek__BackingField_15() const { return ___U3CcallbackU3Ek__BackingField_15; }
	inline Action_2_t2863572912 ** get_address_of_U3CcallbackU3Ek__BackingField_15() { return &___U3CcallbackU3Ek__BackingField_15; }
	inline void set_U3CcallbackU3Ek__BackingField_15(Action_2_t2863572912 * value)
	{
		___U3CcallbackU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcallbackU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CresponseU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CresponseU3Ek__BackingField_16)); }
	inline NetworkResponse_t1683455087 * get_U3CresponseU3Ek__BackingField_16() const { return ___U3CresponseU3Ek__BackingField_16; }
	inline NetworkResponse_t1683455087 ** get_address_of_U3CresponseU3Ek__BackingField_16() { return &___U3CresponseU3Ek__BackingField_16; }
	inline void set_U3CresponseU3Ek__BackingField_16(NetworkResponse_t1683455087 * value)
	{
		___U3CresponseU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CresponseU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CpostResponseU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CpostResponseU3Ek__BackingField_17)); }
	inline String_t* get_U3CpostResponseU3Ek__BackingField_17() const { return ___U3CpostResponseU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CpostResponseU3Ek__BackingField_17() { return &___U3CpostResponseU3Ek__BackingField_17; }
	inline void set_U3CpostResponseU3Ek__BackingField_17(String_t* value)
	{
		___U3CpostResponseU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpostResponseU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CvoU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CvoU3Ek__BackingField_18)); }
	inline Il2CppObject * get_U3CvoU3Ek__BackingField_18() const { return ___U3CvoU3Ek__BackingField_18; }
	inline Il2CppObject ** get_address_of_U3CvoU3Ek__BackingField_18() { return &___U3CvoU3Ek__BackingField_18; }
	inline void set_U3CvoU3Ek__BackingField_18(Il2CppObject * value)
	{
		___U3CvoU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CvoU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3CvalU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GameEvent_t2981166504, ___U3CvalU3Ek__BackingField_19)); }
	inline int32_t get_U3CvalU3Ek__BackingField_19() const { return ___U3CvalU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CvalU3Ek__BackingField_19() { return &___U3CvalU3Ek__BackingField_19; }
	inline void set_U3CvalU3Ek__BackingField_19(int32_t value)
	{
		___U3CvalU3Ek__BackingField_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
