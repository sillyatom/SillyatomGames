#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_ButtonComponent2676344267.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Card
struct  Card_t2092848  : public ButtonComponent_t2676344267
{
public:
	// UnityEngine.UI.Image Card::Front
	Image_t3354615620 * ___Front_2;
	// UnityEngine.UI.Image Card::Back
	Image_t3354615620 * ___Back_3;
	// System.String Card::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_4;
	// System.String Card::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_5;
	// System.String Card::<ValueType>k__BackingField
	String_t* ___U3CValueTypeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_Front_2() { return static_cast<int32_t>(offsetof(Card_t2092848, ___Front_2)); }
	inline Image_t3354615620 * get_Front_2() const { return ___Front_2; }
	inline Image_t3354615620 ** get_address_of_Front_2() { return &___Front_2; }
	inline void set_Front_2(Image_t3354615620 * value)
	{
		___Front_2 = value;
		Il2CppCodeGenWriteBarrier(&___Front_2, value);
	}

	inline static int32_t get_offset_of_Back_3() { return static_cast<int32_t>(offsetof(Card_t2092848, ___Back_3)); }
	inline Image_t3354615620 * get_Back_3() const { return ___Back_3; }
	inline Image_t3354615620 ** get_address_of_Back_3() { return &___Back_3; }
	inline void set_Back_3(Image_t3354615620 * value)
	{
		___Back_3 = value;
		Il2CppCodeGenWriteBarrier(&___Back_3, value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Card_t2092848, ___U3CValueU3Ek__BackingField_4)); }
	inline String_t* get_U3CValueU3Ek__BackingField_4() const { return ___U3CValueU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_4() { return &___U3CValueU3Ek__BackingField_4; }
	inline void set_U3CValueU3Ek__BackingField_4(String_t* value)
	{
		___U3CValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValueU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Card_t2092848, ___U3CTypeU3Ek__BackingField_5)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_5() const { return ___U3CTypeU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_5() { return &___U3CTypeU3Ek__BackingField_5; }
	inline void set_U3CTypeU3Ek__BackingField_5(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTypeU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CValueTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Card_t2092848, ___U3CValueTypeU3Ek__BackingField_6)); }
	inline String_t* get_U3CValueTypeU3Ek__BackingField_6() const { return ___U3CValueTypeU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CValueTypeU3Ek__BackingField_6() { return &___U3CValueTypeU3Ek__BackingField_6; }
	inline void set_U3CValueTypeU3Ek__BackingField_6(String_t* value)
	{
		___U3CValueTypeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValueTypeU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
