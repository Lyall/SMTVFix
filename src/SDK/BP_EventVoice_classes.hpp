#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventVoice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventVoice.BP_EventVoice_C
// 0x0098 (0x02B8 - 0x0220)
class ABP_EventVoice_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAtomComponent*                         VoiceComponent;                                    // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Step;                                              // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class USoundAtomCue>           VoiceAsset;                                        // 0x0240(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class USoundAtomCue*                          VoiceObject;                                       // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnd;                                             // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UCharaLipSync>           LipAsset;                                          // 0x0278(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UCharaLipSync*                          LipObject;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharaBase_C*                           Chara;                                             // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseLip;                                            // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EventVoice(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLoaded_8B38A45C4B5796534726BBAD81B724E0(class UObject* Loaded);
	void OnLoaded_8535642A4460D76349FEDDA0194EA271(class UObject* Loaded);
	void PlayVoice(class FName Voice, class ACharaBase_C* Param_Chara);
	void StopVoice();
	void IsPlaying(bool* Play);
	void ForceEnd();
	void GetEnd(bool* End);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventVoice_C">();
	}
	static class ABP_EventVoice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventVoice_C>();
	}
};
static_assert(alignof(ABP_EventVoice_C) == 0x000008, "Wrong alignment on ABP_EventVoice_C");
static_assert(sizeof(ABP_EventVoice_C) == 0x0002B8, "Wrong size on ABP_EventVoice_C");
static_assert(offsetof(ABP_EventVoice_C, UberGraphFrame) == 0x000220, "Member 'ABP_EventVoice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_EventVoice_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, VoiceComponent) == 0x000230, "Member 'ABP_EventVoice_C::VoiceComponent' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, Step) == 0x000238, "Member 'ABP_EventVoice_C::Step' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, VoiceAsset) == 0x000240, "Member 'ABP_EventVoice_C::VoiceAsset' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, VoiceObject) == 0x000268, "Member 'ABP_EventVoice_C::VoiceObject' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, IsEnd) == 0x000270, "Member 'ABP_EventVoice_C::IsEnd' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, LipAsset) == 0x000278, "Member 'ABP_EventVoice_C::LipAsset' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, LipObject) == 0x0002A0, "Member 'ABP_EventVoice_C::LipObject' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, Chara) == 0x0002A8, "Member 'ABP_EventVoice_C::Chara' has a wrong offset!");
static_assert(offsetof(ABP_EventVoice_C, UseLip) == 0x0002B0, "Member 'ABP_EventVoice_C::UseLip' has a wrong offset!");

}

