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

// UnityEngine.Purchasing.AnalyticsReporter
struct AnalyticsReporter_t3044675838;
// UnityEngine.Purchasing.IUnityAnalytics
struct IUnityAnalytics_t4084261585;
// UnityEngine.Purchasing.Product
struct Product_t16267110;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produc16267110.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.AnalyticsReporter::.ctor(UnityEngine.Purchasing.IUnityAnalytics)
extern "C"  void AnalyticsReporter__ctor_m542232179 (AnalyticsReporter_t3044675838 * __this, Il2CppObject * ___analytics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::OnPurchaseSucceeded(UnityEngine.Purchasing.Product)
extern "C"  void AnalyticsReporter_OnPurchaseSucceeded_m3797465501 (AnalyticsReporter_t3044675838 * __this, Product_t16267110 * ___product, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::ExtractReceiptAndSignature(UnityEngine.Purchasing.Product,System.String&,System.String&)
extern "C"  void AnalyticsReporter_ExtractReceiptAndSignature_m3441574546 (AnalyticsReporter_t3044675838 * __this, Product_t16267110 * ___product, String_t** ___receipt, String_t** ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
