#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2221

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM2221.MM_M061_EM2221_C
// 0x0030 (0x0350 - 0x0320)
class AMM_M061_EM2221_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM2221_C;                   // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TA_Flag;                                           // 0x032C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Local_Flag;                                        // 0x0334(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Item_Id;                                           // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EffectStop;                                        // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A619[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FindItemObject_C*                   FindItem;                                          // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM2221(int32 EntryPoint);
	void EvtDis_EndAction______0();
	void QuestExecute();
	void ReceiveBeginPlay();
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM2221_C">();
	}
	static class AMM_M061_EM2221_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM2221_C>();
	}
};
static_assert(alignof(AMM_M061_EM2221_C) == 0x000008, "Wrong alignment on AMM_M061_EM2221_C");
static_assert(sizeof(AMM_M061_EM2221_C) == 0x000350, "Wrong size on AMM_M061_EM2221_C");
static_assert(offsetof(AMM_M061_EM2221_C, UberGraphFrame_MM_M061_EM2221_C) == 0x000320, "Member 'AMM_M061_EM2221_C::UberGraphFrame_MM_M061_EM2221_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2221_C, SelectIndex) == 0x000328, "Member 'AMM_M061_EM2221_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2221_C, TA_Flag) == 0x00032C, "Member 'AMM_M061_EM2221_C::TA_Flag' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2221_C, Local_Flag) == 0x000334, "Member 'AMM_M061_EM2221_C::Local_Flag' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2221_C, Item_Id) == 0x00033C, "Member 'AMM_M061_EM2221_C::Item_Id' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2221_C, EffectStop) == 0x000340, "Member 'AMM_M061_EM2221_C::EffectStop' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2221_C, FindItem) == 0x000348, "Member 'AMM_M061_EM2221_C::FindItem' has a wrong offset!");

}

