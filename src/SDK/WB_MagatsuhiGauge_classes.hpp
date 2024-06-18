#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MagatsuhiGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MagatsuhiGauge.WB_MagatsuhiGauge_C
// 0x0050 (0x02D8 - 0x0288)
class UWB_MagatsuhiGauge_C final : public UUIBtlUpliftingGaugeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasUpliftingGuage;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_BG;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_GaugeFlash;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_GaugeFlashLoop;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_GaugeTip;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Guage;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Pos;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsGaugeStart;                                      // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsGaugeMax;                                        // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSlideOut;                                        // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsDisappeared;                                   // 0x02CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsUpperSlideInPos;                               // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsSlideInImmediately;                            // 0x02CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESlateVisibility                              M_ReduceGaugeFlashLoopVisibility;                  // 0x02CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F64[0x1];                                     // 0x02CF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_GuardReduceFlashLoop;                            // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_MagatsuhiGauge(int32 EntryPoint);
	void BndEvt__WB_UpliftingGauge_SsPlayer_GaugeFlash_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayer_BG_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BP_SlideOutStart();
	void BP_SlideInStart();
	void BP_OutStart();
	void BP_InStart();
	void BP_SetGaugeValue();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void CalcCurrentGauge();
	void StartGaugeMax();
	void EndGaugeMax();
	void SetGaugeProgress(int32 Progress);
	void PlayBG_Anim(int32 AnimIndex, bool IsLoop);
	void InitializePos();
	void Set_Gauge_Tip_Reduce_Loop(bool Show);
	void IsDisappeared(bool* Param_IsDisappeared);
	void UpdateGauge();
	void SetGaugeTip(bool Show);
	void PlaySetGaugeTipFlash(bool IsIncrease);
	void SetGaugeTipFlash(bool Show);
	void SetSlideInPos(bool UpperPos);
	void SetSlideInImmediately(bool Immediately);
	void UpdateReduceGaugeFlash();
	void ForceGaugeStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MagatsuhiGauge_C">();
	}
	static class UWB_MagatsuhiGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MagatsuhiGauge_C>();
	}
};
static_assert(alignof(UWB_MagatsuhiGauge_C) == 0x000008, "Wrong alignment on UWB_MagatsuhiGauge_C");
static_assert(sizeof(UWB_MagatsuhiGauge_C) == 0x0002D8, "Wrong size on UWB_MagatsuhiGauge_C");
static_assert(offsetof(UWB_MagatsuhiGauge_C, UberGraphFrame) == 0x000288, "Member 'UWB_MagatsuhiGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, CanvasUpliftingGuage) == 0x000290, "Member 'UWB_MagatsuhiGauge_C::CanvasUpliftingGuage' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, SsPlayer_BG) == 0x000298, "Member 'UWB_MagatsuhiGauge_C::SsPlayer_BG' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, SsPlayer_GaugeFlash) == 0x0002A0, "Member 'UWB_MagatsuhiGauge_C::SsPlayer_GaugeFlash' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, SsPlayer_GaugeFlashLoop) == 0x0002A8, "Member 'UWB_MagatsuhiGauge_C::SsPlayer_GaugeFlashLoop' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, SsPlayer_GaugeTip) == 0x0002B0, "Member 'UWB_MagatsuhiGauge_C::SsPlayer_GaugeTip' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, SsPlayer_Guage) == 0x0002B8, "Member 'UWB_MagatsuhiGauge_C::SsPlayer_Guage' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, SsPlayer_Pos) == 0x0002C0, "Member 'UWB_MagatsuhiGauge_C::SsPlayer_Pos' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, IsGaugeStart) == 0x0002C8, "Member 'UWB_MagatsuhiGauge_C::IsGaugeStart' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, IsGaugeMax) == 0x0002C9, "Member 'UWB_MagatsuhiGauge_C::IsGaugeMax' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, IsSlideOut) == 0x0002CA, "Member 'UWB_MagatsuhiGauge_C::IsSlideOut' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, M_IsDisappeared) == 0x0002CB, "Member 'UWB_MagatsuhiGauge_C::M_IsDisappeared' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, M_IsUpperSlideInPos) == 0x0002CC, "Member 'UWB_MagatsuhiGauge_C::M_IsUpperSlideInPos' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, M_IsSlideInImmediately) == 0x0002CD, "Member 'UWB_MagatsuhiGauge_C::M_IsSlideInImmediately' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, M_ReduceGaugeFlashLoopVisibility) == 0x0002CE, "Member 'UWB_MagatsuhiGauge_C::M_ReduceGaugeFlashLoopVisibility' has a wrong offset!");
static_assert(offsetof(UWB_MagatsuhiGauge_C, M_GuardReduceFlashLoop) == 0x0002D0, "Member 'UWB_MagatsuhiGauge_C::M_GuardReduceFlashLoop' has a wrong offset!");

}

