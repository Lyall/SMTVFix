#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TokyoMapPlayerCameraManager

#include "Basic.hpp"

#include "TokyoMapPlayerCameraManager_classes.hpp"
#include "TokyoMapPlayerCameraManager_parameters.hpp"


namespace SDK
{

// Function TokyoMapPlayerCameraManager.TokyoMapPlayerCameraManager_C.ExecuteUbergraph_TokyoMapPlayerCameraManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATokyoMapPlayerCameraManager_C::ExecuteUbergraph_TokyoMapPlayerCameraManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerCameraManager_C", "ExecuteUbergraph_TokyoMapPlayerCameraManager");

	Params::TokyoMapPlayerCameraManager_C_ExecuteUbergraph_TokyoMapPlayerCameraManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokyoMapPlayerCameraManager.TokyoMapPlayerCameraManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATokyoMapPlayerCameraManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerCameraManager_C", "ReceiveTick");

	Params::TokyoMapPlayerCameraManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokyoMapPlayerCameraManager.TokyoMapPlayerCameraManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATokyoMapPlayerCameraManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerCameraManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokyoMapPlayerCameraManager.TokyoMapPlayerCameraManager_C.AddYawInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Val                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATokyoMapPlayerCameraManager_C::AddYawInput(float Val)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerCameraManager_C", "AddYawInput");

	Params::TokyoMapPlayerCameraManager_C_AddYawInput Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokyoMapPlayerCameraManager.TokyoMapPlayerCameraManager_C.AddPitchInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Val                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATokyoMapPlayerCameraManager_C::AddPitchInput(float Val)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerCameraManager_C", "AddPitchInput");

	Params::TokyoMapPlayerCameraManager_C_AddPitchInput Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokyoMapPlayerCameraManager.TokyoMapPlayerCameraManager_C.GetForwardVector
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATokyoMapPlayerCameraManager_C::GetForwardVector(struct FVector* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerCameraManager_C", "GetForwardVector");

	Params::TokyoMapPlayerCameraManager_C_GetForwardVector Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);
}


// Function TokyoMapPlayerCameraManager.TokyoMapPlayerCameraManager_C.GetRightVector
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ATokyoMapPlayerCameraManager_C::GetRightVector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokyoMapPlayerCameraManager_C", "GetRightVector");

	Params::TokyoMapPlayerCameraManager_C_GetRightVector Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

