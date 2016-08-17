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
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.CollectionUtils/<CreateListWrapper>c__AnonStorey1C
struct  U3CCreateListWrapperU3Ec__AnonStorey1C_t3670503064  : public Il2CppObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.CollectionUtils/<CreateListWrapper>c__AnonStorey1C::listDefinition
	Type_t * ___listDefinition_0;
	// System.Object Newtonsoft.Json.Utilities.CollectionUtils/<CreateListWrapper>c__AnonStorey1C::list
	Il2CppObject * ___list_1;

public:
	inline static int32_t get_offset_of_listDefinition_0() { return static_cast<int32_t>(offsetof(U3CCreateListWrapperU3Ec__AnonStorey1C_t3670503064, ___listDefinition_0)); }
	inline Type_t * get_listDefinition_0() const { return ___listDefinition_0; }
	inline Type_t ** get_address_of_listDefinition_0() { return &___listDefinition_0; }
	inline void set_listDefinition_0(Type_t * value)
	{
		___listDefinition_0 = value;
		Il2CppCodeGenWriteBarrier(&___listDefinition_0, value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(U3CCreateListWrapperU3Ec__AnonStorey1C_t3670503064, ___list_1)); }
	inline Il2CppObject * get_list_1() const { return ___list_1; }
	inline Il2CppObject ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(Il2CppObject * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier(&___list_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
