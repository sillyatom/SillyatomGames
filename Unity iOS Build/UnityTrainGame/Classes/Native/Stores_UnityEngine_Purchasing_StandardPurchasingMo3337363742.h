#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IRawStoreProvider
struct IRawStoreProvider_t1819103146;
// Uniject.IUtil
struct IUtil_t1019857343;
// UnityEngine.ILogger
struct ILogger_t4167641990;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t3337363742;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t3435704438;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AndroidStore,System.String>
struct Dictionary_2_t3177696423;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t2916625178;

#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Exte1577084462.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore2117641833.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1574985880.h"
#include "Stores_UnityEngine_Purchasing_FakeStoreUIMode2289974874.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StandardPurchasingModule
struct  StandardPurchasingModule_t3337363742  : public AbstractPurchasingModule_t1577084462
{
public:
	// UnityEngine.Purchasing.AndroidStore UnityEngine.Purchasing.StandardPurchasingModule::m_AndroidPlatform
	int32_t ___m_AndroidPlatform_1;
	// UnityEngine.Purchasing.IRawStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_PlatformProvider
	Il2CppObject * ___m_PlatformProvider_2;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_3;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::m_Util
	Il2CppObject * ___m_Util_4;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::m_Logger
	Il2CppObject * ___m_Logger_5;
	// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::m_StoreInstance
	StoreInstance_t3435704438 * ___m_StoreInstance_7;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_9;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t2916625178 * ___windowsStore_10;

public:
	inline static int32_t get_offset_of_m_AndroidPlatform_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_AndroidPlatform_1)); }
	inline int32_t get_m_AndroidPlatform_1() const { return ___m_AndroidPlatform_1; }
	inline int32_t* get_address_of_m_AndroidPlatform_1() { return &___m_AndroidPlatform_1; }
	inline void set_m_AndroidPlatform_1(int32_t value)
	{
		___m_AndroidPlatform_1 = value;
	}

	inline static int32_t get_offset_of_m_PlatformProvider_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_PlatformProvider_2)); }
	inline Il2CppObject * get_m_PlatformProvider_2() const { return ___m_PlatformProvider_2; }
	inline Il2CppObject ** get_address_of_m_PlatformProvider_2() { return &___m_PlatformProvider_2; }
	inline void set_m_PlatformProvider_2(Il2CppObject * value)
	{
		___m_PlatformProvider_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlatformProvider_2, value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_RuntimePlatform_3)); }
	inline int32_t get_m_RuntimePlatform_3() const { return ___m_RuntimePlatform_3; }
	inline int32_t* get_address_of_m_RuntimePlatform_3() { return &___m_RuntimePlatform_3; }
	inline void set_m_RuntimePlatform_3(int32_t value)
	{
		___m_RuntimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_m_Util_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_Util_4)); }
	inline Il2CppObject * get_m_Util_4() const { return ___m_Util_4; }
	inline Il2CppObject ** get_address_of_m_Util_4() { return &___m_Util_4; }
	inline void set_m_Util_4(Il2CppObject * value)
	{
		___m_Util_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Util_4, value);
	}

	inline static int32_t get_offset_of_m_Logger_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_Logger_5)); }
	inline Il2CppObject * get_m_Logger_5() const { return ___m_Logger_5; }
	inline Il2CppObject ** get_address_of_m_Logger_5() { return &___m_Logger_5; }
	inline void set_m_Logger_5(Il2CppObject * value)
	{
		___m_Logger_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Logger_5, value);
	}

	inline static int32_t get_offset_of_m_StoreInstance_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_StoreInstance_7)); }
	inline StoreInstance_t3435704438 * get_m_StoreInstance_7() const { return ___m_StoreInstance_7; }
	inline StoreInstance_t3435704438 ** get_address_of_m_StoreInstance_7() { return &___m_StoreInstance_7; }
	inline void set_m_StoreInstance_7(StoreInstance_t3435704438 * value)
	{
		___m_StoreInstance_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreInstance_7, value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___U3CuseFakeStoreUIModeU3Ek__BackingField_9)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_9() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_9() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_9; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_9(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_windowsStore_10() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___windowsStore_10)); }
	inline WinRTStore_t2916625178 * get_windowsStore_10() const { return ___windowsStore_10; }
	inline WinRTStore_t2916625178 ** get_address_of_windowsStore_10() { return &___windowsStore_10; }
	inline void set_windowsStore_10(WinRTStore_t2916625178 * value)
	{
		___windowsStore_10 = value;
		Il2CppCodeGenWriteBarrier(&___windowsStore_10, value);
	}
};

struct StandardPurchasingModule_t3337363742_StaticFields
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t3337363742 * ___ModuleInstance_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AndroidStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t3177696423 * ___AndroidStoreNameMap_8;

public:
	inline static int32_t get_offset_of_ModuleInstance_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742_StaticFields, ___ModuleInstance_6)); }
	inline StandardPurchasingModule_t3337363742 * get_ModuleInstance_6() const { return ___ModuleInstance_6; }
	inline StandardPurchasingModule_t3337363742 ** get_address_of_ModuleInstance_6() { return &___ModuleInstance_6; }
	inline void set_ModuleInstance_6(StandardPurchasingModule_t3337363742 * value)
	{
		___ModuleInstance_6 = value;
		Il2CppCodeGenWriteBarrier(&___ModuleInstance_6, value);
	}

	inline static int32_t get_offset_of_AndroidStoreNameMap_8() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742_StaticFields, ___AndroidStoreNameMap_8)); }
	inline Dictionary_2_t3177696423 * get_AndroidStoreNameMap_8() const { return ___AndroidStoreNameMap_8; }
	inline Dictionary_2_t3177696423 ** get_address_of_AndroidStoreNameMap_8() { return &___AndroidStoreNameMap_8; }
	inline void set_AndroidStoreNameMap_8(Dictionary_2_t3177696423 * value)
	{
		___AndroidStoreNameMap_8 = value;
		Il2CppCodeGenWriteBarrier(&___AndroidStoreNameMap_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
