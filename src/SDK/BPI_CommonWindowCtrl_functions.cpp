#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CommonWindowCtrl

#include "Basic.hpp"

#include "BPI_CommonWindowCtrl_classes.hpp"
#include "BPI_CommonWindowCtrl_parameters.hpp"


namespace SDK
{

// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOpenByLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CommonWindowCtrl_C::IActionWindowOpenByLabel(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, int32 InIconType, int32 InIconColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommonWindowCtrl_C", "IActionWindowOpenByLabel");

	Params::BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel Parms{};

	Parms.InPriority = InPriority;
	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InLabel = InLabel;
	Parms.InIconType = InIconType;
	Parms.InIconColor = InIconColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowClose
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CommonWindowCtrl_C::IActionWindowClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommonWindowCtrl_C", "IActionWindowClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowIsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutActive                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CommonWindowCtrl_C::IActionWindowIsActive(bool* OutActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommonWindowCtrl_C", "IActionWindowIsActive");

	Params::BPI_CommonWindowCtrl_C_IActionWindowIsActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutActive != nullptr)
		*OutActive = Parms.OutActive;
}


// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOn
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CommonWindowCtrl_C::IActionWindowOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommonWindowCtrl_C", "IActionWindowOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOff
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CommonWindowCtrl_C::IActionWindowOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommonWindowCtrl_C", "IActionWindowOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOpenByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CommonWindowCtrl_C::IActionWindowOpenByIndex(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, int32 InIconType, int32 InIconColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommonWindowCtrl_C", "IActionWindowOpenByIndex");

	Params::BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex Parms{};

	Parms.InPriority = InPriority;
	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InIndex = InIndex;
	Parms.InIconType = InIconType;
	Parms.InIconColor = InIconColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOpenWithActionSpecifiedByLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_MAPPING_KEY_TYPE             InAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CommonWindowCtrl_C::IActionWindowOpenWithActionSpecifiedByLabel(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, E_BTN_HELP_MAPPING_KEY_TYPE InAction, int32 InIconColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommonWindowCtrl_C", "IActionWindowOpenWithActionSpecifiedByLabel");

	Params::BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel Parms{};

	Parms.InPriority = InPriority;
	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InLabel = InLabel;
	Parms.InAction = InAction;
	Parms.InIconColor = InIconColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOpenWithActionSpecifiedByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_MAPPING_KEY_TYPE             InAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CommonWindowCtrl_C::IActionWindowOpenWithActionSpecifiedByIndex(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, E_BTN_HELP_MAPPING_KEY_TYPE InAction, int32 InIconColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommonWindowCtrl_C", "IActionWindowOpenWithActionSpecifiedByIndex");

	Params::BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex Parms{};

	Parms.InPriority = InPriority;
	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InIndex = InIndex;
	Parms.InAction = InAction;
	Parms.InIconColor = InIconColor;

	UObject::ProcessEvent(Func, &Parms);
}

}

