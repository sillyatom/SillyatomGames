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

// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t1984802799;
// System.String
struct String_t;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1655822261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1655822261.h"

// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String)
extern "C"  void ProductDescription__ctor_m3339394118 (ProductDescription_t1984802799 * __this, String_t* ___id, ProductMetadata_t1655822261 * ___metadata, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription__ctor_m2303821262 (ProductDescription_t1984802799 * __this, String_t* ___id, ProductMetadata_t1655822261 * ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_storeSpecificId()
extern "C"  String_t* ProductDescription_get_storeSpecificId_m4099866165 (ProductDescription_t1984802799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_storeSpecificId(System.String)
extern "C"  void ProductDescription_set_storeSpecificId_m3291187108 (ProductDescription_t1984802799 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::get_metadata()
extern "C"  ProductMetadata_t1655822261 * ProductDescription_get_metadata_m230519111 (ProductDescription_t1984802799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription_set_metadata_m3910210012 (ProductDescription_t1984802799 * __this, ProductMetadata_t1655822261 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_receipt()
extern "C"  String_t* ProductDescription_get_receipt_m1091010111 (ProductDescription_t1984802799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_receipt(System.String)
extern "C"  void ProductDescription_set_receipt_m3583020762 (ProductDescription_t1984802799 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_transactionId()
extern "C"  String_t* ProductDescription_get_transactionId_m2246391776 (ProductDescription_t1984802799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_transactionId(System.String)
extern "C"  void ProductDescription_set_transactionId_m1766874521 (ProductDescription_t1984802799 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
