#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "AssemblyU2DCSharp_SceneMonoBehaviour4246217742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameScreenMonoBehaviour
struct  GameScreenMonoBehaviour_t3269764764  : public SceneMonoBehaviour_t4246217742
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameScreenMonoBehaviour::btns
	List_1_t514686775 * ___btns_4;

public:
	inline static int32_t get_offset_of_btns_4() { return static_cast<int32_t>(offsetof(GameScreenMonoBehaviour_t3269764764, ___btns_4)); }
	inline List_1_t514686775 * get_btns_4() const { return ___btns_4; }
	inline List_1_t514686775 ** get_address_of_btns_4() { return &___btns_4; }
	inline void set_btns_4(List_1_t514686775 * value)
	{
		___btns_4 = value;
		Il2CppCodeGenWriteBarrier(&___btns_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
