#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MapCommon

#include "Basic.hpp"

#include "BPL_MapCommon_classes.hpp"
#include "BPL_MapCommon_parameters.hpp"


namespace SDK
{

// Function BPL_MapCommon.BPL_MapCommon_C.SpawnSymbol_Event
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           EnemyIdList                                            (Parm, OutParm)
// int32                                   Encount_Id                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UClass>             ClassAssetID                                           (Parm, OutParm, HasGetValueTypeHash)
// int32                                   SymbolID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAfterEvent                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   M_After_Event_ID                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::SpawnSymbol_Event(int32 ID, class UObject* __WorldContext, TArray<int32>* EnemyIdList, int32* Encount_Id, TSoftClassPtr<class UClass>* ClassAssetID, int32* SymbolID, bool* IsAfterEvent, int32* M_After_Event_ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "SpawnSymbol_Event");

	Params::BPL_MapCommon_C_SpawnSymbol_Event Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (EnemyIdList != nullptr)
		*EnemyIdList = std::move(Parms.EnemyIdList);

	if (Encount_Id != nullptr)
		*Encount_Id = Parms.Encount_Id;

	if (ClassAssetID != nullptr)
		*ClassAssetID = Parms.ClassAssetID;

	if (SymbolID != nullptr)
		*SymbolID = Parms.SymbolID;

	if (IsAfterEvent != nullptr)
		*IsAfterEvent = Parms.IsAfterEvent;

	if (M_After_Event_ID != nullptr)
		*M_After_Event_ID = Parms.M_After_Event_ID;
}


// Function BPL_MapCommon.BPL_MapCommon_C.SpawnSymbol_EncID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   In_encount_id                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           EnemyIdList                                            (Parm, OutParm)
// int32                                   Encount_Id                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UClass>             ClassAssetID                                           (Parm, OutParm, HasGetValueTypeHash)
// int32                                   SymbolID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::SpawnSymbol_EncID(int32 In_encount_id, class UObject* __WorldContext, TArray<int32>* EnemyIdList, int32* Encount_Id, TSoftClassPtr<class UClass>* ClassAssetID, int32* SymbolID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "SpawnSymbol_EncID");

	Params::BPL_MapCommon_C_SpawnSymbol_EncID Parms{};

	Parms.In_encount_id = In_encount_id;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (EnemyIdList != nullptr)
		*EnemyIdList = std::move(Parms.EnemyIdList);

	if (Encount_Id != nullptr)
		*Encount_Id = Parms.Encount_Id;

	if (ClassAssetID != nullptr)
		*ClassAssetID = Parms.ClassAssetID;

	if (SymbolID != nullptr)
		*SymbolID = Parms.SymbolID;
}


// Function BPL_MapCommon.BPL_MapCommon_C.SymbolLookPlayer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  _____1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator UBPL_MapCommon_C::SymbolLookPlayer(class AActor* _____, class USceneComponent* _____1, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "SymbolLookPlayer");

	Params::BPL_MapCommon_C_SymbolLookPlayer Parms{};

	Parms._____ = _____;
	Parms._____1 = _____1;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_MapCommon.BPL_MapCommon_C.SaveMapData
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::SaveMapData(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "SaveMapData");

	Params::BPL_MapCommon_C_SaveMapData Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.LoadMapData
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::LoadMapData(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "LoadMapData");

	Params::BPL_MapCommon_C_LoadMapData Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.MapOpen
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Map_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Area_id                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::MapOpen(int32 Map_id, int32 Area_id, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "MapOpen");

	Params::BPL_MapCommon_C_MapOpen Parms{};

	Parms.Map_id = Map_id;
	Parms.Area_id = Area_id;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.MapChange
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Map_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Area_id                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   M_WarpPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FromEvent_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherMapReturn_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::MapChange(int32 Map_id, int32 Area_id, int32 M_WarpPoint, int32 FromEvent_, int32 OtherMapReturn_, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "MapChange");

	Params::BPL_MapCommon_C_MapChange Parms{};

	Parms.Map_id = Map_id;
	Parms.Area_id = Area_id;
	Parms.M_WarpPoint = M_WarpPoint;
	Parms.FromEvent_ = FromEvent_;
	Parms.OtherMapReturn_ = OtherMapReturn_;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.SetPlayer
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::SetPlayer(class APawn* InPawn, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "SetPlayer");

	Params::BPL_MapCommon_C_SetPlayer Parms{};

	Parms.InPawn = InPawn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.MapFlagCh
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             StFlag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EnFlag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OK                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_MapCommon_C::MapFlagCh(class FName StFlag, class FName EnFlag, class UObject* __WorldContext, bool* OK)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "MapFlagCh");

	Params::BPL_MapCommon_C_MapFlagCh Parms{};

	Parms.StFlag = StFlag;
	Parms.EnFlag = EnFlag;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OK != nullptr)
		*OK = Parms.OK;
}


// Function BPL_MapCommon.BPL_MapCommon_C.SetPlayerEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             StFlag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EnFlag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::SetPlayerEvent(class FName StFlag, class FName EnFlag, class APawn* InPawn, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "SetPlayerEvent");

	Params::BPL_MapCommon_C_SetPlayerEvent Parms{};

	Parms.StFlag = StFlag;
	Parms.EnFlag = EnFlag;
	Parms.InPawn = InPawn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.SetPlayerDef
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::SetPlayerDef(class APawn* InPawn, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "SetPlayerDef");

	Params::BPL_MapCommon_C_SetPlayerDef Parms{};

	Parms.InPawn = InPawn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.SetPlayerDefPos
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FirstPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::SetPlayerDefPos(class AActor* FirstPos, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "SetPlayerDefPos");

	Params::BPL_MapCommon_C_SetPlayerDefPos Parms{};

	Parms.FirstPos = FirstPos;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.MapEffectSupport
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*         _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::MapEffectSupport(class UParticleSystemComponent* _____, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "MapEffectSupport");

	Params::BPL_MapCommon_C_MapEffectSupport Parms{};

	Parms._____ = _____;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.SetDevelopmentAreaID
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AreaId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::SetDevelopmentAreaID(int32 AreaId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "SetDevelopmentAreaID");

	Params::BPL_MapCommon_C_SetDevelopmentAreaID Parms{};

	Parms.AreaId = AreaId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapCommon.BPL_MapCommon_C.GetPersistentName_Common
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             PersistentName                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapCommon_C::GetPersistentName_Common(int32 MapId, class UObject* __WorldContext, class FName* PersistentName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapCommon_C", "GetPersistentName_Common");

	Params::BPL_MapCommon_C_GetPersistentName_Common Parms{};

	Parms.MapId = MapId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PersistentName != nullptr)
		*PersistentName = Parms.PersistentName;
}

}

