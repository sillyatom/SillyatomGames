#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t3337363742;
// Uniject.IUtil
struct IUtil_t1019857343;
// UnityEngine.ILogger
struct ILogger_t4167641990;
// UnityEngine.Purchasing.IRawStoreProvider
struct IRawStoreProvider_t1819103146;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t3435704438;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t3327163994;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1574985880.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore2117641833.h"
#include "Stores_UnityEngine_Purchasing_FakeStoreUIMode2289974874.h"

// System.Void UnityEngine.Purchasing.StandardPurchasingModule::.ctor(Uniject.IUtil,UnityEngine.ILogger,UnityEngine.Purchasing.IRawStoreProvider,UnityEngine.RuntimePlatform,UnityEngine.Purchasing.AndroidStore)
extern "C"  void StandardPurchasingModule__ctor_m1144642505 (StandardPurchasingModule_t3337363742 * __this, Il2CppObject * ___util, Il2CppObject * ___logger, Il2CppObject * ___platformProvider, int32_t ___platform, int32_t ___android, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.AndroidStore UnityEngine.Purchasing.StandardPurchasingModule::get_androidStore()
extern "C"  int32_t StandardPurchasingModule_get_androidStore_m2765129968 (StandardPurchasingModule_t3337363742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreUIMode()
extern "C"  int32_t StandardPurchasingModule_get_useFakeStoreUIMode_m2119726599 (StandardPurchasingModule_t3337363742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
extern "C"  void StandardPurchasingModule_set_useFakeStoreUIMode_m2074317900 (StandardPurchasingModule_t3337363742 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
extern "C"  StandardPurchasingModule_t3337363742 * StandardPurchasingModule_Instance_m33401695 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance(UnityEngine.Purchasing.AndroidStore)
extern "C"  StandardPurchasingModule_t3337363742 * StandardPurchasingModule_Instance_m4205461352 (Il2CppObject * __this /* static, unused */, int32_t ___androidStore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::Configure()
extern "C"  void StandardPurchasingModule_Configure_m976994123 (StandardPurchasingModule_t3337363742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::InstantiateStore()
extern "C"  StoreInstance_t3435704438 * StandardPurchasingModule_InstantiateStore_m1165120200 (StandardPurchasingModule_t3337363742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateAndroid()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateAndroid_m3341006319 (StandardPurchasingModule_t3337363742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateApple()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateApple_m2493970394 (StandardPurchasingModule_t3337363742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::UseMockWindowsStore(System.Boolean)
extern "C"  void StandardPurchasingModule_UseMockWindowsStore_m4053523979 (StandardPurchasingModule_t3337363742 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::instantiateWindowsStore()
extern "C"  Il2CppObject * StandardPurchasingModule_instantiateWindowsStore_m3046951648 (StandardPurchasingModule_t3337363742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateTizen()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateTizen_m1985302414 (StandardPurchasingModule_t3337363742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFakeStore()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateFakeStore_m529454860 (StandardPurchasingModule_t3337363742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::.cctor()
extern "C"  void StandardPurchasingModule__cctor_m3881368006 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
