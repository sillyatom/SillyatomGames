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

// Newtonsoft.Json.Schema.ValidationEventHandler
struct ValidationEventHandler_t3025778811;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Schema.ValidationEventArgs
struct ValidationEventArgs_t1948980208;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_Validatio1948980208.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ValidationEventHandler__ctor_m1622391640 (ValidationEventHandler_t3025778811 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.ValidationEventHandler::Invoke(System.Object,Newtonsoft.Json.Schema.ValidationEventArgs)
extern "C"  void ValidationEventHandler_Invoke_m3029449502 (ValidationEventHandler_t3025778811 * __this, Il2CppObject * ___sender, ValidationEventArgs_t1948980208 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ValidationEventHandler_t3025778811(Il2CppObject* delegate, Il2CppObject * ___sender, ValidationEventArgs_t1948980208 * ___e);
// System.IAsyncResult Newtonsoft.Json.Schema.ValidationEventHandler::BeginInvoke(System.Object,Newtonsoft.Json.Schema.ValidationEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ValidationEventHandler_BeginInvoke_m2093764985 (ValidationEventHandler_t3025778811 * __this, Il2CppObject * ___sender, ValidationEventArgs_t1948980208 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.ValidationEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ValidationEventHandler_EndInvoke_m1511692648 (ValidationEventHandler_t3025778811 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
