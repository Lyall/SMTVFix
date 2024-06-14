#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MoonAgeCtrl

#include "Basic.hpp"

#include "BP_MoonAgeCtrl_classes.hpp"
#include "BP_MoonAgeCtrl_parameters.hpp"


namespace SDK
{

// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.ExecuteUbergraph_BP_MoonAgeCtrl
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonAgeCtrl_C::ExecuteUbergraph_BP_MoonAgeCtrl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "ExecuteUbergraph_BP_MoonAgeCtrl");

	Params::BP_MoonAgeCtrl_C_ExecuteUbergraph_BP_MoonAgeCtrl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_SetMoonAgeCntUpdateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InSecond                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonAgeCtrl_C::BPI_SetMoonAgeCntUpdateTime(float InSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_SetMoonAgeCntUpdateTime");

	Params::BP_MoonAgeCtrl_C_BPI_SetMoonAgeCntUpdateTime Parms{};

	Parms.InSecond = InSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_AddPlayerMoveCount_TokyoLargeMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDeltaSeconds                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonAgeCtrl_C::BPI_AddPlayerMoveCount_TokyoLargeMap(float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_AddPlayerMoveCount_TokyoLargeMap");

	Params::BP_MoonAgeCtrl_C_BPI_AddPlayerMoveCount_TokyoLargeMap Parms{};

	Parms.InDeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_AddPlayerMoveCount_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDeltaSeconds                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonAgeCtrl_C::BPI_AddPlayerMoveCount_Normal(float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_AddPlayerMoveCount_Normal");

	Params::BP_MoonAgeCtrl_C_BPI_AddPlayerMoveCount_Normal Parms{};

	Parms.InDeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.AddToScreenWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MoonAgeCtrl_C::AddToScreenWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "AddToScreenWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_ResetMoonAge
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MoonAgeCtrl_C::BPI_ResetMoonAge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_ResetMoonAge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_AddMoonAge
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MoonAgeCtrl_C::BPI_AddMoonAge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_AddMoonAge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_SetMoonAge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MOON_AGE                              InMoonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonAgeCtrl_C::BPI_SetMoonAge(E_MOON_AGE InMoonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_SetMoonAge");

	Params::BP_MoonAgeCtrl_C_BPI_SetMoonAge Parms{};

	Parms.InMoonType = InMoonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_CloseMoonAge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MoonAgeCtrl_C::BPI_CloseMoonAge(bool InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_CloseMoonAge");

	Params::BP_MoonAgeCtrl_C_BPI_CloseMoonAge Parms{};

	Parms.InAnimation = InAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_OpenMoonAge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MoonAgeCtrl_C::BPI_OpenMoonAge(bool InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_OpenMoonAge");

	Params::BP_MoonAgeCtrl_C_BPI_OpenMoonAge Parms{};

	Parms.InAnimation = InAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MoonAgeCtrl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.PlayMoonChangeSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MoonAgeCtrl_C::PlayMoonChangeSE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "PlayMoonChangeSE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.SetWidgetAnimState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MoonAgeAnimationState                 InAnimState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonAgeCtrl_C::SetWidgetAnimState(E_MoonAgeAnimationState InAnimState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "SetWidgetAnimState");

	Params::BP_MoonAgeCtrl_C_SetWidgetAnimState Parms{};

	Parms.InAnimState = InAnimState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.AddPlayerMoveCnt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLargeMap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   InDeltaSeconds                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonAgeCtrl_C::AddPlayerMoveCnt(bool IsLargeMap, float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "AddPlayerMoveCnt");

	Params::BP_MoonAgeCtrl_C_AddPlayerMoveCnt Parms{};

	Parms.IsLargeMap = IsLargeMap;
	Parms.InDeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_GetMoonAgeAnimState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MoonAgeAnimationState                 OutState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonAgeCtrl_C::BPI_GetMoonAgeAnimState(E_MoonAgeAnimationState* OutState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_GetMoonAgeAnimState");

	Params::BP_MoonAgeCtrl_C_BPI_GetMoonAgeAnimState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutState != nullptr)
		*OutState = Parms.OutState;
}


// Function BP_MoonAgeCtrl.BP_MoonAgeCtrl_C.BPI_GetMoonAgeCntUpdateTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CounterUpdateTime                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonAgeCtrl_C::BPI_GetMoonAgeCntUpdateTime(float* CounterUpdateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonAgeCtrl_C", "BPI_GetMoonAgeCntUpdateTime");

	Params::BP_MoonAgeCtrl_C_BPI_GetMoonAgeCntUpdateTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CounterUpdateTime != nullptr)
		*CounterUpdateTime = Parms.CounterUpdateTime;
}

}
