#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		return ((Func)data.methodInfo->method)(data.target, data.methodInfo);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const MethodInfo*);

	static inline void Invoke (const MethodInfo* method, void* obj, T1 p1)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		((Action)data.methodInfo->method)(data.target, p1, data.methodInfo);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj, T1 p1)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, data.methodInfo);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, p2, p3, data.methodInfo);
	}
};
