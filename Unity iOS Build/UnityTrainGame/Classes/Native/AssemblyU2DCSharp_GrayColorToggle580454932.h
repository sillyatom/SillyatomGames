#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrayColorToggle
struct  GrayColorToggle_t580454932  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Image GrayColorToggle::_img
	Image_t3354615620 * ____img_2;

public:
	inline static int32_t get_offset_of__img_2() { return static_cast<int32_t>(offsetof(GrayColorToggle_t580454932, ____img_2)); }
	inline Image_t3354615620 * get__img_2() const { return ____img_2; }
	inline Image_t3354615620 ** get_address_of__img_2() { return &____img_2; }
	inline void set__img_2(Image_t3354615620 * value)
	{
		____img_2 = value;
		Il2CppCodeGenWriteBarrier(&____img_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
