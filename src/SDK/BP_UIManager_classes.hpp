#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIManager.BP_UIManager_C
// 0x03B8 (0x04D8 - 0x0120)
class UBP_UIManager_C final : public UProjectUIManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0120(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UClass>                   M_MessageWidget;                                   // 0x0128(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_BtnHelpCtrl2;                                    // 0x0150(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_CommonFadeWidget;                                // 0x0178(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_ScreenFadeObj;                                   // 0x01A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FColor                                 M_FadeBackColor;                                   // 0x01C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   M_CommonWindowCtrl;                                // 0x01D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_CommonHelpWindowCtrl;                            // 0x01F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_DialogWindowCtrl;                                // 0x0220(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_InfoWindowCtrl;                                  // 0x0248(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_MsgCtrl;                                         // 0x0270(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_ItemWindowCtrl;                                  // 0x0298(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_TutorialWindowCtrl2;                             // 0x02C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_MakkaWindowCtrl2;                                // 0x02E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_moonAgeCtrl;                                     // 0x0310(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_SortWindowCtrl2;                                 // 0x0338(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_SkillSearchWindowCtrl;                           // 0x0360(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_categoryWindowCtrl;                              // 0x0388(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_screenTransition;                                // 0x03B0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_locationWinCtrl;                                 // 0x03D8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_miitsuWindowCtrl;                                // 0x0400(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EDisClearAllVNumber;                               // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftClassPtr<class UClass>                   M_MagatsuhiGaugeCtrl;                              // 0x0438(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_RichTextInsertWidget;                            // 0x0460(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_DLCAnnouncer;                                    // 0x0488(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_CommonUI_EventCtrl;                              // 0x04B0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void EDisClearAllVNumber__DelegateSignature();
	void ExecuteUbergraph_BP_UIManager(int32 EntryPoint);
	void AddToScreenWidget();
	void DestroyWidget();
	void CreateWidget();
	void Initialize(class UProjectGameInstanceBase* GameInstance);
	void AddToScreenMessageWidget();
	void DestroyMsgCtrl();
	void CreateMsgCtrl();
	void DestroyMessageWidget();
	void CreateMessageWidget();
	void DestroyRichTextInsertWidgetPool();
	void CreateRichTextInsertWidgetPool();
	void AddToScreenBtnHelpCtrl2();
	void DestroyBtnHelpCtrl2();
	void CreateBtnHelpCtrl2();
	void AddToScreenScreenFadeWidget();
	void DestroyScreenFadeObj();
	void CreateScreenFadeObj();
	void DestroyScreenFadeWidget();
	void CreateScreenFadeWidget();
	void AddToScreenMoonAgeCtrl();
	void DestroyMoonAgeCtrl();
	void CreateMoonAgeCtrl();
	void CancelMissionMapInfo(int32 MissionId);
	void OpenMapInfo(class FName Label, const TArray<int32>& TagParams, int32 OpenSE_Type);
	void AddToScreenMakkaWindowCtrl2();
	void DestroyMakkaWindowCtrl2();
	void CreateMakkaWindowCtrl2();
	void DestroySystemMess();
	void CreateSystemMess();
	void DestroyCommonUI_EventCtrl();
	void CreateCommonUI_EventCtrl();
	void DestroyDLCAnnouncer();
	void CreateDLCAnnouncer();
	void DestroyTutorialWindowCtrl2();
	void CreateTutorialWindowCtrl2();
	void DestroyItemWindowUI();
	void CreateItemWindowCtrlUI();
	void DestroyInfoWindowCtrl();
	void CreateInfoWindowCtrl();
	void DestroyDialogWindowCtrl();
	void CreateDialogWindowCtrl();
	void DestroyCommonHelpWindowCtrl();
	void CreateCommonHelpWindowCtrl();
	void CreateCommonWindowCtrl();
	void DestroyCommonWindowCtrl();
	void BPI_SetMapCharaPanelCtrlUI(class AActor* InActor);
	void AddToScreenSkillSearchSortWindowCtrl2();
	void DestroySkillSearchSortWindowCtrl2();
	void CreateSkillSearchSortWindowCtrl2();
	void AddToScreenSortWindowCtrl2();
	void DestroySortWindowCtrl2();
	void CreateSortWindowCtrl2();
	void DestroyCategoryWindowCtrl();
	void CreateCategoryWindowCtrl();
	void AddToScreenScreenTransitionCtrl();
	void DestroyScreenTransitionCtrl();
	void CreateScreenTransitionCtrl();
	void AddToScreenLocationWindowCtrl();
	void DestroyLocationWindowCtrl();
	void CreateLocationWindowCtrl();
	void AddToScreenMiitsuWindowCtrl();
	void DestroyMiitsuWindowCtrl();
	void CreateMiitsuWindowCtrl();
	void ClearAllVNumber();
	void AddToScreenMagatsuhiGaugeCtrl();
	void DestroyMagatsuhiGaugeCtrl();
	void CreateMagatsuhiGaugeCtrl();
	void ShowNameEntryErrorDialog_Internal(int32 ErrorType, const class FString& ProgramTagValue);
	void OnLoaded_543212C542C476E8D24972BECFF9E029(TSubclassOf<class UObject> Loaded);
	void OnLoaded_20CCB4154E7B835A8F431A9DB42B2800(TSubclassOf<class UObject> Loaded);
	void OnLoaded_A8E9CC9A4604A419111755B005FE062A(TSubclassOf<class UObject> Loaded);
	void OnLoaded_793CB28D466FE0C776786993EFA1A05E(TSubclassOf<class UObject> Loaded);
	void OnLoaded_72CD126046D6C27EA46E34B829A5A911(TSubclassOf<class UObject> Loaded);
	void OnLoaded_842CFA7D4752E7B917A5D2A4EDA53B8C(TSubclassOf<class UObject> Loaded);
	void OnLoaded_3D1F2731407C4DADF42F89AA59852BF5(TSubclassOf<class UObject> Loaded);
	void OnLoaded_99328E7448A3F9E86E8659BA3AD15721(TSubclassOf<class UObject> Loaded);
	void OnLoaded_03A1DD1040902FCAD70277BF4D69E884(TSubclassOf<class UObject> Loaded);
	void OnLoaded_AEE3BFF7445653F78D026698BDBD17AF(TSubclassOf<class UObject> Loaded);
	void OnLoaded_09FD75BF463DDC210F7668BCF05E8234(TSubclassOf<class UObject> Loaded);
	void OnLoaded_365D64C546D16B86DDD3248916D2B890(TSubclassOf<class UObject> Loaded);
	void OnLoaded_E588FF79495DC6CBDBE6D8883281D881(TSubclassOf<class UObject> Loaded);
	void OnLoaded_4AB14CF6468ACB7E602C34ACCBD80823(TSubclassOf<class UObject> Loaded);
	void OnLoaded_FCA336844DA84B232135BEBF7BE3E7A3(TSubclassOf<class UObject> Loaded);
	void OnLoaded_345E6BBB4F353BCCF656CF826FBACA66(TSubclassOf<class UObject> Loaded);
	void OnLoaded_95CED1EE48004A5EDC0DC884175A7427(TSubclassOf<class UObject> Loaded);
	void OnLoaded_D969AA194B9ABE7EF64AF9B3D333D131(TSubclassOf<class UObject> Loaded);
	void OnLoaded_7FD7CD6E4F914AB53B04C99C2D5E1BA0(TSubclassOf<class UObject> Loaded);
	void OnLoaded_CB4E8D1A490AB97EEA2DD29349729301(TSubclassOf<class UObject> Loaded);
	void OnLoaded_BA02AD0247B422B411030CB870BC09ED(TSubclassOf<class UObject> Loaded);
	class UUserWidget* GetMessageWidget();
	class UUserWidget* GetScreenFadeWidget();
	class UUIFadeBase* GetScreenFadeObj();
	class AActor* GetInfoCtrl();
	class ASystemMess* GetSystemMess();
	bool CheckNameEntryErrorDialogConfirmed_Internal();
	class AActor* GetRichTextInsertWidgetPool();
	void BPI_GetUIManager(class UProjectUIManager** UIManager);
	void BPI_GetScreenFadeWidget(class UObject** Obj);
	void BPI_GetCommonWindowCtrl(TScriptInterface<class IBPI_CommonWindowCtrl_C>* OutActor, bool* Success);
	void BPI_GetMsgCtrl(class AActor** OutActor);
	void BPI_GetCommonHelpWindowCtrl(TScriptInterface<class IBPI_CommonHelpWindowCtrl_C>* OutActor);
	void BPI_GetDialogWindowCtrl(TScriptInterface<class IBPI_DialogCtrl_C>* OutActor);
	void BPI_GetInfoWindowCtrl(TScriptInterface<class IBPI_InfoWindowCtrl_C>* OutActor);
	void BPI_GetMapCharaPanelCtrlUI(TScriptInterface<class IBPI_MapCharaPanelCtrl_C>* OutActor, bool* IsValid);
	void BPI_GetItemWindowCtrl(TScriptInterface<class IBPI_ItemWindowCtrl_C>* OutActor);
	void BPI_MoonAgeCtrl(class AActor** OutActor);
	void BPI_CategoryWindowCtrl(class AActor** OutActor);
	void BPI_ScreeTransitionCtrl(class AActor** OutActor);
	void BPI_LocationWindowCtrl(class AActor** OutActor);
	void BPI_GetMiitsuWindowCtrl(class AActor** OutActor);
	void BPI_GetButtonHelpCtrl2(class AActor** OutActor);
	void BPI_GetTutorialWIndowCtrl2(class AActor** OutActor);
	void BPI_GetSortWindowCtrl2(class AActor** OutActor);
	void BPI_GetMakkaWindowCtrl2(class AActor** OutActor);
	void BPI_GetSkillSearchWindowCtrl(class AActor** OutActor);
	void BPI_GetMagatsuhiGaugeCtrl(class AActor** OutActor);
	void BPI_GetDLCAnnouncer(class AActor** OutActor);
	void BPI_GetCommonUI_EventCtrl(class AActor** OutActor);
	void BPI_IsSpawnedUiCtrlActors(bool* Complete);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIManager_C">();
	}
	static class UBP_UIManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIManager_C>();
	}
};
static_assert(alignof(UBP_UIManager_C) == 0x000008, "Wrong alignment on UBP_UIManager_C");
static_assert(sizeof(UBP_UIManager_C) == 0x0004D8, "Wrong size on UBP_UIManager_C");
static_assert(offsetof(UBP_UIManager_C, UberGraphFrame) == 0x000120, "Member 'UBP_UIManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_MessageWidget) == 0x000128, "Member 'UBP_UIManager_C::M_MessageWidget' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_BtnHelpCtrl2) == 0x000150, "Member 'UBP_UIManager_C::M_BtnHelpCtrl2' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_CommonFadeWidget) == 0x000178, "Member 'UBP_UIManager_C::M_CommonFadeWidget' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_ScreenFadeObj) == 0x0001A0, "Member 'UBP_UIManager_C::M_ScreenFadeObj' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_FadeBackColor) == 0x0001C8, "Member 'UBP_UIManager_C::M_FadeBackColor' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_CommonWindowCtrl) == 0x0001D0, "Member 'UBP_UIManager_C::M_CommonWindowCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_CommonHelpWindowCtrl) == 0x0001F8, "Member 'UBP_UIManager_C::M_CommonHelpWindowCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_DialogWindowCtrl) == 0x000220, "Member 'UBP_UIManager_C::M_DialogWindowCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_InfoWindowCtrl) == 0x000248, "Member 'UBP_UIManager_C::M_InfoWindowCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_MsgCtrl) == 0x000270, "Member 'UBP_UIManager_C::M_MsgCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_ItemWindowCtrl) == 0x000298, "Member 'UBP_UIManager_C::M_ItemWindowCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_TutorialWindowCtrl2) == 0x0002C0, "Member 'UBP_UIManager_C::M_TutorialWindowCtrl2' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_MakkaWindowCtrl2) == 0x0002E8, "Member 'UBP_UIManager_C::M_MakkaWindowCtrl2' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_moonAgeCtrl) == 0x000310, "Member 'UBP_UIManager_C::M_moonAgeCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_SortWindowCtrl2) == 0x000338, "Member 'UBP_UIManager_C::M_SortWindowCtrl2' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_SkillSearchWindowCtrl) == 0x000360, "Member 'UBP_UIManager_C::M_SkillSearchWindowCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_categoryWindowCtrl) == 0x000388, "Member 'UBP_UIManager_C::M_categoryWindowCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_screenTransition) == 0x0003B0, "Member 'UBP_UIManager_C::M_screenTransition' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_locationWinCtrl) == 0x0003D8, "Member 'UBP_UIManager_C::M_locationWinCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_miitsuWindowCtrl) == 0x000400, "Member 'UBP_UIManager_C::M_miitsuWindowCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, EDisClearAllVNumber) == 0x000428, "Member 'UBP_UIManager_C::EDisClearAllVNumber' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_MagatsuhiGaugeCtrl) == 0x000438, "Member 'UBP_UIManager_C::M_MagatsuhiGaugeCtrl' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_RichTextInsertWidget) == 0x000460, "Member 'UBP_UIManager_C::M_RichTextInsertWidget' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_DLCAnnouncer) == 0x000488, "Member 'UBP_UIManager_C::M_DLCAnnouncer' has a wrong offset!");
static_assert(offsetof(UBP_UIManager_C, M_CommonUI_EventCtrl) == 0x0004B0, "Member 'UBP_UIManager_C::M_CommonUI_EventCtrl' has a wrong offset!");

}

