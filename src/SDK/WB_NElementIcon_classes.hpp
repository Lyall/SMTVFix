#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_NElementIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_NElementIcon.WB_NElementIcon_C
// 0x0020 (0x0280 - 0x0260)
class UWB_NElementIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanelElement;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageElement;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Elementnumber;                                     // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_NElementIcon(int32 EntryPoint);
	void Construct();
	void ResetElementIcon();
	void SetElementIcon(int32 InElementNumber);
	void GetButtonUV(int32* OutUPos, int32* OutVPos);
	void SetImageElement(class UImage* InImage, int32 InUpos, int32 InVPos);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_NElementIcon_C">();
	}
	static class UWB_NElementIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_NElementIcon_C>();
	}
};
static_assert(alignof(UWB_NElementIcon_C) == 0x000008, "Wrong alignment on UWB_NElementIcon_C");
static_assert(sizeof(UWB_NElementIcon_C) == 0x000280, "Wrong size on UWB_NElementIcon_C");
static_assert(offsetof(UWB_NElementIcon_C, UberGraphFrame) == 0x000260, "Member 'UWB_NElementIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_NElementIcon_C, CanvasPanelElement) == 0x000268, "Member 'UWB_NElementIcon_C::CanvasPanelElement' has a wrong offset!");
static_assert(offsetof(UWB_NElementIcon_C, ImageElement) == 0x000270, "Member 'UWB_NElementIcon_C::ImageElement' has a wrong offset!");
static_assert(offsetof(UWB_NElementIcon_C, Elementnumber) == 0x000278, "Member 'UWB_NElementIcon_C::Elementnumber' has a wrong offset!");

}

