#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampHelpCtrl

#include "Basic.hpp"

#include "BP_CampHelpCtrl_classes.hpp"
#include "BP_CampHelpCtrl_parameters.hpp"


namespace SDK
{

// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ICampHelpGetListFadeOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutFlag                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::ICampHelpGetListFadeOut(bool* OutFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ICampHelpGetListFadeOut");

	Params::BP_CampHelpCtrl_C_ICampHelpGetListFadeOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutFlag != nullptr)
		*OutFlag = Parms.OutFlag;
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ICampHelpProc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutFinished                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::ICampHelpProc(bool* OutFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ICampHelpProc");

	Params::BP_CampHelpCtrl_C_ICampHelpProc Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutFinished != nullptr)
		*OutFinished = Parms.OutFinished;
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.IsExistDLCFlag
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CAMPHELPLIST_CONDITIONTYPE            InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_CampHelpCtrl_C::IsExistDLCFlag(E_CAMPHELPLIST_CONDITIONTYPE InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "IsExistDLCFlag");

	Params::BP_CampHelpCtrl_C_IsExistDLCFlag Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.SetHelpMessage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InNeedHelpText                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::SetHelpMessage(bool InNeedHelpText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "SetHelpMessage");

	Params::BP_CampHelpCtrl_C_SetHelpMessage Parms{};

	Parms.InNeedHelpText = InNeedHelpText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.SetButtonHelp
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Inactive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::SetButtonHelp(bool Inactive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "SetButtonHelp");

	Params::BP_CampHelpCtrl_C_SetButtonHelp Parms{};

	Parms.Inactive = Inactive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ResetCategoryParameter
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::ResetCategoryParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ResetCategoryParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.Help Category Window Clicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CATEGORYWINDOW_MOUSE_EVENT_TYPE       MouseEventType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectCategoryIcon                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::Help_Category_Window_Clicked(E_CATEGORYWINDOW_MOUSE_EVENT_TYPE MouseEventType, int32 SelectCategoryIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "Help Category Window Clicked");

	Params::BP_CampHelpCtrl_C_Help_Category_Window_Clicked Parms{};

	Parms.MouseEventType = MouseEventType;
	Parms.SelectCategoryIcon = SelectCategoryIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.IsHelpListRectArea
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::IsHelpListRectArea(bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "IsHelpListRectArea");

	Params::BP_CampHelpCtrl_C_IsHelpListRectArea Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ResetMouseParameter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::ResetMouseParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ResetMouseParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.MovingHelpTypeCursorCheck
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::MovingHelpTypeCursorCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "MovingHelpTypeCursorCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.MovingCursorCheck
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::MovingCursorCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "MovingCursorCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.Gstatus_FadeOut
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::Gstatus_FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "Gstatus_FadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.HelpTitleOff
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::HelpTitleOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "HelpTitleOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.HelpTitleOn
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::HelpTitleOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "HelpTitleOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.Gstatus_Tutorial
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::Gstatus_Tutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "Gstatus_Tutorial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.Gstatus_MoveCursor
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::Gstatus_MoveCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "Gstatus_MoveCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.padCheck
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::PadCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "padCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.Gstatus_End
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::Gstatus_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "Gstatus_End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.Calc Scroll Bar Rate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::Calc_Scroll_Bar_Rate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "Calc Scroll Bar Rate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.CheckScrollBar
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::CheckScrollBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "CheckScrollBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.Gstatus_Init
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::Gstatus_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "Gstatus_Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ChangeGstatusParam
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CAMPHELPCTRL_GSTATUS                  InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InMainFlag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::ChangeGstatusParam(E_CAMPHELPCTRL_GSTATUS InParam, bool InMainFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ChangeGstatusParam");

	Params::BP_CampHelpCtrl_C_ChangeGstatusParam Parms{};

	Parms.InParam = InParam;
	Parms.InMainFlag = InMainFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.CalcGstatus
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::CalcGstatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "CalcGstatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIESetHelpCursorAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAnimeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InCursorOn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InNewIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::BIESetHelpCursorAnimation(int32 InIndex, int32 InType, int32 InAnimeType, bool InCursorOn, bool InNewIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIESetHelpCursorAnimation");

	Params::BP_CampHelpCtrl_C_BIESetHelpCursorAnimation Parms{};

	Parms.InIndex = InIndex;
	Parms.InType = InType;
	Parms.InAnimeType = InAnimeType;
	Parms.InCursorOn = InCursorOn;
	Parms.InNewIcon = InNewIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIESetHelpCursorAnimationByUseAnimeType
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::BIESetHelpCursorAnimationByUseAnimeType(int32 InIndex, int32 InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIESetHelpCursorAnimationByUseAnimeType");

	Params::BP_CampHelpCtrl_C_BIESetHelpCursorAnimationByUseAnimeType Parms{};

	Parms.InIndex = InIndex;
	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.InitializeListAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InStartCursorAnimation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InCursorLoop                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InDarkMaskOn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::InitializeListAnimation(bool InStartCursorAnimation, bool InCursorLoop, bool InDarkMaskOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "InitializeListAnimation");

	Params::BP_CampHelpCtrl_C_InitializeListAnimation Parms{};

	Parms.InStartCursorAnimation = InStartCursorAnimation;
	Parms.InCursorLoop = InCursorLoop;
	Parms.InDarkMaskOn = InDarkMaskOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIESetInitializeListAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAnimeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InCursorOn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InCursorLoop                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InNewIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::BIESetInitializeListAnimation(int32 InIndex, int32 InType, int32 InAnimeType, bool InCursorOn, bool InCursorLoop, bool InNewIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIESetInitializeListAnimation");

	Params::BP_CampHelpCtrl_C_BIESetInitializeListAnimation Parms{};

	Parms.InIndex = InIndex;
	Parms.InType = InType;
	Parms.InAnimeType = InAnimeType;
	Parms.InCursorOn = InCursorOn;
	Parms.InCursorLoop = InCursorLoop;
	Parms.InNewIcon = InNewIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIEStartNewIconAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::BIEStartNewIconAnimation(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIEStartNewIconAnimation");

	Params::BP_CampHelpCtrl_C_BIEStartNewIconAnimation Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.CreateWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::CreateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "CreateWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.StartCampHelp
// (BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::StartCampHelp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "StartCampHelp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIESetHelpNameColor
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InUseItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::BIESetHelpNameColor(int32 InIndex, int32 InUseItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIESetHelpNameColor");

	Params::BP_CampHelpCtrl_C_BIESetHelpNameColor Parms{};

	Parms.InIndex = InIndex;
	Parms.InUseItem = InUseItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIEPanelHelpDarkMaskDispOn
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::BIEPanelHelpDarkMaskDispOn(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIEPanelHelpDarkMaskDispOn");

	Params::BP_CampHelpCtrl_C_BIEPanelHelpDarkMaskDispOn Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIEPanelHelpDarkMaskDispOff
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::BIEPanelHelpDarkMaskDispOff(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIEPanelHelpDarkMaskDispOff");

	Params::BP_CampHelpCtrl_C_BIEPanelHelpDarkMaskDispOff Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ICampHelpRemove
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::ICampHelpRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ICampHelpRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIEPanelHelpNoDataTextDispOn
// (Event, Public, BlueprintEvent)

void ABP_CampHelpCtrl_C::BIEPanelHelpNoDataTextDispOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIEPanelHelpNoDataTextDispOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIEPanelHelpNoDataTextDispOff
// (Event, Public, BlueprintEvent)

void ABP_CampHelpCtrl_C::BIEPanelHelpNoDataTextDispOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIEPanelHelpNoDataTextDispOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIEHelpPanelDispOn
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::BIEHelpPanelDispOn(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIEHelpPanelDispOn");

	Params::BP_CampHelpCtrl_C_BIEHelpPanelDispOn Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIEHelpPanelDispOff
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::BIEHelpPanelDispOff(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIEHelpPanelDispOff");

	Params::BP_CampHelpCtrl_C_BIEHelpPanelDispOff Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.BIESetHelpPanel
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InCategoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHelpId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InUseHelpNo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InDispOnFlag                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CampHelpCtrl_C::BIESetHelpPanel(int32 InIndex, int32 InCategoryId, int32 InHelpId, int32 InUseHelpNo, bool InDispOnFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "BIESetHelpPanel");

	Params::BP_CampHelpCtrl_C_BIESetHelpPanel Parms{};

	Parms.InIndex = InIndex;
	Parms.InCategoryId = InCategoryId;
	Parms.InHelpId = InHelpId;
	Parms.InUseHelpNo = InUseHelpNo;
	Parms.InDispOnFlag = InDispOnFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ICampHelpCreate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPrio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::ICampHelpCreate(E_WIDGET_PRIO InPrio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ICampHelpCreate");

	Params::BP_CampHelpCtrl_C_ICampHelpCreate Parms{};

	Parms.InPrio = InPrio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.RestartCampHelp
// (BlueprintCallable, BlueprintEvent)

void ABP_CampHelpCtrl_C::RestartCampHelp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "RestartCampHelp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CampHelpCtrl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ReceiveTick");

	Params::BP_CampHelpCtrl_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampHelpCtrl.BP_CampHelpCtrl_C.ExecuteUbergraph_BP_CampHelpCtrl
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampHelpCtrl_C::ExecuteUbergraph_BP_CampHelpCtrl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampHelpCtrl_C", "ExecuteUbergraph_BP_CampHelpCtrl");

	Params::BP_CampHelpCtrl_C_ExecuteUbergraph_BP_CampHelpCtrl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
