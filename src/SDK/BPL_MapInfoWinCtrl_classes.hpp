#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MapInfoWinCtrl

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_MapInfoWinCtrl.BPL_MapInfoWinCtrl_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_MapInfoWinCtrl_C final : public UBlueprintFunctionLibrary
{
public:
	static void OpenMapInfo(class FName Label, TArray<int32>& TagParam, TSoftObjectPtr<class USoundAtomCue> OpenSE, class UObject* __WorldContext);
	static void OpenMapItemGetInfo(int32 ItemId, int32 Num, class UObject* __WorldContext);
	static void OpenMapItemEraseInfo(int32 ItemId, int32 Num, class UObject* __WorldContext);
	static void OpenMapItemNotGetInfo(int32 ItemId, int32 Num, class UObject* __WorldContext);
	static void OpenMapMakkaWindow(int32 PrevMakka, int32 AddMakka, class UObject* __WorldContext);
	static void SetLock_MapInfo_MapMakkaWin(bool Lock, bool ReturnAreaName, class UObject* __WorldContext);
	static void OpenMapMiitsuWindow(int32 PrevMiitsu, int32 AddMiitsu, class UObject* __WorldContext);
	static void OpenMapMiitsuWindow_ManualNext(int32 PrevMiitsu, int32 AddMiitsu, class UObject* __WorldContext);
	static void NextMapMiitsuWindow(class UObject* __WorldContext);
	static void OpenMapInfo_AndMakkaWindow(int32 PrevMakka, int32 AddMakka, class UObject* __WorldContext);
	static void OpenWaitingMapInfo(class UObject* __WorldContext);
	static void ClearMapInfo(class FName Label, class UObject* __WorldContext);
	static void OpenMapInfo_RemoveSameInfo(class FName Label, TArray<int32>& TagParam, TSoftObjectPtr<class USoundAtomCue> OpenSE, int32 RemoveID, class UObject* __WorldContext);
	static void CancelMissionMapInfo(int32 MissionId, class UObject* __WorldContext);
	static void OpenMapItemGetInfo_Mission(int32 ItemId, int32 Num, int32 MissionId, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_MapInfoWinCtrl_C">();
	}
	static class UBPL_MapInfoWinCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_MapInfoWinCtrl_C>();
	}
};
static_assert(alignof(UBPL_MapInfoWinCtrl_C) == 0x000008, "Wrong alignment on UBPL_MapInfoWinCtrl_C");
static_assert(sizeof(UBPL_MapInfoWinCtrl_C) == 0x000028, "Wrong size on UBPL_MapInfoWinCtrl_C");

}

