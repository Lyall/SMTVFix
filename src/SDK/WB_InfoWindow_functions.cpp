#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_InfoWindow

#include "Basic.hpp"

#include "WB_InfoWindow_classes.hpp"
#include "WB_InfoWindow_parameters.hpp"


namespace SDK
{

// Function WB_InfoWindow.WB_InfoWindow_C.ExecuteUbergraph_WB_InfoWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InfoWindow_C::ExecuteUbergraph_WB_InfoWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "ExecuteUbergraph_WB_InfoWindow");

	Params::WB_InfoWindow_C_ExecuteUbergraph_WB_InfoWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_InfoWindow.WB_InfoWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_InfoWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_InfoWindow.WB_InfoWindow_C.InfoWindowOpen
// (BlueprintCallable, BlueprintEvent)

void UWB_InfoWindow_C::InfoWindowOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "InfoWindowOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_InfoWindow.WB_InfoWindow_C.ExecutionInfoWindowClose
// (BlueprintCallable, BlueprintEvent)

void UWB_InfoWindow_C::ExecutionInfoWindowClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "ExecutionInfoWindowClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_InfoWindow.WB_InfoWindow_C.ExecutionInfoWindowOpen
// (BlueprintCallable, BlueprintEvent)

void UWB_InfoWindow_C::ExecutionInfoWindowOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "ExecutionInfoWindowOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_InfoWindow.WB_InfoWindow_C.BndEvt__SsPlayerInfoWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InfoWindow_C::BndEvt__SsPlayerInfoWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "BndEvt__SsPlayerInfoWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_InfoWindow_C_BndEvt__SsPlayerInfoWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_InfoWindow.WB_InfoWindow_C.InfoWindowClose
// (BlueprintCallable, BlueprintEvent)

void UWB_InfoWindow_C::InfoWindowClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "InfoWindowClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_InfoWindow.WB_InfoWindow_C.IsFinishedOpenWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutFinished                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InfoWindow_C::IsFinishedOpenWindow(bool* OutFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "IsFinishedOpenWindow");

	Params::WB_InfoWindow_C_IsFinishedOpenWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutFinished != nullptr)
		*OutFinished = Parms.OutFinished;
}


// Function WB_InfoWindow.WB_InfoWindow_C.IsFinishedCloseWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutFinished                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InfoWindow_C::IsFinishedCloseWindow(bool* OutFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "IsFinishedCloseWindow");

	Params::WB_InfoWindow_C_IsFinishedCloseWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutFinished != nullptr)
		*OutFinished = Parms.OutFinished;
}


// Function WB_InfoWindow.WB_InfoWindow_C.SetInfoText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InExecutionText                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InfoWindow_C::SetInfoText(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, bool InExecutionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "SetInfoText");

	Params::WB_InfoWindow_C_SetInfoText Parms{};

	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InLabel = InLabel;
	Parms.InExecutionText = InExecutionText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_InfoWindow.WB_InfoWindow_C.SetInfoTextByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InExecutionText                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InfoWindow_C::SetInfoTextByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, bool InExecutionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "SetInfoTextByIndex");

	Params::WB_InfoWindow_C_SetInfoTextByIndex Parms{};

	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InIndex = InIndex;
	Parms.InExecutionText = InExecutionText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_InfoWindow.WB_InfoWindow_C.ClearInfoText
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_InfoWindow_C::ClearInfoText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "ClearInfoText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_InfoWindow.WB_InfoWindow_C.SetInfoRichTextProgramValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_InfoWindow_C::SetInfoRichTextProgramValue(int32 InIndex, const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "SetInfoRichTextProgramValue");

	Params::WB_InfoWindow_C_SetInfoRichTextProgramValue Parms{};

	Parms.InIndex = InIndex;
	Parms.InString = std::move(InString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_InfoWindow.WB_InfoWindow_C.SetInfoRichTextValueParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InValeParam                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InfoWindow_C::SetInfoRichTextValueParam(int32 InIndex, int32 InValeParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_InfoWindow_C", "SetInfoRichTextValueParam");

	Params::WB_InfoWindow_C_SetInfoRichTextValueParam Parms{};

	Parms.InIndex = InIndex;
	Parms.InValeParam = InValeParam;

	UObject::ProcessEvent(Func, &Parms);
}

}

