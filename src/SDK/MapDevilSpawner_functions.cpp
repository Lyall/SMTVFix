#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapDevilSpawner

#include "Basic.hpp"

#include "MapDevilSpawner_classes.hpp"
#include "MapDevilSpawner_parameters.hpp"


namespace SDK
{

// Function MapDevilSpawner.MapDevilSpawner_C.Evt_SpawnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharaBase_C*                     RetValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMapDevilSpawner_C::Evt_SpawnFinished__DelegateSignature(class ACharaBase_C* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapDevilSpawner_C", "Evt_SpawnFinished__DelegateSignature");

	Params::MapDevilSpawner_C_Evt_SpawnFinished__DelegateSignature Parms{};

	Parms.RetValue = RetValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapDevilSpawner.MapDevilSpawner_C.ExecuteUbergraph_MapDevilSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMapDevilSpawner_C::ExecuteUbergraph_MapDevilSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapDevilSpawner_C", "ExecuteUbergraph_MapDevilSpawner");

	Params::MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapDevilSpawner.MapDevilSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMapDevilSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapDevilSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapDevilSpawner.MapDevilSpawner_C.OnLoaded_574D61D64CECD5C0CC708EA205B71358
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AMapDevilSpawner_C::OnLoaded_574D61D64CECD5C0CC708EA205B71358(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapDevilSpawner_C", "OnLoaded_574D61D64CECD5C0CC708EA205B71358");

	Params::MapDevilSpawner_C_OnLoaded_574D61D64CECD5C0CC708EA205B71358 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

