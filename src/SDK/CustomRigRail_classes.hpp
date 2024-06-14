#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomRigRail

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CustomRigRail.CustomRigRail_C
// 0x00C0 (0x0330 - 0x0270)
#pragma pack(push, 0x1)
class alignas(0x10) ACustomRigRail_C : public ACustomCameraRig_Rail
{
public:
	struct FTransform                             M_CameraOffsetTransform;                           // 0x0270(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	TArray<struct FCustomSplinePoint>             M_SplinePoint;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FRigRailPlayInfo                       M_SpawnPlayInfo;                                   // 0x02B0(0x0034)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_27C1[0xC];                                     // 0x02E4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             M_CameraTransform;                                 // 0x02F0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         M_AdjustScale;                                     // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void Reset_Transform();
	struct FTransform GetAdjustedCamOffsetTrans();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CustomRigRail_C">();
	}
	static class ACustomRigRail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACustomRigRail_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ACustomRigRail_C) == 0x000010, "Wrong alignment on ACustomRigRail_C");
static_assert(sizeof(ACustomRigRail_C) == 0x000330, "Wrong size on ACustomRigRail_C");
static_assert(offsetof(ACustomRigRail_C, M_CameraOffsetTransform) == 0x000270, "Member 'ACustomRigRail_C::M_CameraOffsetTransform' has a wrong offset!");
static_assert(offsetof(ACustomRigRail_C, M_SplinePoint) == 0x0002A0, "Member 'ACustomRigRail_C::M_SplinePoint' has a wrong offset!");
static_assert(offsetof(ACustomRigRail_C, M_SpawnPlayInfo) == 0x0002B0, "Member 'ACustomRigRail_C::M_SpawnPlayInfo' has a wrong offset!");
static_assert(offsetof(ACustomRigRail_C, M_CameraTransform) == 0x0002F0, "Member 'ACustomRigRail_C::M_CameraTransform' has a wrong offset!");
static_assert(offsetof(ACustomRigRail_C, M_AdjustScale) == 0x000320, "Member 'ACustomRigRail_C::M_AdjustScale' has a wrong offset!");

}
