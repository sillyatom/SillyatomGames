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

// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t4279873365;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2274432868.h"

// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
extern "C"  void PurchaseFailureDescription__ctor_m2286132245 (PurchaseFailureDescription_t4279873365 * __this, String_t* ___productId, int32_t ___reason, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_productId()
extern "C"  String_t* PurchaseFailureDescription_get_productId_m1904210379 (PurchaseFailureDescription_t4279873365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_productId(System.String)
extern "C"  void PurchaseFailureDescription_set_productId_m4185913870 (PurchaseFailureDescription_t4279873365 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_reason()
extern "C"  int32_t PurchaseFailureDescription_get_reason_m840965489 (PurchaseFailureDescription_t4279873365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_reason(UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void PurchaseFailureDescription_set_reason_m2720233160 (PurchaseFailureDescription_t4279873365 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_message(System.String)
extern "C"  void PurchaseFailureDescription_set_message_m3888372881 (PurchaseFailureDescription_t4279873365 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;