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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneMonoBehaviour
struct  SceneMonoBehaviour_t4246217742  : public MonoBehaviour_t3012272455
{
public:
	// SceneTransitionManager SceneMonoBehaviour::sceneTransitionManager
	SceneTransitionManager_t1210711436 * ___sceneTransitionManager_2;
	// System.Boolean SceneMonoBehaviour::_isInitialized
	bool ____isInitialized_3;

public:
	inline static int32_t get_offset_of_sceneTransitionManager_2() { return static_cast<int32_t>(offsetof(SceneMonoBehaviour_t4246217742, ___sceneTransitionManager_2)); }
	inline SceneTransitionManager_t1210711436 * get_sceneTransitionManager_2() const { return ___sceneTransitionManager_2; }
	inline SceneTransitionManager_t1210711436 ** get_address_of_sceneTransitionManager_2() { return &___sceneTransitionManager_2; }
	inline void set_sceneTransitionManager_2(SceneTransitionManager_t1210711436 * value)
	{
		___sceneTransitionManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___sceneTransitionManager_2, value);
	}

	inline static int32_t get_offset_of__isInitialized_3() { return static_cast<int32_t>(offsetof(SceneMonoBehaviour_t4246217742, ____isInitialized_3)); }
	inline bool get__isInitialized_3() const { return ____isInitialized_3; }
	inline bool* get_address_of__isInitialized_3() { return &____isInitialized_3; }
	inline void set__isInitialized_3(bool value)
	{
		____isInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
