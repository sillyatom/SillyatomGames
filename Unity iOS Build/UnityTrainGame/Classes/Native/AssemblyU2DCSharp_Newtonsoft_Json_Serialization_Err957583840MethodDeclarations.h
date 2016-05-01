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

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Newtonsoft.Json.Serialization.ErrorContext::.ctor(System.Object,System.Object,System.Exception)
extern "C"  void ErrorContext__ctor_m2500188981 (ErrorContext_t957583840 * __this, Il2CppObject * ___originalObject, Il2CppObject * ___member, Exception_t1967233988 * ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Newtonsoft.Json.Serialization.ErrorContext::get_Error()
extern "C"  Exception_t1967233988 * ErrorContext_get_Error_m3495269841 (ErrorContext_t957583840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Error(System.Exception)
extern "C"  void ErrorContext_set_Error_m4234895514 (ErrorContext_t957583840 * __this, Exception_t1967233988 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.ErrorContext::get_OriginalObject()
extern "C"  Il2CppObject * ErrorContext_get_OriginalObject_m1785841649 (ErrorContext_t957583840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_OriginalObject(System.Object)
extern "C"  void ErrorContext_set_OriginalObject_m4197359588 (ErrorContext_t957583840 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.ErrorContext::get_Member()
extern "C"  Il2CppObject * ErrorContext_get_Member_m957560731 (ErrorContext_t957583840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Member(System.Object)
extern "C"  void ErrorContext_set_Member_m3849233786 (ErrorContext_t957583840 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::get_Handled()
extern "C"  bool ErrorContext_get_Handled_m1276804510 (ErrorContext_t957583840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Handled(System.Boolean)
extern "C"  void ErrorContext_set_Handled_m758993109 (ErrorContext_t957583840 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
