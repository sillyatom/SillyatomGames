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

// Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t2177590122;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t1292868855;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_ObservableSuppor1292868855.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void NotifyCollectionChangedEventHandler__ctor_m3683956797 (NotifyCollectionChangedEventHandler_t2177590122 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler::Invoke(System.Object,Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventArgs)
extern "C"  void NotifyCollectionChangedEventHandler_Invoke_m1151967720 (NotifyCollectionChangedEventHandler_t2177590122 * __this, Il2CppObject * ___sender, NotifyCollectionChangedEventArgs_t1292868855 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NotifyCollectionChangedEventHandler_t2177590122(Il2CppObject* delegate, Il2CppObject * ___sender, NotifyCollectionChangedEventArgs_t1292868855 * ___e);
// System.IAsyncResult Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler::BeginInvoke(System.Object,Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NotifyCollectionChangedEventHandler_BeginInvoke_m923042521 (NotifyCollectionChangedEventHandler_t2177590122 * __this, Il2CppObject * ___sender, NotifyCollectionChangedEventArgs_t1292868855 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void NotifyCollectionChangedEventHandler_EndInvoke_m3001012429 (NotifyCollectionChangedEventHandler_t2177590122 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
