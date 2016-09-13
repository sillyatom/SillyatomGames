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

// UnityEngine.Purchasing.RawStoreProvider
struct RawStoreProvider_t1811743073;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t2902118808;
// UnityEngine.Purchasing.IUnityCallback
struct IUnityCallback_t1766463400;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t529765235;
// Uniject.IUtil
struct IUtil_t1019857343;
// UnityEngine.Purchasing.INativeAppleStore
struct INativeAppleStore_t1189948958;
// UnityEngine.Purchasing.INativeTizenStore
struct INativeTizenStore_t106777066;

#include "codegen/il2cpp-codegen.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore2117641833.h"

// System.Void UnityEngine.Purchasing.RawStoreProvider::.ctor()
extern "C"  void RawStoreProvider__ctor_m4187291876 (RawStoreProvider_t1811743073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.RawStoreProvider::GetAndroidStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AndroidStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
extern "C"  Il2CppObject * RawStoreProvider_GetAndroidStore_m189122474 (RawStoreProvider_t1811743073 * __this, Il2CppObject * ___callback, int32_t ___store, Il2CppObject * ___binder, Il2CppObject * ___util, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.RawStoreProvider::GetStorekit(UnityEngine.Purchasing.IUnityCallback)
extern "C"  Il2CppObject * RawStoreProvider_GetStorekit_m2399623300 (RawStoreProvider_t1811743073 * __this, Il2CppObject * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeTizenStore UnityEngine.Purchasing.RawStoreProvider::GetTizenStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.Extension.IPurchasingBinder)
extern "C"  Il2CppObject * RawStoreProvider_GetTizenStore_m2016656011 (RawStoreProvider_t1811743073 * __this, Il2CppObject * ___callback, Il2CppObject * ___binder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
