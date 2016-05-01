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

// System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t3646651330;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m4080508279_gshared (Func_2_t3646651330 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m4080508279(__this, ___object, ___method, method) ((  void (*) (Func_2_t3646651330 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m4080508279_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C"  KeyValuePair_2_t3312956448  Func_2_Invoke_m2321421835_gshared (Func_2_t3646651330 * __this, DictionaryEntry_t130027246  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2321421835(__this, ___arg1, method) ((  KeyValuePair_2_t3312956448  (*) (Func_2_t3646651330 *, DictionaryEntry_t130027246 , const MethodInfo*))Func_2_Invoke_m2321421835_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m718674618_gshared (Func_2_t3646651330 * __this, DictionaryEntry_t130027246  ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m718674618(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t3646651330 *, DictionaryEntry_t130027246 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m718674618_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3312956448  Func_2_EndInvoke_m3237933737_gshared (Func_2_t3646651330 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3237933737(__this, ___result, method) ((  KeyValuePair_2_t3312956448  (*) (Func_2_t3646651330 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m3237933737_gshared)(__this, ___result, method)
