#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTaskModelManager

#include "Basic.hpp"

#include "BattleTaskModelManager_classes.hpp"
#include "BattleTaskModelManager_parameters.hpp"


namespace SDK
{

// Function BattleTaskModelManager.BattleTaskModelManager_C.ExecuteUbergraph_BattleTaskModelManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleTaskModelManager_C::ExecuteUbergraph_BattleTaskModelManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "ExecuteUbergraph_BattleTaskModelManager");

	Params::BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleTaskModelManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "ReceiveTick");

	Params::BattleTaskModelManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBattleTaskModelManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.AddUnit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TaskIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharaBase_C*                     InUnit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleTaskModelManager_C::AddUnit(int32 TaskIndex, class ACharaBase_C* InUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "AddUnit");

	Params::BattleTaskModelManager_C_AddUnit Parms{};

	Parms.TaskIndex = TaskIndex;
	Parms.InUnit = InUnit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.IsExist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TaskIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleTaskModelManager_C::IsExist(int32 TaskIndex, bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "IsExist");

	Params::BattleTaskModelManager_C_IsExist Parms{};

	Parms.TaskIndex = TaskIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.GetModelUnit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TaskIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharaBase_C*                     RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleTaskModelManager_C::GetModelUnit(int32 TaskIndex, class ACharaBase_C** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "GetModelUnit");

	Params::BattleTaskModelManager_C_GetModelUnit Parms{};

	Parms.TaskIndex = TaskIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.DeleteIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TaskIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleTaskModelManager_C::DeleteIndex(int32 TaskIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "DeleteIndex");

	Params::BattleTaskModelManager_C_DeleteIndex Parms{};

	Parms.TaskIndex = TaskIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.DeleteAll
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleTaskModelManager_C::DeleteAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "DeleteAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.UpdateReserveDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleTaskModelManager_C::UpdateReserveDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "UpdateReserveDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.AddReserveDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharaBase_C*                     InUnit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleTaskModelManager_C::AddReserveDestroy(class ACharaBase_C* InUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "AddReserveDestroy");

	Params::BattleTaskModelManager_C_AddReserveDestroy Parms{};

	Parms.InUnit = InUnit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.ReserveDestroyDeleteAll
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleTaskModelManager_C::ReserveDestroyDeleteAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "ReserveDestroyDeleteAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.AddKeepRefUnit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharaBase_C*                     InUnit                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleTaskModelManager_C::AddKeepRefUnit(const class ACharaBase_C*& InUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "AddKeepRefUnit");

	Params::BattleTaskModelManager_C_AddKeepRefUnit Parms{};

	Parms.InUnit = InUnit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.DeleteKeepRefUnit
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleTaskModelManager_C::DeleteKeepRefUnit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "DeleteKeepRefUnit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.GetKeepRefUnitList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ACharaBase_C*>             RetValue                                               (Parm, OutParm)

void UBattleTaskModelManager_C::GetKeepRefUnitList(TArray<class ACharaBase_C*>* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "GetKeepRefUnitList");

	Params::BattleTaskModelManager_C_GetKeepRefUnitList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = std::move(Parms.RetValue);
}


// Function BattleTaskModelManager.BattleTaskModelManager_C.BI_DestroyReserveUnits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleTaskModelManager_C::BI_DestroyReserveUnits(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleTaskModelManager_C", "BI_DestroyReserveUnits");

	Params::BattleTaskModelManager_C_BI_DestroyReserveUnits Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}

}

