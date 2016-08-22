#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ExtMonoBehaviour>
struct List_1_t3421558162;
// System.Collections.Generic.List`1<SceneMonoBehaviour>
struct List_1_t748209415;
// GCStatusVO
struct GCStatusVO_t3770382119;
// LocalPlayerModel
struct LocalPlayerModel_t1751900285;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExecutionOrderManager
struct  ExecutionOrderManager_t3968579479  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<ExtMonoBehaviour> ExecutionOrderManager::_extMonos
	List_1_t3421558162 * ____extMonos_2;
	// System.Collections.Generic.List`1<SceneMonoBehaviour> ExecutionOrderManager::_monos
	List_1_t748209415 * ____monos_3;
	// GCStatusVO ExecutionOrderManager::_vo
	GCStatusVO_t3770382119 * ____vo_4;
	// System.Boolean ExecutionOrderManager::_didInit
	bool ____didInit_5;
	// LocalPlayerModel ExecutionOrderManager::_playerModel
	LocalPlayerModel_t1751900285 * ____playerModel_6;

public:
	inline static int32_t get_offset_of__extMonos_2() { return static_cast<int32_t>(offsetof(ExecutionOrderManager_t3968579479, ____extMonos_2)); }
	inline List_1_t3421558162 * get__extMonos_2() const { return ____extMonos_2; }
	inline List_1_t3421558162 ** get_address_of__extMonos_2() { return &____extMonos_2; }
	inline void set__extMonos_2(List_1_t3421558162 * value)
	{
		____extMonos_2 = value;
		Il2CppCodeGenWriteBarrier(&____extMonos_2, value);
	}

	inline static int32_t get_offset_of__monos_3() { return static_cast<int32_t>(offsetof(ExecutionOrderManager_t3968579479, ____monos_3)); }
	inline List_1_t748209415 * get__monos_3() const { return ____monos_3; }
	inline List_1_t748209415 ** get_address_of__monos_3() { return &____monos_3; }
	inline void set__monos_3(List_1_t748209415 * value)
	{
		____monos_3 = value;
		Il2CppCodeGenWriteBarrier(&____monos_3, value);
	}

	inline static int32_t get_offset_of__vo_4() { return static_cast<int32_t>(offsetof(ExecutionOrderManager_t3968579479, ____vo_4)); }
	inline GCStatusVO_t3770382119 * get__vo_4() const { return ____vo_4; }
	inline GCStatusVO_t3770382119 ** get_address_of__vo_4() { return &____vo_4; }
	inline void set__vo_4(GCStatusVO_t3770382119 * value)
	{
		____vo_4 = value;
		Il2CppCodeGenWriteBarrier(&____vo_4, value);
	}

	inline static int32_t get_offset_of__didInit_5() { return static_cast<int32_t>(offsetof(ExecutionOrderManager_t3968579479, ____didInit_5)); }
	inline bool get__didInit_5() const { return ____didInit_5; }
	inline bool* get_address_of__didInit_5() { return &____didInit_5; }
	inline void set__didInit_5(bool value)
	{
		____didInit_5 = value;
	}

	inline static int32_t get_offset_of__playerModel_6() { return static_cast<int32_t>(offsetof(ExecutionOrderManager_t3968579479, ____playerModel_6)); }
	inline LocalPlayerModel_t1751900285 * get__playerModel_6() const { return ____playerModel_6; }
	inline LocalPlayerModel_t1751900285 ** get_address_of__playerModel_6() { return &____playerModel_6; }
	inline void set__playerModel_6(LocalPlayerModel_t1751900285 * value)
	{
		____playerModel_6 = value;
		Il2CppCodeGenWriteBarrier(&____playerModel_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
