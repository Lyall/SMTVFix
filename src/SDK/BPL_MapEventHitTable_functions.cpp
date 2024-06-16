#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MapEventHitTable

#include "Basic.hpp"

#include "BPL_MapEventHitTable_classes.hpp"
#include "BPL_MapEventHitTable_parameters.hpp"


namespace SDK
{

// Function BPL_MapEventHitTable.BPL_MapEventHitTable_C.GetMapEventHitTableData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MEH_TYPE                              B                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Name1                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPL_MapEventHitTable_C::GetMapEventHitTableData(E_MEH_TYPE B, class UObject* __WorldContext, class FString* Name1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapEventHitTable_C", "GetMapEventHitTableData");

	Params::BPL_MapEventHitTable_C_GetMapEventHitTableData Parms{};

	Parms.B = B;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Name1 != nullptr)
		*Name1 = std::move(Parms.Name1);
}

}
