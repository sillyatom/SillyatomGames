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

#include "AssemblyU2DCSharp_BaseDialog735619993.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameWinDialog
struct  GameWinDialog_t176796754  : public BaseDialog_t735619993
{
public:
	// UnityEngine.UI.Text GameWinDialog::totalStarsEarned
	Text_t3286458198 * ___totalStarsEarned_5;
	// UnityEngine.UI.Text GameWinDialog::tokensEarned
	Text_t3286458198 * ___tokensEarned_6;

public:
	inline static int32_t get_offset_of_totalStarsEarned_5() { return static_cast<int32_t>(offsetof(GameWinDialog_t176796754, ___totalStarsEarned_5)); }
	inline Text_t3286458198 * get_totalStarsEarned_5() const { return ___totalStarsEarned_5; }
	inline Text_t3286458198 ** get_address_of_totalStarsEarned_5() { return &___totalStarsEarned_5; }
	inline void set_totalStarsEarned_5(Text_t3286458198 * value)
	{
		___totalStarsEarned_5 = value;
		Il2CppCodeGenWriteBarrier(&___totalStarsEarned_5, value);
	}

	inline static int32_t get_offset_of_tokensEarned_6() { return static_cast<int32_t>(offsetof(GameWinDialog_t176796754, ___tokensEarned_6)); }
	inline Text_t3286458198 * get_tokensEarned_6() const { return ___tokensEarned_6; }
	inline Text_t3286458198 ** get_address_of_tokensEarned_6() { return &___tokensEarned_6; }
	inline void set_tokensEarned_6(Text_t3286458198 * value)
	{
		___tokensEarned_6 = value;
		Il2CppCodeGenWriteBarrier(&___tokensEarned_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
