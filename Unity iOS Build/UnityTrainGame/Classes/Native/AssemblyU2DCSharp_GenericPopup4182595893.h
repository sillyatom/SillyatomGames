#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "AssemblyU2DCSharp_BaseDialog735619993.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GenericPopup
struct  GenericPopup_t4182595893  : public BaseDialog_t735619993
{
public:
	// UnityEngine.UI.Text GenericPopup::header
	Text_t3286458198 * ___header_7;
	// UnityEngine.UI.Text GenericPopup::body
	Text_t3286458198 * ___body_8;

public:
	inline static int32_t get_offset_of_header_7() { return static_cast<int32_t>(offsetof(GenericPopup_t4182595893, ___header_7)); }
	inline Text_t3286458198 * get_header_7() const { return ___header_7; }
	inline Text_t3286458198 ** get_address_of_header_7() { return &___header_7; }
	inline void set_header_7(Text_t3286458198 * value)
	{
		___header_7 = value;
		Il2CppCodeGenWriteBarrier(&___header_7, value);
	}

	inline static int32_t get_offset_of_body_8() { return static_cast<int32_t>(offsetof(GenericPopup_t4182595893, ___body_8)); }
	inline Text_t3286458198 * get_body_8() const { return ___body_8; }
	inline Text_t3286458198 ** get_address_of_body_8() { return &___body_8; }
	inline void set_body_8(Text_t3286458198 * value)
	{
		___body_8 = value;
		Il2CppCodeGenWriteBarrier(&___body_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
