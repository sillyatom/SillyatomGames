#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonType556079793.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct  ContainerContext_t1893523982  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader/ContainerContext::Type
	int8_t ___Type_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Length
	int32_t ___Length_1;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Position
	int32_t ___Position_2;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(ContainerContext_t1893523982, ___Type_0)); }
	inline int8_t get_Type_0() const { return ___Type_0; }
	inline int8_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int8_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(ContainerContext_t1893523982, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(ContainerContext_t1893523982, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
