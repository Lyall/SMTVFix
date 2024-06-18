#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM0021

#include "Basic.hpp"

#include "BP_EventMissionBase_HitAction_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM0021.MM_M061_EM0021_C
// 0x00A0 (0x0398 - 0x02F8)
class AMM_M061_EM0021_C final : public ABP_EventMissionBase_HitAction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM0021_C;                   // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         _______0_move_417D18194DE0DEC6A83E5DBA7C20F150;    // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_417D18194DE0DEC6A83E5DBA7C20F150; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC0F[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Select_Index;                                      // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC10[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 Mission_Event;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                 Default_View_Target;                               // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Battle_Point;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          BGMCue;                                            // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADevilBase_C*                           SpawnActor;                                        // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADevilBase_C*                           SpawnActor2;                                       // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADevilBase_C*                           SpawnActor3;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADevilBase_C*                           SpawnYoko;                                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    SequencerActor;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM0021(int32 EntryPoint);
	void Evt_FinishComplete();
	void EvtDis_Finish();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnDestroyed______0(class AActor* DestroyedActor);
	void EndBattle______0();
	void End_Mission();
	void E2031_Event();
	void OnLoaded_CA4C919B47E016D1B6B5949F41C2CEDC(class UObject* Loaded);
	void OnLoaded_AE9BCA454CFB26C87E76EF9336E7CBCA(TSubclassOf<class UObject> Loaded);
	void OnLoaded_90074E7243988BDD3CDA518EB330A476(TSubclassOf<class UObject> Loaded);
	void OnLoaded_EE43887842518B64131F4B8E6EF07590(TSubclassOf<class UObject> Loaded);
	void OnLoaded_A86BAF4E443D1EED516DC581533DF7F4(TSubclassOf<class UObject> Loaded);
	void OnLoaded_8E97D96943BBD029D262ADA94FB80DE8(TSubclassOf<class UObject> Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F6B900AFA(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FCFE740CF(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDCB9A382C(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDDAFB955F(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BCF4724E22(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDD0A41EC6(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDAE57E37B(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDF5DFB7D5(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD062E3195(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDA2629F35(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F841FA3E6(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BCC9565CDD(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BCA9B2D9AF(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDEE695C52(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD0ED55A6E(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD229F928C(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD0422FEC5(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD74335A86(class UObject* Loaded);
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();
	void CallDeactivate();
	void ReceiveBeginPlay();
	void QuestFunctionHit();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM0021_C">();
	}
	static class AMM_M061_EM0021_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM0021_C>();
	}
};
static_assert(alignof(AMM_M061_EM0021_C) == 0x000008, "Wrong alignment on AMM_M061_EM0021_C");
static_assert(sizeof(AMM_M061_EM0021_C) == 0x000398, "Wrong size on AMM_M061_EM0021_C");
static_assert(offsetof(AMM_M061_EM0021_C, UberGraphFrame_MM_M061_EM0021_C) == 0x0002F8, "Member 'AMM_M061_EM0021_C::UberGraphFrame_MM_M061_EM0021_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, _______0_move_417D18194DE0DEC6A83E5DBA7C20F150) == 0x000300, "Member 'AMM_M061_EM0021_C::_______0_move_417D18194DE0DEC6A83E5DBA7C20F150' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, _______0__Direction_417D18194DE0DEC6A83E5DBA7C20F150) == 0x000304, "Member 'AMM_M061_EM0021_C::_______0__Direction_417D18194DE0DEC6A83E5DBA7C20F150' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, _______0) == 0x000308, "Member 'AMM_M061_EM0021_C::_______0' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, Select_Index) == 0x000310, "Member 'AMM_M061_EM0021_C::Select_Index' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, SystemMessageAsset) == 0x000318, "Member 'AMM_M061_EM0021_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, MissionMessageAsset) == 0x000320, "Member 'AMM_M061_EM0021_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, Mission_Event) == 0x000328, "Member 'AMM_M061_EM0021_C::Mission_Event' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, Camera) == 0x000330, "Member 'AMM_M061_EM0021_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, Target) == 0x000340, "Member 'AMM_M061_EM0021_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, Default_View_Target) == 0x000350, "Member 'AMM_M061_EM0021_C::Default_View_Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, Battle_Point) == 0x000358, "Member 'AMM_M061_EM0021_C::Battle_Point' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, BGMCue) == 0x000360, "Member 'AMM_M061_EM0021_C::BGMCue' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, CameraBlender) == 0x000368, "Member 'AMM_M061_EM0021_C::CameraBlender' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, SpawnActor) == 0x000370, "Member 'AMM_M061_EM0021_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, SpawnActor2) == 0x000378, "Member 'AMM_M061_EM0021_C::SpawnActor2' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, SpawnActor3) == 0x000380, "Member 'AMM_M061_EM0021_C::SpawnActor3' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, SpawnYoko) == 0x000388, "Member 'AMM_M061_EM0021_C::SpawnYoko' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_C, SequencerActor) == 0x000390, "Member 'AMM_M061_EM0021_C::SequencerActor' has a wrong offset!");

}

