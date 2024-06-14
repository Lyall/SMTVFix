#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pla602

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Pla602.Pla602_C
// 0x0040 (0x0A10 - 0x09D0)
class APla602_C final : public APlayerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Pla602_C;                           // 0x09D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SK_Book;                                           // 0x09D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaEyeComponent_C*                   RightEye;                                          // 0x09E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaEyeComponent_C*                   LeftEye;                                           // 0x09E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaHeadComponent_C*                  Head;                                              // 0x09F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaFaceComponent*                    Face;                                              // 0x09F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          BookVisible;                                       // 0x0A00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor)
	uint8                                         Pad_660A[0x7];                                     // 0x0A01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPla602_AnimBP_C*                       AnimBP;                                            // 0x0A08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IsAutoRunning(bool* bAutoRunning);
	void BI_SetAnimBP(class UAnimInstance* AnimInstance, bool* NoUse);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void Notify_WalkBrakeTrigger(bool bLeft_1, bool bLeft_2, bool bRight_1, bool bRight_2);
	void ReceiveBeginPlay();
	void TickBrake();
	void ReceivePossessed(class AController* NewController);
	void Input_BeginDash();
	void Input_EndDash();
	void ExecuteUbergraph_Pla602(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Pla602_C">();
	}
	static class APla602_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APla602_C>();
	}
};
static_assert(alignof(APla602_C) == 0x000008, "Wrong alignment on APla602_C");
static_assert(sizeof(APla602_C) == 0x000A10, "Wrong size on APla602_C");
static_assert(offsetof(APla602_C, UberGraphFrame_Pla602_C) == 0x0009D0, "Member 'APla602_C::UberGraphFrame_Pla602_C' has a wrong offset!");
static_assert(offsetof(APla602_C, SK_Book) == 0x0009D8, "Member 'APla602_C::SK_Book' has a wrong offset!");
static_assert(offsetof(APla602_C, RightEye) == 0x0009E0, "Member 'APla602_C::RightEye' has a wrong offset!");
static_assert(offsetof(APla602_C, LeftEye) == 0x0009E8, "Member 'APla602_C::LeftEye' has a wrong offset!");
static_assert(offsetof(APla602_C, Head) == 0x0009F0, "Member 'APla602_C::Head' has a wrong offset!");
static_assert(offsetof(APla602_C, Face) == 0x0009F8, "Member 'APla602_C::Face' has a wrong offset!");
static_assert(offsetof(APla602_C, BookVisible) == 0x000A00, "Member 'APla602_C::BookVisible' has a wrong offset!");
static_assert(offsetof(APla602_C, AnimBP) == 0x000A08, "Member 'APla602_C::AnimBP' has a wrong offset!");

}
