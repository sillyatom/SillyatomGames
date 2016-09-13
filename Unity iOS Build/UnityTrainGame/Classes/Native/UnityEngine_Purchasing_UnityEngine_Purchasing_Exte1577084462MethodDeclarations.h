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

// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct AbstractPurchasingModule_t1577084462;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t529765235;
// System.String
struct String_t;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t3327163994;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::.ctor()
extern "C"  void AbstractPurchasingModule__ctor_m2051681840 (AbstractPurchasingModule_t1577084462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::Configure(UnityEngine.Purchasing.Extension.IPurchasingBinder)
extern "C"  void AbstractPurchasingModule_Configure_m2080723947 (AbstractPurchasingModule_t1577084462 * __this, Il2CppObject * ___binder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::RegisterStore(System.String,UnityEngine.Purchasing.Extension.IStore)
extern "C"  void AbstractPurchasingModule_RegisterStore_m2292342082 (AbstractPurchasingModule_t1577084462 * __this, String_t* ___name, Il2CppObject * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
