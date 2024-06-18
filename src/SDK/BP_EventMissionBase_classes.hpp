#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventMissionBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "BP_EventMissionBaseCommon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventMissionBase.BP_EventMissionBase_C
// 0x0068 (0x0320 - 0x02B8)
class ABP_EventMissionBase_C : public ABP_EventMissionBaseCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   EventArea;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   EventHit;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_PostProcess_On_EffectValue_598872274C4642182BD1E99BF5048BAD; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_PostProcess_On__Direction_598872274C4642182BD1E99BF5048BAD; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A400[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_PostProcess_On;                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseWindowType;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseFacingAngle;                                    // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_AActionWindowType                           WindowType;                                        // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A401[0x1];                                     // 0x02E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   WindowTypeLabel;                                   // 0x02E4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInvalidWindow;                                    // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A402[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ActionWindowFlag;                                  // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SetFlag_OpenWindow;                                // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseWindowType_Save;                                // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TickEnableWhenCloseWindow;                         // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A403[0x6];                                     // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                PPMaterial;                                        // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_PP;                                            // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InvalidAction;                                     // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EventMissionBase(int32 EntryPoint);
	void ResetWindowType(E_AActionWindowType Param_WindowType);
	void Load_PP(TSoftObjectPtr<class UMaterialInstance> Material, class ACameraActor* CameraActor);
	void Remove_PP(class ACameraActor* CameraActor);
	void Deactivate_PP();
	void Activate_PP();
	void SetInvalidWindow(bool Invalid);
	void ReceiveBeginPlay();
	void ActionOut();
	void ActionIn();
	void ReceiveTick(float DeltaSeconds);
	void EndQuest();
	void Deactivate();
	void CallDeactivate();
	void AreaOut();
	void AreaIN();
	void ReadyQuest();
	void StartQuest();
	void BI_RecalcOverlap();
	void BI_ChangeMaterialAlice();
	void PlayDeadMotion(bool Active);
	void DestroyKeyFree();
	void CheckActive();
	void OnLoaded_A168829F44F2BCD021419D82EF0C427F(class UObject* Loaded);
	void Timeline_PostProcess_On__UpdateFunc();
	void Timeline_PostProcess_On__FinishedFunc();
	void SetPlayerLookAt(bool Enable);
	void SpawnReflesh(bool* NoUse);
	void BI_FadeInBlack(float Time, bool* Ret);
	void BI_FadeOutBlack(float Time, bool* Ret);
	void BI_FadeInWhite(float Time, bool* Ret);
	void BI_FadeOutWhite(float Time, bool* Ret);
	void BI_DeleteScript(bool* NoUse);
	void BI_SpawnScript(bool* NoUse);
	void BI_CheckActiveArea(bool* Param_IsActive);
	void ForceSpawnScript(bool* NoUse);
	void BI_SetInvalidWindow(bool Invalid, bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventMissionBase_C">();
	}
	static class ABP_EventMissionBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventMissionBase_C>();
	}
};
static_assert(alignof(ABP_EventMissionBase_C) == 0x000008, "Wrong alignment on ABP_EventMissionBase_C");
static_assert(sizeof(ABP_EventMissionBase_C) == 0x000320, "Wrong size on ABP_EventMissionBase_C");
static_assert(offsetof(ABP_EventMissionBase_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_EventMissionBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, EventArea) == 0x0002C0, "Member 'ABP_EventMissionBase_C::EventArea' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, EventHit) == 0x0002C8, "Member 'ABP_EventMissionBase_C::EventHit' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, Timeline_PostProcess_On_EffectValue_598872274C4642182BD1E99BF5048BAD) == 0x0002D0, "Member 'ABP_EventMissionBase_C::Timeline_PostProcess_On_EffectValue_598872274C4642182BD1E99BF5048BAD' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, Timeline_PostProcess_On__Direction_598872274C4642182BD1E99BF5048BAD) == 0x0002D4, "Member 'ABP_EventMissionBase_C::Timeline_PostProcess_On__Direction_598872274C4642182BD1E99BF5048BAD' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, Timeline_PostProcess_On) == 0x0002D8, "Member 'ABP_EventMissionBase_C::Timeline_PostProcess_On' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, UseWindowType) == 0x0002E0, "Member 'ABP_EventMissionBase_C::UseWindowType' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, UseFacingAngle) == 0x0002E1, "Member 'ABP_EventMissionBase_C::UseFacingAngle' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, WindowType) == 0x0002E2, "Member 'ABP_EventMissionBase_C::WindowType' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, WindowTypeLabel) == 0x0002E4, "Member 'ABP_EventMissionBase_C::WindowTypeLabel' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, bInvalidWindow) == 0x0002EC, "Member 'ABP_EventMissionBase_C::bInvalidWindow' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, ActionWindowFlag) == 0x0002F0, "Member 'ABP_EventMissionBase_C::ActionWindowFlag' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, SetFlag_OpenWindow) == 0x0002F8, "Member 'ABP_EventMissionBase_C::SetFlag_OpenWindow' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, UseWindowType_Save) == 0x000300, "Member 'ABP_EventMissionBase_C::UseWindowType_Save' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, TickEnableWhenCloseWindow) == 0x000301, "Member 'ABP_EventMissionBase_C::TickEnableWhenCloseWindow' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, PPMaterial) == 0x000308, "Member 'ABP_EventMissionBase_C::PPMaterial' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, DMI_PP) == 0x000310, "Member 'ABP_EventMissionBase_C::DMI_PP' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBase_C, InvalidAction) == 0x000318, "Member 'ABP_EventMissionBase_C::InvalidAction' has a wrong offset!");

}

