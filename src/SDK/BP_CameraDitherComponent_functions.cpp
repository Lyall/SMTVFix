#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraDitherComponent

#include "Basic.hpp"

#include "BP_CameraDitherComponent_classes.hpp"
#include "BP_CameraDitherComponent_parameters.hpp"


namespace SDK
{

// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.ExecuteUbergraph_BP_CameraDitherComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraDitherComponent_C::ExecuteUbergraph_BP_CameraDitherComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "ExecuteUbergraph_BP_CameraDitherComponent");

	Params::BP_CameraDitherComponent_C_ExecuteUbergraph_BP_CameraDitherComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.ManualTick
// (BlueprintCallable, BlueprintEvent)

void UBP_CameraDitherComponent_C::ManualTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "ManualTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraDitherComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "ReceiveTick");

	Params::BP_CameraDitherComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CameraDitherComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.BP Trace For Masking Objects
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<struct FHitResult>               OutHits                                                (Parm, OutParm, ContainsInstancedReference)

bool UBP_CameraDitherComponent_C::BP_Trace_For_Masking_Objects(TArray<struct FHitResult>* OutHits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "BP Trace For Masking Objects");

	Params::BP_CameraDitherComponent_C_BP_Trace_For_Masking_Objects Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutHits != nullptr)
		*OutHits = std::move(Parms.OutHits);

	return Parms.ReturnValue;
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.Initialize Dither Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*              CameraBoom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCapsuleComponent*                CapsuleComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*                 FollowCamera                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraDitherComponent_C::Initialize_Dither_Component(class USpringArmComponent* CameraBoom, class UCapsuleComponent* CapsuleComponent, class UCameraComponent* FollowCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "Initialize Dither Component");

	Params::BP_CameraDitherComponent_C_Initialize_Dither_Component Parms{};

	Parms.CameraBoom = CameraBoom;
	Parms.CapsuleComponent = CapsuleComponent;
	Parms.FollowCamera = FollowCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.DebugTraceForDitherArea
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDithering                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CameraDitherComponent_C::DebugTraceForDitherArea(bool IsDithering)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "DebugTraceForDitherArea");

	Params::BP_CameraDitherComponent_C_DebugTraceForDitherArea Parms{};

	Parms.IsDithering = IsDithering;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.BP CalcHitlocation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBP_CameraDitherComponent_C::BP_CalcHitlocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "BP CalcHitlocation");

	Params::BP_CameraDitherComponent_C_BP_CalcHitlocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.SetVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CameraDitherComponent_C::SetVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "SetVariables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.Set Trace Collisions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TraceHeight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TraceWidth                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TraceHeightOffset                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraDitherComponent_C::Set_Trace_Collisions(float TraceHeight, float TraceWidth, float TraceHeightOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "Set Trace Collisions");

	Params::BP_CameraDitherComponent_C_Set_Trace_Collisions Parms{};

	Parms.TraceHeight = TraceHeight;
	Parms.TraceWidth = TraceWidth;
	Parms.TraceHeightOffset = TraceHeightOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.ToggleDitherState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewDitherState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CameraDitherComponent_C::ToggleDitherState(bool NewDitherState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "ToggleDitherState");

	Params::BP_CameraDitherComponent_C_ToggleDitherState Parms{};

	Parms.NewDitherState = NewDitherState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.TempToggleDitherState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ForceDitherOff                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CameraDitherComponent_C::TempToggleDitherState(bool ForceDitherOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "TempToggleDitherState");

	Params::BP_CameraDitherComponent_C_TempToggleDitherState Parms{};

	Parms.ForceDitherOff = ForceDitherOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.Mask Foliage
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CameraDitherComponent_C::Mask_Foliage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "Mask Foliage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.TempToggleDitherState_Immediate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ForceDitherOff                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CameraDitherComponent_C::TempToggleDitherState_Immediate(bool ForceDitherOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "TempToggleDitherState_Immediate");

	Params::BP_CameraDitherComponent_C_TempToggleDitherState_Immediate Parms{};

	Parms.ForceDitherOff = ForceDitherOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraDitherComponent.BP_CameraDitherComponent_C.BPI_TempToggleDitherState_Immediate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ForceDitherOff                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CameraDitherComponent_C::BPI_TempToggleDitherState_Immediate(bool ForceDitherOff, bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraDitherComponent_C", "BPI_TempToggleDitherState_Immediate");

	Params::BP_CameraDitherComponent_C_BPI_TempToggleDitherState_Immediate Parms{};

	Parms.ForceDitherOff = ForceDitherOff;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}

}

