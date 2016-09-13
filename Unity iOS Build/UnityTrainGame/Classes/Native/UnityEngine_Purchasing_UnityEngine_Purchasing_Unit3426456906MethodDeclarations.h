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

// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t341782915;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t622246012;
// UnityEngine.ILogger
struct ILogger_t4167641990;
// System.String
struct String_t;
// UnityEngine.Purchasing.IUnityAnalytics
struct IUnityAnalytics_t4084261585;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Confi622246012.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
extern "C"  void UnityPurchasing_Initialize_m1759774959 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___listener, ConfigurationBuilder_t622246012 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder,UnityEngine.ILogger,System.String,UnityEngine.Purchasing.IUnityAnalytics)
extern "C"  void UnityPurchasing_Initialize_m4018393200 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___listener, ConfigurationBuilder_t622246012 * ___builder, Il2CppObject * ___logger, String_t* ___persistentDatapath, Il2CppObject * ___analytics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
