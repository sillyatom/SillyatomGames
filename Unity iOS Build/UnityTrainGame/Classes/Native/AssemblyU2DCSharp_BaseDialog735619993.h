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
	// UnityEngine.UI.Button BaseDialog::closeBtn
	Button_t990034267 * ___closeBtn_3;
	// UnityEngine.UI.Button BaseDialog::okBtn
	Button_t990034267 * ___okBtn_4;
	// UnityEngine.Vector3 BaseDialog::_initPosition
	Vector3_t3525329789  ____initPosition_5;
	// UnityEngine.Transform BaseDialog::_parentTransform
	Transform_t284553113 * ____parentTransform_6;

public:
	inline static int32_t get_offset_of_closeBtn_3() { return static_cast<int32_t>(offsetof(BaseDialog_t735619993, ___closeBtn_3)); }
	inline Button_t990034267 * get_closeBtn_3() const { return ___closeBtn_3; }
	inline Button_t990034267 ** get_address_of_closeBtn_3() { return &___closeBtn_3; }
	inline void set_closeBtn_3(Button_t990034267 * value)
	{
		___closeBtn_3 = value;
		Il2CppCodeGenWriteBarrier(&___closeBtn_3, value);
	}

	inline static int32_t get_offset_of_okBtn_4() { return static_cast<int32_t>(offsetof(BaseDialog_t735619993, ___okBtn_4)); }
	inline Button_t990034267 * get_okBtn_4() const { return ___okBtn_4; }
	inline Button_t990034267 ** get_address_of_okBtn_4() { return &___okBtn_4; }
	inline void set_okBtn_4(Button_t990034267 * value)
	{
		___okBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___okBtn_4, value);
	}

	inline static int32_t get_offset_of__initPosition_5() { return static_cast<int32_t>(offsetof(BaseDialog_t735619993, ____initPosition_5)); }
	inline Vector3_t3525329789  get__initPosition_5() const { return ____initPosition_5; }
	inline Vector3_t3525329789 * get_address_of__initPosition_5() { return &____initPosition_5; }
	inline void set__initPosition_5(Vector3_t3525329789  value)
	{
		____initPosition_5 = value;
	}

	inline static int32_t get_offset_of__parentTransform_6() { return static_cast<int32_t>(offsetof(BaseDialog_t735619993, ____parentTransform_6)); }
	inline Transform_t284553113 * get__parentTransform_6() const { return ____parentTransform_6; }
	inline Transform_t284553113 ** get_address_of__parentTransform_6() { return &____parentTransform_6; }
	inline void set__parentTransform_6(Transform_t284553113 * value)
	{
		____parentTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&____parentTransform_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
