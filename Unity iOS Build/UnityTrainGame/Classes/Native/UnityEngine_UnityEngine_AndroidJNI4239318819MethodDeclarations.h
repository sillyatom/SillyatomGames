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

// System.String
struct String_t;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t3760456605;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Int16[]
struct Int16U5BU5D_t3675865332;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Int64[]
struct Int64U5BU5D_t753178071;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// System.IntPtr[]
struct IntPtrU5BU5D_t2131596413;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"

// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
extern "C"  IntPtr_t AndroidJNI_FindClass_m1230259107 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_FromReflectedMethod_m352872801 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
extern "C"  IntPtr_t AndroidJNI_ExceptionOccurred_m3001920724 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
extern "C"  void AndroidJNI_ExceptionClear_m970305067 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewGlobalRef_m172051970 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteGlobalRef_m3178615354 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteLocalRef_m641765044 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetObjectClass_m798139855 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetMethodID_m2948332762 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetStaticMethodID_m2473492300 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewStringUTF(System.String)
extern "C"  IntPtr_t AndroidJNI_NewStringUTF_m2984333834 (Il2CppObject * __this /* static, unused */, String_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStringUTFChars(System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStringUTFChars_m2788209029 (Il2CppObject * __this /* static, unused */, IntPtr_t ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStringMethod_m3969973572 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallObjectMethod_m637661508 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallIntMethod_m2566231915 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallBooleanMethod_m2659085182 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallShortMethod_m1918107582 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallByteMethod_m4179587108 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint16_t AndroidJNI_CallCharMethod_m1814770148 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallFloatMethod_m4115747916 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallDoubleMethod_m2741331268 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallLongMethod_m4476813 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNI_CallVoidMethod_m3567923620 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStaticStringMethod_m1017965970 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallStaticObjectMethod_m3595893778 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallStaticIntMethod_m1635023773 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallStaticBooleanMethod_m4255357744 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallStaticShortMethod_m751555312 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallStaticByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallStaticByteMethod_m4090362162 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint16_t AndroidJNI_CallStaticCharMethod_m289365362 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallStaticFloatMethod_m3389844734 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallStaticDoubleMethod_m2003248530 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallStaticLongMethod_m3580480731 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
extern "C"  IntPtr_t AndroidJNI_ToBooleanArray_m442048547 (Il2CppObject * __this /* static, unused */, BooleanU5BU5D_t3804927312* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
extern "C"  IntPtr_t AndroidJNI_ToByteArray_m1620048019 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
extern "C"  IntPtr_t AndroidJNI_ToCharArray_m771488467 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
extern "C"  IntPtr_t AndroidJNI_ToShortArray_m2820620963 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3675865332* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
extern "C"  IntPtr_t AndroidJNI_ToIntArray_m1134096790 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t1809983122* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
extern "C"  IntPtr_t AndroidJNI_ToLongArray_m3787458290 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t753178071* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
extern "C"  IntPtr_t AndroidJNI_ToFloatArray_m2734312239 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
extern "C"  IntPtr_t AndroidJNI_ToDoubleArray_m1106831155 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t1048280995* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_ToObjectArray_m3438267649 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t2131596413* ___array, IntPtr_t ___arrayClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
extern "C"  BooleanU5BU5D_t3804927312* AndroidJNI_FromBooleanArray_m3435863496 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
extern "C"  ByteU5BU5D_t58506160* AndroidJNI_FromByteArray_m1645613058 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
extern "C"  CharU5BU5D_t3416858730* AndroidJNI_FromCharArray_m325115202 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
extern "C"  Int16U5BU5D_t3675865332* AndroidJNI_FromShortArray_m2832106632 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
extern "C"  Int32U5BU5D_t1809983122* AndroidJNI_FromIntArray_m2891457973 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
extern "C"  Int64U5BU5D_t753178071* AndroidJNI_FromLongArray_m2965481131 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
extern "C"  SingleU5BU5D_t1219431280* AndroidJNI_FromFloatArray_m1756058774 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
extern "C"  DoubleU5BU5D_t1048280995* AndroidJNI_FromDoubleArray_m2441308386 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
extern "C"  int32_t AndroidJNI_GetArrayLength_m2368966142 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewObjectArray_m2427147689 (Il2CppObject * __this /* static, unused */, int32_t ___size, IntPtr_t ___clazz, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
extern "C"  IntPtr_t AndroidJNI_GetObjectArrayElement_m3151488507 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void AndroidJNI_SetObjectArrayElement_m2717496490 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, int32_t ___index, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
