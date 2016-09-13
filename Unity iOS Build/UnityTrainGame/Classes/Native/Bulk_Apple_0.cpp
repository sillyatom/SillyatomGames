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

// UnityEngine.Purchasing.iOSStoreBindings
struct iOSStoreBindings_t241121817;
// System.String
struct String_t;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t885634735;
// UnityEngine.Purchasing.OSXStoreBindings
struct OSXStoreBindings_t4132522642;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "Apple_U3CModuleU3E86524790.h"
#include "Apple_U3CModuleU3E86524790MethodDeclarations.h"
#include "Apple_UnityEngine_Purchasing_iOSStoreBindings241121817.h"
#include "Apple_UnityEngine_Purchasing_iOSStoreBindings241121817MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "Apple_UnityEngine_Purchasing_UnityPurchasingCallbac885634735.h"
#include "Apple_UnityEngine_Purchasing_OSXStoreBindings4132522642.h"
#include "Apple_UnityEngine_Purchasing_OSXStoreBindings4132522642MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "Apple_UnityEngine_Purchasing_UnityPurchasingCallbac885634735MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.iOSStoreBindings::.ctor()
extern "C"  void iOSStoreBindings__ctor_m2068005060 (iOSStoreBindings_t241121817 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C" {void DEFAULT_CALL unityPurchasingRetrieveProducts(char*);}
extern "C"  void iOSStoreBindings_unityPurchasingRetrieveProducts_m1724542061 (Il2CppObject * __this /* static, unused */, String_t* ___json, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)unityPurchasingRetrieveProducts;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRetrieveProducts'"));
		}
	}

	// Marshaling of parameter '___json' to native representation
	char* ____json_marshaled = NULL;
	____json_marshaled = il2cpp_codegen_marshal_string(___json);

	// Native function invocation
	_il2cpp_pinvoke_func(____json_marshaled);

	// Marshaling cleanup of parameter '___json' native representation
	il2cpp_codegen_marshal_free(____json_marshaled);
	____json_marshaled = NULL;

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C" {void DEFAULT_CALL unityPurchasingPurchase(char*, char*);}
extern "C"  void iOSStoreBindings_unityPurchasingPurchase_m3984262728 (Il2CppObject * __this /* static, unused */, String_t* ___json, String_t* ___developerPayload, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)unityPurchasingPurchase;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingPurchase'"));
		}
	}

	// Marshaling of parameter '___json' to native representation
	char* ____json_marshaled = NULL;
	____json_marshaled = il2cpp_codegen_marshal_string(___json);

	// Marshaling of parameter '___developerPayload' to native representation
	char* ____developerPayload_marshaled = NULL;
	____developerPayload_marshaled = il2cpp_codegen_marshal_string(___developerPayload);

	// Native function invocation
	_il2cpp_pinvoke_func(____json_marshaled, ____developerPayload_marshaled);

	// Marshaling cleanup of parameter '___json' native representation
	il2cpp_codegen_marshal_free(____json_marshaled);
	____json_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload' native representation
	il2cpp_codegen_marshal_free(____developerPayload_marshaled);
	____developerPayload_marshaled = NULL;

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C" {void DEFAULT_CALL unityPurchasingFinishTransaction(char*, char*);}
extern "C"  void iOSStoreBindings_unityPurchasingFinishTransaction_m890609062 (Il2CppObject * __this /* static, unused */, String_t* ___productJSON, String_t* ___transactionId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)unityPurchasingFinishTransaction;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingFinishTransaction'"));
		}
	}

	// Marshaling of parameter '___productJSON' to native representation
	char* ____productJSON_marshaled = NULL;
	____productJSON_marshaled = il2cpp_codegen_marshal_string(___productJSON);

	// Marshaling of parameter '___transactionId' to native representation
	char* ____transactionId_marshaled = NULL;
	____transactionId_marshaled = il2cpp_codegen_marshal_string(___transactionId);

	// Native function invocation
	_il2cpp_pinvoke_func(____productJSON_marshaled, ____transactionId_marshaled);

	// Marshaling cleanup of parameter '___productJSON' native representation
	il2cpp_codegen_marshal_free(____productJSON_marshaled);
	____productJSON_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId' native representation
	il2cpp_codegen_marshal_free(____transactionId_marshaled);
	____transactionId_marshaled = NULL;

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRestoreTransactions()
extern "C" {void DEFAULT_CALL unityPurchasingRestoreTransactions();}
extern "C"  void iOSStoreBindings_unityPurchasingRestoreTransactions_m2981115088 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)unityPurchasingRestoreTransactions;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRestoreTransactions'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingAddTransactionObserver()
extern "C" {void DEFAULT_CALL unityPurchasingAddTransactionObserver();}
extern "C"  void iOSStoreBindings_unityPurchasingAddTransactionObserver_m4154641576 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)unityPurchasingAddTransactionObserver;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingAddTransactionObserver'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C" {void DEFAULT_CALL setUnityPurchasingCallback(methodPointerType);}
extern "C"  void iOSStoreBindings_setUnityPurchasingCallback_m709066903 (Il2CppObject * __this /* static, unused */, UnityPurchasingCallback_t885634735 * ___AsyncCallback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setUnityPurchasingCallback;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setUnityPurchasingCallback'"));
		}
	}

	// Marshaling of parameter '___AsyncCallback' to native representation
	methodPointerType ____AsyncCallback_marshaled = NULL;
	____AsyncCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___AsyncCallback));

	// Native function invocation
	_il2cpp_pinvoke_func(____AsyncCallback_marshaled);

	// Marshaling cleanup of parameter '___AsyncCallback' native representation

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_SetUnityPurchasingCallback_m3693370551 (iOSStoreBindings_t241121817 * __this, UnityPurchasingCallback_t885634735 * ___AsyncCallback, const MethodInfo* method)
{
	{
		UnityPurchasingCallback_t885634735 * L_0 = ___AsyncCallback;
		iOSStoreBindings_setUnityPurchasingCallback_m709066903(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_RetrieveProducts_m1168744386 (iOSStoreBindings_t241121817 * __this, String_t* ___json, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json;
		iOSStoreBindings_unityPurchasingRetrieveProducts_m1724542061(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::Purchase(System.String,System.String)
extern "C"  void iOSStoreBindings_Purchase_m1465492957 (iOSStoreBindings_t241121817 * __this, String_t* ___productJSON, String_t* ___developerPayload, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON;
		String_t* L_1 = ___developerPayload;
		iOSStoreBindings_unityPurchasingPurchase_m3984262728(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_FinishTransaction_m3505960369 (iOSStoreBindings_t241121817 * __this, String_t* ___productJSON, String_t* ___transactionId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON;
		String_t* L_1 = ___transactionId;
		iOSStoreBindings_unityPurchasingFinishTransaction_m890609062(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RestoreTransactions()
extern "C"  void iOSStoreBindings_RestoreTransactions_m2695011941 (iOSStoreBindings_t241121817 * __this, const MethodInfo* method)
{
	{
		iOSStoreBindings_unityPurchasingRestoreTransactions_m2981115088(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::AddTransactionObserver()
extern "C"  void iOSStoreBindings_AddTransactionObserver_m2070904563 (iOSStoreBindings_t241121817 * __this, const MethodInfo* method)
{
	{
		iOSStoreBindings_unityPurchasingAddTransactionObserver_m4154641576(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::.ctor()
extern "C"  void OSXStoreBindings__ctor_m1901701227 (OSXStoreBindings_t4132522642 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingRetrieveProducts_m4188065242 (Il2CppObject * __this /* static, unused */, String_t* ___json, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		int parameterSize = sizeof(char*);
		_il2cpp_pinvoke_func = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>("unitypurchasing", "unityPurchasingRetrieveProducts", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRetrieveProducts'"));
		}
	}

	// Marshaling of parameter '___json' to native representation
	char* ____json_marshaled = NULL;
	____json_marshaled = il2cpp_codegen_marshal_string(___json);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____json_marshaled);

	// Marshaling cleanup of parameter '___json' native representation
	il2cpp_codegen_marshal_free(____json_marshaled);
	____json_marshaled = NULL;

	return _return_value;
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingPurchase_m1246487029 (Il2CppObject * __this /* static, unused */, String_t* ___json, String_t* ___developerPayload, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		_il2cpp_pinvoke_func = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>("unitypurchasing", "unityPurchasingPurchase", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingPurchase'"));
		}
	}

	// Marshaling of parameter '___json' to native representation
	char* ____json_marshaled = NULL;
	____json_marshaled = il2cpp_codegen_marshal_string(___json);

	// Marshaling of parameter '___developerPayload' to native representation
	char* ____developerPayload_marshaled = NULL;
	____developerPayload_marshaled = il2cpp_codegen_marshal_string(___developerPayload);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____json_marshaled, ____developerPayload_marshaled);

	// Marshaling cleanup of parameter '___json' native representation
	il2cpp_codegen_marshal_free(____json_marshaled);
	____json_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload' native representation
	il2cpp_codegen_marshal_free(____developerPayload_marshaled);
	____developerPayload_marshaled = NULL;

	return _return_value;
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingFinishTransaction_m732730521 (Il2CppObject * __this /* static, unused */, String_t* ___productJSON, String_t* ___transactionId, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		_il2cpp_pinvoke_func = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>("unitypurchasing", "unityPurchasingFinishTransaction", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingFinishTransaction'"));
		}
	}

	// Marshaling of parameter '___productJSON' to native representation
	char* ____productJSON_marshaled = NULL;
	____productJSON_marshaled = il2cpp_codegen_marshal_string(___productJSON);

	// Marshaling of parameter '___transactionId' to native representation
	char* ____transactionId_marshaled = NULL;
	____transactionId_marshaled = il2cpp_codegen_marshal_string(___transactionId);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____productJSON_marshaled, ____transactionId_marshaled);

	// Marshaling cleanup of parameter '___productJSON' native representation
	il2cpp_codegen_marshal_free(____productJSON_marshaled);
	____productJSON_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId' native representation
	il2cpp_codegen_marshal_free(____transactionId_marshaled);
	____transactionId_marshaled = NULL;

	return _return_value;
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void OSXStoreBindings_unityPurchasingRestoreTransactions_m621486729 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		int parameterSize = 0;
		_il2cpp_pinvoke_func = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>("unitypurchasing", "unityPurchasingRestoreTransactions", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRestoreTransactions'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void OSXStoreBindings_unityPurchasingAddTransactionObserver_m4195932239 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		int parameterSize = 0;
		_il2cpp_pinvoke_func = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>("unitypurchasing", "unityPurchasingAddTransactionObserver", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingAddTransactionObserver'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_setUnityPurchasingCallback_m1891064720 (Il2CppObject * __this /* static, unused */, UnityPurchasingCallback_t885634735 * ___AsyncCallback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		int parameterSize = sizeof(void*);
		_il2cpp_pinvoke_func = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>("unitypurchasing", "setUnityPurchasingCallback", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setUnityPurchasingCallback'"));
		}
	}

	// Marshaling of parameter '___AsyncCallback' to native representation
	methodPointerType ____AsyncCallback_marshaled = NULL;
	____AsyncCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___AsyncCallback));

	// Native function invocation
	_il2cpp_pinvoke_func(____AsyncCallback_marshaled);

	// Marshaling cleanup of parameter '___AsyncCallback' native representation

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_SetUnityPurchasingCallback_m580401072 (OSXStoreBindings_t4132522642 * __this, UnityPurchasingCallback_t885634735 * ___AsyncCallback, const MethodInfo* method)
{
	{
		UnityPurchasingCallback_t885634735 * L_0 = ___AsyncCallback;
		OSXStoreBindings_setUnityPurchasingCallback_m1891064720(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RetrieveProducts(System.String)
extern "C"  void OSXStoreBindings_RetrieveProducts_m2218607209 (OSXStoreBindings_t4132522642 * __this, String_t* ___json, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json;
		OSXStoreBindings_unityPurchasingRetrieveProducts_m4188065242(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::Purchase(System.String,System.String)
extern "C"  void OSXStoreBindings_Purchase_m1331457860 (OSXStoreBindings_t4132522642 * __this, String_t* ___productJSON, String_t* ___developerPayload, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON;
		String_t* L_1 = ___developerPayload;
		OSXStoreBindings_unityPurchasingPurchase_m1246487029(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void OSXStoreBindings_FinishTransaction_m2928971818 (OSXStoreBindings_t4132522642 * __this, String_t* ___productJSON, String_t* ___transactionId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON;
		String_t* L_1 = ___transactionId;
		OSXStoreBindings_unityPurchasingFinishTransaction_m732730521(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RestoreTransactions()
extern "C"  void OSXStoreBindings_RestoreTransactions_m505091532 (OSXStoreBindings_t4132522642 * __this, const MethodInfo* method)
{
	{
		OSXStoreBindings_unityPurchasingRestoreTransactions_m621486729(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::AddTransactionObserver()
extern "C"  void OSXStoreBindings_AddTransactionObserver_m2705226284 (OSXStoreBindings_t4132522642 * __this, const MethodInfo* method)
{
	{
		OSXStoreBindings_unityPurchasingAddTransactionObserver_m4195932239(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityPurchasingCallback__ctor_m2606218906 (UnityPurchasingCallback_t885634735 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->set_method_ptr_0((methodPointerType)((MethodInfo*)___method.get_m_value_0())->method);
	__this->set_method_3(___method);
	__this->set_m_target_2(___object);
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
extern "C"  void UnityPurchasingCallback_Invoke_m3351568450 (UnityPurchasingCallback_t885634735 * __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityPurchasingCallback_Invoke_m3351568450((UnityPurchasingCallback_t885634735 *)__this->get_prev_9(),___subject, ___payload, ___receipt, ___transactionId, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),___subject, ___payload, ___receipt, ___transactionId,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),___subject, ___payload, ___receipt, ___transactionId,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___subject, ___payload, ___receipt, ___transactionId,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityPurchasingCallback_t885634735(Il2CppObject* delegate, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, char*, char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___subject' to native representation
	char* ____subject_marshaled = NULL;
	____subject_marshaled = il2cpp_codegen_marshal_string(___subject);

	// Marshaling of parameter '___payload' to native representation
	char* ____payload_marshaled = NULL;
	____payload_marshaled = il2cpp_codegen_marshal_string(___payload);

	// Marshaling of parameter '___receipt' to native representation
	char* ____receipt_marshaled = NULL;
	____receipt_marshaled = il2cpp_codegen_marshal_string(___receipt);

	// Marshaling of parameter '___transactionId' to native representation
	char* ____transactionId_marshaled = NULL;
	____transactionId_marshaled = il2cpp_codegen_marshal_string(___transactionId);

	// Native function invocation
	_il2cpp_pinvoke_func(____subject_marshaled, ____payload_marshaled, ____receipt_marshaled, ____transactionId_marshaled);

	// Marshaling cleanup of parameter '___subject' native representation
	il2cpp_codegen_marshal_free(____subject_marshaled);
	____subject_marshaled = NULL;

	// Marshaling cleanup of parameter '___payload' native representation
	il2cpp_codegen_marshal_free(____payload_marshaled);
	____payload_marshaled = NULL;

	// Marshaling cleanup of parameter '___receipt' native representation
	il2cpp_codegen_marshal_free(____receipt_marshaled);
	____receipt_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId' native representation
	il2cpp_codegen_marshal_free(____transactionId_marshaled);
	____transactionId_marshaled = NULL;

}
// System.IAsyncResult UnityEngine.Purchasing.UnityPurchasingCallback::BeginInvoke(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityPurchasingCallback_BeginInvoke_m1881739807 (UnityPurchasingCallback_t885634735 * __this, String_t* ___subject, String_t* ___payload, String_t* ___receipt, String_t* ___transactionId, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___subject;
	__d_args[1] = ___payload;
	__d_args[2] = ___receipt;
	__d_args[3] = ___transactionId;
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::EndInvoke(System.IAsyncResult)
extern "C"  void UnityPurchasingCallback_EndInvoke_m2822147498 (UnityPurchasingCallback_t885634735 * __this, Il2CppObject * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
