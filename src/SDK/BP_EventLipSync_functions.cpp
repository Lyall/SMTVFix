#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventLipSync

#include "Basic.hpp"

#include "BP_EventLipSync_classes.hpp"
#include "BP_EventLipSync_parameters.hpp"


namespace SDK
{

// Function BP_EventLipSync.BP_EventLipSync_C.ExecuteUbergraph_BP_EventLipSync
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventLipSync_C::ExecuteUbergraph_BP_EventLipSync(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventLipSync_C", "ExecuteUbergraph_BP_EventLipSync");

	Params::BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventLipSync.BP_EventLipSync_C.Stop
// (BlueprintCallable, BlueprintEvent)

void ABP_EventLipSync_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventLipSync_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventLipSync.BP_EventLipSync_C.Start
// (BlueprintCallable, BlueprintEvent)

void ABP_EventLipSync_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventLipSync_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventLipSync.BP_EventLipSync_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventLipSync_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventLipSync_C", "ReceiveTick");

	Params::BP_EventLipSync_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventLipSync.BP_EventLipSync_C.OnLoaded_439F8D954E62CD9656376695E1D3D554
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventLipSync_C::OnLoaded_439F8D954E62CD9656376695E1D3D554(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventLipSync_C", "OnLoaded_439F8D954E62CD9656376695E1D3D554");

	Params::BP_EventLipSync_C_OnLoaded_439F8D954E62CD9656376695E1D3D554 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventLipSync.BP_EventLipSync_C.OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventLipSync_C::OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventLipSync_C", "OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431");

	Params::BP_EventLipSync_C_OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventLipSync.BP_EventLipSync_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              Param_ScriptMessageAsset                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_Label                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_SpeakingActor                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventLipSync_C::Initialize(class UScriptMessageAsset* Param_ScriptMessageAsset, class FName Param_Label, class AActor* Param_SpeakingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventLipSync_C", "Initialize");

	Params::BP_EventLipSync_C_Initialize Parms{};

	Parms.Param_ScriptMessageAsset = Param_ScriptMessageAsset;
	Parms.Param_Label = Param_Label;
	Parms.Param_SpeakingActor = Param_SpeakingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventLipSync.BP_EventLipSync_C.GetFinish
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFinish                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventLipSync_C::GetFinish(bool* IsFinish)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventLipSync_C", "GetFinish");

	Params::BP_EventLipSync_C_GetFinish Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsFinish != nullptr)
		*IsFinish = Parms.IsFinish;
}


// Function BP_EventLipSync.BP_EventLipSync_C.InitializeIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              Param_ScriptMessageAsset                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_SpeakingActor                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventLipSync_C::InitializeIndex(class UScriptMessageAsset* Param_ScriptMessageAsset, int32 Param_Index, class AActor* Param_SpeakingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventLipSync_C", "InitializeIndex");

	Params::BP_EventLipSync_C_InitializeIndex Parms{};

	Parms.Param_ScriptMessageAsset = Param_ScriptMessageAsset;
	Parms.Param_Index = Param_Index;
	Parms.Param_SpeakingActor = Param_SpeakingActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

