#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_NNumberIcon05

#include "Basic.hpp"

#include "WB_NNumberIcon05_classes.hpp"
#include "WB_NNumberIcon05_parameters.hpp"


namespace SDK
{

// Function WB_NNumberIcon05.WB_NNumberIcon05_C.ExecuteUbergraph_WB_NNumberIcon05
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NNumberIcon05_C::ExecuteUbergraph_WB_NNumberIcon05(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NNumberIcon05_C", "ExecuteUbergraph_WB_NNumberIcon05");

	Params::WB_NNumberIcon05_C_ExecuteUbergraph_WB_NNumberIcon05 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NNumberIcon05.WB_NNumberIcon05_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_NNumberIcon05_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NNumberIcon05_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_NNumberIcon05.WB_NNumberIcon05_C.SetNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InZeroSpace                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_NNumberIcon05_C::SetNumber(int32 InParam, bool InZeroSpace, bool InLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NNumberIcon05_C", "SetNumber");

	Params::WB_NNumberIcon05_C_SetNumber Parms{};

	Parms.InParam = InParam;
	Parms.InZeroSpace = InZeroSpace;
	Parms.InLeft = InLeft;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NNumberIcon05.WB_NNumberIcon05_C.SetNumberDisp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        InDisp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NNumberIcon05_C::SetNumberDisp(int32 InIndex, ESlateVisibility InDisp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NNumberIcon05_C", "SetNumberDisp");

	Params::WB_NNumberIcon05_C_SetNumberDisp Parms{};

	Parms.InIndex = InIndex;
	Parms.InDisp = InDisp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NNumberIcon05.WB_NNumberIcon05_C.GetImageNo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InDigit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           OutImage                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NNumberIcon05_C::GetImageNo(int32 InDigit, class UImage** OutImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NNumberIcon05_C", "GetImageNo");

	Params::WB_NNumberIcon05_C_GetImageNo Parms{};

	Parms.InDigit = InDigit;

	UObject::ProcessEvent(Func, &Parms);

	if (OutImage != nullptr)
		*OutImage = Parms.OutImage;
}


// Function WB_NNumberIcon05.WB_NNumberIcon05_C.SetFontColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InColorType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NNumberIcon05_C::SetFontColor(int32 InColorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NNumberIcon05_C", "SetFontColor");

	Params::WB_NNumberIcon05_C_SetFontColor Parms{};

	Parms.InColorType = InColorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NNumberIcon05.WB_NNumberIcon05_C.SetQuestion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InDigits                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InZeroSpace                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_NNumberIcon05_C::SetQuestion(int32 InDigits, bool InZeroSpace, bool InLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NNumberIcon05_C", "SetQuestion");

	Params::WB_NNumberIcon05_C_SetQuestion Parms{};

	Parms.InDigits = InDigits;
	Parms.InZeroSpace = InZeroSpace;
	Parms.InLeft = InLeft;

	UObject::ProcessEvent(Func, &Parms);
}

}
