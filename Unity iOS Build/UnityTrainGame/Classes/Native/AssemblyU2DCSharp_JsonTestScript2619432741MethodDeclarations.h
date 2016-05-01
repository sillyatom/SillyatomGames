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

// JsonTestScript
struct JsonTestScript_t2619432741;
// UnityEngine.TextMesh
struct TextMesh_t583678247;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextMesh583678247.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void JsonTestScript::.ctor(UnityEngine.TextMesh)
extern "C"  void JsonTestScript__ctor_m3288136133 (JsonTestScript_t2619432741 * __this, TextMesh_t583678247 * ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::SerializeVector3()
extern "C"  void JsonTestScript_SerializeVector3_m1336784958 (JsonTestScript_t2619432741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::GenericListSerialization()
extern "C"  void JsonTestScript_GenericListSerialization_m3398443785 (JsonTestScript_t2619432741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::PolymorphicSerialization()
extern "C"  void JsonTestScript_PolymorphicSerialization_m477760808 (JsonTestScript_t2619432741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::DictionarySerialization()
extern "C"  void JsonTestScript_DictionarySerialization_m3840589294 (JsonTestScript_t2619432741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::DictionaryObjectValueSerialization()
extern "C"  void JsonTestScript_DictionaryObjectValueSerialization_m2580272130 (JsonTestScript_t2619432741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::DictionaryObjectKeySerialization()
extern "C"  void JsonTestScript_DictionaryObjectKeySerialization_m2754663892 (JsonTestScript_t2619432741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::DisplaySuccess(System.String)
extern "C"  void JsonTestScript_DisplaySuccess_m1966871443 (JsonTestScript_t2619432741 * __this, String_t* ___testName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::DisplayFail(System.String,System.String)
extern "C"  void JsonTestScript_DisplayFail_m3313423946 (JsonTestScript_t2619432741 * __this, String_t* ___testName, String_t* ___reason, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::LogStart(System.String)
extern "C"  void JsonTestScript_LogStart_m4282187158 (JsonTestScript_t2619432741 * __this, String_t* ___testName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::LogEnd(System.Int32)
extern "C"  void JsonTestScript_LogEnd_m1659387702 (JsonTestScript_t2619432741 * __this, int32_t ___testNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::Log(System.Object)
extern "C"  void JsonTestScript_Log_m3862502748 (JsonTestScript_t2619432741 * __this, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::LogSerialized(System.String)
extern "C"  void JsonTestScript_LogSerialized_m2811006310 (JsonTestScript_t2619432741 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonTestScript::LogResult(System.String,System.Object)
extern "C"  void JsonTestScript_LogResult_m3100334651 (JsonTestScript_t2619432741 * __this, String_t* ___shouldEqual, Il2CppObject * ___actual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
