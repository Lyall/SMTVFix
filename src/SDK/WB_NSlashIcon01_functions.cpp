#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_NSlashIcon01

#include "Basic.hpp"

#include "WB_NSlashIcon01_classes.hpp"
#include "WB_NSlashIcon01_parameters.hpp"


namespace SDK
{

// Function WB_NSlashIcon01.WB_NSlashIcon01_C.ExecuteUbergraph_WB_NSlashIcon01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NSlashIcon01_C::ExecuteUbergraph_WB_NSlashIcon01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NSlashIcon01_C", "ExecuteUbergraph_WB_NSlashIcon01");

	Params::WB_NSlashIcon01_C_ExecuteUbergraph_WB_NSlashIcon01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NSlashIcon01.WB_NSlashIcon01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_NSlashIcon01_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NSlashIcon01_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_NSlashIcon01.WB_NSlashIcon01_C.SetFontColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InColorType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NSlashIcon01_C::SetFontColor(int32 InColorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NSlashIcon01_C", "SetFontColor");

	Params::WB_NSlashIcon01_C_SetFontColor Parms{};

	Parms.InColorType = InColorType;

	UObject::ProcessEvent(Func, &Parms);
}

}
