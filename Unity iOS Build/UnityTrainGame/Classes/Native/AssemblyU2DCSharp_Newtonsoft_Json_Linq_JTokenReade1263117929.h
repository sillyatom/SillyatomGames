#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;

#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JTokenReader
struct  JTokenReader_t1263117929  : public JsonReader_t1817561742
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_root
	JToken_t2367600838 * ____root_9;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_parent
	JToken_t2367600838 * ____parent_10;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_current
	JToken_t2367600838 * ____current_11;

public:
	inline static int32_t get_offset_of__root_9() { return static_cast<int32_t>(offsetof(JTokenReader_t1263117929, ____root_9)); }
	inline JToken_t2367600838 * get__root_9() const { return ____root_9; }
	inline JToken_t2367600838 ** get_address_of__root_9() { return &____root_9; }
	inline void set__root_9(JToken_t2367600838 * value)
	{
		____root_9 = value;
		Il2CppCodeGenWriteBarrier(&____root_9, value);
	}

	inline static int32_t get_offset_of__parent_10() { return static_cast<int32_t>(offsetof(JTokenReader_t1263117929, ____parent_10)); }
	inline JToken_t2367600838 * get__parent_10() const { return ____parent_10; }
	inline JToken_t2367600838 ** get_address_of__parent_10() { return &____parent_10; }
	inline void set__parent_10(JToken_t2367600838 * value)
	{
		____parent_10 = value;
		Il2CppCodeGenWriteBarrier(&____parent_10, value);
	}

	inline static int32_t get_offset_of__current_11() { return static_cast<int32_t>(offsetof(JTokenReader_t1263117929, ____current_11)); }
	inline JToken_t2367600838 * get__current_11() const { return ____current_11; }
	inline JToken_t2367600838 ** get_address_of__current_11() { return &____current_11; }
	inline void set__current_11(JToken_t2367600838 * value)
	{
		____current_11 = value;
		Il2CppCodeGenWriteBarrier(&____current_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
