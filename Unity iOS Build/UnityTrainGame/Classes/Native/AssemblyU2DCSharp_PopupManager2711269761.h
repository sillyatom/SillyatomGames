#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "AssemblyU2DCSharp_ExtMonoBehaviour2624599193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopupManager
struct  PopupManager_t2711269761  : public ExtMonoBehaviour_t2624599193
{
public:
	// UnityEngine.UI.Image PopupManager::blocker
	Image_t3354615620 * ___blocker_3;
	// UnityEngine.GameObject PopupManager::genericPopup
	GameObject_t4012695102 * ___genericPopup_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PopupManager::_popups
	List_1_t514686775 * ____popups_5;
	// UnityEngine.GameObject PopupManager::_activePopup
	GameObject_t4012695102 * ____activePopup_6;

public:
	inline static int32_t get_offset_of_blocker_3() { return static_cast<int32_t>(offsetof(PopupManager_t2711269761, ___blocker_3)); }
	inline Image_t3354615620 * get_blocker_3() const { return ___blocker_3; }
	inline Image_t3354615620 ** get_address_of_blocker_3() { return &___blocker_3; }
	inline void set_blocker_3(Image_t3354615620 * value)
	{
		___blocker_3 = value;
		Il2CppCodeGenWriteBarrier(&___blocker_3, value);
	}

	inline static int32_t get_offset_of_genericPopup_4() { return static_cast<int32_t>(offsetof(PopupManager_t2711269761, ___genericPopup_4)); }
	inline GameObject_t4012695102 * get_genericPopup_4() const { return ___genericPopup_4; }
	inline GameObject_t4012695102 ** get_address_of_genericPopup_4() { return &___genericPopup_4; }
	inline void set_genericPopup_4(GameObject_t4012695102 * value)
	{
		___genericPopup_4 = value;
		Il2CppCodeGenWriteBarrier(&___genericPopup_4, value);
	}

	inline static int32_t get_offset_of__popups_5() { return static_cast<int32_t>(offsetof(PopupManager_t2711269761, ____popups_5)); }
	inline List_1_t514686775 * get__popups_5() const { return ____popups_5; }
	inline List_1_t514686775 ** get_address_of__popups_5() { return &____popups_5; }
	inline void set__popups_5(List_1_t514686775 * value)
	{
		____popups_5 = value;
		Il2CppCodeGenWriteBarrier(&____popups_5, value);
	}

	inline static int32_t get_offset_of__activePopup_6() { return static_cast<int32_t>(offsetof(PopupManager_t2711269761, ____activePopup_6)); }
	inline GameObject_t4012695102 * get__activePopup_6() const { return ____activePopup_6; }
	inline GameObject_t4012695102 ** get_address_of__activePopup_6() { return &____activePopup_6; }
	inline void set__activePopup_6(GameObject_t4012695102 * value)
	{
		____activePopup_6 = value;
		Il2CppCodeGenWriteBarrier(&____activePopup_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
