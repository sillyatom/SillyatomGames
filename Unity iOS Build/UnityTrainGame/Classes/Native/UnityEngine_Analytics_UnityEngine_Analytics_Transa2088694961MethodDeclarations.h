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

// UnityEngine.Analytics.TransactionEvent
struct TransactionEvent_t2088694961;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"

// System.Void UnityEngine.Analytics.TransactionEvent::.ctor(System.String,System.Decimal,System.String,System.String,System.String,System.Int64)
extern "C"  void TransactionEvent__ctor_m1703768401 (TransactionEvent_t2088694961 * __this, String_t* ___productId, Decimal_t1688557254  ___amount, String_t* ___currency, String_t* ___receiptPurchaseData, String_t* ___signature, int64_t ___transactionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
