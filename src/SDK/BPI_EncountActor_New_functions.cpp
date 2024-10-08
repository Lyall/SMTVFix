#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EncountActor_New

#include "Basic.hpp"

#include "BPI_EncountActor_New_classes.hpp"
#include "BPI_EncountActor_New_parameters.hpp"


namespace SDK
{

// Function BPI_EncountActor_New.BPI_EncountActor_New_C.BI_SetEncountID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EncountID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EncountActor_New_C::BI_SetEncountID(int32 EncountID, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EncountActor_New_C", "BI_SetEncountID");

	Params::BPI_EncountActor_New_C_BI_SetEncountID Parms{};

	Parms.EncountID = EncountID;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_EncountActor_New.BPI_EncountActor_New_C.BI_LoadEventSubLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EncountActor_New_C::BI_LoadEventSubLevel(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EncountActor_New_C", "BI_LoadEventSubLevel");

	Params::BPI_EncountActor_New_C_BI_LoadEventSubLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_EncountActor_New.BPI_EncountActor_New_C.BI_CheckType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTL_ENCOUNT_SPAWN                     Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EncountActor_New_C::BI_CheckType(E_BTL_ENCOUNT_SPAWN* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EncountActor_New_C", "BI_CheckType");

	Params::BPI_EncountActor_New_C_BI_CheckType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}


// Function BPI_EncountActor_New.BPI_EncountActor_New_C.BI_NoLoadMakeEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EncountActor_New_C::BI_NoLoadMakeEnemy(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EncountActor_New_C", "BI_NoLoadMakeEnemy");

	Params::BPI_EncountActor_New_C_BI_NoLoadMakeEnemy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_EncountActor_New.BPI_EncountActor_New_C.BI_CallEncountCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EncountActor_New_C::BI_CallEncountCamera(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EncountActor_New_C", "BI_CallEncountCamera");

	Params::BPI_EncountActor_New_C_BI_CallEncountCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_EncountActor_New.BPI_EncountActor_New_C.BI_SetBossRoomBattle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBossRoom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EncountActor_New_C::BI_SetBossRoomBattle(bool IsBossRoom, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EncountActor_New_C", "BI_SetBossRoomBattle");

	Params::BPI_EncountActor_New_C_BI_SetBossRoomBattle Parms{};

	Parms.IsBossRoom = IsBossRoom;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_EncountActor_New.BPI_EncountActor_New_C.BI_UnloadPreviousEventSubLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EncountActor_New_C::BI_UnloadPreviousEventSubLevel(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EncountActor_New_C", "BI_UnloadPreviousEventSubLevel");

	Params::BPI_EncountActor_New_C_BI_UnloadPreviousEventSubLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}

}

