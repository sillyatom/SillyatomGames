﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Attribute498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
struct  SuppressMessageAttribute_t2221457528  : public Attribute_t498693649
{
public:
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::category
	String_t* ___category_0;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::checkId
	String_t* ___checkId_1;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::justification
	String_t* ___justification_2;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::messageId
	String_t* ___messageId_3;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t2221457528, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier(&___category_0, value);
	}

	inline static int32_t get_offset_of_checkId_1() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t2221457528, ___checkId_1)); }
	inline String_t* get_checkId_1() const { return ___checkId_1; }
	inline String_t** get_address_of_checkId_1() { return &___checkId_1; }
	inline void set_checkId_1(String_t* value)
	{
		___checkId_1 = value;
		Il2CppCodeGenWriteBarrier(&___checkId_1, value);
	}

	inline static int32_t get_offset_of_justification_2() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t2221457528, ___justification_2)); }
	inline String_t* get_justification_2() const { return ___justification_2; }
	inline String_t** get_address_of_justification_2() { return &___justification_2; }
	inline void set_justification_2(String_t* value)
	{
		___justification_2 = value;
		Il2CppCodeGenWriteBarrier(&___justification_2, value);
	}

	inline static int32_t get_offset_of_messageId_3() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t2221457528, ___messageId_3)); }
	inline String_t* get_messageId_3() const { return ___messageId_3; }
	inline String_t** get_address_of_messageId_3() { return &___messageId_3; }
	inline void set_messageId_3(String_t* value)
	{
		___messageId_3 = value;
		Il2CppCodeGenWriteBarrier(&___messageId_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
