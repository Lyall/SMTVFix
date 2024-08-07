#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DialogSelectMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_DialogSelectMenu.WB_DialogSelectMenu_C
// 0x0080 (0x02E0 - 0x0260)
class UWB_DialogSelectMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_DialogSelect_C*                     WB_DialogSelect0;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_DialogSelect_C*                     WB_DialogSelect1;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_DialogSelect_C*                     WB_DialogSelect2;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Cursornum;                                         // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CursorIndex;                                       // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Oldcursor;                                         // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Localcursor;                                       // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Localmax;                                          // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWB_DialogSelect_C*>             Msgselectwork;                                     // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         DefaultCursorPos;                                  // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAnyItemClicked;                                  // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAnyItemSelected;                                 // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSelectInAnimation;                               // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SelectAnimeTime;                                   // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Selectinanimestatus;                               // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnAnyItemClicked__DelegateSignature(int32 ItemIndex);
	void OnAnyItemSelected__DelegateSignature(int32 ItemIndex);
	void ExecuteUbergraph_WB_DialogSelectMenu(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMouseSelected(int32 ItemIndex);
	void OnMoueClicked(int32 ItemIndex);
	void Select_Out();
	void Select_In(int32 MenuNum, int32 InDefaultCursor);
	void SetSelectOut();
	void SetSelectIn();
	void Construct();
	void DecSelect();
	void AddSelect();
	void SetSelectCursorText(int32 CursorPos);
	void SetSelectMessage(class UScriptMessageAsset* InScriptMessageAsset, class FName InLable0, class FName InLabel1, class FName InLabel2);
	void SetSelectCursorOffset(int32 Defaultcursoroffset);
	void GetSelectCursorIndex(int32* OutIndex);
	void SetSelectMessageByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InSelectItem0, int32 InSelectItem1, int32 InSelectItem2);
	void InitializeSelectCursorOffset(int32 InCursorOffset);
	void IsClosedSelect(bool* OutParam);
	void GetSelectWork(int32 InIndex, class UWB_DialogSelect_C** OutDeialogSelect);
	void ClearSelectWork();
	void GetSelectCursorNum(int32* OutNumber);
	void StartSelectInAnimation();
	void StopSelectInAnimation();
	void SelectInAnimationProc(float InDeltaTime);
	void ResetSelectCursor(int32 InIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_DialogSelectMenu_C">();
	}
	static class UWB_DialogSelectMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_DialogSelectMenu_C>();
	}
};
static_assert(alignof(UWB_DialogSelectMenu_C) == 0x000008, "Wrong alignment on UWB_DialogSelectMenu_C");
static_assert(sizeof(UWB_DialogSelectMenu_C) == 0x0002E0, "Wrong size on UWB_DialogSelectMenu_C");
static_assert(offsetof(UWB_DialogSelectMenu_C, UberGraphFrame) == 0x000260, "Member 'UWB_DialogSelectMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, WB_DialogSelect0) == 0x000268, "Member 'UWB_DialogSelectMenu_C::WB_DialogSelect0' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, WB_DialogSelect1) == 0x000270, "Member 'UWB_DialogSelectMenu_C::WB_DialogSelect1' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, WB_DialogSelect2) == 0x000278, "Member 'UWB_DialogSelectMenu_C::WB_DialogSelect2' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, Cursornum) == 0x000280, "Member 'UWB_DialogSelectMenu_C::Cursornum' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, CursorIndex) == 0x000284, "Member 'UWB_DialogSelectMenu_C::CursorIndex' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, Oldcursor) == 0x000288, "Member 'UWB_DialogSelectMenu_C::Oldcursor' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, Localcursor) == 0x00028C, "Member 'UWB_DialogSelectMenu_C::Localcursor' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, Localmax) == 0x000290, "Member 'UWB_DialogSelectMenu_C::Localmax' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, Msgselectwork) == 0x000298, "Member 'UWB_DialogSelectMenu_C::Msgselectwork' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, DefaultCursorPos) == 0x0002A8, "Member 'UWB_DialogSelectMenu_C::DefaultCursorPos' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, OnAnyItemClicked) == 0x0002B0, "Member 'UWB_DialogSelectMenu_C::OnAnyItemClicked' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, OnAnyItemSelected) == 0x0002C0, "Member 'UWB_DialogSelectMenu_C::OnAnyItemSelected' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, IsSelectInAnimation) == 0x0002D0, "Member 'UWB_DialogSelectMenu_C::IsSelectInAnimation' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, SelectAnimeTime) == 0x0002D4, "Member 'UWB_DialogSelectMenu_C::SelectAnimeTime' has a wrong offset!");
static_assert(offsetof(UWB_DialogSelectMenu_C, Selectinanimestatus) == 0x0002D8, "Member 'UWB_DialogSelectMenu_C::Selectinanimestatus' has a wrong offset!");

}

