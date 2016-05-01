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

// Newtonsoft.Json.Linq.JPath
struct JPath_t238875782;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Linq_JToken2367600838.h"

// System.Void Newtonsoft.Json.Linq.JPath::.ctor(System.String)
extern "C"  void JPath__ctor_m1958037821 (JPath_t238875782 * __this, String_t* ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Newtonsoft.Json.Linq.JPath::get_Parts()
extern "C"  List_1_t1634065389 * JPath_get_Parts_m288212603 (JPath_t238875782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPath::set_Parts(System.Collections.Generic.List`1<System.Object>)
extern "C"  void JPath_set_Parts_m1797060072 (JPath_t238875782 * __this, List_1_t1634065389 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPath::ParseMain()
extern "C"  void JPath_ParseMain_m611855 (JPath_t238875782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPath::ParseIndexer(System.Char)
extern "C"  void JPath_ParseIndexer_m3780213106 (JPath_t238875782 * __this, uint16_t ___indexerOpenChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JPath::Evaluate(Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  JToken_t2367600838 * JPath_Evaluate_m1768163318 (JPath_t238875782 * __this, JToken_t2367600838 * ___root, bool ___errorWhenNoMatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
