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

// Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t2916829087;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.ObservableSupport.PropertyChangingEventArgs
struct PropertyChangingEventArgs_t82586850;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_ObservableSupport_82586850.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangingEventHandler__ctor_m1145333392 (PropertyChangingEventHandler_t2916829087 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler::Invoke(System.Object,Newtonsoft.Json.ObservableSupport.PropertyChangingEventArgs)
extern "C"  void PropertyChangingEventHandler_Invoke_m1061272888 (PropertyChangingEventHandler_t2916829087 * __this, Il2CppObject * ___sender, PropertyChangingEventArgs_t82586850 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PropertyChangingEventHandler_t2916829087(Il2CppObject* delegate, Il2CppObject * ___sender, PropertyChangingEventArgs_t82586850 * ___e);
// System.IAsyncResult Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler::BeginInvoke(System.Object,Newtonsoft.Json.ObservableSupport.PropertyChangingEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PropertyChangingEventHandler_BeginInvoke_m2467325053 (PropertyChangingEventHandler_t2916829087 * __this, Il2CppObject * ___sender, PropertyChangingEventArgs_t82586850 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangingEventHandler_EndInvoke_m1534173344 (PropertyChangingEventHandler_t2916829087 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
