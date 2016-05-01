#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// SampleClassLibrary.SampleExternalClass
struct SampleExternalClass_t2965031138;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t1459299685;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "SampleClassLibrary_U3CModuleU3E86524790.h"
#include "SampleClassLibrary_U3CModuleU3E86524790MethodDeclarations.h"
#include "SampleClassLibrary_SampleClassLibrary_SampleExtern2965031138.h"
#include "SampleClassLibrary_SampleClassLibrary_SampleExtern2965031138MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g1459299685.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g1459299685MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SampleClassLibrary.SampleExternalClass::get_SampleString()
extern "C"  String_t* SampleExternalClass_get_SampleString_m3320827155 (SampleExternalClass_t2965031138 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_U3CSampleStringU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SampleClassLibrary.SampleExternalClass::set_SampleString(System.String)
extern "C"  void SampleExternalClass_set_SampleString_m1012420382 (SampleExternalClass_t2965031138 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->set_U3CSampleStringU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> SampleClassLibrary.SampleExternalClass::get_SampleDictionary()
extern "C"  Dictionary_2_t1459299685 * SampleExternalClass_get_SampleDictionary_m3729041346 (SampleExternalClass_t2965031138 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t1459299685 * L_0 = __this->get_U3CSampleDictionaryU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SampleClassLibrary.SampleExternalClass::set_SampleDictionary(System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
extern "C"  void SampleExternalClass_set_SampleDictionary_m3949068131 (SampleExternalClass_t2965031138 * __this, Dictionary_2_t1459299685 * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t1459299685 * L_0 = ___value;
		__this->set_U3CSampleDictionaryU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void SampleClassLibrary.SampleExternalClass::.ctor()
extern TypeInfo* Dictionary_2_t1459299685_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2709812614_MethodInfo_var;
extern const uint32_t SampleExternalClass__ctor_m3699733624_MetadataUsageId;
extern "C"  void SampleExternalClass__ctor_m3699733624 (SampleExternalClass_t2965031138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SampleExternalClass__ctor_m3699733624_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		Dictionary_2_t1459299685 * L_0 = (Dictionary_2_t1459299685 *)il2cpp_codegen_object_new(Dictionary_2_t1459299685_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2709812614(L_0, /*hidden argument*/Dictionary_2__ctor_m2709812614_MethodInfo_var);
		SampleExternalClass_set_SampleDictionary_m3949068131(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
