#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PopUpIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_PopUpIcon.WB_PopUpIcon_C
// 0x0040 (0x02A0 - 0x0260)
class UWB_PopUpIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               PopUpIconOverlay;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MAX_ICON_NUM;                                      // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         ImageArray;                                        // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstance*                      IconMI;                                            // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWB_PopUpSs_C*>                  EffectArray;                                       // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_WB_PopUpIcon(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void CreateData();
	void UpdateImage();
	void UpdateBuffer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_PopUpIcon_C">();
	}
	static class UWB_PopUpIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_PopUpIcon_C>();
	}
};
static_assert(alignof(UWB_PopUpIcon_C) == 0x000008, "Wrong alignment on UWB_PopUpIcon_C");
static_assert(sizeof(UWB_PopUpIcon_C) == 0x0002A0, "Wrong size on UWB_PopUpIcon_C");
static_assert(offsetof(UWB_PopUpIcon_C, UberGraphFrame) == 0x000260, "Member 'UWB_PopUpIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_PopUpIcon_C, PopUpIconOverlay) == 0x000268, "Member 'UWB_PopUpIcon_C::PopUpIconOverlay' has a wrong offset!");
static_assert(offsetof(UWB_PopUpIcon_C, MAX_ICON_NUM) == 0x000270, "Member 'UWB_PopUpIcon_C::MAX_ICON_NUM' has a wrong offset!");
static_assert(offsetof(UWB_PopUpIcon_C, ImageArray) == 0x000278, "Member 'UWB_PopUpIcon_C::ImageArray' has a wrong offset!");
static_assert(offsetof(UWB_PopUpIcon_C, IconMI) == 0x000288, "Member 'UWB_PopUpIcon_C::IconMI' has a wrong offset!");
static_assert(offsetof(UWB_PopUpIcon_C, EffectArray) == 0x000290, "Member 'UWB_PopUpIcon_C::EffectArray' has a wrong offset!");

}

