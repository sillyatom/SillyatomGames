#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception
struct Exception_t1967233988;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.ErrorContext
struct  ErrorContext_t957583840  : public Il2CppObject
{
public:
	// System.Exception Newtonsoft.Json.Serialization.ErrorContext::<Error>k__BackingField
	Exception_t1967233988 * ___U3CErrorU3Ek__BackingField_0;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<OriginalObject>k__BackingField
	Il2CppObject * ___U3COriginalObjectU3Ek__BackingField_1;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<Member>k__BackingField
	Il2CppObject * ___U3CMemberU3Ek__BackingField_2;
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Handled>k__BackingField
	bool ___U3CHandledU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorContext_t957583840, ___U3CErrorU3Ek__BackingField_0)); }
	inline Exception_t1967233988 * get_U3CErrorU3Ek__BackingField_0() const { return ___U3CErrorU3Ek__BackingField_0; }
	inline Exception_t1967233988 ** get_address_of_U3CErrorU3Ek__BackingField_0() { return &___U3CErrorU3Ek__BackingField_0; }
	inline void set_U3CErrorU3Ek__BackingField_0(Exception_t1967233988 * value)
	{
		___U3CErrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CErrorU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3COriginalObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorContext_t957583840, ___U3COriginalObjectU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3COriginalObjectU3Ek__BackingField_1() const { return ___U3COriginalObjectU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3COriginalObjectU3Ek__BackingField_1() { return &___U3COriginalObjectU3Ek__BackingField_1; }
	inline void set_U3COriginalObjectU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3COriginalObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3COriginalObjectU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorContext_t957583840, ___U3CMemberU3Ek__BackingField_2)); }
	inline Il2CppObject * get_U3CMemberU3Ek__BackingField_2() const { return ___U3CMemberU3Ek__BackingField_2; }
	inline Il2CppObject ** get_address_of_U3CMemberU3Ek__BackingField_2() { return &___U3CMemberU3Ek__BackingField_2; }
	inline void set_U3CMemberU3Ek__BackingField_2(Il2CppObject * value)
	{
		___U3CMemberU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMemberU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CHandledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorContext_t957583840, ___U3CHandledU3Ek__BackingField_3)); }
	inline bool get_U3CHandledU3Ek__BackingField_3() const { return ___U3CHandledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHandledU3Ek__BackingField_3() { return &___U3CHandledU3Ek__BackingField_3; }
	inline void set_U3CHandledU3Ek__BackingField_3(bool value)
	{
		___U3CHandledU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
