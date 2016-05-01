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

#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JContainer
struct  JContainer_t103968846  : public JToken_t2367600838
{
public:
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	Il2CppObject * ____syncRoot_6;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_7;

public:
	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(JContainer_t103968846, ____syncRoot_6)); }
	inline Il2CppObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline Il2CppObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(Il2CppObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier(&____syncRoot_6, value);
	}

	inline static int32_t get_offset_of__busy_7() { return static_cast<int32_t>(offsetof(JContainer_t103968846, ____busy_7)); }
	inline bool get__busy_7() const { return ____busy_7; }
	inline bool* get_address_of__busy_7() { return &____busy_7; }
	inline void set__busy_7(bool value)
	{
		____busy_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
