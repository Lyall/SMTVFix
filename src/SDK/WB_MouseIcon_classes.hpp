#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MouseIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MouseIcon.WB_MouseIcon_C
// 0x0028 (0x0288 - 0x0260)
class UWB_MouseIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Icon;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BTN_HELP_MOUSE_ICON_TYPE                    Debug_IconType;                                    // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_ICON_SIZE                               IconSize2;                                         // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DEC[0x2];                                      // 0x0272(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           IconColor;                                         // 0x0274(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_MouseIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BPI_SetIconSize(E_BTN_ICON_SIZE InSize, bool* Ret);
	void BPI_SetIcon(E_BTN_HELP_MOUSE_ICON_TYPE InType, bool* Ret);
	void BPI_SetIconColor(const struct FLinearColor& InColor, bool* Ret);
	void BPI_SetIconColor_ByActiveState(bool IsActiveColor, bool* Ret);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MouseIcon_C">();
	}
	static class UWB_MouseIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MouseIcon_C>();
	}
};
static_assert(alignof(UWB_MouseIcon_C) == 0x000008, "Wrong alignment on UWB_MouseIcon_C");
static_assert(sizeof(UWB_MouseIcon_C) == 0x000288, "Wrong size on UWB_MouseIcon_C");
static_assert(offsetof(UWB_MouseIcon_C, UberGraphFrame) == 0x000260, "Member 'UWB_MouseIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MouseIcon_C, Image_Icon) == 0x000268, "Member 'UWB_MouseIcon_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWB_MouseIcon_C, Debug_IconType) == 0x000270, "Member 'UWB_MouseIcon_C::Debug_IconType' has a wrong offset!");
static_assert(offsetof(UWB_MouseIcon_C, IconSize2) == 0x000271, "Member 'UWB_MouseIcon_C::IconSize2' has a wrong offset!");
static_assert(offsetof(UWB_MouseIcon_C, IconColor) == 0x000274, "Member 'UWB_MouseIcon_C::IconColor' has a wrong offset!");

}

