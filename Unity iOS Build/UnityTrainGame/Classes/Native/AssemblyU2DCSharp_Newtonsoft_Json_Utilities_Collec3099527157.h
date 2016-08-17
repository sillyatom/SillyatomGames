#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3003598734;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.CollectionUtils/<TryGetSingleItem>c__AnonStorey1A`1<System.Object>
struct  U3CTryGetSingleItemU3Ec__AnonStorey1A_1_t3099527157  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<T> Newtonsoft.Json.Utilities.CollectionUtils/<TryGetSingleItem>c__AnonStorey1A`1::list
	Il2CppObject* ___list_0;
	// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils/<TryGetSingleItem>c__AnonStorey1A`1::returnDefaultIfEmpty
	bool ___returnDefaultIfEmpty_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(U3CTryGetSingleItemU3Ec__AnonStorey1A_1_t3099527157, ___list_0)); }
	inline Il2CppObject* get_list_0() const { return ___list_0; }
	inline Il2CppObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(Il2CppObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}

	inline static int32_t get_offset_of_returnDefaultIfEmpty_1() { return static_cast<int32_t>(offsetof(U3CTryGetSingleItemU3Ec__AnonStorey1A_1_t3099527157, ___returnDefaultIfEmpty_1)); }
	inline bool get_returnDefaultIfEmpty_1() const { return ___returnDefaultIfEmpty_1; }
	inline bool* get_address_of_returnDefaultIfEmpty_1() { return &___returnDefaultIfEmpty_1; }
	inline void set_returnDefaultIfEmpty_1(bool value)
	{
		___returnDefaultIfEmpty_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
