#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ProjectPlayerController

#include "Basic.hpp"

#include "BPI_ProjectPlayerController_classes.hpp"
#include "BPI_ProjectPlayerController_parameters.hpp"


namespace SDK
{

// Function BPI_ProjectPlayerController.BPI_ProjectPlayerController_C.GetInitRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         InitRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_ProjectPlayerController_C::GetInitRotation(struct FRotator* InitRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_ProjectPlayerController_C", "GetInitRotation");

	Params::BPI_ProjectPlayerController_C_GetInitRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitRotation != nullptr)
		*InitRotation = std::move(Parms.InitRotation);
}


// Function BPI_ProjectPlayerController.BPI_ProjectPlayerController_C.CalcCameraSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_AXIS_MAPPING_TYPE                     CameraAxis                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InputSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMouseInput                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CameraSpeed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ProjectPlayerController_C::CalcCameraSpeed(E_AXIS_MAPPING_TYPE CameraAxis, float InputSpeed, bool IsMouseInput, float* CameraSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_ProjectPlayerController_C", "CalcCameraSpeed");

	Params::BPI_ProjectPlayerController_C_CalcCameraSpeed Parms{};

	Parms.CameraAxis = CameraAxis;
	Parms.InputSpeed = InputSpeed;
	Parms.IsMouseInput = IsMouseInput;

	UObject::ProcessEvent(Func, &Parms);

	if (CameraSpeed != nullptr)
		*CameraSpeed = Parms.CameraSpeed;
}

}

