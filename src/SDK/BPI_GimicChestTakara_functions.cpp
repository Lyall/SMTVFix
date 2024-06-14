#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GimicChestTakara

#include "Basic.hpp"

#include "BPI_GimicChestTakara_classes.hpp"
#include "BPI_GimicChestTakara_parameters.hpp"


namespace SDK
{

// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_GetTakaraId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TakaraID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GimicChestTakara_C::BPI_GetTakaraId(int32* TakaraID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GimicChestTakara_C", "BPI_GetTakaraId");

	Params::BPI_GimicChestTakara_C_BPI_GetTakaraId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TakaraID != nullptr)
		*TakaraID = Parms.TakaraID;
}


// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_ChangeTakaraFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewParam1                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_GimicChestTakara_C::BPI_ChangeTakaraFlag(bool Sw, bool* NewParam1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GimicChestTakara_C", "BPI_ChangeTakaraFlag");

	Params::BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag Parms{};

	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam1 != nullptr)
		*NewParam1 = Parms.NewParam1;
}


// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_GetDebugMemo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Memo                                                   (Parm, OutParm)

void IBPI_GimicChestTakara_C::BPI_GetDebugMemo(class FText* Memo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GimicChestTakara_C", "BPI_GetDebugMemo");

	Params::BPI_GimicChestTakara_C_BPI_GetDebugMemo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Memo != nullptr)
		*Memo = std::move(Parms.Memo);
}


// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_SetTakaraPiece
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MovePiece                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GimicChestTakara_C::BPI_SetTakaraPiece(class AActor* MovePiece)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GimicChestTakara_C", "BPI_SetTakaraPiece");

	Params::BPI_GimicChestTakara_C_BPI_SetTakaraPiece Parms{};

	Parms.MovePiece = MovePiece;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_DestroyTakara_ByPiece
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GimicChestTakara_C::BPI_DestroyTakara_ByPiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GimicChestTakara_C", "BPI_DestroyTakara_ByPiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_CalledInfo_ByPiece
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GimicChestTakara_C::BPI_CalledInfo_ByPiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GimicChestTakara_C", "BPI_CalledInfo_ByPiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_DestroyPiece
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GimicChestTakara_C::BPI_DestroyPiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GimicChestTakara_C", "BPI_DestroyPiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_ChangeTakaraBreakFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_GimicChestTakara_C::BPI_ChangeTakaraBreakFlag(bool Sw, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GimicChestTakara_C", "BPI_ChangeTakaraBreakFlag");

	Params::BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag Parms{};

	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_GetMovePiece
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MovePiece                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GimicChestTakara_C::BPI_GetMovePiece(class AActor** MovePiece)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GimicChestTakara_C", "BPI_GetMovePiece");

	Params::BPI_GimicChestTakara_C_BPI_GetMovePiece Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MovePiece != nullptr)
		*MovePiece = Parms.MovePiece;
}

}

