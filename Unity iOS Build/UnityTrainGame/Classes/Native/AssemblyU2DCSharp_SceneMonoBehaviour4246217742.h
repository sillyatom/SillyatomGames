#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SceneTransitionManager
struct SceneTransitionManager_t1210711436;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneMonoBehaviour
struct  SceneMonoBehaviour_t4246217742  : public ExtMonoBehaviour_t2624599193
{
public:
	// SceneTransitionManager SceneMonoBehaviour::sceneTransitionManager
	SceneTransitionManager_t1210711436 * ___sceneTransitionManager_3;

public:
	inline static int32_t get_offset_of_sceneTransitionManager_3() { return static_cast<int32_t>(offsetof(SceneMonoBehaviour_t4246217742, ___sceneTransitionManager_3)); }
	inline SceneTransitionManager_t1210711436 * get_sceneTransitionManager_3() const { return ___sceneTransitionManager_3; }
	inline SceneTransitionManager_t1210711436 ** get_address_of_sceneTransitionManager_3() { return &___sceneTransitionManager_3; }
	inline void set_sceneTransitionManager_3(SceneTransitionManager_t1210711436 * value)
	{
		___sceneTransitionManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___sceneTransitionManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
