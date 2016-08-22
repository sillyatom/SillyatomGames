#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PostURL
struct  PostURL_t1273431183  : public MonoBehaviour_t3012272455
{
public:
	// System.String PostURL::_url
	String_t* ____url_2;

public:
	inline static int32_t get_offset_of__url_2() { return static_cast<int32_t>(offsetof(PostURL_t1273431183, ____url_2)); }
	inline String_t* get__url_2() const { return ____url_2; }
	inline String_t** get_address_of__url_2() { return &____url_2; }
	inline void set__url_2(String_t* value)
	{
		____url_2 = value;
		Il2CppCodeGenWriteBarrier(&____url_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
