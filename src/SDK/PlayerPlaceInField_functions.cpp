#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPlaceInField

#include "Basic.hpp"

#include "PlayerPlaceInField_classes.hpp"
#include "PlayerPlaceInField_parameters.hpp"


namespace SDK
{

// Function PlayerPlaceInField.PlayerPlaceInField_C.ExecuteUbergraph_PlayerPlaceInField
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPlaceInField_C::ExecuteUbergraph_PlayerPlaceInField(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceInField_C", "ExecuteUbergraph_PlayerPlaceInField");

	Params::PlayerPlaceInField_C_ExecuteUbergraph_PlayerPlaceInField Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceInField.PlayerPlaceInField_C.Evt_ReplaceFinished
// (BlueprintCallable, BlueprintEvent)

void UPlayerPlaceInField_C::Evt_ReplaceFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceInField_C", "Evt_ReplaceFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceInField.PlayerPlaceInField_C.ReplacePlayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InDevilList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerPlaceInField_C::ReplacePlayer(const TArray<int32>& InDevilList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceInField_C", "ReplacePlayer");

	Params::PlayerPlaceInField_C_ReplacePlayer Parms{};

	Parms.InDevilList = std::move(InDevilList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceInField.PlayerPlaceInField_C.SpawnPlayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  ChipLocation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FRotator                         ChipRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsJump                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPlaceInField_C::SpawnPlayer(const TArray<struct FVector>& ChipLocation, const struct FRotator& ChipRotation, bool IsJump)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceInField_C", "SpawnPlayer");

	Params::PlayerPlaceInField_C_SpawnPlayer Parms{};

	Parms.ChipLocation = std::move(ChipLocation);
	Parms.ChipRotation = std::move(ChipRotation);
	Parms.IsJump = IsJump;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceInField.PlayerPlaceInField_C.Evt_LoadFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharaBase_C*                     RetValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPlaceInField_C::Evt_LoadFinished(class ACharaBase_C* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceInField_C", "Evt_LoadFinished");

	Params::PlayerPlaceInField_C_Evt_LoadFinished Parms{};

	Parms.RetValue = RetValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPlaceInField.PlayerPlaceInField_C.Evt_BackStep
// (BlueprintCallable, BlueprintEvent)

void UPlayerPlaceInField_C::Evt_BackStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceInField_C", "Evt_BackStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceInField.PlayerPlaceInField_C.Evt_NkmSpawn
// (BlueprintCallable, BlueprintEvent)

void UPlayerPlaceInField_C::Evt_NkmSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceInField_C", "Evt_NkmSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPlaceInField.PlayerPlaceInField_C.RetrieveDevilPostData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DevilAssetID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_DevilPostData                DevilPostData                                          (Parm, OutParm, HasGetValueTypeHash)

void UPlayerPlaceInField_C::RetrieveDevilPostData(int32 DevilAssetID, struct FST_DevilPostData* DevilPostData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPlaceInField_C", "RetrieveDevilPostData");

	Params::PlayerPlaceInField_C_RetrieveDevilPostData Parms{};

	Parms.DevilAssetID = DevilAssetID;

	UObject::ProcessEvent(Func, &Parms);

	if (DevilPostData != nullptr)
		*DevilPostData = std::move(Parms.DevilPostData);
}

}

