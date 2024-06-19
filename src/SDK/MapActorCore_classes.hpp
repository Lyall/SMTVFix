#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapActorCore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MapActorCore.MapActorCore_C
// 0x0058 (0x0278 - 0x0220)
class AMapActorCore_C : public AMapActorCoreCPP
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   DebugMapMemo;                                      // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          M_CorePause;                                       // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BBF[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             CallPause;                                         // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             CallUnPause;                                       // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   DebugMemo;                                         // 0x0260(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void CallPause__DelegateSignature();
	void CallUnPause__DelegateSignature();
	void ExecuteUbergraph_MapActorCore(int32 EntryPoint);
	void CoreUnPause();
	void CorePause();
	void UserConstructionScript();
	void GetPaused(bool* Pause);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapActorCore_C">();
	}
	static class AMapActorCore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMapActorCore_C>();
	}
};
static_assert(alignof(AMapActorCore_C) == 0x000008, "Wrong alignment on AMapActorCore_C");
static_assert(sizeof(AMapActorCore_C) == 0x000278, "Wrong size on AMapActorCore_C");
static_assert(offsetof(AMapActorCore_C, UberGraphFrame) == 0x000220, "Member 'AMapActorCore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMapActorCore_C, DebugMapMemo) == 0x000228, "Member 'AMapActorCore_C::DebugMapMemo' has a wrong offset!");
static_assert(offsetof(AMapActorCore_C, DefaultSceneRoot) == 0x000230, "Member 'AMapActorCore_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMapActorCore_C, M_CorePause) == 0x000238, "Member 'AMapActorCore_C::M_CorePause' has a wrong offset!");
static_assert(offsetof(AMapActorCore_C, CallPause) == 0x000240, "Member 'AMapActorCore_C::CallPause' has a wrong offset!");
static_assert(offsetof(AMapActorCore_C, CallUnPause) == 0x000250, "Member 'AMapActorCore_C::CallUnPause' has a wrong offset!");
static_assert(offsetof(AMapActorCore_C, DebugMemo) == 0x000260, "Member 'AMapActorCore_C::DebugMemo' has a wrong offset!");

}

