#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MapIconHelpList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "WB_FacilityListBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MapIconHelpList.WB_MapIconHelpList_C
// 0x00C0 (0x0330 - 0x0270)
class UWB_MapIconHelpList_C final : public UWB_FacilityListBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_WheelArea;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_1;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_2;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_3;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_4;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_5;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_6;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_7;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_8;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_9;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_10;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MapIconHelpOne_C*                   WB_MapIconHelpOne_11;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_MapIconHelpOne_C*>           ItemUIList;                                        // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bPlayAnimIn;                                       // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3839[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlayAnimInNextTime;                                // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayAnimInListIndex;                               // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_383A[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMinimapIconHelpEntry>          EntryList;                                         // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         PlayAnimInInterval;                                // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimPlayRate;                                      // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsEnableMouseInput;                                // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelectionChanged__DelegateSignature();
	void ExecuteUbergraph_WB_MapIconHelpList(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetupList(TArray<struct FMinimapIconHelpEntry>& Param_EntryList, int32 SelectIndex, bool bSkipInAnim);
	void ScrollDown(int32* NewSelect);
	void UpdateUiInfo(bool ForceReset);
	void UiToDataIndex(int32 UIindex, int32* DataIndex);
	void DataToUiIndex(int32 DataIndex, int32* UIindex);
	void ScrollUp(int32* NewSelect);
	void ScrollPageDown(int32* NewSelect);
	void ScrollPageUp(int32* NewSelect);
	void ClearList();
	void PlayAnimListIn();
	void PlayAnimListOut();
	void GetSelectData(struct FMinimapIconHelpEntry* OutEntry);
	void GetEntryNnum(int32* Num);
	void ToggleIconHideSelected();
	void OnHover(int32 ListIndex);
	void OnClick(int32 ListIndex);
	void ToggleIconHideByIndex(int32 DataIndex);
	void ExecuteActionByIndex(int32 DataIndex);
	void ExecuteActionSelected();
	void CreateOnOffEffect(E_MINIMAP_POI_ICON Icon);
	void CreateOnOffEffectAll();
	void SetScrollRate(float InScrollRate);
	void IsWheelArea(bool* Inside);
	void DispUp(int32* NewSelect);
	void DispDown(int32* NewSelect);
	void IsMouseInputEnabled(bool* IsEnable);
	void EnableMouseInput();
	void DisableMouseInput();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MapIconHelpList_C">();
	}
	static class UWB_MapIconHelpList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MapIconHelpList_C>();
	}
};
static_assert(alignof(UWB_MapIconHelpList_C) == 0x000008, "Wrong alignment on UWB_MapIconHelpList_C");
static_assert(sizeof(UWB_MapIconHelpList_C) == 0x000330, "Wrong size on UWB_MapIconHelpList_C");
static_assert(offsetof(UWB_MapIconHelpList_C, UberGraphFrame) == 0x000270, "Member 'UWB_MapIconHelpList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, CanvasPanel_WheelArea) == 0x000278, "Member 'UWB_MapIconHelpList_C::CanvasPanel_WheelArea' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne) == 0x000280, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_1) == 0x000288, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_1' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_2) == 0x000290, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_2' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_3) == 0x000298, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_3' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_4) == 0x0002A0, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_4' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_5) == 0x0002A8, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_5' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_6) == 0x0002B0, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_6' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_7) == 0x0002B8, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_7' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_8) == 0x0002C0, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_8' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_9) == 0x0002C8, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_9' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_10) == 0x0002D0, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_10' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, WB_MapIconHelpOne_11) == 0x0002D8, "Member 'UWB_MapIconHelpList_C::WB_MapIconHelpOne_11' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, ItemUIList) == 0x0002E0, "Member 'UWB_MapIconHelpList_C::ItemUIList' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, bPlayAnimIn) == 0x0002F0, "Member 'UWB_MapIconHelpList_C::bPlayAnimIn' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, PlayAnimInNextTime) == 0x0002F4, "Member 'UWB_MapIconHelpList_C::PlayAnimInNextTime' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, PlayAnimInListIndex) == 0x0002F8, "Member 'UWB_MapIconHelpList_C::PlayAnimInListIndex' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, EntryList) == 0x000300, "Member 'UWB_MapIconHelpList_C::EntryList' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, PlayAnimInInterval) == 0x000310, "Member 'UWB_MapIconHelpList_C::PlayAnimInInterval' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, AnimPlayRate) == 0x000314, "Member 'UWB_MapIconHelpList_C::AnimPlayRate' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, OnSelectionChanged) == 0x000318, "Member 'UWB_MapIconHelpList_C::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UWB_MapIconHelpList_C, IsEnableMouseInput) == 0x000328, "Member 'UWB_MapIconHelpList_C::IsEnableMouseInput' has a wrong offset!");

}
