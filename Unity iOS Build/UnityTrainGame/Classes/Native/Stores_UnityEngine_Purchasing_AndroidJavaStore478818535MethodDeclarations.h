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

// UnityEngine.Purchasing.AndroidJavaStore
struct AndroidJavaStore_t478818535;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t1906659325;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AndroidJavaObject1906659325.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.AndroidJavaStore::.ctor(UnityEngine.AndroidJavaObject)
extern "C"  void AndroidJavaStore__ctor_m1510297595 (AndroidJavaStore_t478818535 * __this, AndroidJavaObject_t1906659325 * ___store, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AndroidJavaStore::RetrieveProducts(System.String)
extern "C"  void AndroidJavaStore_RetrieveProducts_m159013148 (AndroidJavaStore_t478818535 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AndroidJavaStore::Purchase(System.String,System.String)
extern "C"  void AndroidJavaStore_Purchase_m4176245687 (AndroidJavaStore_t478818535 * __this, String_t* ___productJSON, String_t* ___developerPayload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AndroidJavaStore::FinishTransaction(System.String,System.String)
extern "C"  void AndroidJavaStore_FinishTransaction_m2848382231 (AndroidJavaStore_t478818535 * __this, String_t* ___productJSON, String_t* ___transactionID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
