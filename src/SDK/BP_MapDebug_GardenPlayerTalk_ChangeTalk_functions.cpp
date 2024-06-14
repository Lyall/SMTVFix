#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapDebug_GardenPlayerTalk_ChangeTalk

#include "Basic.hpp"

#include "BP_MapDebug_GardenPlayerTalk_ChangeTalk_classes.hpp"
#include "BP_MapDebug_GardenPlayerTalk_ChangeTalk_parameters.hpp"


namespace SDK
{

// Function BP_MapDebug_GardenPlayerTalk_ChangeTalk.BP_MapDebug_GardenPlayerTalk_ChangeTalk_C.ExecFunc
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemPathName                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_MapDebug_GardenPlayerTalk_ChangeTalk_C::ExecFunc(const class FName& ItemPathName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapDebug_GardenPlayerTalk_ChangeTalk_C", "ExecFunc");

	Params::BP_MapDebug_GardenPlayerTalk_ChangeTalk_C_ExecFunc Parms{};

	Parms.ItemPathName = ItemPathName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
