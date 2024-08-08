#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MoonAgeCtrl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_MoonAgeAnimationState_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MoonAgeCtrl.BP_MoonAgeCtrl_C
// 0x0028 (0x0248 - 0x0220)
class ABP_MoonAgeCtrl_C final : public AMoonAgeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_MoonAge_C*                          M_WB_MoonAge;                                      // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsShow;                                          // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_MoonAgeAnimationState                       M_AnimState;                                       // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23A[0x2];                                      // 0x023A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_DeltaSeconds;                                    // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_CntSpeedRate;                                    // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MoonAgeCtrl(int32 EntryPoint);
	void BPI_SetMoonAgeCntUpdateTime(float InSecond);
	void BPI_AddPlayerMoveCount_TokyoLargeMap(float InDeltaSeconds);
	void BPI_AddPlayerMoveCount_Normal(float InDeltaSeconds);
	void AddToScreenWidget();
	void BPI_ResetMoonAge();
	void BPI_AddMoonAge();
	void BPI_SetMoonAge(E_MOON_AGE InMoonType);
	void BPI_CloseMoonAge(bool InAnimation);
	void BPI_OpenMoonAge(bool InAnimation);
	void ReceiveBeginPlay();
	void PlayMoonChangeSE();
	void SetWidgetAnimState(E_MoonAgeAnimationState InAnimState);
	void AddPlayerMoveCnt(bool IsLargeMap, float InDeltaSeconds);
	void BPI_GetMoonAgeAnimState(E_MoonAgeAnimationState* OutState);
	void BPI_GetMoonAgeCntUpdateTime(float* CounterUpdateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MoonAgeCtrl_C">();
	}
	static class ABP_MoonAgeCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MoonAgeCtrl_C>();
	}
};
static_assert(alignof(ABP_MoonAgeCtrl_C) == 0x000008, "Wrong alignment on ABP_MoonAgeCtrl_C");
static_assert(sizeof(ABP_MoonAgeCtrl_C) == 0x000248, "Wrong size on ABP_MoonAgeCtrl_C");
static_assert(offsetof(ABP_MoonAgeCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_MoonAgeCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MoonAgeCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_MoonAgeCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MoonAgeCtrl_C, M_WB_MoonAge) == 0x000230, "Member 'ABP_MoonAgeCtrl_C::M_WB_MoonAge' has a wrong offset!");
static_assert(offsetof(ABP_MoonAgeCtrl_C, M_IsShow) == 0x000238, "Member 'ABP_MoonAgeCtrl_C::M_IsShow' has a wrong offset!");
static_assert(offsetof(ABP_MoonAgeCtrl_C, M_AnimState) == 0x000239, "Member 'ABP_MoonAgeCtrl_C::M_AnimState' has a wrong offset!");
static_assert(offsetof(ABP_MoonAgeCtrl_C, M_DeltaSeconds) == 0x00023C, "Member 'ABP_MoonAgeCtrl_C::M_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(ABP_MoonAgeCtrl_C, M_CntSpeedRate) == 0x000240, "Member 'ABP_MoonAgeCtrl_C::M_CntSpeedRate' has a wrong offset!");

}

