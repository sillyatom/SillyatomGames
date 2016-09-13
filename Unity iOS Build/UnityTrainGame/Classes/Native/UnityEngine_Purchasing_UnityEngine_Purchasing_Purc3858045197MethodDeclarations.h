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

// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t3858045197;
// UnityEngine.Purchasing.Product
struct Product_t16267110;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produc16267110.h"

// System.Void UnityEngine.Purchasing.PurchaseEventArgs::.ctor(UnityEngine.Purchasing.Product)
extern "C"  void PurchaseEventArgs__ctor_m1870636431 (PurchaseEventArgs_t3858045197 * __this, Product_t16267110 * ___purchasedProduct, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
extern "C"  Product_t16267110 * PurchaseEventArgs_get_purchasedProduct_m2077277865 (PurchaseEventArgs_t3858045197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchaseEventArgs::set_purchasedProduct(UnityEngine.Purchasing.Product)
extern "C"  void PurchaseEventArgs_set_purchasedProduct_m3891761010 (PurchaseEventArgs_t3858045197 * __this, Product_t16267110 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
