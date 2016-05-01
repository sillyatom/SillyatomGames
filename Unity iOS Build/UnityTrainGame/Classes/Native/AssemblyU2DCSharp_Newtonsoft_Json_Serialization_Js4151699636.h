#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_Collections_ObjectModel_KeyedColle3899923451.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonPropertyCollection
struct  JsonPropertyCollection_t4151699636  : public KeyedCollection_2_t3899923451
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonPropertyCollection::_type
	Type_t * ____type_5;

public:
	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(JsonPropertyCollection_t4151699636, ____type_5)); }
	inline Type_t * get__type_5() const { return ____type_5; }
	inline Type_t ** get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(Type_t * value)
	{
		____type_5 = value;
		Il2CppCodeGenWriteBarrier(&____type_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
