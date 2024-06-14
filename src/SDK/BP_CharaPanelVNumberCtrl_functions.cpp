#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharaPanelVNumberCtrl

#include "Basic.hpp"

#include "BP_CharaPanelVNumberCtrl_classes.hpp"
#include "BP_CharaPanelVNumberCtrl_parameters.hpp"


namespace SDK
{

// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.ExecuteUbergraph_BP_CharaPanelVNumberCtrl
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharaPanelVNumberCtrl_C::ExecuteUbergraph_BP_CharaPanelVNumberCtrl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "ExecuteUbergraph_BP_CharaPanelVNumberCtrl");

	Params::BP_CharaPanelVNumberCtrl_C_ExecuteUbergraph_BP_CharaPanelVNumberCtrl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharaPanelVNumberCtrl_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "ReceiveEndPlay");

	Params::BP_CharaPanelVNumberCtrl_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharaPanelVNumberCtrl_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "ReceiveTick");

	Params::BP_CharaPanelVNumberCtrl_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CharaPanelVNumberCtrl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.clearvnumber
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaPanelVNumberCtrl_C::Clearvnumber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "clearvnumber");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.StartNumberAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InStartTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InAddVec                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharaPanelVNumberCtrl_C::StartNumberAnimation(float InStartTime, const struct FVector2D& InAddVec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "StartNumberAnimation");

	Params::BP_CharaPanelVNumberCtrl_C_StartNumberAnimation Parms{};

	Parms.InStartTime = InStartTime;
	Parms.InAddVec = std::move(InAddVec);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.BIESetStartFadeOutVNumberAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InDataType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharaPanelVNumberCtrl_C::BIESetStartFadeOutVNumberAnimation(int32 InIndex, int32 InDataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "BIESetStartFadeOutVNumberAnimation");

	Params::BP_CharaPanelVNumberCtrl_C_BIESetStartFadeOutVNumberAnimation Parms{};

	Parms.InIndex = InIndex;
	Parms.InDataType = InDataType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.SetWidgetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPrio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharaPanelVNumberCtrl_C::SetWidgetData(E_WIDGET_PRIO InPrio, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "SetWidgetData");

	Params::BP_CharaPanelVNumberCtrl_C_SetWidgetData Parms{};

	Parms.InPrio = InPrio;
	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.BIESetInitializeVNumberAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InDataType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharaPanelVNumberCtrl_C::BIESetInitializeVNumberAnimation(int32 InIndex, int32 InDataType, int32 InNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "BIESetInitializeVNumberAnimation");

	Params::BP_CharaPanelVNumberCtrl_C_BIESetInitializeVNumberAnimation Parms{};

	Parms.InIndex = InIndex;
	Parms.InDataType = InDataType;
	Parms.InNumber = InNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.StopNumberAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_CharaPanelVNumberCtrl_C::StopNumberAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "StopNumberAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.GetMovePosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   OutYPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharaPanelVNumberCtrl_C::GetMovePosition(float* OutYPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "GetMovePosition");

	Params::BP_CharaPanelVNumberCtrl_C_GetMovePosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutYPosition != nullptr)
		*OutYPosition = Parms.OutYPosition;
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.CalcMove
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CharaPanelVNumberCtrl_C::CalcMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "CalcMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C.SetAnimationRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharaPanelVNumberCtrl_C::SetAnimationRate(float InRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharaPanelVNumberCtrl_C", "SetAnimationRate");

	Params::BP_CharaPanelVNumberCtrl_C_SetAnimationRate Parms{};

	Parms.InRate = InRate;

	UObject::ProcessEvent(Func, &Parms);
}

}

