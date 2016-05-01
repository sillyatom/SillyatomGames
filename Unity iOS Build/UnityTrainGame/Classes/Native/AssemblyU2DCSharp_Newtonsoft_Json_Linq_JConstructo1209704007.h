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
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t239125856;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JContainer103968846.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JConstructor
struct  JConstructor_t1209704007  : public JContainer_t103968846
{
public:
	// System.String Newtonsoft.Json.Linq.JConstructor::_name
	String_t* ____name_8;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JConstructor::_values
	Il2CppObject* ____values_9;

public:
	inline static int32_t get_offset_of__name_8() { return static_cast<int32_t>(offsetof(JConstructor_t1209704007, ____name_8)); }
	inline String_t* get__name_8() const { return ____name_8; }
	inline String_t** get_address_of__name_8() { return &____name_8; }
	inline void set__name_8(String_t* value)
	{
		____name_8 = value;
		Il2CppCodeGenWriteBarrier(&____name_8, value);
	}

	inline static int32_t get_offset_of__values_9() { return static_cast<int32_t>(offsetof(JConstructor_t1209704007, ____values_9)); }
	inline Il2CppObject* get__values_9() const { return ____values_9; }
	inline Il2CppObject** get_address_of__values_9() { return &____values_9; }
	inline void set__values_9(Il2CppObject* value)
	{
		____values_9 = value;
		Il2CppCodeGenWriteBarrier(&____values_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
