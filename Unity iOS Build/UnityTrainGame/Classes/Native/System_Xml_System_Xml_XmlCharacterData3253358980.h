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

// System.Xml.XmlCharacterData
struct  XmlCharacterData_t3253358980  : public XmlLinkedNode_t3253021914
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_7;

public:
	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(XmlCharacterData_t3253358980, ___data_7)); }
	inline String_t* get_data_7() const { return ___data_7; }
	inline String_t** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(String_t* value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier(&___data_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
