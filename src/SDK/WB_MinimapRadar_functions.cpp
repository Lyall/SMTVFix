#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MinimapRadar

#include "Basic.hpp"

#include "WB_MinimapRadar_classes.hpp"
#include "WB_MinimapRadar_parameters.hpp"


namespace SDK
{

// Function WB_MinimapRadar.WB_MinimapRadar_C.ExecuteUbergraph_WB_MinimapRadar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MinimapRadar_C::ExecuteUbergraph_WB_MinimapRadar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MinimapRadar_C", "ExecuteUbergraph_WB_MinimapRadar");

	Params::WB_MinimapRadar_C_ExecuteUbergraph_WB_MinimapRadar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MinimapRadar.WB_MinimapRadar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_MinimapRadar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MinimapRadar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MinimapRadar.WB_MinimapRadar_C.CreateData
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_MinimapRadar_C::CreateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MinimapRadar_C", "CreateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MinimapRadar.WB_MinimapRadar_C.SetMinimapMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MINIMAP_MODE                          MinimapMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MinimapRadar_C::SetMinimapMode(E_MINIMAP_MODE MinimapMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MinimapRadar_C", "SetMinimapMode");

	Params::WB_MinimapRadar_C_SetMinimapMode Parms{};

	Parms.MinimapMode = MinimapMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MinimapRadar.WB_MinimapRadar_C.UpdateEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MINIMAP_MODE                          MinimapMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MinimapRadar_C::UpdateEntries(E_MINIMAP_MODE MinimapMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MinimapRadar_C", "UpdateEntries");

	Params::WB_MinimapRadar_C_UpdateEntries Parms{};

	Parms.MinimapMode = MinimapMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MinimapRadar.WB_MinimapRadar_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_MinimapRadar_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MinimapRadar_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}

}

