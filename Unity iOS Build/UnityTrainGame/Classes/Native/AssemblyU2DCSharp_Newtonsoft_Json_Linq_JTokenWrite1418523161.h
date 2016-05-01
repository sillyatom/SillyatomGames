#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JContainer
struct JContainer_t103968846;
// Newtonsoft.Json.Linq.JValue
struct JValue_t2369032254;

#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JTokenWriter
struct  JTokenWriter_t1418523161  : public JsonWriter_t1972966974
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JTokenWriter::_token
	JContainer_t103968846 * ____token_6;
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JTokenWriter::_parent
	JContainer_t103968846 * ____parent_7;
	// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JTokenWriter::_value
	JValue_t2369032254 * ____value_8;

public:
	inline static int32_t get_offset_of__token_6() { return static_cast<int32_t>(offsetof(JTokenWriter_t1418523161, ____token_6)); }
	inline JContainer_t103968846 * get__token_6() const { return ____token_6; }
	inline JContainer_t103968846 ** get_address_of__token_6() { return &____token_6; }
	inline void set__token_6(JContainer_t103968846 * value)
	{
		____token_6 = value;
		Il2CppCodeGenWriteBarrier(&____token_6, value);
	}

	inline static int32_t get_offset_of__parent_7() { return static_cast<int32_t>(offsetof(JTokenWriter_t1418523161, ____parent_7)); }
	inline JContainer_t103968846 * get__parent_7() const { return ____parent_7; }
	inline JContainer_t103968846 ** get_address_of__parent_7() { return &____parent_7; }
	inline void set__parent_7(JContainer_t103968846 * value)
	{
		____parent_7 = value;
		Il2CppCodeGenWriteBarrier(&____parent_7, value);
	}

	inline static int32_t get_offset_of__value_8() { return static_cast<int32_t>(offsetof(JTokenWriter_t1418523161, ____value_8)); }
	inline JValue_t2369032254 * get__value_8() const { return ____value_8; }
	inline JValue_t2369032254 ** get_address_of__value_8() { return &____value_8; }
	inline void set__value_8(JValue_t2369032254 * value)
	{
		____value_8 = value;
		Il2CppCodeGenWriteBarrier(&____value_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
