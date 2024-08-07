#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventScriptCamera

#include "Basic.hpp"

#include "BP_EventScriptCamera_classes.hpp"
#include "BP_EventScriptCamera_parameters.hpp"


namespace SDK
{

// Function BP_EventScriptCamera.BP_EventScriptCamera_C.ExecuteUbergraph_BP_EventScriptCamera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::ExecuteUbergraph_BP_EventScriptCamera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "ExecuteUbergraph_BP_EventScriptCamera");

	Params::BP_EventScriptCamera_C_ExecuteUbergraph_BP_EventScriptCamera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EventScriptCamera_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.CheckStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::CheckStart(float Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "CheckStart");

	Params::BP_EventScriptCamera_C_CheckStart Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "ReceiveTick");

	Params::BP_EventScriptCamera_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.InitializeCore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ArmLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FieldOfView                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CameraRot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::InitializeCore(float ArmLength, float FieldOfView, float BlendTime, float CameraRot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "InitializeCore");

	Params::BP_EventScriptCamera_C_InitializeCore Parms{};

	Parms.ArmLength = ArmLength;
	Parms.FieldOfView = FieldOfView;
	Parms.BlendTime = BlendTime;
	Parms.CameraRot = CameraRot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.CheckFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::CheckFinish(float Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "CheckFinish");

	Params::BP_EventScriptCamera_C_CheckFinish Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ArmLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FieldOfView                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CameraRot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::Initialize(float ArmLength, float FieldOfView, float BlendTime, float CameraRot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "Initialize");

	Params::BP_EventScriptCamera_C_Initialize Parms{};

	Parms.ArmLength = ArmLength;
	Parms.FieldOfView = FieldOfView;
	Parms.BlendTime = BlendTime;
	Parms.CameraRot = CameraRot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::Finalize(float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "Finalize");

	Params::BP_EventScriptCamera_C_Finalize Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.ReturnCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::ReturnCamera(float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "ReturnCamera");

	Params::BP_EventScriptCamera_C_ReturnCamera Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.MovePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::MovePosition(const struct FVector& Location, float Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "MovePosition");

	Params::BP_EventScriptCamera_C_MovePosition Parms{};

	Parms.Location = std::move(Location);
	Parms.Param_Time = Param_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.SetKeyFree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_KeyFree                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventScriptCamera_C::SetKeyFree(bool Param_KeyFree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "SetKeyFree");

	Params::BP_EventScriptCamera_C_SetKeyFree Parms{};

	Parms.Param_KeyFree = Param_KeyFree;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.GetRotateScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_AXIS_MAPPING_TYPE                     Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RotateScale                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::GetRotateScale(E_AXIS_MAPPING_TYPE Axis, float* RotateScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "GetRotateScale");

	Params::BP_EventScriptCamera_C_GetRotateScale Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

	if (RotateScale != nullptr)
		*RotateScale = Parms.RotateScale;
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.CheckMouseButtonDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptCamera_C::CheckMouseButtonDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "CheckMouseButtonDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventScriptCamera.BP_EventScriptCamera_C.GetMouseAxis
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_AXIS_MAPPING_TYPE                     AxisMapping                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Axis                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventScriptCamera_C::GetMouseAxis(E_AXIS_MAPPING_TYPE AxisMapping, float* Axis)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventScriptCamera_C", "GetMouseAxis");

	Params::BP_EventScriptCamera_C_GetMouseAxis Parms{};

	Parms.AxisMapping = AxisMapping;

	UObject::ProcessEvent(Func, &Parms);

	if (Axis != nullptr)
		*Axis = Parms.Axis;
}

}

