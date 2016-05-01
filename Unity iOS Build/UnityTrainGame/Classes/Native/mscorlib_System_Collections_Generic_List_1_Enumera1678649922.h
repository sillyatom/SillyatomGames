#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Assets.DustinHorne.JsonDotNetUnity.TestCases.TestModels.SimpleClassObject>
struct List_1_t3592866930;
// Assets.DustinHorne.JsonDotNetUnity.TestCases.TestModels.SimpleClassObject
struct SimpleClassObject_t2795907961;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Assets.DustinHorne.JsonDotNetUnity.TestCases.TestModels.SimpleClassObject>
struct  Enumerator_t1678649922 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3592866930 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SimpleClassObject_t2795907961 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1678649922, ___l_0)); }
	inline List_1_t3592866930 * get_l_0() const { return ___l_0; }
	inline List_1_t3592866930 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3592866930 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier(&___l_0, value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1678649922, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1678649922, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1678649922, ___current_3)); }
	inline SimpleClassObject_t2795907961 * get_current_3() const { return ___current_3; }
	inline SimpleClassObject_t2795907961 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SimpleClassObject_t2795907961 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
