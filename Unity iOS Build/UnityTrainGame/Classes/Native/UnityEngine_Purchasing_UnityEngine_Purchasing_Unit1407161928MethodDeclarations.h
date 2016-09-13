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

// UnityEngine.Purchasing.UnityAnalytics
struct UnityAnalytics_t1407161928;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"

// System.Void UnityEngine.Purchasing.UnityAnalytics::.ctor()
extern "C"  void UnityAnalytics__ctor_m1602732058 (UnityAnalytics_t1407161928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityAnalytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  void UnityAnalytics_Transaction_m1916749884 (UnityAnalytics_t1407161928 * __this, String_t* ___productId, Decimal_t1688557254  ___price, String_t* ___currency, String_t* ___receipt, String_t* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Purchasing.UnityAnalytics::GetUnityAnalyticsMethod()
extern "C"  MethodInfo_t * UnityAnalytics_GetUnityAnalyticsMethod_m1520757528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
