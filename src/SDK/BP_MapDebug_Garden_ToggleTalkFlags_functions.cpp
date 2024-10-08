#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapDebug_Garden_ToggleTalkFlags

#include "Basic.hpp"

#include "BP_MapDebug_Garden_ToggleTalkFlags_classes.hpp"
#include "BP_MapDebug_Garden_ToggleTalkFlags_parameters.hpp"


namespace SDK
{

// Function BP_MapDebug_Garden_ToggleTalkFlags.BP_MapDebug_Garden_ToggleTalkFlags_C.ExecFunc
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemPathName                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_MapDebug_Garden_ToggleTalkFlags_C::ExecFunc(const class FName& ItemPathName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapDebug_Garden_ToggleTalkFlags_C", "ExecFunc");

	Params::BP_MapDebug_Garden_ToggleTalkFlags_C_ExecFunc Parms{};

	Parms.ItemPathName = ItemPathName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

