#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_NextEventStart

#include "Basic.hpp"

#include "BPI_NextEventStart_classes.hpp"
#include "BPI_NextEventStart_parameters.hpp"


namespace SDK
{

// Function BPI_NextEventStart.BPI_NextEventStart_C.BPI_GetMapEventId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MapEventID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NextEventStart_C::BPI_GetMapEventId(int32* MapEventID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_NextEventStart_C", "BPI_GetMapEventId");

	Params::BPI_NextEventStart_C_BPI_GetMapEventId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MapEventID != nullptr)
		*MapEventID = Parms.MapEventID;
}


// Function BPI_NextEventStart.BPI_NextEventStart_C.BPI_GetHitBoxSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Size                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NextEventStart_C::BPI_GetHitBoxSize(struct FVector* Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_NextEventStart_C", "BPI_GetHitBoxSize");

	Params::BPI_NextEventStart_C_BPI_GetHitBoxSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);
}


// Function BPI_NextEventStart.BPI_NextEventStart_C.BPI_GetDebugMemo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Memo                                                   (Parm, OutParm)

void IBPI_NextEventStart_C::BPI_GetDebugMemo(class FText* Memo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_NextEventStart_C", "BPI_GetDebugMemo");

	Params::BPI_NextEventStart_C_BPI_GetDebugMemo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Memo != nullptr)
		*Memo = std::move(Parms.Memo);
}


// Function BPI_NextEventStart.BPI_NextEventStart_C.BPI_CheckMissionEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    MissionEvent                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_NextEventStart_C::BPI_CheckMissionEvent(bool* MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_NextEventStart_C", "BPI_CheckMissionEvent");

	Params::BPI_NextEventStart_C_BPI_CheckMissionEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MissionEvent != nullptr)
		*MissionEvent = Parms.MissionEvent;
}


// Function BPI_NextEventStart.BPI_NextEventStart_C.BPI_CheckMiman
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Miman                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_NextEventStart_C::BPI_CheckMiman(bool* Miman)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_NextEventStart_C", "BPI_CheckMiman");

	Params::BPI_NextEventStart_C_BPI_CheckMiman Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Miman != nullptr)
		*Miman = Parms.Miman;
}


// Function BPI_NextEventStart.BPI_NextEventStart_C.BPI_CheckNaviDevil
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NaviDevil                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_NextEventStart_C::BPI_CheckNaviDevil(bool* NaviDevil)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_NextEventStart_C", "BPI_CheckNaviDevil");

	Params::BPI_NextEventStart_C_BPI_CheckNaviDevil Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NaviDevil != nullptr)
		*NaviDevil = Parms.NaviDevil;
}

}

