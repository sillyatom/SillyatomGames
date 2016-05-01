#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_t1241281093;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonToken1714632464.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonObject
struct  BsonObject_t3115147958  : public BsonToken_t1714632464
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::_children
	List_1_t1241281093 * ____children_2;

public:
	inline static int32_t get_offset_of__children_2() { return static_cast<int32_t>(offsetof(BsonObject_t3115147958, ____children_2)); }
	inline List_1_t1241281093 * get__children_2() const { return ____children_2; }
	inline List_1_t1241281093 ** get_address_of__children_2() { return &____children_2; }
	inline void set__children_2(List_1_t1241281093 * value)
	{
		____children_2 = value;
		Il2CppCodeGenWriteBarrier(&____children_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
