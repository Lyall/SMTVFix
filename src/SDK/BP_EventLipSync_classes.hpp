#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventLipSync

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventLipSync.BP_EventLipSync_C
// 0x00A0 (0x02C0 - 0x0220)
class ABP_EventLipSync_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    ScriptMessageAsset;                                // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Label;                                             // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SpeakingActor;                                     // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class USoundAtomCue>           VoiceAsset;                                        // 0x0250(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UCharaLipSync>           LipSyncAsset;                                      // 0x0278(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                                VoiceData;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                LipSyncData;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAtomComponent*                         AtomComponent;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseVoice;                                          // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseLipSync;                                        // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA[0x2];                                      // 0x02BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_BP_EventLipSync_C;                           // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EventLipSync(int32 EntryPoint);
	void Stop();
	void Start();
	void ReceiveTick(float DeltaSeconds);
	void OnLoaded_439F8D954E62CD9656376695E1D3D554(class UObject* Loaded);
	void OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431(class UObject* Loaded);
	void Initialize(class UScriptMessageAsset* Param_ScriptMessageAsset, class FName Param_Label, class AActor* Param_SpeakingActor);
	void GetFinish(bool* IsFinish);
	void InitializeIndex(class UScriptMessageAsset* Param_ScriptMessageAsset, int32 Param_Index, class AActor* Param_SpeakingActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventLipSync_C">();
	}
	static class ABP_EventLipSync_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventLipSync_C>();
	}
};
static_assert(alignof(ABP_EventLipSync_C) == 0x000008, "Wrong alignment on ABP_EventLipSync_C");
static_assert(sizeof(ABP_EventLipSync_C) == 0x0002C0, "Wrong size on ABP_EventLipSync_C");
static_assert(offsetof(ABP_EventLipSync_C, UberGraphFrame) == 0x000220, "Member 'ABP_EventLipSync_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_EventLipSync_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, ScriptMessageAsset) == 0x000230, "Member 'ABP_EventLipSync_C::ScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, Label) == 0x000238, "Member 'ABP_EventLipSync_C::Label' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, SpeakingActor) == 0x000240, "Member 'ABP_EventLipSync_C::SpeakingActor' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, Active) == 0x000248, "Member 'ABP_EventLipSync_C::Active' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, VoiceAsset) == 0x000250, "Member 'ABP_EventLipSync_C::VoiceAsset' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, LipSyncAsset) == 0x000278, "Member 'ABP_EventLipSync_C::LipSyncAsset' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, VoiceData) == 0x0002A0, "Member 'ABP_EventLipSync_C::VoiceData' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, LipSyncData) == 0x0002A8, "Member 'ABP_EventLipSync_C::LipSyncData' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, AtomComponent) == 0x0002B0, "Member 'ABP_EventLipSync_C::AtomComponent' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, UseVoice) == 0x0002B8, "Member 'ABP_EventLipSync_C::UseVoice' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, UseLipSync) == 0x0002B9, "Member 'ABP_EventLipSync_C::UseLipSync' has a wrong offset!");
static_assert(offsetof(ABP_EventLipSync_C, Index_BP_EventLipSync_C) == 0x0002BC, "Member 'ABP_EventLipSync_C::Index_BP_EventLipSync_C' has a wrong offset!");

}

