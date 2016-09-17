﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1655822261;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"

// System.Void UnityEngine.Purchasing.ProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
extern "C"  void ProductMetadata__ctor_m4184957115 (ProductMetadata_t1655822261 * __this, String_t* ___priceString, String_t* ___title, String_t* ___description, String_t* ___currencyCode, Decimal_t1688557254  ___localizedPrice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::.ctor()
extern "C"  void ProductMetadata__ctor_m1586464253 (ProductMetadata_t1655822261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedPriceString()
extern "C"  String_t* ProductMetadata_get_localizedPriceString_m1135811378 (ProductMetadata_t1655822261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPriceString(System.String)
extern "C"  void ProductMetadata_set_localizedPriceString_m2734982751 (ProductMetadata_t1655822261 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedTitle()
extern "C"  String_t* ProductMetadata_get_localizedTitle_m3607244944 (ProductMetadata_t1655822261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedTitle(System.String)
extern "C"  void ProductMetadata_set_localizedTitle_m1808957697 (ProductMetadata_t1655822261 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedDescription()
extern "C"  String_t* ProductMetadata_get_localizedDescription_m656225268 (ProductMetadata_t1655822261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedDescription(System.String)
extern "C"  void ProductMetadata_set_localizedDescription_m282343645 (ProductMetadata_t1655822261 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductMetadata::get_isoCurrencyCode()
extern "C"  String_t* ProductMetadata_get_isoCurrencyCode_m945584658 (ProductMetadata_t1655822261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_isoCurrencyCode(System.String)
extern "C"  void ProductMetadata_set_isoCurrencyCode_m2768567169 (ProductMetadata_t1655822261 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal UnityEngine.Purchasing.ProductMetadata::get_localizedPrice()
extern "C"  Decimal_t1688557254  ProductMetadata_get_localizedPrice_m1236125815 (ProductMetadata_t1655822261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPrice(System.Decimal)
extern "C"  void ProductMetadata_set_localizedPrice_m4161723968 (ProductMetadata_t1655822261 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;