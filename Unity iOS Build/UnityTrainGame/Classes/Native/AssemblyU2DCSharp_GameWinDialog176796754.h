#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4151574589;
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
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> GameWinDialog::stars
	List_1_t4151574589 * ___stars_5;
	// UnityEngine.UI.Text GameWinDialog::totalStarsEarned
	Text_t3286458198 * ___totalStarsEarned_6;
	// UnityEngine.UI.Text GameWinDialog::tokensEarned
	Text_t3286458198 * ___tokensEarned_7;

public:
	inline static int32_t get_offset_of_stars_5() { return static_cast<int32_t>(offsetof(GameWinDialog_t176796754, ___stars_5)); }
	inline List_1_t4151574589 * get_stars_5() const { return ___stars_5; }
	inline List_1_t4151574589 ** get_address_of_stars_5() { return &___stars_5; }
	inline void set_stars_5(List_1_t4151574589 * value)
	{
		___stars_5 = value;
		Il2CppCodeGenWriteBarrier(&___stars_5, value);
	}

	inline static int32_t get_offset_of_totalStarsEarned_6() { return static_cast<int32_t>(offsetof(GameWinDialog_t176796754, ___totalStarsEarned_6)); }
	inline Text_t3286458198 * get_totalStarsEarned_6() const { return ___totalStarsEarned_6; }
	inline Text_t3286458198 ** get_address_of_totalStarsEarned_6() { return &___totalStarsEarned_6; }
	inline void set_totalStarsEarned_6(Text_t3286458198 * value)
	{
		___totalStarsEarned_6 = value;
		Il2CppCodeGenWriteBarrier(&___totalStarsEarned_6, value);
	}

	inline static int32_t get_offset_of_tokensEarned_7() { return static_cast<int32_t>(offsetof(GameWinDialog_t176796754, ___tokensEarned_7)); }
	inline Text_t3286458198 * get_tokensEarned_7() const { return ___tokensEarned_7; }
	inline Text_t3286458198 ** get_address_of_tokensEarned_7() { return &___tokensEarned_7; }
	inline void set_tokensEarned_7(Text_t3286458198 * value)
	{
		___tokensEarned_7 = value;
		Il2CppCodeGenWriteBarrier(&___tokensEarned_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
