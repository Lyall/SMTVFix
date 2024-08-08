#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventScript

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EventScriptStruct_structs.hpp"
#include "E_PLAYER_MANAGER_TYPE_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventScript.BP_EventScript_C
// 0x0238 (0x0458 - 0x0220)
class ABP_EventScript_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Step;                                              // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             DataTable;                                         // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           LabelList;                                         // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEventScriptStruct                     RowData;                                           // 0x0250(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ReturnGame;                                        // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UScriptMessageAsset*                    MessageAsset;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Message_C*                          MessageWidget;                                     // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ActorList;                                         // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                 Camera;                                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseAutoFocus;                                      // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                AutoFocusLocation;                                 // 0x02FC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AutoFocusStart;                                    // 0x0308(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NowTime;                                           // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastTime;                                          // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultFOV;                                        // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 MissionEvent;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultProbeSize;                                  // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Reflesh;                                           // 0x032C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32D[0x3];                                      // 0x032D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatineeCameraShake*                    ShakeInst;                                         // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 RotateActor;                                       // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 BaseActor;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TickEnableCount;                                   // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRotate;                                          // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34D[0x3];                                      // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ChangeFOV;                                         // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateLength;                                      // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateTime;                                        // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RotateStart;                                       // 0x035C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RotateEnd;                                         // 0x0368(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      RotateTalk;                                        // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      RotateTurn;                                        // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 LipSyncActor;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      TempLoopMotion;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DefaultText1;                                      // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DefaultText2;                                      // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   UseText1;                                          // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   UseText2;                                          // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventScriptCamera_C*                FocusCtrl;                                         // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  TmpFlag;                                           // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 MsgCtrl;                                           // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectMenuNumber;                                  // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC[0x4];                                      // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LocalFadeCtrl;                                     // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MessageCameraTime;                                 // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC[0x4];                                      // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 OneshotTalkActor;                                  // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                          TurnBlendSpace;                                    // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TextTime;                                          // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VoiceTime;                                         // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventLipSync_C*                     LipSyncCtrl;                                       // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GazeTarget;                                        // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WindowOpen;                                        // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 SelectMsgIndex;                                    // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 SelectIndexData;                                   // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NoStopPrioEnv;                                     // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x3];                                      // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MessageWait;                                       // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    TutorialMessageAsset;                              // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SelectWait;                                        // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Finish;                                            // 0x0454(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ReturnGame__DelegateSignature();
	void ExecuteUbergraph_BP_EventScript(int32 EntryPoint);
	void Evt_FinishComplete();
	void Evt_Finish();
	void Update();
	void ReceiveTick(float DeltaSeconds);
	void OnLoaded_E032B3FD4AC9AEB5AA2A869815C92D6A(class UObject* Loaded);
	void OnLoaded_E0837A2D407D3339A09E78B6A3268580(class UObject* Loaded);
	void OnLoaded_77A028E54D55257BA6806DB56EC24FE4(class UObject* Loaded);
	void OnLoaded_776392084A9E8F86B40087B797892CBF(class UObject* Loaded);
	void OnLoaded_9E16D8614BA39AB7876ED5AD12AB72CE(class UObject* Loaded);
	void OnLoaded_7E35E61142036702FE07CA8E2B198574(class UObject* Loaded);
	void OnLoaded_EFE9E6EB4712FC630531449A7A793203(class UObject* Loaded);
	void OnLoaded_9FEAECF24B1502E23FDE658727325C24(class UObject* Loaded);
	void OnLoaded_D885E887427B74445685259E190BAB33(class UObject* Loaded);
	void OnLoaded_A988ABDC46336A5A4D591293297D98B3(TSubclassOf<class UObject> Loaded);
	void OnLoaded_22070FC0453417A015314AB9F5E9A0BF(TSubclassOf<class UObject> Loaded);
	void OnLoaded_C5312A1B48061E0EF22C2AB3FEEAF3BA(class UObject* Loaded);
	void OnLoaded_E16CE0F843D6BEA4B53483B48737A01C(class UObject* Loaded);
	void SetDataTable(class UDataTable* Param_DataTable, class UScriptMessageAsset* Param_MessageAsset);
	void Play();
	void TickEnable();
	void TickDisable();
	void IsSystemMessage(int32 Param_Index, bool* Ret);
	void IsSystemMessageLabel(class FName Label, bool* Ret);
	void IsFinish(bool* Param_Finish);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventScript_C">();
	}
	static class ABP_EventScript_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventScript_C>();
	}
};
static_assert(alignof(ABP_EventScript_C) == 0x000008, "Wrong alignment on ABP_EventScript_C");
static_assert(sizeof(ABP_EventScript_C) == 0x000458, "Wrong size on ABP_EventScript_C");
static_assert(offsetof(ABP_EventScript_C, UberGraphFrame) == 0x000220, "Member 'ABP_EventScript_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_EventScript_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, Step) == 0x000230, "Member 'ABP_EventScript_C::Step' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, DataTable) == 0x000238, "Member 'ABP_EventScript_C::DataTable' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, LabelList) == 0x000240, "Member 'ABP_EventScript_C::LabelList' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, RowData) == 0x000250, "Member 'ABP_EventScript_C::RowData' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, ReturnGame) == 0x0002C0, "Member 'ABP_EventScript_C::ReturnGame' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, MessageAsset) == 0x0002D0, "Member 'ABP_EventScript_C::MessageAsset' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, MessageWidget) == 0x0002D8, "Member 'ABP_EventScript_C::MessageWidget' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, ActorList) == 0x0002E0, "Member 'ABP_EventScript_C::ActorList' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, Camera) == 0x0002F0, "Member 'ABP_EventScript_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, UseAutoFocus) == 0x0002F8, "Member 'ABP_EventScript_C::UseAutoFocus' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, AutoFocusLocation) == 0x0002FC, "Member 'ABP_EventScript_C::AutoFocusLocation' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, AutoFocusStart) == 0x000308, "Member 'ABP_EventScript_C::AutoFocusStart' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, NowTime) == 0x000314, "Member 'ABP_EventScript_C::NowTime' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, LastTime) == 0x000318, "Member 'ABP_EventScript_C::LastTime' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, DefaultFOV) == 0x00031C, "Member 'ABP_EventScript_C::DefaultFOV' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, MissionEvent) == 0x000320, "Member 'ABP_EventScript_C::MissionEvent' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, DefaultProbeSize) == 0x000328, "Member 'ABP_EventScript_C::DefaultProbeSize' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, Reflesh) == 0x00032C, "Member 'ABP_EventScript_C::Reflesh' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, ShakeInst) == 0x000330, "Member 'ABP_EventScript_C::ShakeInst' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, RotateActor) == 0x000338, "Member 'ABP_EventScript_C::RotateActor' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, BaseActor) == 0x000340, "Member 'ABP_EventScript_C::BaseActor' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, TickEnableCount) == 0x000348, "Member 'ABP_EventScript_C::TickEnableCount' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, IsRotate) == 0x00034C, "Member 'ABP_EventScript_C::IsRotate' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, ChangeFOV) == 0x000350, "Member 'ABP_EventScript_C::ChangeFOV' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, RotateLength) == 0x000354, "Member 'ABP_EventScript_C::RotateLength' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, RotateTime) == 0x000358, "Member 'ABP_EventScript_C::RotateTime' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, RotateStart) == 0x00035C, "Member 'ABP_EventScript_C::RotateStart' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, RotateEnd) == 0x000368, "Member 'ABP_EventScript_C::RotateEnd' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, RotateTalk) == 0x000378, "Member 'ABP_EventScript_C::RotateTalk' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, RotateTurn) == 0x000380, "Member 'ABP_EventScript_C::RotateTurn' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, LipSyncActor) == 0x000388, "Member 'ABP_EventScript_C::LipSyncActor' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, TempLoopMotion) == 0x000390, "Member 'ABP_EventScript_C::TempLoopMotion' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, DefaultText1) == 0x000398, "Member 'ABP_EventScript_C::DefaultText1' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, DefaultText2) == 0x0003A0, "Member 'ABP_EventScript_C::DefaultText2' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, UseText1) == 0x0003A8, "Member 'ABP_EventScript_C::UseText1' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, UseText2) == 0x0003B0, "Member 'ABP_EventScript_C::UseText2' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, FocusCtrl) == 0x0003B8, "Member 'ABP_EventScript_C::FocusCtrl' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, TmpFlag) == 0x0003C0, "Member 'ABP_EventScript_C::TmpFlag' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, MsgCtrl) == 0x0003D0, "Member 'ABP_EventScript_C::MsgCtrl' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, SelectMenuNumber) == 0x0003D8, "Member 'ABP_EventScript_C::SelectMenuNumber' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, LocalFadeCtrl) == 0x0003E0, "Member 'ABP_EventScript_C::LocalFadeCtrl' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, MessageCameraTime) == 0x0003E8, "Member 'ABP_EventScript_C::MessageCameraTime' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, OneshotTalkActor) == 0x0003F0, "Member 'ABP_EventScript_C::OneshotTalkActor' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, TurnBlendSpace) == 0x0003F8, "Member 'ABP_EventScript_C::TurnBlendSpace' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, TextTime) == 0x000400, "Member 'ABP_EventScript_C::TextTime' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, VoiceTime) == 0x000404, "Member 'ABP_EventScript_C::VoiceTime' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, LipSyncCtrl) == 0x000408, "Member 'ABP_EventScript_C::LipSyncCtrl' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, GazeTarget) == 0x000410, "Member 'ABP_EventScript_C::GazeTarget' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, WindowOpen) == 0x000418, "Member 'ABP_EventScript_C::WindowOpen' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, SelectMsgIndex) == 0x000420, "Member 'ABP_EventScript_C::SelectMsgIndex' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, SelectIndexData) == 0x000430, "Member 'ABP_EventScript_C::SelectIndexData' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, NoStopPrioEnv) == 0x000440, "Member 'ABP_EventScript_C::NoStopPrioEnv' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, MessageWait) == 0x000444, "Member 'ABP_EventScript_C::MessageWait' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, TutorialMessageAsset) == 0x000448, "Member 'ABP_EventScript_C::TutorialMessageAsset' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, SelectWait) == 0x000450, "Member 'ABP_EventScript_C::SelectWait' has a wrong offset!");
static_assert(offsetof(ABP_EventScript_C, Finish) == 0x000454, "Member 'ABP_EventScript_C::Finish' has a wrong offset!");

}

