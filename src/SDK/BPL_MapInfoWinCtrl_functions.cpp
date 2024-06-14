#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MapInfoWinCtrl

#include "Basic.hpp"

#include "BPL_MapInfoWinCtrl_classes.hpp"
#include "BPL_MapInfoWinCtrl_parameters.hpp"


namespace SDK
{

// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Label                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           TagParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSoftObjectPtr<class USoundAtomCue>     OpenSE                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapInfo(class FName Label, TArray<int32>& TagParam, TSoftObjectPtr<class USoundAtomCue> OpenSE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapInfo");

	Params::BPL_MapInfoWinCtrl_C_OpenMapInfo Parms{};

	Parms.Label = Label;
	Parms.TagParam = std::move(TagParam);
	Parms.OpenSE = OpenSE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	TagParam = std::move(Parms.TagParam);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapItemGetInfo
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapItemGetInfo(int32 ItemId, int32 Num, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapItemGetInfo");

	Params::BPL_MapInfoWinCtrl_C_OpenMapItemGetInfo Parms{};

	Parms.ItemId = ItemId;
	Parms.Num = Num;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapItemEraseInfo
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapItemEraseInfo(int32 ItemId, int32 Num, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapItemEraseInfo");

	Params::BPL_MapInfoWinCtrl_C_OpenMapItemEraseInfo Parms{};

	Parms.ItemId = ItemId;
	Parms.Num = Num;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapItemNotGetInfo
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapItemNotGetInfo(int32 ItemId, int32 Num, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapItemNotGetInfo");

	Params::BPL_MapInfoWinCtrl_C_OpenMapItemNotGetInfo Parms{};

	Parms.ItemId = ItemId;
	Parms.Num = Num;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapMakkaWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PrevMakka                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AddMakka                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapMakkaWindow(int32 PrevMakka, int32 AddMakka, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapMakkaWindow");

	Params::BPL_MapInfoWinCtrl_C_OpenMapMakkaWindow Parms{};

	Parms.PrevMakka = PrevMakka;
	Parms.AddMakka = AddMakka;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.SetLock_MapInfo_MapMakkaWin
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnAreaName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::SetLock_MapInfo_MapMakkaWin(bool Lock, bool ReturnAreaName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "SetLock_MapInfo_MapMakkaWin");

	Params::BPL_MapInfoWinCtrl_C_SetLock_MapInfo_MapMakkaWin Parms{};

	Parms.Lock = Lock;
	Parms.ReturnAreaName = ReturnAreaName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapMiitsuWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PrevMiitsu                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AddMiitsu                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapMiitsuWindow(int32 PrevMiitsu, int32 AddMiitsu, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapMiitsuWindow");

	Params::BPL_MapInfoWinCtrl_C_OpenMapMiitsuWindow Parms{};

	Parms.PrevMiitsu = PrevMiitsu;
	Parms.AddMiitsu = AddMiitsu;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapMiitsuWindow_ManualNext
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PrevMiitsu                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AddMiitsu                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapMiitsuWindow_ManualNext(int32 PrevMiitsu, int32 AddMiitsu, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapMiitsuWindow_ManualNext");

	Params::BPL_MapInfoWinCtrl_C_OpenMapMiitsuWindow_ManualNext Parms{};

	Parms.PrevMiitsu = PrevMiitsu;
	Parms.AddMiitsu = AddMiitsu;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.NextMapMiitsuWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::NextMapMiitsuWindow(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "NextMapMiitsuWindow");

	Params::BPL_MapInfoWinCtrl_C_NextMapMiitsuWindow Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapInfo_AndMakkaWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PrevMakka                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AddMakka                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapInfo_AndMakkaWindow(int32 PrevMakka, int32 AddMakka, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapInfo_AndMakkaWindow");

	Params::BPL_MapInfoWinCtrl_C_OpenMapInfo_AndMakkaWindow Parms{};

	Parms.PrevMakka = PrevMakka;
	Parms.AddMakka = AddMakka;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenWaitingMapInfo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenWaitingMapInfo(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenWaitingMapInfo");

	Params::BPL_MapInfoWinCtrl_C_OpenWaitingMapInfo Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.ClearMapInfo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Label                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::ClearMapInfo(class FName Label, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "ClearMapInfo");

	Params::BPL_MapInfoWinCtrl_C_ClearMapInfo Parms{};

	Parms.Label = Label;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapInfo_RemoveSameInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Label                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           TagParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSoftObjectPtr<class USoundAtomCue>     OpenSE                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   RemoveID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapInfo_RemoveSameInfo(class FName Label, TArray<int32>& TagParam, TSoftObjectPtr<class USoundAtomCue> OpenSE, int32 RemoveID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapInfo_RemoveSameInfo");

	Params::BPL_MapInfoWinCtrl_C_OpenMapInfo_RemoveSameInfo Parms{};

	Parms.Label = Label;
	Parms.TagParam = std::move(TagParam);
	Parms.OpenSE = OpenSE;
	Parms.RemoveID = RemoveID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	TagParam = std::move(Parms.TagParam);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.CancelMissionMapInfo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MissionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::CancelMissionMapInfo(int32 MissionId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "CancelMissionMapInfo");

	Params::BPL_MapInfoWinCtrl_C_CancelMissionMapInfo Parms{};

	Parms.MissionId = MissionId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C.OpenMapItemGetInfo_Mission
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MissionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_MapInfoWinCtrl_C::OpenMapItemGetInfo_Mission(int32 ItemId, int32 Num, int32 MissionId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_MapInfoWinCtrl_C", "OpenMapItemGetInfo_Mission");

	Params::BPL_MapInfoWinCtrl_C_OpenMapItemGetInfo_Mission Parms{};

	Parms.ItemId = ItemId;
	Parms.Num = Num;
	Parms.MissionId = MissionId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

