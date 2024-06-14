#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleEventSystem

#include "Basic.hpp"

#include "BPI_BattleEventSystem_classes.hpp"
#include "BPI_BattleEventSystem_parameters.hpp"


namespace SDK
{

// Function BPI_BattleEventSystem.BPI_BattleEventSystem_C.BI_AddDestroyPool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleEventSystem_C::BI_AddDestroyPool(const class AActor*& Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleEventSystem_C", "BI_AddDestroyPool");

	Params::BPI_BattleEventSystem_C_BI_AddDestroyPool Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleEventSystem.BPI_BattleEventSystem_C.BI_DestroyPool
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleEventSystem_C::BI_DestroyPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleEventSystem_C", "BI_DestroyPool");

	UObject::ProcessEvent(Func, nullptr);
}

}
