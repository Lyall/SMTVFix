#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MapSymbolMover

#include "Basic.hpp"

#include "BPL_MapSymbolMover_classes.hpp"
#include "BPL_MapSymbolMover_parameters.hpp"


namespace SDK
{

// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.Check_SymbolReturnBug
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    BugCheck                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_MapSymbolMover_C::Check_SymbolReturnBug(class UObject* __WorldContext, bool* BugCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "Check_SymbolReturnBug");

	Params::BPL_MapSymbolMover_C_Check_SymbolReturnBug Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (BugCheck != nullptr)
		*BugCheck = Parms.BugCheck;
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.SpawnSymbol_FromOutside
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutsideID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::SpawnSymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "SpawnSymbol_FromOutside");

	Params::BPL_MapSymbolMover_C_SpawnSymbol_FromOutside Parms{};

	Parms.OutsideID = OutsideID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.DiscoverySymbol_FromOutside
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutsideID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::DiscoverySymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "DiscoverySymbol_FromOutside");

	Params::BPL_MapSymbolMover_C_DiscoverySymbol_FromOutside Parms{};

	Parms.OutsideID = OutsideID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.ReturnSymbol_FromOutside
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutsideID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::ReturnSymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "ReturnSymbol_FromOutside");

	Params::BPL_MapSymbolMover_C_ReturnSymbol_FromOutside Parms{};

	Parms.OutsideID = OutsideID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.RebornSymbol_FromOutside
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutsideID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::RebornSymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "RebornSymbol_FromOutside");

	Params::BPL_MapSymbolMover_C_RebornSymbol_FromOutside Parms{};

	Parms.OutsideID = OutsideID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.GiveUpSymbol_FromOutside
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutsideID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::GiveUpSymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "GiveUpSymbol_FromOutside");

	Params::BPL_MapSymbolMover_C_GiveUpSymbol_FromOutside Parms{};

	Parms.OutsideID = OutsideID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.DestroyMapSymbolAll
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::DestroyMapSymbolAll(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "DestroyMapSymbolAll");

	Params::BPL_MapSymbolMover_C_DestroyMapSymbolAll Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.ReSpawnMapSymbolAll
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::ReSpawnMapSymbolAll(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "ReSpawnMapSymbolAll");

	Params::BPL_MapSymbolMover_C_ReSpawnMapSymbolAll Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.ActSymbolWhenPause_FromOutside
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutsideID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::ActSymbolWhenPause_FromOutside(int32 OutsideID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "ActSymbolWhenPause_FromOutside");

	Params::BPL_MapSymbolMover_C_ActSymbolWhenPause_FromOutside Parms{};

	Parms.OutsideID = OutsideID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.DestroyMapSymbolAll_NotRespawn
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::DestroyMapSymbolAll_NotRespawn(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "DestroyMapSymbolAll_NotRespawn");

	Params::BPL_MapSymbolMover_C_DestroyMapSymbolAll_NotRespawn Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.GetMapSymbolParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DevilID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapSymbolParam                  Param                                                  (Parm, OutParm, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::GetMapSymbolParam(int32 DevilID, class UObject* __WorldContext, struct FMapSymbolParam* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "GetMapSymbolParam");

	Params::BPL_MapSymbolMover_C_GetMapSymbolParam Parms{};

	Parms.DevilID = DevilID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.RecalcFlag_ForMapSymbols
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::RecalcFlag_ForMapSymbols(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "RecalcFlag_ForMapSymbols");

	Params::BPL_MapSymbolMover_C_RecalcFlag_ForMapSymbols Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.StartTimeAttack_ForEncountArea
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MissionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::StartTimeAttack_ForEncountArea(int32 MissionId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "StartTimeAttack_ForEncountArea");

	Params::BPL_MapSymbolMover_C_StartTimeAttack_ForEncountArea Parms{};

	Parms.MissionId = MissionId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.EndTimeAttack_ForEncountArea
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MissionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::EndTimeAttack_ForEncountArea(int32 MissionId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "EndTimeAttack_ForEncountArea");

	Params::BPL_MapSymbolMover_C_EndTimeAttack_ForEncountArea Parms{};

	Parms.MissionId = MissionId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.SetEncountAreaManagerTickEnable
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::SetEncountAreaManagerTickEnable(bool Enable, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "SetEncountAreaManagerTickEnable");

	Params::BPL_MapSymbolMover_C_SetEncountAreaManagerTickEnable Parms{};

	Parms.Enable = Enable;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapSymbolMover.BPL_MapSymbolMover_C.StopSpawnMapSymbol_FromIndex
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapSymbolMover_C::StopSpawnMapSymbol_FromIndex(int32 Param_Index, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapSymbolMover_C", "StopSpawnMapSymbol_FromIndex");

	Params::BPL_MapSymbolMover_C_StopSpawnMapSymbol_FromIndex Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

