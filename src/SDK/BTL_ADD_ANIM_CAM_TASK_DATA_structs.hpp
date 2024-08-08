#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTL_ADD_ANIM_CAM_TASK_DATA

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct BTL_ADD_ANIM_CAM_TASK_DATA.BTL_ADD_ANIM_CAM_TASK_DATA
// 0x0040 (0x0040 - 0x0000)
struct FBTL_ADD_ANIM_CAM_TASK_DATA final
{
public:
	class UCameraAnimationAsset*                  PrimaryCamera_9_4EC4265D47111F88B7356C8DE54E0FA8;  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraAnimationAsset*                  SecondaryCamera_10_97DCA2C9424CF11166EFF58EB75F00E3; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LerpAlpha_13_AFD7535D4B61D45CFC72098ABD335F1B;     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 VisiblePartyIndexes_18_66B2BEF745521BF68A179AB66B007E8B; // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 InvisiblePartyIndexes_20_FA7594584A18BCBDBEC221BA063653B2; // 0x0028(0x0010)(Edit, BlueprintVisible)
	bool                                          CleanUp_22_EDD4E2BB43C810BEB97D359CE54A3D0F;       // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SkipReturnBattleCam_24_E2D723AE4BCBAC709C8C9592DF1F2762; // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FBTL_ADD_ANIM_CAM_TASK_DATA) == 0x000008, "Wrong alignment on FBTL_ADD_ANIM_CAM_TASK_DATA");
static_assert(sizeof(FBTL_ADD_ANIM_CAM_TASK_DATA) == 0x000040, "Wrong size on FBTL_ADD_ANIM_CAM_TASK_DATA");
static_assert(offsetof(FBTL_ADD_ANIM_CAM_TASK_DATA, PrimaryCamera_9_4EC4265D47111F88B7356C8DE54E0FA8) == 0x000000, "Member 'FBTL_ADD_ANIM_CAM_TASK_DATA::PrimaryCamera_9_4EC4265D47111F88B7356C8DE54E0FA8' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_ANIM_CAM_TASK_DATA, SecondaryCamera_10_97DCA2C9424CF11166EFF58EB75F00E3) == 0x000008, "Member 'FBTL_ADD_ANIM_CAM_TASK_DATA::SecondaryCamera_10_97DCA2C9424CF11166EFF58EB75F00E3' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_ANIM_CAM_TASK_DATA, LerpAlpha_13_AFD7535D4B61D45CFC72098ABD335F1B) == 0x000010, "Member 'FBTL_ADD_ANIM_CAM_TASK_DATA::LerpAlpha_13_AFD7535D4B61D45CFC72098ABD335F1B' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_ANIM_CAM_TASK_DATA, VisiblePartyIndexes_18_66B2BEF745521BF68A179AB66B007E8B) == 0x000018, "Member 'FBTL_ADD_ANIM_CAM_TASK_DATA::VisiblePartyIndexes_18_66B2BEF745521BF68A179AB66B007E8B' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_ANIM_CAM_TASK_DATA, InvisiblePartyIndexes_20_FA7594584A18BCBDBEC221BA063653B2) == 0x000028, "Member 'FBTL_ADD_ANIM_CAM_TASK_DATA::InvisiblePartyIndexes_20_FA7594584A18BCBDBEC221BA063653B2' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_ANIM_CAM_TASK_DATA, CleanUp_22_EDD4E2BB43C810BEB97D359CE54A3D0F) == 0x000038, "Member 'FBTL_ADD_ANIM_CAM_TASK_DATA::CleanUp_22_EDD4E2BB43C810BEB97D359CE54A3D0F' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_ANIM_CAM_TASK_DATA, SkipReturnBattleCam_24_E2D723AE4BCBAC709C8C9592DF1F2762) == 0x000039, "Member 'FBTL_ADD_ANIM_CAM_TASK_DATA::SkipReturnBattleCam_24_E2D723AE4BCBAC709C8C9592DF1F2762' has a wrong offset!");

}

