#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EM_M061_GenericTutorial

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BP_EventMissionBase_Hit_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EM_M061_GenericTutorial.EM_M061_GenericTutorial_C
// 0x00B8 (0x0380 - 0x02C8)
class AEM_M061_GenericTutorial_C final : public ABP_EventMissionBase_Hit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EM_M061_GenericTutorial_C;          // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         CamereaFOV_FOV_8217AA0048E1D2597FBF61B44A2E8BB0;   // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CamereaFOV__Direction_8217AA0048E1D2597FBF61B44A2E8BB0; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29DF[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CamereaFOV;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraRot_rot_FCBBDA294CDB4B53087B8FAC92881446;    // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CameraRot__Direction_FCBBDA294CDB4B53087B8FAC92881446; // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29E0[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CameraRot;                                         // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectIndex;                                       // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29E1[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TutorialTitleLabel;                                // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TutorialMsgLabel;                                  // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 Mission_Event;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LookTarget;                                        // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29E2[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACameraActor*>                   Camera;                                            // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ACameraActor*                           InstantCamera;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefFOV;                                            // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DefInstatCameraRoll;                               // 0x0354(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AActor*                                 DefCamera;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowText;                                          // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29E3[0x3];                                     // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextMax;                                           // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextInt;                                           // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EM_M061_GenericTutorial(int32 EntryPoint);
	void EvtDis_FinishComplete();
	void EvtDis_Finish();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void EndText();
	void EndCamera();
	void TextOpen();
	void ChangeCamera();
	void EndEvent();
	void CallDeactivate();
	void QuestExecute();
	void ReceiveBeginPlay();
	void CamereaFOV__UpdateFunc();
	void CamereaFOV__FinishedFunc();
	void CameraRot__UpdateFunc();
	void CameraRot__FinishedFunc();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EM_M061_GenericTutorial_C">();
	}
	static class AEM_M061_GenericTutorial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEM_M061_GenericTutorial_C>();
	}
};
static_assert(alignof(AEM_M061_GenericTutorial_C) == 0x000008, "Wrong alignment on AEM_M061_GenericTutorial_C");
static_assert(sizeof(AEM_M061_GenericTutorial_C) == 0x000380, "Wrong size on AEM_M061_GenericTutorial_C");
static_assert(offsetof(AEM_M061_GenericTutorial_C, UberGraphFrame_EM_M061_GenericTutorial_C) == 0x0002C8, "Member 'AEM_M061_GenericTutorial_C::UberGraphFrame_EM_M061_GenericTutorial_C' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, CamereaFOV_FOV_8217AA0048E1D2597FBF61B44A2E8BB0) == 0x0002D0, "Member 'AEM_M061_GenericTutorial_C::CamereaFOV_FOV_8217AA0048E1D2597FBF61B44A2E8BB0' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, CamereaFOV__Direction_8217AA0048E1D2597FBF61B44A2E8BB0) == 0x0002D4, "Member 'AEM_M061_GenericTutorial_C::CamereaFOV__Direction_8217AA0048E1D2597FBF61B44A2E8BB0' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, CamereaFOV) == 0x0002D8, "Member 'AEM_M061_GenericTutorial_C::CamereaFOV' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, CameraRot_rot_FCBBDA294CDB4B53087B8FAC92881446) == 0x0002E0, "Member 'AEM_M061_GenericTutorial_C::CameraRot_rot_FCBBDA294CDB4B53087B8FAC92881446' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, CameraRot__Direction_FCBBDA294CDB4B53087B8FAC92881446) == 0x0002E4, "Member 'AEM_M061_GenericTutorial_C::CameraRot__Direction_FCBBDA294CDB4B53087B8FAC92881446' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, CameraRot) == 0x0002E8, "Member 'AEM_M061_GenericTutorial_C::CameraRot' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, SelectIndex) == 0x0002F0, "Member 'AEM_M061_GenericTutorial_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, SystemMessageAsset) == 0x0002F8, "Member 'AEM_M061_GenericTutorial_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, MissionMessageAsset) == 0x000300, "Member 'AEM_M061_GenericTutorial_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, TutorialTitleLabel) == 0x000308, "Member 'AEM_M061_GenericTutorial_C::TutorialTitleLabel' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, TutorialMsgLabel) == 0x000310, "Member 'AEM_M061_GenericTutorial_C::TutorialMsgLabel' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, Mission_Event) == 0x000318, "Member 'AEM_M061_GenericTutorial_C::Mission_Event' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, LookTarget) == 0x000320, "Member 'AEM_M061_GenericTutorial_C::LookTarget' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, Camera) == 0x000328, "Member 'AEM_M061_GenericTutorial_C::Camera' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, Target) == 0x000338, "Member 'AEM_M061_GenericTutorial_C::Target' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, InstantCamera) == 0x000348, "Member 'AEM_M061_GenericTutorial_C::InstantCamera' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, DefFOV) == 0x000350, "Member 'AEM_M061_GenericTutorial_C::DefFOV' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, DefInstatCameraRoll) == 0x000354, "Member 'AEM_M061_GenericTutorial_C::DefInstatCameraRoll' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, DefCamera) == 0x000360, "Member 'AEM_M061_GenericTutorial_C::DefCamera' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, CameraBlender) == 0x000368, "Member 'AEM_M061_GenericTutorial_C::CameraBlender' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, ShowText) == 0x000370, "Member 'AEM_M061_GenericTutorial_C::ShowText' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, TextMax) == 0x000374, "Member 'AEM_M061_GenericTutorial_C::TextMax' has a wrong offset!");
static_assert(offsetof(AEM_M061_GenericTutorial_C, TextInt) == 0x000378, "Member 'AEM_M061_GenericTutorial_C::TextInt' has a wrong offset!");

}

