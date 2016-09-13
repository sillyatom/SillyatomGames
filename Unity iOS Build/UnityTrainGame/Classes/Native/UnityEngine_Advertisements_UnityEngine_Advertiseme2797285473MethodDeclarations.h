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

// UnityEngine.Advertisements.UnityAdsUnsupported
struct UnityAdsUnsupported_t2797285473;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen135261457.h"

// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::.ctor()
extern "C"  void UnityAdsUnsupported__ctor_m2716700417 (UnityAdsUnsupported_t2797285473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::RegisterNative(System.String)
extern "C"  void UnityAdsUnsupported_RegisterNative_m3279256677 (UnityAdsUnsupported_t2797285473 * __this, String_t* ___extensionPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::Init(System.String,System.Boolean)
extern "C"  void UnityAdsUnsupported_Init_m4153848046 (UnityAdsUnsupported_t2797285473 * __this, String_t* ___gameId, bool ___testModeEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsUnsupported::CanShowAds(System.String)
extern "C"  bool UnityAdsUnsupported_CanShowAds_m2672159322 (UnityAdsUnsupported_t2797285473 * __this, String_t* ___zoneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::SetCampaignDataURL(System.String)
extern "C"  void UnityAdsUnsupported_SetCampaignDataURL_m1284326252 (UnityAdsUnsupported_t2797285473 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::SetLogLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void UnityAdsUnsupported_SetLogLevel_m3170825805 (UnityAdsUnsupported_t2797285473 * __this, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsUnsupported::Show(System.String,System.String)
extern "C"  bool UnityAdsUnsupported_Show_m3422754780 (UnityAdsUnsupported_t2797285473 * __this, String_t* ___zoneId, String_t* ___gamerSid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
