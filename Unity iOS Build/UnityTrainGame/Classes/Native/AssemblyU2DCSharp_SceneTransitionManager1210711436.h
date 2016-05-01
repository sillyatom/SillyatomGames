#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t4114433806;

#include "AssemblyU2DCSharp_SceneMonoBehaviour4246217742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneTransitionManager
struct  SceneTransitionManager_t1210711436  : public SceneMonoBehaviour_t4246217742
{
public:
	// UnityEngine.RectTransform SceneTransitionManager::_activeScreen
	RectTransform_t3317474837 * ____activeScreen_4;
	// UnityEngine.RectTransform SceneTransitionManager::startScreen
	RectTransform_t3317474837 * ___startScreen_5;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> SceneTransitionManager::screens
	List_1_t4114433806 * ___screens_6;
	// System.Int32 SceneTransitionManager::SPACE
	int32_t ___SPACE_7;

public:
	inline static int32_t get_offset_of__activeScreen_4() { return static_cast<int32_t>(offsetof(SceneTransitionManager_t1210711436, ____activeScreen_4)); }
	inline RectTransform_t3317474837 * get__activeScreen_4() const { return ____activeScreen_4; }
	inline RectTransform_t3317474837 ** get_address_of__activeScreen_4() { return &____activeScreen_4; }
	inline void set__activeScreen_4(RectTransform_t3317474837 * value)
	{
		____activeScreen_4 = value;
		Il2CppCodeGenWriteBarrier(&____activeScreen_4, value);
	}

	inline static int32_t get_offset_of_startScreen_5() { return static_cast<int32_t>(offsetof(SceneTransitionManager_t1210711436, ___startScreen_5)); }
	inline RectTransform_t3317474837 * get_startScreen_5() const { return ___startScreen_5; }
	inline RectTransform_t3317474837 ** get_address_of_startScreen_5() { return &___startScreen_5; }
	inline void set_startScreen_5(RectTransform_t3317474837 * value)
	{
		___startScreen_5 = value;
		Il2CppCodeGenWriteBarrier(&___startScreen_5, value);
	}

	inline static int32_t get_offset_of_screens_6() { return static_cast<int32_t>(offsetof(SceneTransitionManager_t1210711436, ___screens_6)); }
	inline List_1_t4114433806 * get_screens_6() const { return ___screens_6; }
	inline List_1_t4114433806 ** get_address_of_screens_6() { return &___screens_6; }
	inline void set_screens_6(List_1_t4114433806 * value)
	{
		___screens_6 = value;
		Il2CppCodeGenWriteBarrier(&___screens_6, value);
	}

	inline static int32_t get_offset_of_SPACE_7() { return static_cast<int32_t>(offsetof(SceneTransitionManager_t1210711436, ___SPACE_7)); }
	inline int32_t get_SPACE_7() const { return ___SPACE_7; }
	inline int32_t* get_address_of_SPACE_7() { return &___SPACE_7; }
	inline void set_SPACE_7(int32_t value)
	{
		___SPACE_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
