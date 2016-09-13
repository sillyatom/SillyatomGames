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

// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t188697444;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t687992899;
// UnityEngine.Purchasing.Product
struct Product_t16267110;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produc16267110.h"

// System.Void UnityEngine.Purchasing.ProductCollection::.ctor(UnityEngine.Purchasing.Product[])
extern "C"  void ProductCollection__ctor_m2884132982 (ProductCollection_t188697444 * __this, ProductU5BU5D_t687992899* ___products, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::get_all()
extern "C"  ProductU5BU5D_t687992899* ProductCollection_get_all_m2017284433 (ProductCollection_t188697444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithStoreSpecificID(System.String)
extern "C"  Product_t16267110 * ProductCollection_WithStoreSpecificID_m454515299 (ProductCollection_t188697444 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductCollection::<ProductCollection>m__0(UnityEngine.Purchasing.Product)
extern "C"  String_t* ProductCollection_U3CProductCollectionU3Em__0_m2172592227 (Il2CppObject * __this /* static, unused */, Product_t16267110 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductCollection::<ProductCollection>m__1(UnityEngine.Purchasing.Product)
extern "C"  String_t* ProductCollection_U3CProductCollectionU3Em__1_m4283882596 (Il2CppObject * __this /* static, unused */, Product_t16267110 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
