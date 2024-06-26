#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharaAction

#include "Basic.hpp"

#include "BPI_CharaAction_classes.hpp"
#include "BPI_CharaAction_parameters.hpp"


namespace SDK
{

// Function BPI_CharaAction.BPI_CharaAction_C.DeathAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   InOption                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DeadTimingOverride                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   DeadTiming                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharaAction_C::DeathAction(uint8 InOption, bool DeadTimingOverride, float DeadTiming)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "DeathAction");

	Params::BPI_CharaAction_C_DeathAction Parms{};

	Parms.InOption = InOption;
	Parms.DeadTimingOverride = DeadTimingOverride;
	Parms.DeadTiming = DeadTiming;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharaAction_C::SetState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "SetState");

	Params::BPI_CharaAction_C_SetState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.SetCritical
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaAction_C::SetCritical()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "SetCritical");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaAction.BPI_CharaAction_C.ResetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharaAction_C::ResetState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "ResetState");

	Params::BPI_CharaAction_C_ResetState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.ResetCritical
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaAction_C::ResetCritical()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "ResetCritical");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaAction.BPI_CharaAction_C.KnockBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharaAction_C::KnockBack(float Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "KnockBack");

	Params::BPI_CharaAction_C_KnockBack Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.ReviveAction
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaAction_C::ReviveAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "ReviveAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaAction.BPI_CharaAction_C.SummonAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsInstantEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsInBattle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaAction_C::SummonAction(int32 CurrentStatus, bool Immediately, bool IsInstantEvent, bool IsInBattle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "SummonAction");

	Params::BPI_CharaAction_C_SummonAction Parms{};

	Parms.CurrentStatus = CurrentStatus;
	Parms.Immediately = Immediately;
	Parms.IsInstantEvent = IsInstantEvent;
	Parms.IsInBattle = IsInBattle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.ReturnAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInstantEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaAction_C::ReturnAction(float PlayRate, bool IsInstantEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "ReturnAction");

	Params::BPI_CharaAction_C_ReturnAction Parms{};

	Parms.PlayRate = PlayRate;
	Parms.IsInstantEvent = IsInstantEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.MapAttackAction
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaAction_C::MapAttackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "MapAttackAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaAction.BPI_CharaAction_C.ResetAllMaterialParam
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaAction_C::ResetAllMaterialParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "ResetAllMaterialParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaAction.BPI_CharaAction_C.MapAttachWepon
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaAction_C::MapAttachWepon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "MapAttachWepon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaAction.BPI_CharaAction_C.MapDettachWepon
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaAction_C::MapDettachWepon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "MapDettachWepon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaAction.BPI_CharaAction_C.SetCharaPlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CharaPlayRate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharaAction_C::SetCharaPlayRate(float CharaPlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "SetCharaPlayRate");

	Params::BPI_CharaAction_C_SetCharaPlayRate Parms{};

	Parms.CharaPlayRate = CharaPlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.ResetAllParticleSystem
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaAction_C::ResetAllParticleSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "ResetAllParticleSystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaAction.BPI_CharaAction_C.SpawnAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayMotion                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsInstantEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaAction_C::SpawnAction(bool PlayMotion, bool IsInstantEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "SpawnAction");

	Params::BPI_CharaAction_C_SpawnAction Parms{};

	Parms.PlayMotion = PlayMotion;
	Parms.IsInstantEvent = IsInstantEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.SetAttackAimLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GrobalLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaAction_C::SetAttackAimLocation(const struct FVector& GrobalLocation, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "SetAttackAimLocation");

	Params::BPI_CharaAction_C_SetAttackAimLocation Parms{};

	Parms.GrobalLocation = std::move(GrobalLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_CharaAction.BPI_CharaAction_C.RapidSummonAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaAction_C::RapidSummonAction(int32 CurrentStatus, bool Immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "RapidSummonAction");

	Params::BPI_CharaAction_C_RapidSummonAction Parms{};

	Parms.CurrentStatus = CurrentStatus;
	Parms.Immediately = Immediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.RapidReturnAction
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaAction_C::RapidReturnAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "RapidReturnAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaAction.BPI_CharaAction_C.SetAuraMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AuraBit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharaAction_C::SetAuraMaterial(int32 AuraBit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "SetAuraMaterial");

	Params::BPI_CharaAction_C_SetAuraMaterial Parms{};

	Parms.AuraBit = AuraBit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaAction.BPI_CharaAction_C.BI_PlayMapAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MapAction_Pla603                      Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaAction_C::BI_PlayMapAction(E_MapAction_Pla603 Action, bool* CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "BI_PlayMapAction");

	Params::BPI_CharaAction_C_BI_PlayMapAction Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	if (CanUse != nullptr)
		*CanUse = Parms.CanUse;
}


// Function BPI_CharaAction.BPI_CharaAction_C.BI_EndMapAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaAction_C::BI_EndMapAction(bool* CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "BI_EndMapAction");

	Params::BPI_CharaAction_C_BI_EndMapAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanUse != nullptr)
		*CanUse = Parms.CanUse;
}


// Function BPI_CharaAction.BPI_CharaAction_C.BI_IsMapActionPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaAction_C::BI_IsMapActionPlaying(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaAction_C", "BI_IsMapActionPlaying");

	Params::BPI_CharaAction_C_BI_IsMapActionPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}

}

