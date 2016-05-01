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
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;

#include "mscorlib_System_EventArgs516466188.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.ErrorEventArgs
struct  ErrorEventArgs_t1025956040  : public EventArgs_t516466188
{
public:
	// System.Object Newtonsoft.Json.Serialization.ErrorEventArgs::<CurrentObject>k__BackingField
	Il2CppObject * ___U3CCurrentObjectU3Ek__BackingField_1;
	// Newtonsoft.Json.Serialization.ErrorContext Newtonsoft.Json.Serialization.ErrorEventArgs::<ErrorContext>k__BackingField
	ErrorContext_t957583840 * ___U3CErrorContextU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t1025956040, ___U3CCurrentObjectU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CCurrentObjectU3Ek__BackingField_1() const { return ___U3CCurrentObjectU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CCurrentObjectU3Ek__BackingField_1() { return &___U3CCurrentObjectU3Ek__BackingField_1; }
	inline void set_U3CCurrentObjectU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CCurrentObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentObjectU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CErrorContextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t1025956040, ___U3CErrorContextU3Ek__BackingField_2)); }
	inline ErrorContext_t957583840 * get_U3CErrorContextU3Ek__BackingField_2() const { return ___U3CErrorContextU3Ek__BackingField_2; }
	inline ErrorContext_t957583840 ** get_address_of_U3CErrorContextU3Ek__BackingField_2() { return &___U3CErrorContextU3Ek__BackingField_2; }
	inline void set_U3CErrorContextU3Ek__BackingField_2(ErrorContext_t957583840 * value)
	{
		___U3CErrorContextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CErrorContextU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
