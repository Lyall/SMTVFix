#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Message_SelectItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Message_SelectItem.WB_Message_SelectItem_C
// 0x0098 (0x02F8 - 0x0260)
class UWB_Message_SelectItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_SelArray;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageSimpleTextWidget*               SimpleText;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSelect;                                          // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMessageData                           MessageData;                                       // 0x0280(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UScriptMessageAsset*                    ScriptAsset;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_Message_SelectItem(int32 EntryPoint);
	void Setting(const class UScriptMessageAsset* InScriptMessage, const struct FMessageData& Param_MessageData);
	void PreConstruct(bool IsDesignTime);
	void SetSelect(bool IsOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Message_SelectItem_C">();
	}
	static class UWB_Message_SelectItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Message_SelectItem_C>();
	}
};
static_assert(alignof(UWB_Message_SelectItem_C) == 0x000008, "Wrong alignment on UWB_Message_SelectItem_C");
static_assert(sizeof(UWB_Message_SelectItem_C) == 0x0002F8, "Wrong size on UWB_Message_SelectItem_C");
static_assert(offsetof(UWB_Message_SelectItem_C, UberGraphFrame) == 0x000260, "Member 'UWB_Message_SelectItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Message_SelectItem_C, Canvas_SelArray) == 0x000268, "Member 'UWB_Message_SelectItem_C::Canvas_SelArray' has a wrong offset!");
static_assert(offsetof(UWB_Message_SelectItem_C, SimpleText) == 0x000270, "Member 'UWB_Message_SelectItem_C::SimpleText' has a wrong offset!");
static_assert(offsetof(UWB_Message_SelectItem_C, IsSelect) == 0x000278, "Member 'UWB_Message_SelectItem_C::IsSelect' has a wrong offset!");
static_assert(offsetof(UWB_Message_SelectItem_C, MessageData) == 0x000280, "Member 'UWB_Message_SelectItem_C::MessageData' has a wrong offset!");
static_assert(offsetof(UWB_Message_SelectItem_C, ScriptAsset) == 0x0002F0, "Member 'UWB_Message_SelectItem_C::ScriptAsset' has a wrong offset!");

}

