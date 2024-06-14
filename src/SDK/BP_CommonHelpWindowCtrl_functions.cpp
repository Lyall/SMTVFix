#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CommonHelpWindowCtrl

#include "Basic.hpp"

#include "BP_CommonHelpWindowCtrl_classes.hpp"
#include "BP_CommonHelpWindowCtrl_parameters.hpp"


namespace SDK
{

// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ExecuteUbergraph_BP_CommonHelpWindowCtrl
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ExecuteUbergraph_BP_CommonHelpWindowCtrl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ExecuteUbergraph_BP_CommonHelpWindowCtrl");

	Params::BP_CommonHelpWindowCtrl_C_ExecuteUbergraph_BP_CommonHelpWindowCtrl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ReceiveEndPlay");

	Params::BP_CommonHelpWindowCtrl_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ReceiveTick");

	Params::BP_CommonHelpWindowCtrl_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowExecutionClose
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowExecutionClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowExecutionClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowExecutionOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPrio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowExecutionOpen(E_WIDGET_PRIO InPrio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowExecutionOpen");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowExecutionOpen Parms{};

	Parms.InPrio = InPrio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowSetWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowSetWidgetVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowSetWidgetVisibility");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowSetWidgetVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowClose
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPrio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowOpen(E_WIDGET_PRIO InPrio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowOpen");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowOpen Parms{};

	Parms.InPrio = InPrio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowClearRichText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InChangeAnime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowClearRichText(bool InChangeAnime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowClearRichText");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowClearRichText Parms{};

	Parms.InChangeAnime = InChangeAnime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowSetBuildRichText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowSetBuildRichText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowSetBuildRichText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowSetExecutionRichText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowSetExecutionRichText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowSetExecutionRichText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowSetSkillId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowSetSkillId(int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowSetSkillId");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowSetSkillId Parms{};

	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowSetRichTextByLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InChangeAnime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InExecutionText                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InBuildText                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowSetRichTextByLabel(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, bool InChangeAnime, bool InExecutionText, bool InBuildText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowSetRichTextByLabel");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowSetRichTextByLabel Parms{};

	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InLabel = InLabel;
	Parms.InChangeAnime = InChangeAnime;
	Parms.InExecutionText = InExecutionText;
	Parms.InBuildText = InBuildText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowSetItemId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowSetItemId(int32 InItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowSetItemId");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowSetItemId Parms{};

	Parms.InItemId = InItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowSetRichTextByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InChangeAnime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InExecutionText                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InBuildText                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowSetRichTextByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, bool InChangeAnime, bool InExecutionText, bool InBuildText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowSetRichTextByIndex");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowSetRichTextByIndex Parms{};

	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InIndex = InIndex;
	Parms.InChangeAnime = InChangeAnime;
	Parms.InExecutionText = InExecutionText;
	Parms.InBuildText = InBuildText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowSetValueParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowSetValueParam(int32 InIndex, int32 InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowSetValueParam");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowSetValueParam Parms{};

	Parms.InIndex = InIndex;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowSetProgramValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowSetProgramValue(int32 InIndex, const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowSetProgramValue");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowSetProgramValue Parms{};

	Parms.InIndex = InIndex;
	Parms.InString = std::move(InString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ChangeGstatusParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_COMMONHELPWINDOW_CTRL                 InGStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InMain                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CommonHelpWindowCtrl_C::ChangeGstatusParam(E_COMMONHELPWINDOW_CTRL InGStatus, bool InMain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ChangeGstatusParam");

	Params::BP_CommonHelpWindowCtrl_C_ChangeGstatusParam Parms{};

	Parms.InGStatus = InGStatus;
	Parms.InMain = InMain;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.Gstatus_Init
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::Gstatus_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "Gstatus_Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.Gstatus_WaitOpenWindow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::Gstatus_WaitOpenWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "Gstatus_WaitOpenWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.Gstatus_WaitSetText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::Gstatus_WaitSetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "Gstatus_WaitSetText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.Gstatus_WaitCloseWindow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::Gstatus_WaitCloseWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "Gstatus_WaitCloseWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.Gstatus_End
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::Gstatus_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "Gstatus_End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ClearAllScriptMessageAsset
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CommonHelpWindowCtrl_C::ClearAllScriptMessageAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ClearAllScriptMessageAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.IsOpendWindow
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CommonHelpWindowCtrl_C::IsOpendWindow(bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "IsOpendWindow");

	Params::BP_CommonHelpWindowCtrl_C_IsOpendWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowIsClosed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutFinished                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowIsClosed(bool* OutFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowIsClosed");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowIsClosed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutFinished != nullptr)
		*OutFinished = Parms.OutFinished;
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowIsOpened
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutFinished                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowIsOpened(bool* OutFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowIsOpened");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowIsOpened Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutFinished != nullptr)
		*OutFinished = Parms.OutFinished;
}


// Function BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C.ICommonHelpWindowGetWidgetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Visibility                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonHelpWindowCtrl_C::ICommonHelpWindowGetWidgetVisibility(ESlateVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonHelpWindowCtrl_C", "ICommonHelpWindowGetWidgetVisibility");

	Params::BP_CommonHelpWindowCtrl_C_ICommonHelpWindowGetWidgetVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;
}

}

