#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtlNumber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BtlNumber.WB_BtlNumber_C
// 0x0058 (0x02B8 - 0x0260)
class UWB_BtlNumber_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_BtlUtilIcon_C*                      Efficacy_Primary;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BtlUtilIcon_C*                      Efficacy_Secondary;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BtlNumericalValue_C*                Value_Primary;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BtlNumericalValue_C*                Value_Secondary;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          M_IsDraw;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2505[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_HPNum;                                           // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_UTIL_ICON_TYPE                          M_HitType;                                         // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2506[0x3];                                     // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_TotalTime;                                       // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_NUMEFF                                  M_NumType;                                         // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2507[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_Ratio;                                           // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            M_AnimCurve;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_StartSeconds;                                    // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_PlayRate;                                        // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_MPNum;                                           // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CriticalLevel;                                   // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_BtlNumber(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Show(int32 HP_Value, int32 MP_Value, E_BTL_UTIL_ICON_TYPE HitType, int32 Level, E_BTL_NUMEFF NumEffectType, int32 Ratio, float PlayRate, float SizeRatio);
	void IsFinished(bool* RetValue);
	void UpdateAnim(float Pass);
	void OnDisappearFinished();
	void Hide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BtlNumber_C">();
	}
	static class UWB_BtlNumber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BtlNumber_C>();
	}
};
static_assert(alignof(UWB_BtlNumber_C) == 0x000008, "Wrong alignment on UWB_BtlNumber_C");
static_assert(sizeof(UWB_BtlNumber_C) == 0x0002B8, "Wrong size on UWB_BtlNumber_C");
static_assert(offsetof(UWB_BtlNumber_C, UberGraphFrame) == 0x000260, "Member 'UWB_BtlNumber_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, Efficacy_Primary) == 0x000268, "Member 'UWB_BtlNumber_C::Efficacy_Primary' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, Efficacy_Secondary) == 0x000270, "Member 'UWB_BtlNumber_C::Efficacy_Secondary' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, Value_Primary) == 0x000278, "Member 'UWB_BtlNumber_C::Value_Primary' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, Value_Secondary) == 0x000280, "Member 'UWB_BtlNumber_C::Value_Secondary' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_IsDraw) == 0x000288, "Member 'UWB_BtlNumber_C::M_IsDraw' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_HPNum) == 0x00028C, "Member 'UWB_BtlNumber_C::M_HPNum' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_HitType) == 0x000290, "Member 'UWB_BtlNumber_C::M_HitType' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_TotalTime) == 0x000294, "Member 'UWB_BtlNumber_C::M_TotalTime' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_NumType) == 0x000298, "Member 'UWB_BtlNumber_C::M_NumType' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_Ratio) == 0x00029C, "Member 'UWB_BtlNumber_C::M_Ratio' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_AnimCurve) == 0x0002A0, "Member 'UWB_BtlNumber_C::M_AnimCurve' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_StartSeconds) == 0x0002A8, "Member 'UWB_BtlNumber_C::M_StartSeconds' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_PlayRate) == 0x0002AC, "Member 'UWB_BtlNumber_C::M_PlayRate' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_MPNum) == 0x0002B0, "Member 'UWB_BtlNumber_C::M_MPNum' has a wrong offset!");
static_assert(offsetof(UWB_BtlNumber_C, M_CriticalLevel) == 0x0002B4, "Member 'UWB_BtlNumber_C::M_CriticalLevel' has a wrong offset!");

}

