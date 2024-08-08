#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MsgWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MsgWindow.WB_MsgWindow_C
// 0x0128 (0x0388 - 0x0260)
class UWB_MsgWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              ButtonS5PageIcon;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelMessage;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MainPanel;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        MessagePageIcon;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageRichTextWidget*                 MessageRichText;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        MessageWindow;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MsgSelectMenu_C*                    MsgSelectMenu;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameText;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        NameWindow;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        Posdata;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsNameWindow;                                      // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNextPageIcon;                                    // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSelectCursor;                                    // 0x02BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMessagePlay;                                     // 0x02BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMessageWindow;                                   // 0x02BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAutoMessage;                                     // 0x02BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsShowIconAfterCompleted;                          // 0x02BE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNextPage;                                        // 0x02BF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsVoiceLoaded;                                     // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMessageData                           BaseMessageData;                                   // 0x02C8(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class USoundAtomCue>>   SorVoiceSoundAtomCue;                              // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USoundAtomCue*>                  VoiceSoundAtomCue;                                 // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UScriptMessageAsset*                    UseScriptMessageAsset;                             // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAtomComponent*                         VoiceCompornent;                                   // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanBeUseVoice;                                     // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369[0x3];                                      // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseMessageSpeed;                                  // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Pageiconpos;                                       // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCentering;                                       // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUseSystemColor;                                  // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMessageWindowVisible;                            // 0x037A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNameWindowVisible;                               // 0x037B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMessagePageIconVisible;                          // 0x037C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMessageRichTextVisible;                          // 0x037D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37E[0x2];                                      // 0x037E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimPlayRate;                                      // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNextPageIconClicked;                             // 0x0384(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsHoverOn;                                         // 0x0385(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_MsgWindow(int32 EntryPoint);
	void NextPageIconForceOff();
	void ClearShowIconAfterCompleted();
	void MessageWindow_ONOFF();
	void BndEvt__WB_MsgWindow_ButtonS5PageIcon_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__MessagePageIcon_K2Node_ComponentBoundEvent_2_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__NameWindow_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__MessageWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void MessageWindow_Out();
	void MessageWindow_In();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void LoadVoiceData();
	void StopVoicePlay();
	void StartVoice();
	void OnLoaded_522740664FF1A06057B4DD8760092DA1(class UObject* Loaded);
	class FText GetText_0();
	void Messagetextstop(bool InNonClearText);
	void Messagetextplay(bool* OutCompleted);
	void IsNameText(bool* Param_NameWindow);
	void AddSelect();
	void DecSelect();
	void SetSelectCursorOffsest(int32 DefaultCursorPos);
	void SetNameWindow(bool InExecution);
	void MessageAutoOnOff();
	void PresetSelectNewIcon();
	void DecidesSelectCursor(int32* OutParam);
	void SelectMenuOff();
	void CreatePositionData(const struct FVector2D& InVec, float InSizeX, float InSizeY, struct FVector2D* OutVec);
	void GetPositionDataByPartsName(class FName InPartsName, class USsPlayerWidget* InSSData, float InSizeX, float InSizeY, struct FVector2D* OutVec);
	void SetMessageWindowPosition();
	void DeleteMsgSelectWidget();
	void IsFinishedWindowIn(bool* OutFinished);
	void SetMessageText(class UScriptMessageAsset* ArgScriptMessageAsset, class FName InLabel, bool InExecutionText, bool InShowIconAfterCompleted);
	void IsSetMessageText(bool* OutFlag);
	void ExecutionWindowIn();
	void IsFinishedWindowOut(bool* OutFinished);
	void SetSelectMenu(int32 InMenuNumber, int32 InInitCursorPosition, class UScriptMessageAsset* InScriptMessageAsset, TArray<class FName>& InSelectItemName, bool InUseNewIcon, TArray<bool>& InSelectItemNewIcon, TArray<bool>& InSelectTextDisabledColor);
	void SetMessageTextByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, bool InExecutionText, bool InShowIconAfterCompleted);
	void SetSelectMenuByIndex(int32 InMenuNumber, int32 InInitCursorPosition, class UScriptMessageAsset* InScriptMessageAsset, TArray<int32>& InSelectItemIndex, bool InUseNewIcon, TArray<bool>& InSelectItemNewIcon, TArray<bool>& InSelectTextDisabledColor);
	void ExecutionWindowOut();
	void IsMessageCompleted(bool* OutFinished);
	void IsPressNextPageButton(bool* OutNextPage);
	void SetMessageRichTextByLabel(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, bool InExecutionText, bool InShowIconAfterCompleted, bool InBuildText);
	void SetBuildText();
	void SetMessageRickTextByIndex(class UScriptMessageAsset* InScriptMessageAset, int32 InIndex, bool InExecutionText, bool InShowIconAfterCompleted, bool InBuildText);
	void GetVoiceName(class FString* OutVoiceName);
	void GetVoiceAsset(const class FString& InName, class USoundAtomCue** OutSoundAtomCue);
	void VoiceLoadProc(bool* IsLoaded);
	void InitializeVoiceWork();
	void MsgVoiceOn();
	void MsgVoiceOff();
	void SetMsgSettings(int32 InType);
	void GetVoiceCompornent(class UAtomComponent** OutVoiceCompornent);
	void SetPageIconPosition();
	void SetSelectMessageBuildLater(bool InBuildLater);
	void SetSelectMessageBuildText();
	void SetEventMessageFlag(bool InEventFlag);
	void SetRichSelectTextValueParam(int32 InSelectIndex, int32 InIndex, int32 InValueParam);
	void SetRichTextValueParam(int32 InIndex, int32 InValueParam);
	void GetRichTextDrawStrLen(int32* OutParam);
	void SetRichTextProgramValue(int32 InIndex, const class FString& InValue);
	void IsPageCompleted(bool* OutFinished);
	void InitializeTextSelectMenu(bool InNonClearText);
	void MessageTextStopNoSelectMenuOff(bool InNonClearText);
	void SelectMenuOffHaveBeenCreatedSelect();
	void InitVisibleFlag();
	void ClearSelectWindow();
	void SetSelectCursorPosMin();
	void SetSelectCursorPosMax();
	void GetSelectCursorNum(int32* OutParam);
	void GetRichTextStrLenExcludingTag(int32* StrLen);
	void ResetPageIconClicked();
	void GetNextPageIconClicked(bool* OutClicked);
	void OldSelectCursorOff(bool InAllClear);
	void IsMouseHover(bool* OutHover);
	void MouseHoverOff();
	void ResetSelectCursor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MsgWindow_C">();
	}
	static class UWB_MsgWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MsgWindow_C>();
	}
};
static_assert(alignof(UWB_MsgWindow_C) == 0x000008, "Wrong alignment on UWB_MsgWindow_C");
static_assert(sizeof(UWB_MsgWindow_C) == 0x000388, "Wrong size on UWB_MsgWindow_C");
static_assert(offsetof(UWB_MsgWindow_C, UberGraphFrame) == 0x000260, "Member 'UWB_MsgWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, ButtonS5PageIcon) == 0x000268, "Member 'UWB_MsgWindow_C::ButtonS5PageIcon' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, CanvasPanelMessage) == 0x000270, "Member 'UWB_MsgWindow_C::CanvasPanelMessage' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, MainPanel) == 0x000278, "Member 'UWB_MsgWindow_C::MainPanel' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, MessagePageIcon) == 0x000280, "Member 'UWB_MsgWindow_C::MessagePageIcon' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, MessageRichText) == 0x000288, "Member 'UWB_MsgWindow_C::MessageRichText' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, MessageWindow) == 0x000290, "Member 'UWB_MsgWindow_C::MessageWindow' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, MsgSelectMenu) == 0x000298, "Member 'UWB_MsgWindow_C::MsgSelectMenu' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, NameText) == 0x0002A0, "Member 'UWB_MsgWindow_C::NameText' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, NameWindow) == 0x0002A8, "Member 'UWB_MsgWindow_C::NameWindow' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, Posdata) == 0x0002B0, "Member 'UWB_MsgWindow_C::Posdata' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsNameWindow) == 0x0002B8, "Member 'UWB_MsgWindow_C::IsNameWindow' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsNextPageIcon) == 0x0002B9, "Member 'UWB_MsgWindow_C::IsNextPageIcon' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsSelectCursor) == 0x0002BA, "Member 'UWB_MsgWindow_C::IsSelectCursor' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsMessagePlay) == 0x0002BB, "Member 'UWB_MsgWindow_C::IsMessagePlay' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsMessageWindow) == 0x0002BC, "Member 'UWB_MsgWindow_C::IsMessageWindow' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsAutoMessage) == 0x0002BD, "Member 'UWB_MsgWindow_C::IsAutoMessage' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsShowIconAfterCompleted) == 0x0002BE, "Member 'UWB_MsgWindow_C::IsShowIconAfterCompleted' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsNextPage) == 0x0002BF, "Member 'UWB_MsgWindow_C::IsNextPage' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsVoiceLoaded) == 0x0002C0, "Member 'UWB_MsgWindow_C::IsVoiceLoaded' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, BaseMessageData) == 0x0002C8, "Member 'UWB_MsgWindow_C::BaseMessageData' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, SorVoiceSoundAtomCue) == 0x000338, "Member 'UWB_MsgWindow_C::SorVoiceSoundAtomCue' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, VoiceSoundAtomCue) == 0x000348, "Member 'UWB_MsgWindow_C::VoiceSoundAtomCue' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, UseScriptMessageAsset) == 0x000358, "Member 'UWB_MsgWindow_C::UseScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, VoiceCompornent) == 0x000360, "Member 'UWB_MsgWindow_C::VoiceCompornent' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, CanBeUseVoice) == 0x000368, "Member 'UWB_MsgWindow_C::CanBeUseVoice' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, BaseMessageSpeed) == 0x00036C, "Member 'UWB_MsgWindow_C::BaseMessageSpeed' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, Pageiconpos) == 0x000370, "Member 'UWB_MsgWindow_C::Pageiconpos' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsCentering) == 0x000378, "Member 'UWB_MsgWindow_C::IsCentering' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsUseSystemColor) == 0x000379, "Member 'UWB_MsgWindow_C::IsUseSystemColor' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsMessageWindowVisible) == 0x00037A, "Member 'UWB_MsgWindow_C::IsMessageWindowVisible' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsNameWindowVisible) == 0x00037B, "Member 'UWB_MsgWindow_C::IsNameWindowVisible' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsMessagePageIconVisible) == 0x00037C, "Member 'UWB_MsgWindow_C::IsMessagePageIconVisible' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsMessageRichTextVisible) == 0x00037D, "Member 'UWB_MsgWindow_C::IsMessageRichTextVisible' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, AnimPlayRate) == 0x000380, "Member 'UWB_MsgWindow_C::AnimPlayRate' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsNextPageIconClicked) == 0x000384, "Member 'UWB_MsgWindow_C::IsNextPageIconClicked' has a wrong offset!");
static_assert(offsetof(UWB_MsgWindow_C, IsHoverOn) == 0x000385, "Member 'UWB_MsgWindow_C::IsHoverOn' has a wrong offset!");

}

