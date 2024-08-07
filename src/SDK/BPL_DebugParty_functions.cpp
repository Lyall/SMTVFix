#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DebugParty

#include "Basic.hpp"

#include "BPL_DebugParty_classes.hpp"
#include "BPL_DebugParty_parameters.hpp"


namespace SDK
{

// Function BPL_DebugParty.BPL_DebugParty_C.MakeupDebugParty
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                       DebugPartyList                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_DebugParty_C::MakeupDebugParty(int32 Param_Index, class UDataTable* DebugPartyList, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_DebugParty_C", "MakeupDebugParty");

	Params::BPL_DebugParty_C_MakeupDebugParty Parms{};

	Parms.Param_Index = Param_Index;
	Parms.DebugPartyList = DebugPartyList;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

