#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NaviDevilGimmick_Tutorial

#include "Basic.hpp"

#include "BP_NaviDevilGimmick_IgnorePause_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NaviDevilGimmick_Tutorial.BP_NaviDevilGimmick_Tutorial_C
// 0x0040 (0x04E8 - 0x04A8)
class ABP_NaviDevilGimmick_Tutorial_C final : public ABP_NaviDevilGimmick_IgnorePause_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_NaviDevilGimmick_Tutorial_C;     // 0x04A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Timeline_Camera_Alpha_FF528779455D85CA89B79599E13821F4; // 0x04B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_Camera__Direction_FF528779455D85CA89B79599E13821F4; // 0x04B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C68[0x3];                                     // 0x04B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_Camera;                                   // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FollowHitSize_ForTutorial;                         // 0x04C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MovedTutorial;                                     // 0x04CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C69[0x3];                                     // 0x04CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               PrevCameraRotation;                                // 0x04D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetCameraRotation;                              // 0x04DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_NaviDevilGimmick_Tutorial(int32 EntryPoint);
	void ForceMovedInnerTutorial();
	void Timeline_Camera__UpdateFunc();
	void Timeline_Camera__FinishedFunc();
	void CallOuterTutorial();
	void CallInnerTutorial();
	void CallInnerMovedTutorial();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NaviDevilGimmick_Tutorial_C">();
	}
	static class ABP_NaviDevilGimmick_Tutorial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NaviDevilGimmick_Tutorial_C>();
	}
};
static_assert(alignof(ABP_NaviDevilGimmick_Tutorial_C) == 0x000008, "Wrong alignment on ABP_NaviDevilGimmick_Tutorial_C");
static_assert(sizeof(ABP_NaviDevilGimmick_Tutorial_C) == 0x0004E8, "Wrong size on ABP_NaviDevilGimmick_Tutorial_C");
static_assert(offsetof(ABP_NaviDevilGimmick_Tutorial_C, UberGraphFrame_BP_NaviDevilGimmick_Tutorial_C) == 0x0004A8, "Member 'ABP_NaviDevilGimmick_Tutorial_C::UberGraphFrame_BP_NaviDevilGimmick_Tutorial_C' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_Tutorial_C, Timeline_Camera_Alpha_FF528779455D85CA89B79599E13821F4) == 0x0004B0, "Member 'ABP_NaviDevilGimmick_Tutorial_C::Timeline_Camera_Alpha_FF528779455D85CA89B79599E13821F4' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_Tutorial_C, Timeline_Camera__Direction_FF528779455D85CA89B79599E13821F4) == 0x0004B4, "Member 'ABP_NaviDevilGimmick_Tutorial_C::Timeline_Camera__Direction_FF528779455D85CA89B79599E13821F4' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_Tutorial_C, Timeline_Camera) == 0x0004B8, "Member 'ABP_NaviDevilGimmick_Tutorial_C::Timeline_Camera' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_Tutorial_C, FollowHitSize_ForTutorial) == 0x0004C0, "Member 'ABP_NaviDevilGimmick_Tutorial_C::FollowHitSize_ForTutorial' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_Tutorial_C, MovedTutorial) == 0x0004CC, "Member 'ABP_NaviDevilGimmick_Tutorial_C::MovedTutorial' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_Tutorial_C, PrevCameraRotation) == 0x0004D0, "Member 'ABP_NaviDevilGimmick_Tutorial_C::PrevCameraRotation' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_Tutorial_C, TargetCameraRotation) == 0x0004DC, "Member 'ABP_NaviDevilGimmick_Tutorial_C::TargetCameraRotation' has a wrong offset!");

}

