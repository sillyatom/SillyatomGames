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

#include "mscorlib_System_EventArgs516466188.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.ObservableSupport.PropertyChangingEventArgs
struct  PropertyChangingEventArgs_t82586850  : public EventArgs_t516466188
{
public:
	// System.String Newtonsoft.Json.ObservableSupport.PropertyChangingEventArgs::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPropertyNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PropertyChangingEventArgs_t82586850, ___U3CPropertyNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CPropertyNameU3Ek__BackingField_1() const { return ___U3CPropertyNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPropertyNameU3Ek__BackingField_1() { return &___U3CPropertyNameU3Ek__BackingField_1; }
	inline void set_U3CPropertyNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CPropertyNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPropertyNameU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
