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

// System.String
struct String_t;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t1701062555;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t3337786410;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t3760456605;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_AndroidJavaRunnable1701062555.h"
#include "UnityEngine_UnityEngine_AndroidJavaProxy3337786410.h"

// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m951538837 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass, String_t* ___methodName, String_t* ___signature, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C"  IntPtr_t AndroidJNIHelper_CreateJavaRunnable_m1606930224 (Il2CppObject * __this /* static, unused */, AndroidJavaRunnable_t1701062555 * ___jrunnable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
extern "C"  IntPtr_t AndroidJNIHelper_CreateJavaProxy_m1509148942 (Il2CppObject * __this /* static, unused */, AndroidJavaProxy_t3337786410 * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C"  jvalueU5BU5D_t3760456605* AndroidJNIHelper_CreateJNIArgArray_m3777113646 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
extern "C"  void AndroidJNIHelper_DeleteJNIArgArray_m4114677528 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t11523773* ___args, jvalueU5BU5D_t3760456605* ___jniArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m2032786277 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass, String_t* ___methodName, ObjectU5BU5D_t11523773* ___args, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
