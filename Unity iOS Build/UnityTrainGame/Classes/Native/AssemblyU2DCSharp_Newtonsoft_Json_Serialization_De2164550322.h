#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1994304730;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t2923694261;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct ThreadSafeStore_2_t483177672;
// System.Func`2<System.Reflection.MemberInfo,System.Boolean>
struct Func_2_t1016985783;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t775214871;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32>
struct Func_2_t2594114621;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct  DefaultContractResolver_t2164550322  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract> Newtonsoft.Json.Serialization.DefaultContractResolver::_typeContractCache
	ThreadSafeStore_2_t483177672 * ____typeContractCache_2;
	// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__typeContractCache_2() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322, ____typeContractCache_2)); }
	inline ThreadSafeStore_2_t483177672 * get__typeContractCache_2() const { return ____typeContractCache_2; }
	inline ThreadSafeStore_2_t483177672 ** get_address_of__typeContractCache_2() { return &____typeContractCache_2; }
	inline void set__typeContractCache_2(ThreadSafeStore_2_t483177672 * value)
	{
		____typeContractCache_2 = value;
		Il2CppCodeGenWriteBarrier(&____typeContractCache_2, value);
	}

	inline static int32_t get_offset_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322, ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3)); }
	inline int32_t get_U3CDefaultMembersSearchFlagsU3Ek__BackingField_3() const { return ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_3() { return &___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3; }
	inline void set_U3CDefaultMembersSearchFlagsU3Ek__BackingField_3(int32_t value)
	{
		___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322, ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4)); }
	inline bool get_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4() const { return ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4() { return &___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4; }
	inline void set_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4(bool value)
	{
		___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4 = value;
	}
};

struct DefaultContractResolver_t2164550322_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::_instance
	Il2CppObject * ____instance_0;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.Serialization.DefaultContractResolver::BuiltInConverters
	Il2CppObject* ___BuiltInConverters_1;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache5
	Func_2_t1016985783 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache6
	Func_2_t1016985783 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache7
	Func_2_t775214871 * ___U3CU3Ef__amU24cache7_7;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache8
	Func_2_t775214871 * ___U3CU3Ef__amU24cache8_8;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache9
	Func_2_t2594114621 * ___U3CU3Ef__amU24cache9_9;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ____instance_0)); }
	inline Il2CppObject * get__instance_0() const { return ____instance_0; }
	inline Il2CppObject ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(Il2CppObject * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}

	inline static int32_t get_offset_of_BuiltInConverters_1() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ___BuiltInConverters_1)); }
	inline Il2CppObject* get_BuiltInConverters_1() const { return ___BuiltInConverters_1; }
	inline Il2CppObject** get_address_of_BuiltInConverters_1() { return &___BuiltInConverters_1; }
	inline void set_BuiltInConverters_1(Il2CppObject* value)
	{
		___BuiltInConverters_1 = value;
		Il2CppCodeGenWriteBarrier(&___BuiltInConverters_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t1016985783 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t1016985783 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t1016985783 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Func_2_t1016985783 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Func_2_t1016985783 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Func_2_t1016985783 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Func_2_t775214871 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Func_2_t775214871 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Func_2_t775214871 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_8() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ___U3CU3Ef__amU24cache8_8)); }
	inline Func_2_t775214871 * get_U3CU3Ef__amU24cache8_8() const { return ___U3CU3Ef__amU24cache8_8; }
	inline Func_2_t775214871 ** get_address_of_U3CU3Ef__amU24cache8_8() { return &___U3CU3Ef__amU24cache8_8; }
	inline void set_U3CU3Ef__amU24cache8_8(Func_2_t775214871 * value)
	{
		___U3CU3Ef__amU24cache8_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_9() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t2164550322_StaticFields, ___U3CU3Ef__amU24cache9_9)); }
	inline Func_2_t2594114621 * get_U3CU3Ef__amU24cache9_9() const { return ___U3CU3Ef__amU24cache9_9; }
	inline Func_2_t2594114621 ** get_address_of_U3CU3Ef__amU24cache9_9() { return &___U3CU3Ef__amU24cache9_9; }
	inline void set_U3CU3Ef__amU24cache9_9(Func_2_t2594114621 * value)
	{
		___U3CU3Ef__amU24cache9_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
