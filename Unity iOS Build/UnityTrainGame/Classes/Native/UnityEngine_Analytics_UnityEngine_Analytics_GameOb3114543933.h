#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Analytics.IGameObserverListener
struct IGameObserverListener_t912772570;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.GameObserver
struct  GameObserver_t3114543933  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject UnityEngine.Analytics.GameObserver::m_GameObject
	GameObject_t4012695102 * ___m_GameObject_2;
	// UnityEngine.Analytics.IGameObserverListener UnityEngine.Analytics.GameObserver::m_GameObserverListener
	Il2CppObject * ___m_GameObserverListener_3;
	// System.Boolean UnityEngine.Analytics.GameObserver::m_IsWebPlayerOrEditor
	bool ___m_IsWebPlayerOrEditor_4;

public:
	inline static int32_t get_offset_of_m_GameObject_2() { return static_cast<int32_t>(offsetof(GameObserver_t3114543933, ___m_GameObject_2)); }
	inline GameObject_t4012695102 * get_m_GameObject_2() const { return ___m_GameObject_2; }
	inline GameObject_t4012695102 ** get_address_of_m_GameObject_2() { return &___m_GameObject_2; }
	inline void set_m_GameObject_2(GameObject_t4012695102 * value)
	{
		___m_GameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_GameObject_2, value);
	}

	inline static int32_t get_offset_of_m_GameObserverListener_3() { return static_cast<int32_t>(offsetof(GameObserver_t3114543933, ___m_GameObserverListener_3)); }
	inline Il2CppObject * get_m_GameObserverListener_3() const { return ___m_GameObserverListener_3; }
	inline Il2CppObject ** get_address_of_m_GameObserverListener_3() { return &___m_GameObserverListener_3; }
	inline void set_m_GameObserverListener_3(Il2CppObject * value)
	{
		___m_GameObserverListener_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_GameObserverListener_3, value);
	}

	inline static int32_t get_offset_of_m_IsWebPlayerOrEditor_4() { return static_cast<int32_t>(offsetof(GameObserver_t3114543933, ___m_IsWebPlayerOrEditor_4)); }
	inline bool get_m_IsWebPlayerOrEditor_4() const { return ___m_IsWebPlayerOrEditor_4; }
	inline bool* get_address_of_m_IsWebPlayerOrEditor_4() { return &___m_IsWebPlayerOrEditor_4; }
	inline void set_m_IsWebPlayerOrEditor_4(bool value)
	{
		___m_IsWebPlayerOrEditor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
