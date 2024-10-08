#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EM_M061_TutorialMagatsuhiDevil

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BP_EventMissionBase_Hit_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EM_M061_TutorialMagatsuhiDevil.EM_M061_TutorialMagatsuhiDevil_C
// 0x0088 (0x0350 - 0x02C8)
class AEM_M061_TutorialMagatsuhiDevil_C final : public ABP_EventMissionBase_Hit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EM_M061_TutorialMagatsuhiDevil_C;   // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         _______1_fov_9D7242FA41C9E444B452F1B9AB38AED0;     // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______1__Direction_9D7242FA41C9E444B452F1B9AB38AED0; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C629[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______1;                                          // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _______0_rot_08A5736A4122272520244DA9BFAA9B86;     // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_08A5736A4122272520244DA9BFAA9B86; // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C62A[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectIndex;                                       // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C62B[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 Mission_Event;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                 DefaultCamera;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           InstantCamera;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefFOV;                                            // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DefInstatCameraRoll;                               // 0x0344(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_EM_M061_TutorialMagatsuhiDevil(int32 EntryPoint);
	void EvtDis_FinishComplete();
	void EvtDis_Finish();
	void CallDeactivate();
	void QuestExecute();
	void ReceiveBeginPlay();
	void _______1__UpdateFunc();
	void _______1__FinishedFunc();
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EM_M061_TutorialMagatsuhiDevil_C">();
	}
	static class AEM_M061_TutorialMagatsuhiDevil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEM_M061_TutorialMagatsuhiDevil_C>();
	}
};
static_assert(alignof(AEM_M061_TutorialMagatsuhiDevil_C) == 0x000008, "Wrong alignment on AEM_M061_TutorialMagatsuhiDevil_C");
static_assert(sizeof(AEM_M061_TutorialMagatsuhiDevil_C) == 0x000350, "Wrong size on AEM_M061_TutorialMagatsuhiDevil_C");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, UberGraphFrame_EM_M061_TutorialMagatsuhiDevil_C) == 0x0002C8, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::UberGraphFrame_EM_M061_TutorialMagatsuhiDevil_C' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, _______1_fov_9D7242FA41C9E444B452F1B9AB38AED0) == 0x0002D0, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::_______1_fov_9D7242FA41C9E444B452F1B9AB38AED0' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, _______1__Direction_9D7242FA41C9E444B452F1B9AB38AED0) == 0x0002D4, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::_______1__Direction_9D7242FA41C9E444B452F1B9AB38AED0' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, _______1) == 0x0002D8, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::_______1' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, _______0_rot_08A5736A4122272520244DA9BFAA9B86) == 0x0002E0, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::_______0_rot_08A5736A4122272520244DA9BFAA9B86' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, _______0__Direction_08A5736A4122272520244DA9BFAA9B86) == 0x0002E4, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::_______0__Direction_08A5736A4122272520244DA9BFAA9B86' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, _______0) == 0x0002E8, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::_______0' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, SelectIndex) == 0x0002F0, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, SystemMessageAsset) == 0x0002F8, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, MissionMessageAsset) == 0x000300, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, Mission_Event) == 0x000308, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::Mission_Event' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, Camera) == 0x000310, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::Camera' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, Target) == 0x000320, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::Target' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, DefaultCamera) == 0x000330, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::DefaultCamera' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, InstantCamera) == 0x000338, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::InstantCamera' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, DefFOV) == 0x000340, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::DefFOV' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuhiDevil_C, DefInstatCameraRoll) == 0x000344, "Member 'AEM_M061_TutorialMagatsuhiDevil_C::DefInstatCameraRoll' has a wrong offset!");

}

