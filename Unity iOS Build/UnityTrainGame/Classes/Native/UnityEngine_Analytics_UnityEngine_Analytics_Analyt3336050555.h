#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Cloud.Service.CloudService
struct CloudService_t2557713703;
struct CloudService_t2557713703_marshaled_pinvoke;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsCloudService
struct  AnalyticsCloudService_t3336050555  : public Il2CppObject
{
public:
	// UnityEngine.Cloud.Service.CloudService UnityEngine.Analytics.AnalyticsCloudService::m_CloudService
	CloudService_t2557713703 * ___m_CloudService_0;

public:
	inline static int32_t get_offset_of_m_CloudService_0() { return static_cast<int32_t>(offsetof(AnalyticsCloudService_t3336050555, ___m_CloudService_0)); }
	inline CloudService_t2557713703 * get_m_CloudService_0() const { return ___m_CloudService_0; }
	inline CloudService_t2557713703 ** get_address_of_m_CloudService_0() { return &___m_CloudService_0; }
	inline void set_m_CloudService_0(CloudService_t2557713703 * value)
	{
		___m_CloudService_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_CloudService_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
