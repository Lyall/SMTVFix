#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnvChange

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DaathTypeList_structs.hpp"
#include "ST_LightParam_structs.hpp"
#include "MapEventHit_Type_INOUT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnvChange.BP_EnvChange_C
// 0x0958 (0x0D10 - 0x03B8)
class ABP_EnvChange_C final : public AMapEventHit_Type_INOUT_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_EnvChange_C;                     // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EDaathTypeList                                Type;                                              // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94A6[0x3];                                     // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_LightParam                         NextParam;                                         // 0x03C4(0x0318)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_LightParam                         PrevParam;                                         // 0x06DC(0x0318)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_LightParam                         NowParam;                                          // 0x09F4(0x0318)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHitCheck;                                        // 0x0D0C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EnvChange(int32 EntryPoint);
	void BPI_EnvReset();
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnvChange_C">();
	}
	static class ABP_EnvChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EnvChange_C>();
	}
};
static_assert(alignof(ABP_EnvChange_C) == 0x000008, "Wrong alignment on ABP_EnvChange_C");
static_assert(sizeof(ABP_EnvChange_C) == 0x000D10, "Wrong size on ABP_EnvChange_C");
static_assert(offsetof(ABP_EnvChange_C, UberGraphFrame_BP_EnvChange_C) == 0x0003B8, "Member 'ABP_EnvChange_C::UberGraphFrame_BP_EnvChange_C' has a wrong offset!");
static_assert(offsetof(ABP_EnvChange_C, Type) == 0x0003C0, "Member 'ABP_EnvChange_C::Type' has a wrong offset!");
static_assert(offsetof(ABP_EnvChange_C, NextParam) == 0x0003C4, "Member 'ABP_EnvChange_C::NextParam' has a wrong offset!");
static_assert(offsetof(ABP_EnvChange_C, PrevParam) == 0x0006DC, "Member 'ABP_EnvChange_C::PrevParam' has a wrong offset!");
static_assert(offsetof(ABP_EnvChange_C, NowParam) == 0x0009F4, "Member 'ABP_EnvChange_C::NowParam' has a wrong offset!");
static_assert(offsetof(ABP_EnvChange_C, IsHitCheck) == 0x000D0C, "Member 'ABP_EnvChange_C::IsHitCheck' has a wrong offset!");

}

