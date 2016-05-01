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

// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_t3115147958;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t1714632464;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>
struct IEnumerator_1_t1927428572;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonToken1714632464.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Bson_BsonType556079793.h"

// System.Void Newtonsoft.Json.Bson.BsonObject::.ctor()
extern "C"  void BsonObject__ctor_m420117619 (BsonObject_t3115147958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * BsonObject_System_Collections_IEnumerable_GetEnumerator_m1055900558 (BsonObject_t3115147958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonObject_Add_m409127766 (BsonObject_t3115147958 * __this, String_t* ___name, BsonToken_t1714632464 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonObject::get_Type()
extern "C"  int8_t BsonObject_get_Type_m2991329076 (BsonObject_t3115147958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
extern "C"  Il2CppObject* BsonObject_GetEnumerator_m790388065 (BsonObject_t3115147958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
