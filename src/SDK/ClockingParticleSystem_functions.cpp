#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClockingParticleSystem

#include "Basic.hpp"

#include "ClockingParticleSystem_classes.hpp"
#include "ClockingParticleSystem_parameters.hpp"


namespace SDK
{

// Function ClockingParticleSystem.ClockingParticleSystem_C.ExecuteUbergraph_ClockingParticleSystem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClockingParticleSystem_C::ExecuteUbergraph_ClockingParticleSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClockingParticleSystem_C", "ExecuteUbergraph_ClockingParticleSystem");

	Params::ClockingParticleSystem_C_ExecuteUbergraph_ClockingParticleSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClockingParticleSystem.ClockingParticleSystem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClockingParticleSystem_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClockingParticleSystem_C", "ReceiveTick");

	Params::ClockingParticleSystem_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClockingParticleSystem.ClockingParticleSystem_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UClockingParticleSystem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClockingParticleSystem_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ClockingParticleSystem.ClockingParticleSystem_C.GetSpendSec
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Param_SpendSec                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClockingParticleSystem_C::GetSpendSec(float* Param_SpendSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClockingParticleSystem_C", "GetSpendSec");

	Params::ClockingParticleSystem_C_GetSpendSec Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SpendSec != nullptr)
		*Param_SpendSec = Parms.Param_SpendSec;
}


// Function ClockingParticleSystem.ClockingParticleSystem_C.SpawnEmitterAttached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*                  EmitterTemplate                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  AttachToComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AttachPointName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EAttachLocation                         LocationType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCastShadow                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAutoDestroy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClockingParticleSystem_C::SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, EAttachLocation LocationType, bool IsCastShadow, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClockingParticleSystem_C", "SpawnEmitterAttached");

	Params::ClockingParticleSystem_C_SpawnEmitterAttached Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.Scale = std::move(Scale);
	Parms.LocationType = LocationType;
	Parms.IsCastShadow = IsCastShadow;
	Parms.bAutoDestroy = bAutoDestroy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClockingParticleSystem.ClockingParticleSystem_C.GetSpawnedEmitter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*         Param_SpawnedEmitter                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClockingParticleSystem_C::GetSpawnedEmitter(class UParticleSystemComponent** Param_SpawnedEmitter, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClockingParticleSystem_C", "GetSpawnedEmitter");

	Params::ClockingParticleSystem_C_GetSpawnedEmitter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SpawnedEmitter != nullptr)
		*Param_SpawnedEmitter = Parms.Param_SpawnedEmitter;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}

}

