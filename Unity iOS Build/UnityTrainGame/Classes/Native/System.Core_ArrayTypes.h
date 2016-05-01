#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Func`2<System.Object,System.Object>
struct Func_2_t2135783352;

#include "mscorlib_System_Array2840145358.h"
#include "System_Core_System_Collections_Generic_HashSet_1_L1745155715.h"
#include "System_Core_System_Func_2_gen2135783352.h"

#pragma once
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t808175634  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Link_t1745155715  m_Items[1];

public:
	inline Link_t1745155715  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Link_t1745155715 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Link_t1745155715  value)
	{
		m_Items[index] = value;
	}
};
// System.Func`2<System.Object,System.Object>[]
struct Func_2U5BU5D_t4139244137  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Func_2_t2135783352 * m_Items[1];

public:
	inline Func_2_t2135783352 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Func_2_t2135783352 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Func_2_t2135783352 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
