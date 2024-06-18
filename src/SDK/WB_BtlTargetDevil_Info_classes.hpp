#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtlTargetDevil_Info

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BtlTargetDevil_Info.WB_BtlTargetDevil_Info_C
// 0x00F8 (0x0358 - 0x0260)
class UWB_BtlTargetDevil_Info_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              ButtonS5_Select;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        EndNotice01;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        EndNotice02;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        EndNotice03;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        EndNotice04;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_BG;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Enenrolled;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Essence;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Product;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageSimpleTextWidget*               Text_DevilName;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageSimpleTextWidget*               Text_RaceName;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NBadstatusIcon_C*                   WB_BadStatus01;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NNumberIcon03_C*                    WB_NNumber_Lv;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NSupportIcon_C*                     WB_Support01;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NSupportIcon_C*                     WB_Support02;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NSupportIcon_C*                     WB_Support03;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NSupportIcon_C*                     WB_Support04;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NSupportIcon_C*                     WB_Support05;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NSupportIcon_C*                     WB_Support06;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NSupportIcon_C*                     WB_Support07;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NSupportIcon_C*                     WB_Support08;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         M_DevilID;                                         // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Level;                                           // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsAppeared;                                      // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C48[0x3];                                     // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_BadStatus;                                       // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 M_Supports;                                        // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_Enenroll;                                        // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsPlayerSide;                                    // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsUplifting;                                     // 0x0335(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsProduct;                                       // 0x0336(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_UI_STATUS_ESSENCE_ICON                      M_UtsusemiStatus;                                  // 0x0337(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Evt_OnUnitSelected;                                // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_OnUnitDecided;                                 // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Evt_OnUnitSelected__DelegateSignature(int32 PartyIndex);
	void Evt_OnUnitDecided__DelegateSignature(int32 PartyIndex);
	void ExecuteUbergraph_WB_BtlTargetDevil_Info(int32 EntryPoint);
	void BndEvt__WB_BtlTargetDevil_Info_ButtonS5_Select_K2Node_ComponentBoundEvent_2_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__WB_BtlTargetDevil_Info_ButtonS5_Select_K2Node_ComponentBoundEvent_1_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__SsPlayer_BG_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Disappear(float Rate, bool Immediately);
	void Appear(float Rate, bool Immediately);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void CallTick(float Delta);
	void InitDisappeared();
	void ApplyDevilName();
	void ApplyRaceName();
	void SetInfoParam(int32 Param_M_DevilID, int32 Level, int32 BadStatus, TArray<int32>& Supports, int32 EnenrollStatus, bool IsPlayerSide, bool IsUplifting, bool IsUtsusemiProduct, E_UI_STATUS_ESSENCE_ICON UtsusemiStatus);
	void ApplyLv();
	void PlayBGAnim(int32 AnimIndex, bool IsLoop, bool IsEndOfAnim);
	void ApplyBadStatus();
	void ApplySupport();
	void GetSupportIcon(int32 Param_Index, class UWB_NSupportIcon_C** Icon);
	void ApplyEnenroll();
	void PlayEndNoticeAnim(int32 Param_Index, int32 RemainTurn);
	void ApplyEssence();
	void SetButtonVisibility(ESlateVisibility Param_Visibility);
	void SetAllWidgetTick(bool Enable);
	void IsDisappeared(bool* Param_IsDisappeared);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BtlTargetDevil_Info_C">();
	}
	static class UWB_BtlTargetDevil_Info_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BtlTargetDevil_Info_C>();
	}
};
static_assert(alignof(UWB_BtlTargetDevil_Info_C) == 0x000008, "Wrong alignment on UWB_BtlTargetDevil_Info_C");
static_assert(sizeof(UWB_BtlTargetDevil_Info_C) == 0x000358, "Wrong size on UWB_BtlTargetDevil_Info_C");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, UberGraphFrame) == 0x000260, "Member 'UWB_BtlTargetDevil_Info_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, ButtonS5_Select) == 0x000268, "Member 'UWB_BtlTargetDevil_Info_C::ButtonS5_Select' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, EndNotice01) == 0x000270, "Member 'UWB_BtlTargetDevil_Info_C::EndNotice01' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, EndNotice02) == 0x000278, "Member 'UWB_BtlTargetDevil_Info_C::EndNotice02' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, EndNotice03) == 0x000280, "Member 'UWB_BtlTargetDevil_Info_C::EndNotice03' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, EndNotice04) == 0x000288, "Member 'UWB_BtlTargetDevil_Info_C::EndNotice04' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, SsPlayer_BG) == 0x000290, "Member 'UWB_BtlTargetDevil_Info_C::SsPlayer_BG' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, SsPlayer_Enenrolled) == 0x000298, "Member 'UWB_BtlTargetDevil_Info_C::SsPlayer_Enenrolled' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, SsPlayer_Essence) == 0x0002A0, "Member 'UWB_BtlTargetDevil_Info_C::SsPlayer_Essence' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, SsPlayer_Product) == 0x0002A8, "Member 'UWB_BtlTargetDevil_Info_C::SsPlayer_Product' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, Text_DevilName) == 0x0002B0, "Member 'UWB_BtlTargetDevil_Info_C::Text_DevilName' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, Text_RaceName) == 0x0002B8, "Member 'UWB_BtlTargetDevil_Info_C::Text_RaceName' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_BadStatus01) == 0x0002C0, "Member 'UWB_BtlTargetDevil_Info_C::WB_BadStatus01' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_NNumber_Lv) == 0x0002C8, "Member 'UWB_BtlTargetDevil_Info_C::WB_NNumber_Lv' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_Support01) == 0x0002D0, "Member 'UWB_BtlTargetDevil_Info_C::WB_Support01' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_Support02) == 0x0002D8, "Member 'UWB_BtlTargetDevil_Info_C::WB_Support02' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_Support03) == 0x0002E0, "Member 'UWB_BtlTargetDevil_Info_C::WB_Support03' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_Support04) == 0x0002E8, "Member 'UWB_BtlTargetDevil_Info_C::WB_Support04' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_Support05) == 0x0002F0, "Member 'UWB_BtlTargetDevil_Info_C::WB_Support05' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_Support06) == 0x0002F8, "Member 'UWB_BtlTargetDevil_Info_C::WB_Support06' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_Support07) == 0x000300, "Member 'UWB_BtlTargetDevil_Info_C::WB_Support07' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, WB_Support08) == 0x000308, "Member 'UWB_BtlTargetDevil_Info_C::WB_Support08' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_DevilID) == 0x000310, "Member 'UWB_BtlTargetDevil_Info_C::M_DevilID' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_Level) == 0x000314, "Member 'UWB_BtlTargetDevil_Info_C::M_Level' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_IsAppeared) == 0x000318, "Member 'UWB_BtlTargetDevil_Info_C::M_IsAppeared' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_BadStatus) == 0x00031C, "Member 'UWB_BtlTargetDevil_Info_C::M_BadStatus' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_Supports) == 0x000320, "Member 'UWB_BtlTargetDevil_Info_C::M_Supports' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_Enenroll) == 0x000330, "Member 'UWB_BtlTargetDevil_Info_C::M_Enenroll' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_IsPlayerSide) == 0x000334, "Member 'UWB_BtlTargetDevil_Info_C::M_IsPlayerSide' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_IsUplifting) == 0x000335, "Member 'UWB_BtlTargetDevil_Info_C::M_IsUplifting' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_IsProduct) == 0x000336, "Member 'UWB_BtlTargetDevil_Info_C::M_IsProduct' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, M_UtsusemiStatus) == 0x000337, "Member 'UWB_BtlTargetDevil_Info_C::M_UtsusemiStatus' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, Evt_OnUnitSelected) == 0x000338, "Member 'UWB_BtlTargetDevil_Info_C::Evt_OnUnitSelected' has a wrong offset!");
static_assert(offsetof(UWB_BtlTargetDevil_Info_C, Evt_OnUnitDecided) == 0x000348, "Member 'UWB_BtlTargetDevil_Info_C::Evt_OnUnitDecided' has a wrong offset!");

}

