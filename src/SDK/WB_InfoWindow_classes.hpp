#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_InfoWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_InfoWindow.WB_InfoWindow_C
// 0x0020 (0x0280 - 0x0260)
class UWB_InfoWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMessageRichTextWidget*                 MessageRichTextInfo;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerInfoWindow;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsWindowOpenFlag;                                  // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWindowCloseFlag;                                 // 0x0279(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSetText;                                         // 0x027A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTextPlay;                                        // 0x027B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_InfoWindow(int32 EntryPoint);
	void Construct();
	void InfoWindowOpen();
	void ExecutionInfoWindowClose();
	void ExecutionInfoWindowOpen();
	void BndEvt__SsPlayerInfoWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void InfoWindowClose();
	void IsFinishedOpenWindow(bool* OutFinished);
	void IsFinishedCloseWindow(bool* OutFinished);
	void SetInfoText(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, bool InExecutionText);
	void SetInfoTextByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, bool InExecutionText);
	void ClearInfoText();
	void SetInfoRichTextProgramValue(int32 InIndex, const class FString& InString);
	void SetInfoRichTextValueParam(int32 InIndex, int32 InValeParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_InfoWindow_C">();
	}
	static class UWB_InfoWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_InfoWindow_C>();
	}
};
static_assert(alignof(UWB_InfoWindow_C) == 0x000008, "Wrong alignment on UWB_InfoWindow_C");
static_assert(sizeof(UWB_InfoWindow_C) == 0x000280, "Wrong size on UWB_InfoWindow_C");
static_assert(offsetof(UWB_InfoWindow_C, UberGraphFrame) == 0x000260, "Member 'UWB_InfoWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_InfoWindow_C, MessageRichTextInfo) == 0x000268, "Member 'UWB_InfoWindow_C::MessageRichTextInfo' has a wrong offset!");
static_assert(offsetof(UWB_InfoWindow_C, SsPlayerInfoWindow) == 0x000270, "Member 'UWB_InfoWindow_C::SsPlayerInfoWindow' has a wrong offset!");
static_assert(offsetof(UWB_InfoWindow_C, IsWindowOpenFlag) == 0x000278, "Member 'UWB_InfoWindow_C::IsWindowOpenFlag' has a wrong offset!");
static_assert(offsetof(UWB_InfoWindow_C, IsWindowCloseFlag) == 0x000279, "Member 'UWB_InfoWindow_C::IsWindowCloseFlag' has a wrong offset!");
static_assert(offsetof(UWB_InfoWindow_C, IsSetText) == 0x00027A, "Member 'UWB_InfoWindow_C::IsSetText' has a wrong offset!");
static_assert(offsetof(UWB_InfoWindow_C, IsTextPlay) == 0x00027B, "Member 'UWB_InfoWindow_C::IsTextPlay' has a wrong offset!");

}

