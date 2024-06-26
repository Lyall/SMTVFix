#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TokyoMapPlayerController

#include "Basic.hpp"

#include "TokyoMapPlayerController_classes.hpp"
#include "TokyoMapPlayerController_parameters.hpp"


namespace SDK
{

// Function TokyoMapPlayerController.TokyoMapPlayerController_C.ExecuteUbergraph_TokyoMapPlayerController
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATokyoMapPlayerController_C::ExecuteUbergraph_TokyoMapPlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerController_C", "ExecuteUbergraph_TokyoMapPlayerController");

	Params::TokyoMapPlayerController_C_ExecuteUbergraph_TokyoMapPlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokyoMapPlayerController.TokyoMapPlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATokyoMapPlayerController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerController_C", "ReceiveTick");

	Params::TokyoMapPlayerController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokyoMapPlayerController.TokyoMapPlayerController_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATokyoMapPlayerController_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerController_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");

	Params::TokyoMapPlayerController_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokyoMapPlayerController.TokyoMapPlayerController_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATokyoMapPlayerController_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerController_C", "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0");

	Params::TokyoMapPlayerController_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokyoMapPlayerController.TokyoMapPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATokyoMapPlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokyoMapPlayerController.TokyoMapPlayerController_C.MapIn__UpdateFunc
// (BlueprintEvent)

void ATokyoMapPlayerController_C::MapIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerController_C", "MapIn__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokyoMapPlayerController.TokyoMapPlayerController_C.MapIn__FinishedFunc
// (BlueprintEvent)

void ATokyoMapPlayerController_C::MapIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerController_C", "MapIn__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokyoMapPlayerController.TokyoMapPlayerController_C.CalcDash
// (Public, BlueprintCallable, BlueprintEvent)

void ATokyoMapPlayerController_C::CalcDash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerController_C", "CalcDash");

	UObject::ProcessEvent(Func, nullptr);
}

}

