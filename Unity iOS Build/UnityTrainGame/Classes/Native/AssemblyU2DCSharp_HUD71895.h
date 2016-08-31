#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HUD
struct  HUD_t71895  : public ExtMonoBehaviour_t2624599193
{
public:
	// UnityEngine.UI.Text HUD::tokenText
	Text_t3286458198 * ___tokenText_3;
	// UnityEngine.UI.Text HUD::xpText
	Text_t3286458198 * ___xpText_4;

public:
	inline static int32_t get_offset_of_tokenText_3() { return static_cast<int32_t>(offsetof(HUD_t71895, ___tokenText_3)); }
	inline Text_t3286458198 * get_tokenText_3() const { return ___tokenText_3; }
	inline Text_t3286458198 ** get_address_of_tokenText_3() { return &___tokenText_3; }
	inline void set_tokenText_3(Text_t3286458198 * value)
	{
		___tokenText_3 = value;
		Il2CppCodeGenWriteBarrier(&___tokenText_3, value);
	}

	inline static int32_t get_offset_of_xpText_4() { return static_cast<int32_t>(offsetof(HUD_t71895, ___xpText_4)); }
	inline Text_t3286458198 * get_xpText_4() const { return ___xpText_4; }
	inline Text_t3286458198 ** get_address_of_xpText_4() { return &___xpText_4; }
	inline void set_xpText_4(Text_t3286458198 * value)
	{
		___xpText_4 = value;
		Il2CppCodeGenWriteBarrier(&___xpText_4, value);
	}
};

struct HUD_t71895_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> HUD::<>f__switch$map4
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map4_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_5() { return static_cast<int32_t>(offsetof(HUD_t71895_StaticFields, ___U3CU3Ef__switchU24map4_5)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map4_5() const { return ___U3CU3Ef__switchU24map4_5; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map4_5() { return &___U3CU3Ef__switchU24map4_5; }
	inline void set_U3CU3Ef__switchU24map4_5(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map4_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
