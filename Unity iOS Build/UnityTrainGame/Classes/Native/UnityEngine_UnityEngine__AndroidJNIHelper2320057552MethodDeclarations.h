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

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t1701062555;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t3760456605;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_AndroidJavaRunnable1701062555.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C"  IntPtr_t _AndroidJNIHelper_CreateJavaRunnable_m2949886695 (Il2CppObject * __this /* static, unused */, AndroidJavaRunnable_t1701062555 * ___jrunnable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C"  jvalueU5BU5D_t3760456605* _AndroidJNIHelper_CreateJNIArgArray_m3400436963 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
extern "C"  void _AndroidJNIHelper_DeleteJNIArgArray_m2053299397 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t11523773* ___args, jvalueU5BU5D_t3760456605* ___jniArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
extern "C"  IntPtr_t _AndroidJNIHelper_ConvertToJNIArray_m1911420401 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodID_m4173184412 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass, String_t* ___methodName, ObjectU5BU5D_t11523773* ___args, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodID_m3581696140 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass, String_t* ___methodName, String_t* ___signature, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
extern "C"  String_t* _AndroidJNIHelper_GetSignature_m1099812039 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
extern "C"  String_t* _AndroidJNIHelper_GetSignature_m357465637 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
