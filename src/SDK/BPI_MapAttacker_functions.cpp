#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapAttacker

#include "Basic.hpp"

#include "BPI_MapAttacker_classes.hpp"
#include "BPI_MapAttacker_parameters.hpp"


namespace SDK
{

// Function BPI_MapAttacker.BPI_MapAttacker_C.MapAttackActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActivate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   AttackID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_MapAttacker_C::MapAttackActivate(bool bActivate, int32 AttackID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapAttacker_C", "MapAttackActivate");

	Params::BPI_MapAttacker_C_MapAttackActivate Parms{};

	Parms.bActivate = bActivate;
	Parms.AttackID = AttackID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_MapAttacker.BPI_MapAttacker_C.MapAttackEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_MapAttacker_C::MapAttackEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapAttacker_C", "MapAttackEnd");

	UObject::ProcessEvent(Func, nullptr);
}

}
