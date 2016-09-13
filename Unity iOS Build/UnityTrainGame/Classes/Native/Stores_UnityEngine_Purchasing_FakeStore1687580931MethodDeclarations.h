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

// UnityEngine.Purchasing.FakeStore
struct FakeStore_t1687580931;
// System.String
struct String_t;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t1319332543;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t4078737053;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t915591705;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ915591705.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.FakeStore::.ctor()
extern "C"  void FakeStore__ctor_m2207285772 (FakeStore_t1687580931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.FakeStore::get_unavailableProductId()
extern "C"  String_t* FakeStore_get_unavailableProductId_m1427773758 (FakeStore_t1687580931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void FakeStore_Initialize_m246269189 (FakeStore_t1687580931 * __this, Il2CppObject * ___biller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void FakeStore_RetrieveProducts_m2250006612 (FakeStore_t1687580931 * __this, ReadOnlyCollection_1_t4078737053 * ___productDefinitions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void FakeStore_Purchase_m3375370380 (FakeStore_t1687580931 * __this, ProductDefinition_t915591705 * ___product, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void FakeStore_FinishTransaction_m1589455816 (FakeStore_t1687580931 * __this, ProductDefinition_t915591705 * ___product, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
