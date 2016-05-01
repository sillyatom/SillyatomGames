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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t3436592966;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2504543158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset3712260035.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_DateTimeStyles3832294611.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2504543158.h"
#include "mscorlib_System_DayOfWeek4050023580.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C"  void DateTimeOffset__ctor_m206991153 (DateTimeOffset_t3712260035 * __this, DateTime_t339033936  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2612619655 (DateTimeOffset_t3712260035 * __this, DateTime_t339033936  ___dateTime, TimeSpan_t763862892  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2468003023 (DateTimeOffset_t3712260035 * __this, int64_t ___ticks, TimeSpan_t763862892  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m1174264174 (DateTimeOffset_t3712260035 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___millisecond, TimeSpan_t763862892  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset__ctor_m846097640 (DateTimeOffset_t3712260035 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C"  void DateTimeOffset__cctor_m2485435494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t DateTimeOffset_System_IComparable_CompareTo_m1459743069 (DateTimeOffset_t3712260035 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m2682194308 (DateTimeOffset_t3712260035 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3161484655 (DateTimeOffset_t3712260035 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::AddSeconds(System.Double)
extern "C"  DateTimeOffset_t3712260035  DateTimeOffset_AddSeconds_m2924854093 (DateTimeOffset_t3712260035 * __this, double ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C"  int32_t DateTimeOffset_CompareTo_m1122350244 (DateTimeOffset_t3712260035 * __this, DateTimeOffset_t3712260035  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C"  bool DateTimeOffset_Equals_m4108087019 (DateTimeOffset_t3712260035 * __this, DateTimeOffset_t3712260035  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C"  bool DateTimeOffset_Equals_m1431331290 (DateTimeOffset_t3712260035 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C"  int32_t DateTimeOffset_GetHashCode_m1972583858 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTimeOffset_t3712260035  DateTimeOffset_Parse_m2081018291 (Il2CppObject * __this /* static, unused */, String_t* ___input, Il2CppObject * ___formatProvider, int32_t ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTimeOffset_t3712260035  DateTimeOffset_ParseExact_m3332252156 (Il2CppObject * __this /* static, unused */, String_t* ___input, String_t* ___format, Il2CppObject * ___formatProvider, int32_t ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTimeOffset_t3712260035  DateTimeOffset_ParseExact_m3293745886 (Il2CppObject * __this /* static, unused */, String_t* ___input, StringU5BU5D_t2956870243* ___formats, Il2CppObject * ___formatProvider, int32_t ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTimeOffset&)
extern "C"  bool DateTimeOffset_ParseExact_m46075925 (Il2CppObject * __this /* static, unused */, String_t* ___input, StringU5BU5D_t2956870243* ___formats, DateTimeFormatInfo_t2504543158 * ___dfi, int32_t ___styles, DateTimeOffset_t3712260035 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::DoParse(System.String,System.String,System.Boolean,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles)
extern "C"  bool DateTimeOffset_DoParse_m1045217186 (Il2CppObject * __this /* static, unused */, String_t* ___input, String_t* ___format, bool ___exact, DateTimeOffset_t3712260035 * ___result, DateTimeFormatInfo_t2504543158 * ___dfi, int32_t ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::ParseNumber(System.String,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  int32_t DateTimeOffset_ParseNumber_m2320332474 (Il2CppObject * __this /* static, unused */, String_t* ___input, int32_t ___pos, int32_t ___digits, bool ___leading_zero, bool ___allow_leading_white, int32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::ParseNumber(System.String,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&,System.Int32&)
extern "C"  int32_t DateTimeOffset_ParseNumber_m1630709519 (Il2CppObject * __this /* static, unused */, String_t* ___input, int32_t ___pos, int32_t ___digits, bool ___leading_zero, bool ___allow_leading_white, int32_t* ___result, int32_t* ___digit_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::ParseEnum(System.String,System.Int32,System.String[],System.Boolean,System.Int32&)
extern "C"  int32_t DateTimeOffset_ParseEnum_m2045996590 (Il2CppObject * __this /* static, unused */, String_t* ___input, int32_t ___pos, StringU5BU5D_t2956870243* ___enums, bool ___allow_leading_white, int32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::ParseChar(System.String,System.Int32,System.Char,System.Boolean,System.Int32&)
extern "C"  int32_t DateTimeOffset_ParseChar_m2631726812 (Il2CppObject * __this /* static, unused */, String_t* ___input, int32_t ___pos, uint16_t ___c, bool ___allow_leading_white, int32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTimeOffset::ToFileTime()
extern "C"  int64_t DateTimeOffset_ToFileTime_m3953236868 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ToLocalTime()
extern "C"  DateTimeOffset_t3712260035  DateTimeOffset_ToLocalTime_m706618152 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C"  String_t* DateTimeOffset_ToString_m983707174 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTimeOffset_ToString_m4001156824 (DateTimeOffset_t3712260035 * __this, String_t* ___format, Il2CppObject * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ToUniversalTime()
extern "C"  DateTimeOffset_t3712260035  DateTimeOffset_ToUniversalTime_m2509789832 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::TryParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTimeOffset&)
extern "C"  bool DateTimeOffset_TryParse_m465323557 (Il2CppObject * __this /* static, unused */, String_t* ___input, Il2CppObject * ___formatProvider, int32_t ___styles, DateTimeOffset_t3712260035 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_Date()
extern "C"  DateTime_t339033936  DateTimeOffset_get_Date_m1895329339 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C"  DateTime_t339033936  DateTimeOffset_get_DateTime_m2501837032 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Day()
extern "C"  int32_t DateTimeOffset_get_Day_m3395730132 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTimeOffset::get_DayOfWeek()
extern "C"  int32_t DateTimeOffset_get_DayOfWeek_m3340573222 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_DayOfYear()
extern "C"  int32_t DateTimeOffset_get_DayOfYear_m123903592 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Hour()
extern "C"  int32_t DateTimeOffset_get_Hour_m2315816846 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_LocalDateTime()
extern "C"  DateTime_t339033936  DateTimeOffset_get_LocalDateTime_m967748635 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Millisecond()
extern "C"  int32_t DateTimeOffset_get_Millisecond_m3273507193 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Minute()
extern "C"  int32_t DateTimeOffset_get_Minute_m3900648830 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Month()
extern "C"  int32_t DateTimeOffset_get_Month_m3207053048 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C"  TimeSpan_t763862892  DateTimeOffset_get_Offset_m3938299132 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Second()
extern "C"  int32_t DateTimeOffset_get_Second_m1896920030 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTimeOffset::get_Ticks()
extern "C"  int64_t DateTimeOffset_get_Ticks_m1242383535 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_TimeOfDay()
extern "C"  TimeSpan_t763862892  DateTimeOffset_get_TimeOfDay_m2443225425 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C"  DateTime_t339033936  DateTimeOffset_get_UtcDateTime_m2831969300 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTimeOffset::get_UtcTicks()
extern "C"  int64_t DateTimeOffset_get_UtcTicks_m48584187 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Year()
extern "C"  int32_t DateTimeOffset_get_Year_m2792681383 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
