#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseDialog
struct  BaseDialog_t735619993  : public ExtMonoBehaviour_t2624599193
{
public:
	// UnityEngine.Vector3 BaseDialog::_initPosition
	Vector3_t3525329789  ____initPosition_3;
	// UnityEngine.Transform BaseDialog::_parentTransform
	Transform_t284553113 * ____parentTransform_4;

public:
	inline static int32_t get_offset_of__initPosition_3() { return static_cast<int32_t>(offsetof(BaseDialog_t735619993, ____initPosition_3)); }
	inline Vector3_t3525329789  get__initPosition_3() const { return ____initPosition_3; }
	inline Vector3_t3525329789 * get_address_of__initPosition_3() { return &____initPosition_3; }
	inline void set__initPosition_3(Vector3_t3525329789  value)
	{
		____initPosition_3 = value;
	}

	inline static int32_t get_offset_of__parentTransform_4() { return static_cast<int32_t>(offsetof(BaseDialog_t735619993, ____parentTransform_4)); }
	inline Transform_t284553113 * get__parentTransform_4() const { return ____parentTransform_4; }
	inline Transform_t284553113 ** get_address_of__parentTransform_4() { return &____parentTransform_4; }
	inline void set__parentTransform_4(Transform_t284553113 * value)
	{
		____parentTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&____parentTransform_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
