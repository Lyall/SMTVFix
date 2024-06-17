#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SampleSaveList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SampleSaveList.WB_SampleSaveList_C
// 0x0048 (0x02A8 - 0x0260)
class UWB_SampleSaveList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSaveLoadHeaderData>            SaveHeaderArray;                                   // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWB_SampleSaveItem_C*>           WB_SampleItemArray;                                // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         CurrentCursor;                                     // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ItemHeight;                                        // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UpLimit;                                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DownLimit;                                         // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_SampleSaveList(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void InitUI();
	void InitCursor();
	void InitArray();
	void Init();
	void MoveCursor(bool Up, bool Down);
	void UpdateCursor();
	void UpCursor();
	void DownCursor();
	void UpdateScrollBox();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SampleSaveList_C">();
	}
	static class UWB_SampleSaveList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SampleSaveList_C>();
	}
};
static_assert(alignof(UWB_SampleSaveList_C) == 0x000008, "Wrong alignment on UWB_SampleSaveList_C");
static_assert(sizeof(UWB_SampleSaveList_C) == 0x0002A8, "Wrong size on UWB_SampleSaveList_C");
static_assert(offsetof(UWB_SampleSaveList_C, UberGraphFrame) == 0x000260, "Member 'UWB_SampleSaveList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SampleSaveList_C, ScrollBox_0) == 0x000268, "Member 'UWB_SampleSaveList_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UWB_SampleSaveList_C, VerticalBox_0) == 0x000270, "Member 'UWB_SampleSaveList_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UWB_SampleSaveList_C, SaveHeaderArray) == 0x000278, "Member 'UWB_SampleSaveList_C::SaveHeaderArray' has a wrong offset!");
static_assert(offsetof(UWB_SampleSaveList_C, WB_SampleItemArray) == 0x000288, "Member 'UWB_SampleSaveList_C::WB_SampleItemArray' has a wrong offset!");
static_assert(offsetof(UWB_SampleSaveList_C, CurrentCursor) == 0x000298, "Member 'UWB_SampleSaveList_C::CurrentCursor' has a wrong offset!");
static_assert(offsetof(UWB_SampleSaveList_C, ItemHeight) == 0x00029C, "Member 'UWB_SampleSaveList_C::ItemHeight' has a wrong offset!");
static_assert(offsetof(UWB_SampleSaveList_C, UpLimit) == 0x0002A0, "Member 'UWB_SampleSaveList_C::UpLimit' has a wrong offset!");
static_assert(offsetof(UWB_SampleSaveList_C, DownLimit) == 0x0002A4, "Member 'UWB_SampleSaveList_C::DownLimit' has a wrong offset!");

}

