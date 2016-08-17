#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t437523947;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExtMonoBehaviour/<StartDelay>c__Iterator7
struct  U3CStartDelayU3Ec__Iterator7_t3616559111  : public Il2CppObject
{
public:
	// System.Single ExtMonoBehaviour/<StartDelay>c__Iterator7::delay
	float ___delay_0;
	// System.Action ExtMonoBehaviour/<StartDelay>c__Iterator7::callback
	Action_t437523947 * ___callback_1;
	// System.Int32 ExtMonoBehaviour/<StartDelay>c__Iterator7::$PC
	int32_t ___U24PC_2;
	// System.Object ExtMonoBehaviour/<StartDelay>c__Iterator7::$current
	Il2CppObject * ___U24current_3;
	// System.Single ExtMonoBehaviour/<StartDelay>c__Iterator7::<$>delay
	float ___U3CU24U3Edelay_4;
	// System.Action ExtMonoBehaviour/<StartDelay>c__Iterator7::<$>callback
	Action_t437523947 * ___U3CU24U3Ecallback_5;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CStartDelayU3Ec__Iterator7_t3616559111, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CStartDelayU3Ec__Iterator7_t3616559111, ___callback_1)); }
	inline Action_t437523947 * get_callback_1() const { return ___callback_1; }
	inline Action_t437523947 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_t437523947 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CStartDelayU3Ec__Iterator7_t3616559111, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartDelayU3Ec__Iterator7_t3616559111, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Edelay_4() { return static_cast<int32_t>(offsetof(U3CStartDelayU3Ec__Iterator7_t3616559111, ___U3CU24U3Edelay_4)); }
	inline float get_U3CU24U3Edelay_4() const { return ___U3CU24U3Edelay_4; }
	inline float* get_address_of_U3CU24U3Edelay_4() { return &___U3CU24U3Edelay_4; }
	inline void set_U3CU24U3Edelay_4(float value)
	{
		___U3CU24U3Edelay_4 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ecallback_5() { return static_cast<int32_t>(offsetof(U3CStartDelayU3Ec__Iterator7_t3616559111, ___U3CU24U3Ecallback_5)); }
	inline Action_t437523947 * get_U3CU24U3Ecallback_5() const { return ___U3CU24U3Ecallback_5; }
	inline Action_t437523947 ** get_address_of_U3CU24U3Ecallback_5() { return &___U3CU24U3Ecallback_5; }
	inline void set_U3CU24U3Ecallback_5(Action_t437523947 * value)
	{
		___U3CU24U3Ecallback_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Ecallback_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
