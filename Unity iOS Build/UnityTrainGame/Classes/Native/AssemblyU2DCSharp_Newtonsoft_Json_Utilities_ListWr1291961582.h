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

#include "AssemblyU2DCSharp_Newtonsoft_Json_Utilities_Collect101584622.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ListWrapper`1<System.Object>
struct  ListWrapper_1_t1291961582  : public CollectionWrapper_1_t101584622
{
public:
	// System.Collections.Generic.IList`1<T> Newtonsoft.Json.Utilities.ListWrapper`1::_genericList
	Il2CppObject* ____genericList_3;

public:
	inline static int32_t get_offset_of__genericList_3() { return static_cast<int32_t>(offsetof(ListWrapper_1_t1291961582, ____genericList_3)); }
	inline Il2CppObject* get__genericList_3() const { return ____genericList_3; }
	inline Il2CppObject** get_address_of__genericList_3() { return &____genericList_3; }
	inline void set__genericList_3(Il2CppObject* value)
	{
		____genericList_3 = value;
		Il2CppCodeGenWriteBarrier(&____genericList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
