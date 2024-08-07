#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_UIManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetScreenFadeWidget
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetScreenFadeWidget final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetScreenFadeWidget) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetScreenFadeWidget");
static_assert(sizeof(BPI_UIManager_C_BPI_GetScreenFadeWidget) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetScreenFadeWidget");
static_assert(offsetof(BPI_UIManager_C_BPI_GetScreenFadeWidget, Obj) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetScreenFadeWidget::Obj' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetUIManager
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetUIManager final
{
public:
	class UProjectUIManager*                      UIManager;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetUIManager) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetUIManager");
static_assert(sizeof(BPI_UIManager_C_BPI_GetUIManager) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetUIManager");
static_assert(offsetof(BPI_UIManager_C_BPI_GetUIManager, UIManager) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetUIManager::UIManager' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_LocationWindowCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_LocationWindowCtrl final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_LocationWindowCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_LocationWindowCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_LocationWindowCtrl) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_LocationWindowCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_LocationWindowCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_LocationWindowCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetCommonWindowCtrl
// 0x0018 (0x0018 - 0x0000)
struct BPI_UIManager_C_BPI_GetCommonWindowCtrl final
{
public:
	TScriptInterface<class IBPI_CommonWindowCtrl_C> OutActor;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Success;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetCommonWindowCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetCommonWindowCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetCommonWindowCtrl) == 0x000018, "Wrong size on BPI_UIManager_C_BPI_GetCommonWindowCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetCommonWindowCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetCommonWindowCtrl::OutActor' has a wrong offset!");
static_assert(offsetof(BPI_UIManager_C_BPI_GetCommonWindowCtrl, Success) == 0x000010, "Member 'BPI_UIManager_C_BPI_GetCommonWindowCtrl::Success' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetMsgCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetMsgCtrl final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetMsgCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetMsgCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetMsgCtrl) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetMsgCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetMsgCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetMsgCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetCommonHelpWindowCtrl
// 0x0010 (0x0010 - 0x0000)
struct BPI_UIManager_C_BPI_GetCommonHelpWindowCtrl final
{
public:
	TScriptInterface<class IBPI_CommonHelpWindowCtrl_C> OutActor;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetCommonHelpWindowCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetCommonHelpWindowCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetCommonHelpWindowCtrl) == 0x000010, "Wrong size on BPI_UIManager_C_BPI_GetCommonHelpWindowCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetCommonHelpWindowCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetCommonHelpWindowCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetDialogWindowCtrl
// 0x0010 (0x0010 - 0x0000)
struct BPI_UIManager_C_BPI_GetDialogWindowCtrl final
{
public:
	TScriptInterface<class IBPI_DialogCtrl_C>     OutActor;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetDialogWindowCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetDialogWindowCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetDialogWindowCtrl) == 0x000010, "Wrong size on BPI_UIManager_C_BPI_GetDialogWindowCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetDialogWindowCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetDialogWindowCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetInfoWindowCtrl
// 0x0010 (0x0010 - 0x0000)
struct BPI_UIManager_C_BPI_GetInfoWindowCtrl final
{
public:
	TScriptInterface<class IBPI_InfoWindowCtrl_C> OutActor;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetInfoWindowCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetInfoWindowCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetInfoWindowCtrl) == 0x000010, "Wrong size on BPI_UIManager_C_BPI_GetInfoWindowCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetInfoWindowCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetInfoWindowCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_SetMapCharaPanelCtrlUI
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_SetMapCharaPanelCtrlUI final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_SetMapCharaPanelCtrlUI) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_SetMapCharaPanelCtrlUI");
static_assert(sizeof(BPI_UIManager_C_BPI_SetMapCharaPanelCtrlUI) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_SetMapCharaPanelCtrlUI");
static_assert(offsetof(BPI_UIManager_C_BPI_SetMapCharaPanelCtrlUI, InActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_SetMapCharaPanelCtrlUI::InActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetMapCharaPanelCtrlUI
// 0x0018 (0x0018 - 0x0000)
struct BPI_UIManager_C_BPI_GetMapCharaPanelCtrlUI final
{
public:
	TScriptInterface<class IBPI_MapCharaPanelCtrl_C> OutActor;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsValid;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetMapCharaPanelCtrlUI) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetMapCharaPanelCtrlUI");
static_assert(sizeof(BPI_UIManager_C_BPI_GetMapCharaPanelCtrlUI) == 0x000018, "Wrong size on BPI_UIManager_C_BPI_GetMapCharaPanelCtrlUI");
static_assert(offsetof(BPI_UIManager_C_BPI_GetMapCharaPanelCtrlUI, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetMapCharaPanelCtrlUI::OutActor' has a wrong offset!");
static_assert(offsetof(BPI_UIManager_C_BPI_GetMapCharaPanelCtrlUI, IsValid) == 0x000010, "Member 'BPI_UIManager_C_BPI_GetMapCharaPanelCtrlUI::IsValid' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetButtonHelpCtrl2
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetButtonHelpCtrl2 final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetButtonHelpCtrl2) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetButtonHelpCtrl2");
static_assert(sizeof(BPI_UIManager_C_BPI_GetButtonHelpCtrl2) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetButtonHelpCtrl2");
static_assert(offsetof(BPI_UIManager_C_BPI_GetButtonHelpCtrl2, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetButtonHelpCtrl2::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetItemWindowCtrl
// 0x0010 (0x0010 - 0x0000)
struct BPI_UIManager_C_BPI_GetItemWindowCtrl final
{
public:
	TScriptInterface<class IBPI_ItemWindowCtrl_C> OutActor;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetItemWindowCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetItemWindowCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetItemWindowCtrl) == 0x000010, "Wrong size on BPI_UIManager_C_BPI_GetItemWindowCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetItemWindowCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetItemWindowCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetTutorialWIndowCtrl2
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetTutorialWIndowCtrl2 final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetTutorialWIndowCtrl2) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetTutorialWIndowCtrl2");
static_assert(sizeof(BPI_UIManager_C_BPI_GetTutorialWIndowCtrl2) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetTutorialWIndowCtrl2");
static_assert(offsetof(BPI_UIManager_C_BPI_GetTutorialWIndowCtrl2, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetTutorialWIndowCtrl2::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetMakkaWindowCtrl2
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetMakkaWindowCtrl2 final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetMakkaWindowCtrl2) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetMakkaWindowCtrl2");
static_assert(sizeof(BPI_UIManager_C_BPI_GetMakkaWindowCtrl2) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetMakkaWindowCtrl2");
static_assert(offsetof(BPI_UIManager_C_BPI_GetMakkaWindowCtrl2, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetMakkaWindowCtrl2::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_MoonAgeCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_MoonAgeCtrl final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_MoonAgeCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_MoonAgeCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_MoonAgeCtrl) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_MoonAgeCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_MoonAgeCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_MoonAgeCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetSortWindowCtrl2
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetSortWindowCtrl2 final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetSortWindowCtrl2) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetSortWindowCtrl2");
static_assert(sizeof(BPI_UIManager_C_BPI_GetSortWindowCtrl2) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetSortWindowCtrl2");
static_assert(offsetof(BPI_UIManager_C_BPI_GetSortWindowCtrl2, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetSortWindowCtrl2::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetSkillSearchWindowCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetSkillSearchWindowCtrl final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetSkillSearchWindowCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetSkillSearchWindowCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetSkillSearchWindowCtrl) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetSkillSearchWindowCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetSkillSearchWindowCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetSkillSearchWindowCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_CategoryWindowCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_CategoryWindowCtrl final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_CategoryWindowCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_CategoryWindowCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_CategoryWindowCtrl) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_CategoryWindowCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_CategoryWindowCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_CategoryWindowCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_ScreeTransitionCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_ScreeTransitionCtrl final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_ScreeTransitionCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_ScreeTransitionCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_ScreeTransitionCtrl) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_ScreeTransitionCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_ScreeTransitionCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_ScreeTransitionCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetMiitsuWindowCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetMiitsuWindowCtrl final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetMiitsuWindowCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetMiitsuWindowCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetMiitsuWindowCtrl) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetMiitsuWindowCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetMiitsuWindowCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetMiitsuWindowCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetMagatsuhiGaugeCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetMagatsuhiGaugeCtrl final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetMagatsuhiGaugeCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetMagatsuhiGaugeCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetMagatsuhiGaugeCtrl) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetMagatsuhiGaugeCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetMagatsuhiGaugeCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetMagatsuhiGaugeCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetDLCAnnouncer
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetDLCAnnouncer final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetDLCAnnouncer) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetDLCAnnouncer");
static_assert(sizeof(BPI_UIManager_C_BPI_GetDLCAnnouncer) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetDLCAnnouncer");
static_assert(offsetof(BPI_UIManager_C_BPI_GetDLCAnnouncer, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetDLCAnnouncer::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_GetCommonUI_EventCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_UIManager_C_BPI_GetCommonUI_EventCtrl final
{
public:
	class AActor*                                 OutActor;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UIManager_C_BPI_GetCommonUI_EventCtrl) == 0x000008, "Wrong alignment on BPI_UIManager_C_BPI_GetCommonUI_EventCtrl");
static_assert(sizeof(BPI_UIManager_C_BPI_GetCommonUI_EventCtrl) == 0x000008, "Wrong size on BPI_UIManager_C_BPI_GetCommonUI_EventCtrl");
static_assert(offsetof(BPI_UIManager_C_BPI_GetCommonUI_EventCtrl, OutActor) == 0x000000, "Member 'BPI_UIManager_C_BPI_GetCommonUI_EventCtrl::OutActor' has a wrong offset!");

// Function BPI_UIManager.BPI_UIManager_C.BPI_IsSpawnedUiCtrlActors
// 0x0001 (0x0001 - 0x0000)
struct BPI_UIManager_C_BPI_IsSpawnedUiCtrlActors final
{
public:
	bool                                          Complete;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_UIManager_C_BPI_IsSpawnedUiCtrlActors) == 0x000001, "Wrong alignment on BPI_UIManager_C_BPI_IsSpawnedUiCtrlActors");
static_assert(sizeof(BPI_UIManager_C_BPI_IsSpawnedUiCtrlActors) == 0x000001, "Wrong size on BPI_UIManager_C_BPI_IsSpawnedUiCtrlActors");
static_assert(offsetof(BPI_UIManager_C_BPI_IsSpawnedUiCtrlActors, Complete) == 0x000000, "Member 'BPI_UIManager_C_BPI_IsSpawnedUiCtrlActors::Complete' has a wrong offset!");

}

