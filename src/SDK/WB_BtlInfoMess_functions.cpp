#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtlInfoMess

#include "Basic.hpp"

#include "WB_BtlInfoMess_classes.hpp"
#include "WB_BtlInfoMess_parameters.hpp"


namespace SDK
{

// Function WB_BtlInfoMess.WB_BtlInfoMess_C.ShowBySkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           SrcActorName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           DstActorName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsMaster                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OverwriteSkillMesID                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtlInfoMess_C::ShowBySkill(int32 SkillId, const class FString& SrcActorName, const class FString& DstActorName, bool IsMaster, int32 OverwriteSkillMesID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "ShowBySkill");

	Params::WB_BtlInfoMess_C_ShowBySkill Parms{};

	Parms.SkillId = SkillId;
	Parms.SrcActorName = std::move(SrcActorName);
	Parms.DstActorName = std::move(DstActorName);
	Parms.IsMaster = IsMaster;
	Parms.OverwriteSkillMesID = OverwriteSkillMesID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtlInfoMess_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.EndSeq
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtlInfoMess_C::EndSeq()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "EndSeq");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.IsAnimationExcuting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlInfoMess_C::IsAnimationExcuting(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "IsAnimationExcuting");

	Params::WB_BtlInfoMess_C_IsAnimationExcuting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.isDispOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlInfoMess_C::IsDispOn(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "isDispOn");

	Params::WB_BtlInfoMess_C_IsDispOn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.ShowExtActMess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTL_EXTRA_ACTION                      MessageIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   ProgramStr                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_BtlInfoMess_C::ShowExtActMess(E_BTL_EXTRA_ACTION MessageIndex, TArray<class FString>& ProgramStr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "ShowExtActMess");

	Params::WB_BtlInfoMess_C_ShowExtActMess Parms{};

	Parms.MessageIndex = MessageIndex;
	Parms.ProgramStr = std::move(ProgramStr);

	UObject::ProcessEvent(Func, &Parms);

	ProgramStr = std::move(Parms.ProgramStr);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtlInfoMess_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.ShowByCommonMess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MessageID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtlInfoMess_C::ShowByCommonMess(int32 MessageID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "ShowByCommonMess");

	Params::WB_BtlInfoMess_C_ShowByCommonMess Parms{};

	Parms.MessageID = MessageID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.ReserveCommonInfoTagParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           String                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_BtlInfoMess_C::ReserveCommonInfoTagParam(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "ReserveCommonInfoTagParam");

	Params::WB_BtlInfoMess_C_ReserveCommonInfoTagParam Parms{};

	Parms.String = std::move(String);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.SetWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlInfoMess_C::SetWidgetVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "SetWidgetVisibility");

	Params::WB_BtlInfoMess_C_SetWidgetVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.ShowByCommonMessLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MessageIDLabel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SelectSkillScriptMessage                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlInfoMess_C::ShowByCommonMessLabel(class FName MessageIDLabel, bool SelectSkillScriptMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "ShowByCommonMessLabel");

	Params::WB_BtlInfoMess_C_ShowByCommonMessLabel Parms{};

	Parms.MessageIDLabel = MessageIDLabel;
	Parms.SelectSkillScriptMessage = SelectSkillScriptMessage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.ShowInfoWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMessageId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   InProgramValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_BtlInfoMess_C::ShowInfoWindow(class UScriptMessageAsset* InScriptMessage, int32 InMessageId, TArray<class FString>& InProgramValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "ShowInfoWindow");

	Params::WB_BtlInfoMess_C_ShowInfoWindow Parms{};

	Parms.InScriptMessage = InScriptMessage;
	Parms.InMessageId = InMessageId;
	Parms.InProgramValue = std::move(InProgramValue);

	UObject::ProcessEvent(Func, &Parms);

	InProgramValue = std::move(Parms.InProgramValue);
}


// Function WB_BtlInfoMess.WB_BtlInfoMess_C.ShowInfoWindowByLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InMessageIDLabel                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   InProgramValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_BtlInfoMess_C::ShowInfoWindowByLabel(class UScriptMessageAsset* InScriptMessage, class FName InMessageIDLabel, TArray<class FString>& InProgramValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlInfoMess_C", "ShowInfoWindowByLabel");

	Params::WB_BtlInfoMess_C_ShowInfoWindowByLabel Parms{};

	Parms.InScriptMessage = InScriptMessage;
	Parms.InMessageIDLabel = InMessageIDLabel;
	Parms.InProgramValue = std::move(InProgramValue);

	UObject::ProcessEvent(Func, &Parms);

	InProgramValue = std::move(Parms.InProgramValue);
}

}
