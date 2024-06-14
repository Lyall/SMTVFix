#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MakkaWindow2

#include "Basic.hpp"

#include "E_MakkaWindowAnimState_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MakkaWindow2.WB_MakkaWindow2_C
// 0x0088 (0x02E8 - 0x0260)
class UWB_MakkaWindow2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USsPlayerWidget*                        SsPlayer_Cost;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Money;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Pos;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Total;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MakkaWindowNumber_C*                WB_CostNumber;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MakkaWindowNumber_C*                WB_MoneyNumber;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MakkaWindowNumber_C*                WB_TotalNumber;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_MakkaWindowAnimState                        AnimState_Money;                                   // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MakkaWindowAnimState                        AnimState_Total;                                   // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MakkaWindowAnimState                        AnimState_Cost;                                    // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BB1[0x1];                                     // 0x02A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DispMoney;                                         // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DispTotal;                                         // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DispCost;                                          // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DestMoney;                                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DestTotal;                                         // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DestCost;                                          // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddNumByTick_Money;                                // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddNumByTick_Total;                                // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddNumByTick_Cost;                                 // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving_Money;                                    // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMoving_Total;                                    // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB2[0x2];                                     // 0x02CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DigitMoveFrameNum;                                 // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DigitDispMax;                                      // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimPlayRate;                                      // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving_Cost;                                     // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB3[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DelayBeforeAnim_Money;                             // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeAnim_Total;                             // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeAnim_Cost;                              // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_MakkaWindow2(int32 EntryPoint);
	void BndEvt__WB_MakkaWindow2_SsPlayer_Cost_K2Node_ComponentBoundEvent_2_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerWidget_total_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerWidget_money_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Init();
	void UpdateNumberMoveAnim();
	void SetAnimState_MoneyWindow(E_MakkaWindowAnimState InState);
	void SetAnimState_TotalWindow(E_MakkaWindowAnimState InState);
	void SetAnimState_CostWindow(E_MakkaWindowAnimState InState);
	void GetAnimState_MoneyWindow(E_MakkaWindowAnimState* AnimState);
	void GetAnimState_TotalWindow(E_MakkaWindowAnimState* AnimState);
	void GetAnimState_CostWindow(E_MakkaWindowAnimState* AnimState);
	void SetNum_Money(int32 InNewNum, bool IsPlayAnim, float InDelayBeforeAnim);
	void SetNum_Total(int32 InNewNum, bool IsPlayAnim, float InDelayBeforeAnim);
	void SetNum_Cost(int32 InNewNum, bool IsPlayAnim, float InDelayBeforeAnim);
	void AddNum_Money(int32 InAddNum, bool IsPlayAnim, float InDelayBeforeAnim);
	void AddNum_Total(int32 InAddNum, bool IsPlayAnim, float InDelayBeforeAnim);
	void AddNum_Cost(int32 InAddNum, bool IsPlayAnim, float InDelayBeforeAnim);
	void SkipMoveNum_Money();
	void SkipMoveNum_Total();
	void SkipMoveNum_Cost();
	void GetMovingState_Money(bool* IsMoving);
	void GetMovingState_Total(bool* IsMoving);
	void GetMovingState_Cost(bool* IsMoving);
	void SetNumberColor_Cost(const struct FLinearColor& InColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MakkaWindow2_C">();
	}
	static class UWB_MakkaWindow2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MakkaWindow2_C>();
	}
};
static_assert(alignof(UWB_MakkaWindow2_C) == 0x000008, "Wrong alignment on UWB_MakkaWindow2_C");
static_assert(sizeof(UWB_MakkaWindow2_C) == 0x0002E8, "Wrong size on UWB_MakkaWindow2_C");
static_assert(offsetof(UWB_MakkaWindow2_C, UberGraphFrame) == 0x000260, "Member 'UWB_MakkaWindow2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, SsPlayer_Cost) == 0x000268, "Member 'UWB_MakkaWindow2_C::SsPlayer_Cost' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, SsPlayer_Money) == 0x000270, "Member 'UWB_MakkaWindow2_C::SsPlayer_Money' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, SsPlayer_Pos) == 0x000278, "Member 'UWB_MakkaWindow2_C::SsPlayer_Pos' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, SsPlayer_Total) == 0x000280, "Member 'UWB_MakkaWindow2_C::SsPlayer_Total' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, WB_CostNumber) == 0x000288, "Member 'UWB_MakkaWindow2_C::WB_CostNumber' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, WB_MoneyNumber) == 0x000290, "Member 'UWB_MakkaWindow2_C::WB_MoneyNumber' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, WB_TotalNumber) == 0x000298, "Member 'UWB_MakkaWindow2_C::WB_TotalNumber' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, AnimState_Money) == 0x0002A0, "Member 'UWB_MakkaWindow2_C::AnimState_Money' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, AnimState_Total) == 0x0002A1, "Member 'UWB_MakkaWindow2_C::AnimState_Total' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, AnimState_Cost) == 0x0002A2, "Member 'UWB_MakkaWindow2_C::AnimState_Cost' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DispMoney) == 0x0002A4, "Member 'UWB_MakkaWindow2_C::DispMoney' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DispTotal) == 0x0002A8, "Member 'UWB_MakkaWindow2_C::DispTotal' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DispCost) == 0x0002AC, "Member 'UWB_MakkaWindow2_C::DispCost' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DestMoney) == 0x0002B0, "Member 'UWB_MakkaWindow2_C::DestMoney' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DestTotal) == 0x0002B4, "Member 'UWB_MakkaWindow2_C::DestTotal' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DestCost) == 0x0002B8, "Member 'UWB_MakkaWindow2_C::DestCost' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, AddNumByTick_Money) == 0x0002BC, "Member 'UWB_MakkaWindow2_C::AddNumByTick_Money' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, AddNumByTick_Total) == 0x0002C0, "Member 'UWB_MakkaWindow2_C::AddNumByTick_Total' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, AddNumByTick_Cost) == 0x0002C4, "Member 'UWB_MakkaWindow2_C::AddNumByTick_Cost' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, IsMoving_Money) == 0x0002C8, "Member 'UWB_MakkaWindow2_C::IsMoving_Money' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, IsMoving_Total) == 0x0002C9, "Member 'UWB_MakkaWindow2_C::IsMoving_Total' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DigitMoveFrameNum) == 0x0002CC, "Member 'UWB_MakkaWindow2_C::DigitMoveFrameNum' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DigitDispMax) == 0x0002D0, "Member 'UWB_MakkaWindow2_C::DigitDispMax' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, AnimPlayRate) == 0x0002D4, "Member 'UWB_MakkaWindow2_C::AnimPlayRate' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, IsMoving_Cost) == 0x0002D8, "Member 'UWB_MakkaWindow2_C::IsMoving_Cost' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DelayBeforeAnim_Money) == 0x0002DC, "Member 'UWB_MakkaWindow2_C::DelayBeforeAnim_Money' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DelayBeforeAnim_Total) == 0x0002E0, "Member 'UWB_MakkaWindow2_C::DelayBeforeAnim_Total' has a wrong offset!");
static_assert(offsetof(UWB_MakkaWindow2_C, DelayBeforeAnim_Cost) == 0x0002E4, "Member 'UWB_MakkaWindow2_C::DelayBeforeAnim_Cost' has a wrong offset!");

}

