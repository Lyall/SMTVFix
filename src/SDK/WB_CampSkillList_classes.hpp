#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CampSkillList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CampSkillList.WB_CampSkillList_C
// 0x0070 (0x02D0 - 0x0260)
class UWB_CampSkillList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              ButtonS5Mouse;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_faceicon;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageSimpleTextWidget*               MessageSimpleTextSkill;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerCursor;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerDark;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerMagatsuhi;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerMP;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerSkillList;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NElementIcon_C*                     WB_NElementIcon;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NNumberIcon01_C*                    WB_NNumberIcon01_cost;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         UseSkill;                                          // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimeType;                                         // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CursorOn;                                          // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBlankPanel;                                      // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OnHovered;                                         // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OnClicked;                                         // 0x02CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetSkillPanelUnique(int32 InSkillId, int32 InSkillCost, int32 InFaceIconId, int32 InUseSkill, int32 InTekiseiParam, int32 InUseType, bool InDispOn);
	void DisableMouseFocus();
	void EnableMouseFocus();
	void IsItHovered(bool* RetHovered);
	void IsItClicked(bool* OutClicked);
	void ResetMouseFlag();
	void SetBlankName(int32 InBlankType);
	void SetBlankPanel(int32 InBlankType, int32 InFaceIconId, int32 InUseSkill, bool InDispOn, bool InDispOnFaceIcon, bool InMagatsuhiDispOn);
	void CalcMPDisp();
	void MagatsuhiDispOff();
	void MagatsuhiDispOn(bool InCostOver);
	void SkillCostDispOff();
	void SetSkillPanelMagatsuhi(int32 InSkillId, int32 InSkillCost, int32 InFaceIconId, int32 InUseSkill, int32 InTekiseiParam, int32 InUseType, bool InDispOn);
	void IsAnimationEnd(bool* OutParam);
	void SetSkillSelectCursorAnimation();
	void SetSkillCursorAnimationByAnimeType(int32 InType);
	void SetFaceIconColor(int32 InType);
	void SetFaceIcon(int32 InFaceIconId);
	void GetUseSkill(int32* OutUseSkill);
	void SetSkillNameFontColor(int32 InUseSkill);
	void SetNumberColor(int32 InType);
	void DarkMaskOff();
	void DarkMaskOn();
	void SetSkillPanel(int32 InSkillId, int32 InSkillCost, int32 InFaceIconId, int32 InUseSkill, int32 InTekiseiParam, int32 InUseType, bool InDispOn);
	void DispOff();
	void DispOn();
	void SetSkillCursorAnimation(int32 InType, int32 InAnimeType, bool InCursorOn);
	void SetSkillCost(int32 InSkillCost);
	void SetSkillName(int32 InSkillId, int32 InTekiselParam);
	void BndEvt__WB_CampSkillList_ButtonS5Mouse_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_CampSkillList_ButtonS5Mouse_K2Node_ComponentBoundEvent_1_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__SsPlayerSkillList_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerDark_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerCursor_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Construct();
	void ExecuteUbergraph_WB_CampSkillList(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CampSkillList_C">();
	}
	static class UWB_CampSkillList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CampSkillList_C>();
	}
};
static_assert(alignof(UWB_CampSkillList_C) == 0x000008, "Wrong alignment on UWB_CampSkillList_C");
static_assert(sizeof(UWB_CampSkillList_C) == 0x0002D0, "Wrong size on UWB_CampSkillList_C");
static_assert(offsetof(UWB_CampSkillList_C, UberGraphFrame) == 0x000260, "Member 'UWB_CampSkillList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, ButtonS5Mouse) == 0x000268, "Member 'UWB_CampSkillList_C::ButtonS5Mouse' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, CanvasPanel_0) == 0x000270, "Member 'UWB_CampSkillList_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, Image_faceicon) == 0x000278, "Member 'UWB_CampSkillList_C::Image_faceicon' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, MessageSimpleTextSkill) == 0x000280, "Member 'UWB_CampSkillList_C::MessageSimpleTextSkill' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, SsPlayerCursor) == 0x000288, "Member 'UWB_CampSkillList_C::SsPlayerCursor' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, SsPlayerDark) == 0x000290, "Member 'UWB_CampSkillList_C::SsPlayerDark' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, SsPlayerMagatsuhi) == 0x000298, "Member 'UWB_CampSkillList_C::SsPlayerMagatsuhi' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, SsPlayerMP) == 0x0002A0, "Member 'UWB_CampSkillList_C::SsPlayerMP' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, SsPlayerSkillList) == 0x0002A8, "Member 'UWB_CampSkillList_C::SsPlayerSkillList' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, WB_NElementIcon) == 0x0002B0, "Member 'UWB_CampSkillList_C::WB_NElementIcon' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, WB_NNumberIcon01_cost) == 0x0002B8, "Member 'UWB_CampSkillList_C::WB_NNumberIcon01_cost' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, UseSkill) == 0x0002C0, "Member 'UWB_CampSkillList_C::UseSkill' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, AnimeType) == 0x0002C4, "Member 'UWB_CampSkillList_C::AnimeType' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, CursorOn) == 0x0002C8, "Member 'UWB_CampSkillList_C::CursorOn' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, IsBlankPanel) == 0x0002C9, "Member 'UWB_CampSkillList_C::IsBlankPanel' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, OnHovered) == 0x0002CA, "Member 'UWB_CampSkillList_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWB_CampSkillList_C, OnClicked) == 0x0002CB, "Member 'UWB_CampSkillList_C::OnClicked' has a wrong offset!");

}
