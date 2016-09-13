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

// UnityEngine.Advertisements.UnityAdsNative
struct UnityAdsNative_t3673328473;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen135261457.h"

// System.Void UnityEngine.Advertisements.UnityAdsNative::.ctor()
extern "C"  void UnityAdsNative__ctor_m94487897 (UnityAdsNative_t3673328473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::RegisterNative(System.String)
extern "C"  void UnityAdsNative_RegisterNative_m2676613309 (UnityAdsNative_t3673328473 * __this, String_t* ___extensionPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::Init(System.String,System.Boolean)
extern "C"  void UnityAdsNative_Init_m3268101014 (UnityAdsNative_t3673328473 * __this, String_t* ___gameId, bool ___testModeEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsNative::CanShowAds(System.String)
extern "C"  bool UnityAdsNative_CanShowAds_m2415563766 (UnityAdsNative_t3673328473 * __this, String_t* ___zoneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::SetLogLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void UnityAdsNative_SetLogLevel_m1881895669 (UnityAdsNative_t3673328473 * __this, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::SetCampaignDataURL(System.String)
extern "C"  void UnityAdsNative_SetCampaignDataURL_m2225585092 (UnityAdsNative_t3673328473 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsNative::Show(System.String,System.String)
extern "C"  bool UnityAdsNative_Show_m1337091448 (UnityAdsNative_t3673328473 * __this, String_t* ___zoneId, String_t* ___gamerSid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::OnFetchCompleted()
extern "C"  void UnityAdsNative_OnFetchCompleted_m472008251 (UnityAdsNative_t3673328473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsNative::OnFetchFailed()
extern "C"  void UnityAdsNative_OnFetchFailed_m1255588527 (UnityAdsNative_t3673328473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
