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

#include "System_Xml_System_Xml_XmlLinkedNode3253021914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlProcessingInstruction
struct  XmlProcessingInstruction_t1498997132  : public XmlLinkedNode_t3253021914
{
public:
	// System.String System.Xml.XmlProcessingInstruction::target
	String_t* ___target_7;
	// System.String System.Xml.XmlProcessingInstruction::data
	String_t* ___data_8;

public:
	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(XmlProcessingInstruction_t1498997132, ___target_7)); }
	inline String_t* get_target_7() const { return ___target_7; }
	inline String_t** get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(String_t* value)
	{
		___target_7 = value;
		Il2CppCodeGenWriteBarrier(&___target_7, value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(XmlProcessingInstruction_t1498997132, ___data_8)); }
	inline String_t* get_data_8() const { return ___data_8; }
	inline String_t** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(String_t* value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier(&___data_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
