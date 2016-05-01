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

// Newtonsoft.Json.Utilities.StringUtils/ActionLine
struct ActionLine_t3845092202;
// System.Object
struct Il2CppObject;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.Utilities.StringUtils/ActionLine::.ctor(System.Object,System.IntPtr)
extern "C"  void ActionLine__ctor_m70167161 (ActionLine_t3845092202 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils/ActionLine::Invoke(System.IO.TextWriter,System.String)
extern "C"  void ActionLine_Invoke_m105523814 (ActionLine_t3845092202 * __this, TextWriter_t1689927879 * ___textWriter, String_t* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ActionLine_t3845092202(Il2CppObject* delegate, TextWriter_t1689927879 * ___textWriter, String_t* ___line);
// System.IAsyncResult Newtonsoft.Json.Utilities.StringUtils/ActionLine::BeginInvoke(System.IO.TextWriter,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ActionLine_BeginInvoke_m1477326427 (ActionLine_t3845092202 * __this, TextWriter_t1689927879 * ___textWriter, String_t* ___line, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils/ActionLine::EndInvoke(System.IAsyncResult)
extern "C"  void ActionLine_EndInvoke_m3487842569 (ActionLine_t3845092202 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
