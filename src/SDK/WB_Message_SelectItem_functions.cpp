#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Message_SelectItem

#include "Basic.hpp"

#include "WB_Message_SelectItem_classes.hpp"
#include "WB_Message_SelectItem_parameters.hpp"


namespace SDK
{

// Function WB_Message_SelectItem.WB_Message_SelectItem_C.ExecuteUbergraph_WB_Message_SelectItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_SelectItem_C::ExecuteUbergraph_WB_Message_SelectItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_SelectItem_C", "ExecuteUbergraph_WB_Message_SelectItem");

	Params::WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_SelectItem.WB_Message_SelectItem_C.Setting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessage                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMessageData                     Param_MessageData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Message_SelectItem_C::Setting(const class UScriptMessageAsset* InScriptMessage, const struct FMessageData& Param_MessageData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_SelectItem_C", "Setting");

	Params::WB_Message_SelectItem_C_Setting Parms{};

	Parms.InScriptMessage = InScriptMessage;
	Parms.Param_MessageData = std::move(Param_MessageData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_SelectItem.WB_Message_SelectItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_SelectItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_SelectItem_C", "PreConstruct");

	Params::WB_Message_SelectItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_SelectItem.WB_Message_SelectItem_C.SetSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_SelectItem_C::SetSelect(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_SelectItem_C", "SetSelect");

	Params::WB_Message_SelectItem_C_SetSelect Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);
}

}
