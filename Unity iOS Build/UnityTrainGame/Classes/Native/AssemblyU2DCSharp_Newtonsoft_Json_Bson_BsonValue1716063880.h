#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonToken1714632464.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonType556079793.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonValue
struct  BsonValue_t1716063880  : public BsonToken_t1714632464
{
public:
	// System.Object Newtonsoft.Json.Bson.BsonValue::_value
	Il2CppObject * ____value_2;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonValue::_type
	int8_t ____type_3;

public:
	inline static int32_t get_offset_of__value_2() { return static_cast<int32_t>(offsetof(BsonValue_t1716063880, ____value_2)); }
	inline Il2CppObject * get__value_2() const { return ____value_2; }
	inline Il2CppObject ** get_address_of__value_2() { return &____value_2; }
	inline void set__value_2(Il2CppObject * value)
	{
		____value_2 = value;
		Il2CppCodeGenWriteBarrier(&____value_2, value);
	}

	inline static int32_t get_offset_of__type_3() { return static_cast<int32_t>(offsetof(BsonValue_t1716063880, ____type_3)); }
	inline int8_t get__type_3() const { return ____type_3; }
	inline int8_t* get_address_of__type_3() { return &____type_3; }
	inline void set__type_3(int8_t value)
	{
		____type_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
