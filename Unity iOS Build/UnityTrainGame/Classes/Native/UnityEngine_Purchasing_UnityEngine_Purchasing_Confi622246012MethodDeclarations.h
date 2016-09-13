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

// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t622246012;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t3774245923;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t3614280376;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t849945653;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t2271052632;
// System.String
struct String_t;
// UnityEngine.Purchasing.IDs
struct IDs_t2956127567;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc3774245923.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3132308288.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_IDs2956127567.h"

// System.Void UnityEngine.Purchasing.ConfigurationBuilder::.ctor(UnityEngine.Purchasing.PurchasingFactory)
extern "C"  void ConfigurationBuilder__ctor_m3208934899 (ConfigurationBuilder_t622246012 * __this, PurchasingFactory_t3774245923 * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::get_products()
extern "C"  HashSet_1_t3614280376 * ConfigurationBuilder_get_products_m3467362703 (ConfigurationBuilder_t622246012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::get_factory()
extern "C"  PurchasingFactory_t3774245923 * ConfigurationBuilder_get_factory_m762852413 (ConfigurationBuilder_t622246012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern "C"  ConfigurationBuilder_t622246012 * ConfigurationBuilder_Instance_m2276604038 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___first, IPurchasingModuleU5BU5D_t2271052632* ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs)
extern "C"  ConfigurationBuilder_t622246012 * ConfigurationBuilder_AddProduct_m1483534012 (ConfigurationBuilder_t622246012 * __this, String_t* ___id, int32_t ___type, IDs_t2956127567 * ___storeIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
