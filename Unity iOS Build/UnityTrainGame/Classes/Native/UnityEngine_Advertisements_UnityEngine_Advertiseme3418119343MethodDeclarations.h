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

// UnityEngine.Advertisements.UnityAdsEditor
struct UnityAdsEditor_t3418119343;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t1671424805;
// UnityEngine.WWW
struct WWW_t1522972100;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen135261457.h"

// System.Void UnityEngine.Advertisements.UnityAdsEditor::.ctor()
extern "C"  void UnityAdsEditor__ctor_m3976139971 (UnityAdsEditor_t3418119343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::RegisterNative(System.String)
extern "C"  void UnityAdsEditor_RegisterNative_m4194002087 (UnityAdsEditor_t3418119343 * __this, String_t* ___extensionPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::Init(System.String,System.Boolean)
extern "C"  void UnityAdsEditor_Init_m1629594092 (UnityAdsEditor_t3418119343 * __this, String_t* ___gameId, bool ___testModeEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Advertisements.UnityAdsEditor::GetAdPlan(System.String,System.Action`1<UnityEngine.WWW>)
extern "C"  Il2CppObject * UnityAdsEditor_GetAdPlan_m2752032585 (UnityAdsEditor_t3418119343 * __this, String_t* ___URL, Action_1_t1671424805 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::HandleResponse(UnityEngine.WWW)
extern "C"  void UnityAdsEditor_HandleResponse_m4023781576 (UnityAdsEditor_t3418119343 * __this, WWW_t1522972100 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> UnityEngine.Advertisements.UnityAdsEditor::CollectZoneIds(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject* UnityAdsEditor_CollectZoneIds_m4005528395 (UnityAdsEditor_t3418119343 * __this, Il2CppObject* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::CanShowAds(System.String)
extern "C"  bool UnityAdsEditor_CanShowAds_m4140735712 (UnityAdsEditor_t3418119343 * __this, String_t* ___zoneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::SetLogLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void UnityAdsEditor_SetLogLevel_m1404868299 (UnityAdsEditor_t3418119343 * __this, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::SetCampaignDataURL(System.String)
extern "C"  void UnityAdsEditor_SetCampaignDataURL_m2172730030 (UnityAdsEditor_t3418119343 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::Show(System.String,System.String)
extern "C"  bool UnityAdsEditor_Show_m1284236386 (UnityAdsEditor_t3418119343 * __this, String_t* ___zoneId, String_t* ___gamerSid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
