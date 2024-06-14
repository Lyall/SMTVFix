#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MouseIcon

#include "Basic.hpp"

#include "WB_MouseIcon_classes.hpp"
#include "WB_MouseIcon_parameters.hpp"


namespace SDK
{

// Function WB_MouseIcon.WB_MouseIcon_C.ExecuteUbergraph_WB_MouseIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MouseIcon_C::ExecuteUbergraph_WB_MouseIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MouseIcon_C", "ExecuteUbergraph_WB_MouseIcon");

	Params::WB_MouseIcon_C_ExecuteUbergraph_WB_MouseIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MouseIcon.WB_MouseIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MouseIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MouseIcon_C", "PreConstruct");

	Params::WB_MouseIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MouseIcon.WB_MouseIcon_C.BPI_SetIconSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_ICON_SIZE                         InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MouseIcon_C::BPI_SetIconSize(E_BTN_ICON_SIZE InSize, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MouseIcon_C", "BPI_SetIconSize");

	Params::WB_MouseIcon_C_BPI_SetIconSize Parms{};

	Parms.InSize = InSize;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function WB_MouseIcon.WB_MouseIcon_C.BPI_SetIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_MOUSE_ICON_TYPE              InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MouseIcon_C::BPI_SetIcon(E_BTN_HELP_MOUSE_ICON_TYPE InType, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MouseIcon_C", "BPI_SetIcon");

	Params::WB_MouseIcon_C_BPI_SetIcon Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function WB_MouseIcon.WB_MouseIcon_C.BPI_SetIconColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MouseIcon_C::BPI_SetIconColor(const struct FLinearColor& InColor, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MouseIcon_C", "BPI_SetIconColor");

	Params::WB_MouseIcon_C_BPI_SetIconColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function WB_MouseIcon.WB_MouseIcon_C.BPI_SetIconColor_ByActiveState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActiveColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MouseIcon_C::BPI_SetIconColor_ByActiveState(bool IsActiveColor, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MouseIcon_C", "BPI_SetIconColor_ByActiveState");

	Params::WB_MouseIcon_C_BPI_SetIconColor_ByActiveState Parms{};

	Parms.IsActiveColor = IsActiveColor;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}

}

