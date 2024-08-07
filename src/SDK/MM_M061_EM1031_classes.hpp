#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1031

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BP_EventMissionBase_HitAction_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM1031.MM_M061_EM1031_C
// 0x00D8 (0x03D0 - 0x02F8)
class AMM_M061_EM1031_C final : public ABP_EventMissionBase_HitAction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM1031_C;                   // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Dev_Rot_rot_1702AA38462A8708400E93B8C2AD21E0;      // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Dev_Rot__Direction_1702AA38462A8708400E93B8C2AD21E0; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB82[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Dev_Rot;                                           // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cam_Rot_Rot_C4BAFEF747A99B371537CC887EA9A985;      // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Cam_Rot__Direction_C4BAFEF747A99B371537CC887EA9A985; // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB83[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Cam_Rot;                                           // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Select_Index;                                      // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB84[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 Mission_Event;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                 Default_View_Target;                               // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Battle_Point;                                      // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EventHit_Location;                                 // 0x0370(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               EventHit_Rotate;                                   // 0x037C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                EventHit_Scale;                                    // 0x0388(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB85[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACameraActor*                           Instant_Camera;                                    // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Instant_Def_Rot;                                   // 0x03A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Dev_Def_Lot;                                       // 0x03AC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Check_Rot;                                         // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Check_Motion;                                      // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DB86[0x6];                                     // 0x03BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADevilBase_C*                           SpawnActor;                                        // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM1031(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnDestroyed______0(class AActor* DestroyedActor);
	void Dev_Motion();
	void Dev_Rot_Stop();
	void Dev_Rot_Start();
	void Look_Stop();
	void Look_Dev();
	void EndBattle______0();
	void End_Mission();
	void OnLoaded_59311A484BB09AA3EF93A2A004D4A844(TSubclassOf<class UObject> Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC802192AA(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC64ED57F2(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDC93496A5(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDCA580F66(class UObject* Loaded);
	void Dev_Rot__UpdateFunc();
	void Dev_Rot__FinishedFunc();
	void Cam_Rot__UpdateFunc();
	void Cam_Rot__FinishedFunc();
	void UserConstructionScript();
	void CallDeactivate();
	void ReceiveBeginPlay();
	void QuestFunctionHit();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM1031_C">();
	}
	static class AMM_M061_EM1031_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM1031_C>();
	}
};
static_assert(alignof(AMM_M061_EM1031_C) == 0x000008, "Wrong alignment on AMM_M061_EM1031_C");
static_assert(sizeof(AMM_M061_EM1031_C) == 0x0003D0, "Wrong size on AMM_M061_EM1031_C");
static_assert(offsetof(AMM_M061_EM1031_C, UberGraphFrame_MM_M061_EM1031_C) == 0x0002F8, "Member 'AMM_M061_EM1031_C::UberGraphFrame_MM_M061_EM1031_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Dev_Rot_rot_1702AA38462A8708400E93B8C2AD21E0) == 0x000300, "Member 'AMM_M061_EM1031_C::Dev_Rot_rot_1702AA38462A8708400E93B8C2AD21E0' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Dev_Rot__Direction_1702AA38462A8708400E93B8C2AD21E0) == 0x000304, "Member 'AMM_M061_EM1031_C::Dev_Rot__Direction_1702AA38462A8708400E93B8C2AD21E0' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Dev_Rot) == 0x000308, "Member 'AMM_M061_EM1031_C::Dev_Rot' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Cam_Rot_Rot_C4BAFEF747A99B371537CC887EA9A985) == 0x000310, "Member 'AMM_M061_EM1031_C::Cam_Rot_Rot_C4BAFEF747A99B371537CC887EA9A985' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Cam_Rot__Direction_C4BAFEF747A99B371537CC887EA9A985) == 0x000314, "Member 'AMM_M061_EM1031_C::Cam_Rot__Direction_C4BAFEF747A99B371537CC887EA9A985' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Cam_Rot) == 0x000318, "Member 'AMM_M061_EM1031_C::Cam_Rot' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Select_Index) == 0x000320, "Member 'AMM_M061_EM1031_C::Select_Index' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, SystemMessageAsset) == 0x000328, "Member 'AMM_M061_EM1031_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, MissionMessageAsset) == 0x000330, "Member 'AMM_M061_EM1031_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Mission_Event) == 0x000338, "Member 'AMM_M061_EM1031_C::Mission_Event' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Camera) == 0x000340, "Member 'AMM_M061_EM1031_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Target) == 0x000350, "Member 'AMM_M061_EM1031_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Default_View_Target) == 0x000360, "Member 'AMM_M061_EM1031_C::Default_View_Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Battle_Point) == 0x000368, "Member 'AMM_M061_EM1031_C::Battle_Point' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, EventHit_Location) == 0x000370, "Member 'AMM_M061_EM1031_C::EventHit_Location' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, EventHit_Rotate) == 0x00037C, "Member 'AMM_M061_EM1031_C::EventHit_Rotate' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, EventHit_Scale) == 0x000388, "Member 'AMM_M061_EM1031_C::EventHit_Scale' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Instant_Camera) == 0x000398, "Member 'AMM_M061_EM1031_C::Instant_Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Instant_Def_Rot) == 0x0003A0, "Member 'AMM_M061_EM1031_C::Instant_Def_Rot' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Dev_Def_Lot) == 0x0003AC, "Member 'AMM_M061_EM1031_C::Dev_Def_Lot' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Check_Rot) == 0x0003B8, "Member 'AMM_M061_EM1031_C::Check_Rot' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, Check_Motion) == 0x0003B9, "Member 'AMM_M061_EM1031_C::Check_Motion' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, SpawnActor) == 0x0003C0, "Member 'AMM_M061_EM1031_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1031_C, CameraBlender) == 0x0003C8, "Member 'AMM_M061_EM1031_C::CameraBlender' has a wrong offset!");

}

