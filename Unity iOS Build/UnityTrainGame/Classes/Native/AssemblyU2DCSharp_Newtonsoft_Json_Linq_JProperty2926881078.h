#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t3164559807;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JContainer103968846.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JProperty
struct  JProperty_t2926881078  : public JContainer_t103968846
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty::_content
	List_1_t3164559807 * ____content_8;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_9;

public:
	inline static int32_t get_offset_of__content_8() { return static_cast<int32_t>(offsetof(JProperty_t2926881078, ____content_8)); }
	inline List_1_t3164559807 * get__content_8() const { return ____content_8; }
	inline List_1_t3164559807 ** get_address_of__content_8() { return &____content_8; }
	inline void set__content_8(List_1_t3164559807 * value)
	{
		____content_8 = value;
		Il2CppCodeGenWriteBarrier(&____content_8, value);
	}

	inline static int32_t get_offset_of__name_9() { return static_cast<int32_t>(offsetof(JProperty_t2926881078, ____name_9)); }
	inline String_t* get__name_9() const { return ____name_9; }
	inline String_t** get_address_of__name_9() { return &____name_9; }
	inline void set__name_9(String_t* value)
	{
		____name_9 = value;
		Il2CppCodeGenWriteBarrier(&____name_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
