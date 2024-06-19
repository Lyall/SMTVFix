#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventPause

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventPause.BP_EventPause_C
// 0x0068 (0x0288 - 0x0220)
class ABP_EventPause_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPause;                                           // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C2[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EventBase_C*                        EventBase;                                         // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPauseMsgCtrl;                                    // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPauseDialogCtrl;                                 // 0x0241(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SkipEnable;                                        // 0x0242(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UniteSkip;                                         // 0x0243(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseSkip;                                           // 0x0244(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C3[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeInterval;                                      // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HelpTime;                                          // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpenHelp;                                        // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StaffSkip;                                         // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C4[0x6];                                     // 0x0252(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 EventStaff;                                        // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStepFinal;                                       // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C5[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             PauseDispatcher;                                   // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ResumeDispatcher;                                  // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void PauseDispatcher__DelegateSignature();
	void ResumeDispatcher__DelegateSignature();
	void ExecuteUbergraph_BP_EventPause(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void PauseEvent();
	void ReceiveTick(float DeltaSeconds);
	void OpenHelp();
	void CloseHelp();
	void TickHelp(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventPause_C">();
	}
	static class ABP_EventPause_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventPause_C>();
	}
};
static_assert(alignof(ABP_EventPause_C) == 0x000008, "Wrong alignment on ABP_EventPause_C");
static_assert(sizeof(ABP_EventPause_C) == 0x000288, "Wrong size on ABP_EventPause_C");
static_assert(offsetof(ABP_EventPause_C, UberGraphFrame) == 0x000220, "Member 'ABP_EventPause_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_EventPause_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, IsPause) == 0x000230, "Member 'ABP_EventPause_C::IsPause' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, EventBase) == 0x000238, "Member 'ABP_EventPause_C::EventBase' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, IsPauseMsgCtrl) == 0x000240, "Member 'ABP_EventPause_C::IsPauseMsgCtrl' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, IsPauseDialogCtrl) == 0x000241, "Member 'ABP_EventPause_C::IsPauseDialogCtrl' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, SkipEnable) == 0x000242, "Member 'ABP_EventPause_C::SkipEnable' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, UniteSkip) == 0x000243, "Member 'ABP_EventPause_C::UniteSkip' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, UseSkip) == 0x000244, "Member 'ABP_EventPause_C::UseSkip' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, TimeInterval) == 0x000248, "Member 'ABP_EventPause_C::TimeInterval' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, HelpTime) == 0x00024C, "Member 'ABP_EventPause_C::HelpTime' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, IsOpenHelp) == 0x000250, "Member 'ABP_EventPause_C::IsOpenHelp' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, StaffSkip) == 0x000251, "Member 'ABP_EventPause_C::StaffSkip' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, EventStaff) == 0x000258, "Member 'ABP_EventPause_C::EventStaff' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, IsStepFinal) == 0x000260, "Member 'ABP_EventPause_C::IsStepFinal' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, PauseDispatcher) == 0x000268, "Member 'ABP_EventPause_C::PauseDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_EventPause_C, ResumeDispatcher) == 0x000278, "Member 'ABP_EventPause_C::ResumeDispatcher' has a wrong offset!");

}

