#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleCommand

#include "Basic.hpp"

#include "BPI_BattleCommand_classes.hpp"
#include "BPI_BattleCommand_parameters.hpp"


namespace SDK
{

// Function BPI_BattleCommand.BPI_BattleCommand_C.BI_ResetCursorMemory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PartyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleCommand_C::BI_ResetCursorMemory(int32 PartyIndex, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCommand_C", "BI_ResetCursorMemory");

	Params::BPI_BattleCommand_C_BI_ResetCursorMemory Parms{};

	Parms.PartyIndex = PartyIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_BattleCommand.BPI_BattleCommand_C.BI_HidePlayerParty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleCommand_C::BI_HidePlayerParty(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCommand_C", "BI_HidePlayerParty");

	Params::BPI_BattleCommand_C_BI_HidePlayerParty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_BattleCommand.BPI_BattleCommand_C.BI_SetShowPlayerPartyFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleCommand_C::BI_SetShowPlayerPartyFlag(bool IsShow, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCommand_C", "BI_SetShowPlayerPartyFlag");

	Params::BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag Parms{};

	Parms.IsShow = IsShow;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_BattleCommand.BPI_BattleCommand_C.BI_GetResult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCommand                      Result                                                 (Parm, OutParm)

void IBPI_BattleCommand_C::BI_GetResult(struct FBtlCommand* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCommand_C", "BI_GetResult");

	Params::BPI_BattleCommand_C_BI_GetResult Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}

}

