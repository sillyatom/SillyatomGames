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

// UnityEngine.Purchasing.Product
struct Product_t16267110;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t915591705;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1655822261;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ915591705.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1655822261.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata,System.String)
extern "C"  void Product__ctor_m3050926810 (Product_t16267110 * __this, ProductDefinition_t915591705 * ___definition, ProductMetadata_t1655822261 * ___metadata, String_t* ___receipt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product__ctor_m329127710 (Product_t16267110 * __this, ProductDefinition_t915591705 * ___definition, ProductMetadata_t1655822261 * ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
extern "C"  ProductDefinition_t915591705 * Product_get_definition_m2740826390 (Product_t16267110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_definition(UnityEngine.Purchasing.ProductDefinition)
extern "C"  void Product_set_definition_m1087154463 (Product_t16267110 * __this, ProductDefinition_t915591705 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
extern "C"  ProductMetadata_t1655822261 * Product_get_metadata_m1996137622 (Product_t16267110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product_set_metadata_m2987604959 (Product_t16267110 * __this, ProductMetadata_t1655822261 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::get_availableToPurchase()
extern "C"  bool Product_get_availableToPurchase_m3065859940 (Product_t16267110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_availableToPurchase(System.Boolean)
extern "C"  void Product_set_availableToPurchase_m3344719689 (Product_t16267110 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_transactionID()
extern "C"  String_t* Product_get_transactionID_m3111644087 (Product_t16267110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_transactionID(System.String)
extern "C"  void Product_set_transactionID_m145730364 (Product_t16267110 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::get_hasReceipt()
extern "C"  bool Product_get_hasReceipt_m4115433121 (Product_t16267110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_receipt()
extern "C"  String_t* Product_get_receipt_m1032630134 (Product_t16267110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_receipt(System.String)
extern "C"  void Product_set_receipt_m344307357 (Product_t16267110 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
