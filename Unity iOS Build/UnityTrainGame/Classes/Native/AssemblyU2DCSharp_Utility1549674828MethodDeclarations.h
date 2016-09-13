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

// Utility
struct Utility_t1549674828;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.UI.Text
struct Text_t3286458198;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198.h"

// System.Void Utility::.ctor()
extern "C"  void Utility__ctor_m2826353567 (Utility_t1549674828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utility::.cctor()
extern "C"  void Utility__cctor_m1235518446 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utility::SinInterpolate(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Utility_SinInterpolate_m2903343064 (Il2CppObject * __this /* static, unused */, float ___timeElapsed, float ___from, float ___to, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utility::GetRandomNumber(System.Double,System.Double)
extern "C"  float Utility_GetRandomNumber_m363916787 (Il2CppObject * __this /* static, unused */, double ___minimum, double ___maximum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Utility::GetRandomNumber(System.Int32,System.Int32)
extern "C"  int32_t Utility_GetRandomNumber_m1068903833 (Il2CppObject * __this /* static, unused */, int32_t ___minimum, int32_t ___maximum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utility::DelayedCallWithArgs(UnityEngine.GameObject,UnityEngine.GameObject,System.String,System.Object,System.Single,System.Single)
extern "C"  void Utility_DelayedCallWithArgs_m949739098 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___target, GameObject_t4012695102 * ___callbackTarget, String_t* ___callback, Il2CppObject * ___args, float ___time, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utility::PlayCoinAnimation(UnityEngine.RectTransform,UnityEngine.RectTransform,System.Int32,System.Single)
extern "C"  void Utility_PlayCoinAnimation_m1100682652 (Utility_t1549674828 * __this, RectTransform_t3317474837 * ___from, RectTransform_t3317474837 * ___to, int32_t ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utility::RollNumbers(UnityEngine.UI.Text,System.Int64,System.Int64,System.Single)
extern "C"  void Utility_RollNumbers_m2551586717 (Utility_t1549674828 * __this, Text_t3286458198 * ___textField, int64_t ___frm, int64_t ___to, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utility::UpdateText(UnityEngine.UI.Text,System.Int64,System.Int64,System.Single)
extern "C"  Il2CppObject * Utility_UpdateText_m4021384180 (Utility_t1549674828 * __this, Text_t3286458198 * ___textField, int64_t ___frm, int64_t ___to, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utility::OnReachDestination(System.Object)
extern "C"  void Utility_OnReachDestination_m4164704021 (Utility_t1549674828 * __this, Il2CppObject * ___cArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
