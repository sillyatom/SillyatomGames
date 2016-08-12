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

// InGameInfoText
struct InGameInfoText_t36852466;
// System.String
struct String_t;
// System.Action
struct Action_t437523947;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Core_System_Action437523947.h"

// System.Void InGameInfoText::.ctor()
extern "C"  void InGameInfoText__ctor_m801941993 (InGameInfoText_t36852466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameInfoText::Hide()
extern "C"  void InGameInfoText_Hide_m1606563581 (InGameInfoText_t36852466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGameInfoText::ShowMessage(System.String,System.Action)
extern "C"  void InGameInfoText_ShowMessage_m3546954056 (InGameInfoText_t36852466 * __this, String_t* ___msg, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InGameInfoText::RemoveMessage(System.Action)
extern "C"  Il2CppObject * InGameInfoText_RemoveMessage_m70429915 (InGameInfoText_t36852466 * __this, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
