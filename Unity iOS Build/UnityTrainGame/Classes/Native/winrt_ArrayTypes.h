#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t3214074785;

#include "mscorlib_System_Array2840145358.h"
#include "winrt_UnityEngine_Purchasing_Default_WinProductDes3214074785.h"

#pragma once
// UnityEngine.Purchasing.Default.WinProductDescription[]
struct WinProductDescriptionU5BU5D_t3186531516  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) WinProductDescription_t3214074785 * m_Items[1];

public:
	inline WinProductDescription_t3214074785 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WinProductDescription_t3214074785 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WinProductDescription_t3214074785 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
