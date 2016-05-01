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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>,System.Boolean>
struct Func_2_t2991896256;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_437890753.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2631096295_gshared (Func_2_t2991896256 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2631096295(__this, ___object, ___method, method) ((  void (*) (Func_2_t2991896256 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2631096295_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m1949974171_gshared (Func_2_t2991896256 * __this, KeyValuePair_2_t437890753  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1949974171(__this, ___arg1, method) ((  bool (*) (Func_2_t2991896256 *, KeyValuePair_2_t437890753 , const MethodInfo*))Func_2_Invoke_m1949974171_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m3011302474_gshared (Func_2_t2991896256 * __this, KeyValuePair_2_t437890753  ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3011302474(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t2991896256 *, KeyValuePair_2_t437890753 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m3011302474_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m1761920025_gshared (Func_2_t2991896256 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1761920025(__this, ___result, method) ((  bool (*) (Func_2_t2991896256 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m1761920025_gshared)(__this, ___result, method)
