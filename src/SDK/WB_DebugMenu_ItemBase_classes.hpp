#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DebugMenu_ItemBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "WB_DebugMenu_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_DebugMenu_ItemBase.WB_DebugMenu_ItemBase_C
// 0x0118 (0x0390 - 0x0278)
class UWB_DebugMenu_ItemBase_C final : public UWB_DebugMenu_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDebugMenuPageData                     M_PageData;                                        // 0x0280(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDebugMenuItemData                     ItemData;                                          // 0x0298(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             EvDis_CallAddPage;                                 // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Mouse_Hovered;                                     // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Mouse_Press;                                       // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E47[0x6];                                      // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 M_ActFuncObj;                                      // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PageWidth;                                         // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvDis_CallAddPage__DelegateSignature(int32 NextPageId, bool IsDrawPlus);
	void ExecuteUbergraph_WB_DebugMenu_ItemBase(int32 EntryPoint);
	void Ev_ActionFuncObj();
	void OnLoaded_ED55EA6C4877D9145131349E084DD5A5(TSubclassOf<class UObject> Loaded);
	void SetPageData(const struct FDebugMenuPageData& PageData);
	void SetItemData(const struct FDebugMenuItemData& Param_ItemData);
	void GetPageData(struct FDebugMenuPageData* PageData);
	void GetItemData(struct FDebugMenuItemData* Param_ItemData);
	void InitPageData(TScriptInterface<class IBPI_DebugMenuUI_C> BPIDebugMenu, const struct FDebugMenuPageData& PageData, bool IsDrawPlus);
	void InitItemData(TScriptInterface<class IBPI_DebugMenuUI_C> BPIDebugMenu, const struct FDebugMenuItemData& Param_ItemData);
	void UpDataViewState(bool IsView, const struct FVector2D& Pos);
	void UpLoadItemData(const struct FDebugMenuItemData& Param_ItemData);
	void ChangeAnimForcs(bool IsForcs);
	void ChangePageState(bool IsView, const struct FVector2D& PagePos);
	void GetItemData_ItemId(int32* Item_Id);
	void GetItemData_ItemType(E_D_MENU_TYPE* Type);
	void GetItemData_ItemIsLock(bool* Is_Lock);
	void CallActionType_FuncObj();
	void CallActionType_CheckBox();
	void CallActionType_PageJump();
	void CallActionType_TextData();
	void CallActionType_Param();
	void CallActionType_PullDown();
	void StartSp();
	void EndSp();
	void SetItemData_Text(const class FText& Text, struct FDebugMenuItemData* Param_ItemData);
	void CheckMouse();
	void ResetMouse();
	void ActionFuncObj();
	void UpdateMenuWidth(float Width);
	void GetMenuWidth(float* Width);
	void UpdateAlways_FuncObj();
	void GetIsKeyLock(bool* Param_IsKeyLock);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_DebugMenu_ItemBase_C">();
	}
	static class UWB_DebugMenu_ItemBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_DebugMenu_ItemBase_C>();
	}
};
static_assert(alignof(UWB_DebugMenu_ItemBase_C) == 0x000008, "Wrong alignment on UWB_DebugMenu_ItemBase_C");
static_assert(sizeof(UWB_DebugMenu_ItemBase_C) == 0x000390, "Wrong size on UWB_DebugMenu_ItemBase_C");
static_assert(offsetof(UWB_DebugMenu_ItemBase_C, UberGraphFrame) == 0x000278, "Member 'UWB_DebugMenu_ItemBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_DebugMenu_ItemBase_C, M_PageData) == 0x000280, "Member 'UWB_DebugMenu_ItemBase_C::M_PageData' has a wrong offset!");
static_assert(offsetof(UWB_DebugMenu_ItemBase_C, ItemData) == 0x000298, "Member 'UWB_DebugMenu_ItemBase_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWB_DebugMenu_ItemBase_C, EvDis_CallAddPage) == 0x000368, "Member 'UWB_DebugMenu_ItemBase_C::EvDis_CallAddPage' has a wrong offset!");
static_assert(offsetof(UWB_DebugMenu_ItemBase_C, Mouse_Hovered) == 0x000378, "Member 'UWB_DebugMenu_ItemBase_C::Mouse_Hovered' has a wrong offset!");
static_assert(offsetof(UWB_DebugMenu_ItemBase_C, Mouse_Press) == 0x000379, "Member 'UWB_DebugMenu_ItemBase_C::Mouse_Press' has a wrong offset!");
static_assert(offsetof(UWB_DebugMenu_ItemBase_C, M_ActFuncObj) == 0x000380, "Member 'UWB_DebugMenu_ItemBase_C::M_ActFuncObj' has a wrong offset!");
static_assert(offsetof(UWB_DebugMenu_ItemBase_C, PageWidth) == 0x000388, "Member 'UWB_DebugMenu_ItemBase_C::PageWidth' has a wrong offset!");

}

