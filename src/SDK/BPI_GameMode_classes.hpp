#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameMode

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_MAP_SYSTEMRESIDENT_ID_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_GameMode.BPI_GameMode_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_GameMode_C final : public IInterface
{
public:
	void SetDaathAreaLock(bool Lock);
	void MapStartLoad();
	void MapAllResidentDelete(int32 NextMap, int32 NextArea);
	void MapAreaLoad(int32 Map, int32 Area, bool LoadAfterView);
	void MapAreaView(int32 Map, int32 Area);
	void MapAreaUnload(int32 Map, int32 Area);
	void IsLoadMapArea(bool* End);
	void MapUnResidentLoad(int32 MapId, int32 AreaId, bool LoadAfterView);
	void MapUnResidentView(int32 MapId);
	void MapUnResidentUnLoad(int32 MapId);
	void IsLoadMapUnResident(int32 MapId, bool* LoadAfterView);
	void StartNextMapBGLoad(int32 MapId, int32 AreaId);
	void MapOpenLevel(int32 Old_mapID, int32 Old_AreaID, int32 New_MapID, int32 New_AreaId);
	void MapInitEnd();
	void MapSystemBKLoad(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void MapSystemBKUnLoad(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void MapSystemBKView(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void IsMapSystemBKLoadEnd(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type, bool* End);
	void IsNextMapBGLoadEnd(bool* End);
	void NextMapBGUnLoad();
	void MapSystem_StreamOnlyUnLoad(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void MapSystem_StreamOnlyLoad(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void LevelChange(const struct FPrimaryAssetId& UnLoad, const struct FPrimaryAssetId& Load);
	void IsMapSystemOnlyLoadEnd(bool* End);
	void IsUnLoadMapArea(bool* End);
	void IsBGLoadMapArea(bool* Emd);
	void InitFadeCancel();
	void DaathSublevelManagerInit();
	void DebugTraceStart();
	void DebugTraceStop();
	void DebugTraceView_Player();
	void DebugTraceActivePos(const struct FDebugTrace_St_Action& Action);
	void DebugTraceViewOFF();
	void IsGameStart(bool* Enable);
	void EndLoadUnResident();
	void IsMapSystemLevelLoadEnd(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type, bool* End);
	void SetMapEventPlaying(bool Param_IsMapEventPlaying, bool* Dummy);
	void IsMapEventPlaying(bool* Param_IsMapEventPlaying);
	void InitPause();
	void IsMapSystemUnloadEnd(bool* End);
	void ForceTraport();
	void MapSystemBKHide(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void IsMapSystemHideEnd(bool* End);
	void MapAreaChange(int32 MapId, int32 CurrentAreaId, int32 NewAreaId, bool LoadAfterView);
	void IsGardenLoaded(bool* End);
	void GetGardenWarpPoint(int32* WarpPoint);
	void IsGardenOpen(int32 MapId, bool* Param_IsGardenOpen);
	void StartGardenLoad(int32 MapId, int32 WarpPoint, bool LoadAfterView);
	void StartGardenUnload(int32 MapId);
	void IsInGardenLevel(bool* Param_IsInGardenLevel);
	void ApplyMissionMapBGM(bool* Dummy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_GameMode_C">();
	}
	static class IBPI_GameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_GameMode_C>();
	}
};
static_assert(alignof(IBPI_GameMode_C) == 0x000008, "Wrong alignment on IBPI_GameMode_C");
static_assert(sizeof(IBPI_GameMode_C) == 0x000028, "Wrong size on IBPI_GameMode_C");

}

