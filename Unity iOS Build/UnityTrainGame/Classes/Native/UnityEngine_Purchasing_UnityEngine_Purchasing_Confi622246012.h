#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t3774245923;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t3614280376;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ConfigurationBuilder
struct  ConfigurationBuilder_t622246012  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::m_Factory
	PurchasingFactory_t3774245923 * ___m_Factory_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::m_Products
	HashSet_1_t3614280376 * ___m_Products_1;

public:
	inline static int32_t get_offset_of_m_Factory_0() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t622246012, ___m_Factory_0)); }
	inline PurchasingFactory_t3774245923 * get_m_Factory_0() const { return ___m_Factory_0; }
	inline PurchasingFactory_t3774245923 ** get_address_of_m_Factory_0() { return &___m_Factory_0; }
	inline void set_m_Factory_0(PurchasingFactory_t3774245923 * value)
	{
		___m_Factory_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Factory_0, value);
	}

	inline static int32_t get_offset_of_m_Products_1() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t622246012, ___m_Products_1)); }
	inline HashSet_1_t3614280376 * get_m_Products_1() const { return ___m_Products_1; }
	inline HashSet_1_t3614280376 ** get_address_of_m_Products_1() { return &___m_Products_1; }
	inline void set_m_Products_1(HashSet_1_t3614280376 * value)
	{
		___m_Products_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Products_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
