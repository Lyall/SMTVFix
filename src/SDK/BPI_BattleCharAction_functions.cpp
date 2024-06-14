#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleCharAction

#include "Basic.hpp"

#include "BPI_BattleCharAction_classes.hpp"
#include "BPI_BattleCharAction_parameters.hpp"


namespace SDK
{

// Function BPI_BattleCharAction.BPI_BattleCharAction_C.BPI_GetActorIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleCharAction_C::BPI_GetActorIndex(int32* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCharAction_C", "BPI_GetActorIndex");

	Params::BPI_BattleCharAction_C_BPI_GetActorIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BPI_BattleCharAction.BPI_BattleCharAction_C.BPI_SetSelectList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                           List                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleCharAction_C::BPI_SetSelectList(const TArray<uint8>& List, int32* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCharAction_C", "BPI_SetSelectList");

	Params::BPI_BattleCharAction_C_BPI_SetSelectList Parms{};

	Parms.List = std::move(List);

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BPI_BattleCharAction.BPI_BattleCharAction_C.BPI_GetSelectList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                           List                                                   (Parm, OutParm)

void IBPI_BattleCharAction_C::BPI_GetSelectList(TArray<uint8>* List)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCharAction_C", "BPI_GetSelectList");

	Params::BPI_BattleCharAction_C_BPI_GetSelectList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (List != nullptr)
		*List = std::move(Parms.List);
}


// Function BPI_BattleCharAction.BPI_BattleCharAction_C.BPI_ClearSelectList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleCharAction_C::BPI_ClearSelectList(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCharAction_C", "BPI_ClearSelectList");

	Params::BPI_BattleCharAction_C_BPI_ClearSelectList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BPI_BattleCharAction.BPI_BattleCharAction_C.BPI_ApplySummon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleCharAction_C::BPI_ApplySummon(int32* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCharAction_C", "BPI_ApplySummon");

	Params::BPI_BattleCharAction_C_BPI_ApplySummon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BPI_BattleCharAction.BPI_BattleCharAction_C.BPI_SupportTsukuyomiSummon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleCharAction_C::BPI_SupportTsukuyomiSummon(int32* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCharAction_C", "BPI_SupportTsukuyomiSummon");

	Params::BPI_BattleCharAction_C_BPI_SupportTsukuyomiSummon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BPI_BattleCharAction.BPI_BattleCharAction_C.BPL_GetReflectCharaList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           Ret                                                    (Parm, OutParm)

void IBPI_BattleCharAction_C::BPL_GetReflectCharaList(TArray<int32>* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleCharAction_C", "BPL_GetReflectCharaList");

	Params::BPI_BattleCharAction_C_BPL_GetReflectCharaList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = std::move(Parms.Ret);
}

}

