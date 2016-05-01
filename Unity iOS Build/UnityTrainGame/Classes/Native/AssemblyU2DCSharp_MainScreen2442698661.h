#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t990034267;

#include "AssemblyU2DCSharp_SceneMonoBehaviour4246217742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainScreen
struct  MainScreen_t2442698661  : public SceneMonoBehaviour_t4246217742
{
public:
	// UnityEngine.UI.Button MainScreen::playBtn
	Button_t990034267 * ___playBtn_4;

public:
	inline static int32_t get_offset_of_playBtn_4() { return static_cast<int32_t>(offsetof(MainScreen_t2442698661, ___playBtn_4)); }
	inline Button_t990034267 * get_playBtn_4() const { return ___playBtn_4; }
	inline Button_t990034267 ** get_address_of_playBtn_4() { return &___playBtn_4; }
	inline void set_playBtn_4(Button_t990034267 * value)
	{
		___playBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___playBtn_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
