#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_E0262

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_Direct_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_E0262.MM_M061_E0262_C
// 0x0080 (0x0340 - 0x02C0)
class AMM_M061_E0262_C final : public ABP_EventMissionBase_Direct_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_E0262_C;                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         _______0_move_C11D9C2D434F602B06BC538FFE5C7544;    // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_C11D9C2D434F602B06BC538FFE5C7544; // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C93C[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectIndex;                                       // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C93D[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target_Point;                                      // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                 Default__View_Target;                              // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SpawnActor;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Actor_List;                                        // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          TalkOn1;                                           // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TalkOn2;                                           // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C93E[0x6];                                     // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  NaviDevil;                                         // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_E0262(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void QuestExecute();
	void CallDeactivate();
	void ReceiveBeginPlay();
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC2E6D1ACD(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDCBD293E3(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC5431A2AA(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD9A21EFCF(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD407D4C63(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDBD687AD6(class UObject* Loaded);
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_E0262_C">();
	}
	static class AMM_M061_E0262_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_E0262_C>();
	}
};
static_assert(alignof(AMM_M061_E0262_C) == 0x000008, "Wrong alignment on AMM_M061_E0262_C");
static_assert(sizeof(AMM_M061_E0262_C) == 0x000340, "Wrong size on AMM_M061_E0262_C");
static_assert(offsetof(AMM_M061_E0262_C, UberGraphFrame_MM_M061_E0262_C) == 0x0002C0, "Member 'AMM_M061_E0262_C::UberGraphFrame_MM_M061_E0262_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, _______0_move_C11D9C2D434F602B06BC538FFE5C7544) == 0x0002C8, "Member 'AMM_M061_E0262_C::_______0_move_C11D9C2D434F602B06BC538FFE5C7544' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, _______0__Direction_C11D9C2D434F602B06BC538FFE5C7544) == 0x0002CC, "Member 'AMM_M061_E0262_C::_______0__Direction_C11D9C2D434F602B06BC538FFE5C7544' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, _______0) == 0x0002D0, "Member 'AMM_M061_E0262_C::_______0' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, SelectIndex) == 0x0002D8, "Member 'AMM_M061_E0262_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, SystemMessageAsset) == 0x0002E0, "Member 'AMM_M061_E0262_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, Camera) == 0x0002E8, "Member 'AMM_M061_E0262_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, Target_Point) == 0x0002F8, "Member 'AMM_M061_E0262_C::Target_Point' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, Default__View_Target) == 0x000308, "Member 'AMM_M061_E0262_C::Default__View_Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, SpawnActor) == 0x000310, "Member 'AMM_M061_E0262_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, Actor_List) == 0x000318, "Member 'AMM_M061_E0262_C::Actor_List' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, TalkOn1) == 0x000328, "Member 'AMM_M061_E0262_C::TalkOn1' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, TalkOn2) == 0x000329, "Member 'AMM_M061_E0262_C::TalkOn2' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, CameraBlender) == 0x000330, "Member 'AMM_M061_E0262_C::CameraBlender' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0262_C, NaviDevil) == 0x000338, "Member 'AMM_M061_E0262_C::NaviDevil' has a wrong offset!");

}

