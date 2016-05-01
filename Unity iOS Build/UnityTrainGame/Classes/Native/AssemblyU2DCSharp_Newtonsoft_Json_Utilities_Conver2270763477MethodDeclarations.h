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

// System.Func`2<System.Object,System.Object>
struct Func_2_t2135783352;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3398830607;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Utilities_Conver3846323878.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_System_ComponentModel_TypeConverter3398830607.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"

// System.Void Newtonsoft.Json.Utilities.ConvertUtils::.cctor()
extern "C"  void ConvertUtils__cctor_m914182345 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ConvertUtils::CreateCastConverter(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
extern "C"  Func_2_t2135783352 * ConvertUtils_CreateCastConverter_m3653731189 (Il2CppObject * __this /* static, unused */, TypeConvertKey_t3846323878  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::CanConvertType(System.Type,System.Type,System.Boolean)
extern "C"  bool ConvertUtils_CanConvertType_m732072898 (Il2CppObject * __this /* static, unused */, Type_t * ___initialType, Type_t * ___targetType, bool ___allowTypeNameToString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsComponentConverter(System.ComponentModel.TypeConverter)
extern "C"  bool ConvertUtils_IsComponentConverter_m1333306734 (Il2CppObject * __this /* static, unused */, TypeConverter_t3398830607 * ___converter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::Convert(System.Object,System.Globalization.CultureInfo,System.Type)
extern "C"  Il2CppObject * ConvertUtils_Convert_m3745593205 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue, CultureInfo_t3603717042 * ___culture, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::TryConvert(System.Object,System.Globalization.CultureInfo,System.Type,System.Object&)
extern "C"  bool ConvertUtils_TryConvert_m3804558589 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue, CultureInfo_t3603717042 * ___culture, Type_t * ___targetType, Il2CppObject ** ___convertedValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::ConvertOrCast(System.Object,System.Globalization.CultureInfo,System.Type)
extern "C"  Il2CppObject * ConvertUtils_ConvertOrCast_m760833303 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue, CultureInfo_t3603717042 * ___culture, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::TryConvertOrCast(System.Object,System.Globalization.CultureInfo,System.Type,System.Object&)
extern "C"  bool ConvertUtils_TryConvertOrCast_m75399195 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue, CultureInfo_t3603717042 * ___culture, Type_t * ___targetType, Il2CppObject ** ___convertedValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::EnsureTypeAssignable(System.Object,System.Type,System.Type)
extern "C"  Il2CppObject * ConvertUtils_EnsureTypeAssignable_m712946340 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___initialType, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter Newtonsoft.Json.Utilities.ConvertUtils::GetConverter(System.Type)
extern "C"  TypeConverter_t3398830607 * ConvertUtils_GetConverter_m1269630463 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsInteger(System.Object)
extern "C"  bool ConvertUtils_IsInteger_m1657944146 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
