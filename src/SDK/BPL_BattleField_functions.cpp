#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_BattleField

#include "Basic.hpp"

#include "BPL_BattleField_classes.hpp"
#include "BPL_BattleField_parameters.hpp"


namespace SDK
{

// Function BPL_BattleField.BPL_BattleField_C.BattleFieldGetLoadArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AreaId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>          LoadArray                                              (Parm, OutParm)

void UBPL_BattleField_C::BattleFieldGetLoadArray(int32 MapId, int32 AreaId, class UObject* __WorldContext, TArray<struct FPrimaryAssetId>* LoadArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_BattleField_C", "BattleFieldGetLoadArray");

	Params::BPL_BattleField_C_BattleFieldGetLoadArray Parms{};

	Parms.MapId = MapId;
	Parms.AreaId = AreaId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (LoadArray != nullptr)
		*LoadArray = std::move(Parms.LoadArray);
}


// Function BPL_BattleField.BPL_BattleField_C.BattleFieldGetDataByBattleFieldID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BattleFIeldID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleFieldTableItem_ST         RowData                                                (Parm, OutParm, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_BattleField_C::BattleFieldGetDataByBattleFieldID(int32 BattleFIeldID, class UObject* __WorldContext, struct FBattleFieldTableItem_ST* RowData, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_BattleField_C", "BattleFieldGetDataByBattleFieldID");

	Params::BPL_BattleField_C_BattleFieldGetDataByBattleFieldID Parms{};

	Parms.BattleFIeldID = BattleFIeldID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RowData != nullptr)
		*RowData = std::move(Parms.RowData);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BPL_BattleField.BPL_BattleField_C.BattleFieldGetDataByMapID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AreaId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleFieldTableItem_ST         RowData                                                (Parm, OutParm, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_BattleField_C::BattleFieldGetDataByMapID(int32 MapId, int32 AreaId, class UObject* __WorldContext, struct FBattleFieldTableItem_ST* RowData, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_BattleField_C", "BattleFieldGetDataByMapID");

	Params::BPL_BattleField_C_BattleFieldGetDataByMapID Parms{};

	Parms.MapId = MapId;
	Parms.AreaId = AreaId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RowData != nullptr)
		*RowData = std::move(Parms.RowData);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BPL_BattleField.BPL_BattleField_C.BattleFieldGetRandomRotationZ
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsRandomRotate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RotateZ                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_BattleField_C::BattleFieldGetRandomRotationZ(bool IsRandomRotate, class UObject* __WorldContext, float* RotateZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_BattleField_C", "BattleFieldGetRandomRotationZ");

	Params::BPL_BattleField_C_BattleFieldGetRandomRotationZ Parms{};

	Parms.IsRandomRotate = IsRandomRotate;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RotateZ != nullptr)
		*RotateZ = Parms.RotateZ;
}

}

