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

// PostURL
struct PostURL_t1273431183;
// UnityEngine.WWWForm
struct WWWForm_t3999572776;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t3735278643;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.WWW
struct WWW_t1522972100;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WWWForm3999572776.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"

// System.Void PostURL::.ctor()
extern "C"  void PostURL__ctor_m1961679804 (PostURL_t1273431183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostURL::StartRequest(UnityEngine.WWWForm,System.Action`2<System.Boolean,System.String>)
extern "C"  void PostURL_StartRequest_m3272825833 (PostURL_t1273431183 * __this, WWWForm_t3999572776 * ___form, Action_2_t3735278643 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PostURL::WaitForRequest(UnityEngine.WWW,System.Action`2<System.Boolean,System.String>)
extern "C"  Il2CppObject * PostURL_WaitForRequest_m2552050311 (PostURL_t1273431183 * __this, WWW_t1522972100 * ___www, Action_2_t3735278643 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
