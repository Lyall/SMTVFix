#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapUICtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_MapUICtrl.BPI_MapUICtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_MapUICtrl_C final : public IInterface
{
public:
	void GetSavingWidget(class UWB_Saving_C** Widget);
	void BPI_GetCurAreaName(class FText* AreaName);
	void BPI_BeginSiegeAreaNameUI();
	void BPI_EndSiegeAreaNameUI();
	void BPI_ShowSiegeAreaNameUI(const class FText& Text);
	void BPI_AddAreaNameData(const struct FAreaNameData& AreaNameData);
	void BPI_RemoveAreaNameData(const struct FAreaNameData& AreaNameData);
	void BPI_ShowMapUI(bool Immediate);
	void BPI_HideMapUI();
	void BPI_OpenMinimapMask(int32 MinimapMaskID);
	void BPI_CreateMapUI();
	void BPI_ChangeMinimapArea(int32 AreaId);
	void BPI_ResetFootprint();
	void BPI_RefreshMinimapMaskOpenFlag();
	void BPI_StartMinimapFocusAction(const struct FVector& WorldLocation, float Time, bool UseCustomZoom, float CustomZoom, class UWB_Minimap_C** EventTarget);
	void BPI_StartMinimapFocusActionLocation(const struct FVector& StartLocation, const struct FVector& EndLocation, float Time, bool UseCustomZoom, float CustomZoom, class UWB_Minimap_C** EventTarget);
	void BPI_EndMinimapFocusAction(bool* Dummy);
	void BPI_ShowMinimap(bool Immediate);
	void BPI_HideMinimap();
	void BPI_InitMapUI();
	void BPI_ShowAreaName();
	void BPI_HideAreaName();
	void BPI_ChangeMinimapIdBlocking(int32 MapId, int32 AreaId, E_MINIMAP_CHANGE_TYPE ChangeType);
	void BPI_GetMapInfoWinCtrl(class AActor** Ctrl);
	void BPI_GetMapMakkaWinCtrl(class AActor** Ctrl);
	void BPI_ShowMapCharaPanel(bool Immediate);
	void BPI_HideMapCharaPanel();
	void BPI_MapUIPrintLog();
	void BPI_ShowMap3DIcon();
	void BPI_HideMap3DIcon();
	void BPI_GetCurAutomapName(class FText* AreaName);
	void BPI_StartMinimapRyuketsu(bool* Dummy);
	void BPI_EndMinimapRyuketsu(bool* Dummy);
	void BPI_ChangeMinimapIdAsync(int32 MapId, int32 AreaId, E_MINIMAP_CHANGE_TYPE ChangeType);
	void BPI_IsMinimapIdChanging(bool* IsChanging);
	void BPI_SetMinimapIconSize(float Size, bool* Dummy);
	void BPI_AutoCheckShowMapCharaPanel(float ShowDuration, bool* Dummy);
	void BPI_SetMinimapHidden(bool* Dummy);
	void BPI_SetFogGridOpenRadius(float Radius, bool* Dummy);
	void BPI_ShowFogGridTexture(bool IsShow, bool* Dummy);
	void BPI_ShowMinimapInPause();
	void BPI_ShowAreaNameWithType(E_LOCATION_WINDOW_TYPE LocationType);
	void BPI_ToTopCamera(bool* Dummy);
	void BPI_FromTopCamera(bool* Dummy);
	void BPI_UpdateTopCameraIcon(const struct FVector& CameraLocation, const struct FRotator& CameraRotate, const struct FVector& HeroLocation, const struct FRotator& HeroRotate, bool* Dummy);
	void BPI_ShowTopCameraIcon(bool* Dummy);
	void BPI_HideTopCameraIcon(bool* Dummy);
	void BPI_StartMinimapFocusTarget(int32 MapId, int32 AreaId, const struct FVector& StartLocation, const struct FVector& EndLocation, float Time, bool UseCustomZoom, float CustomZoom, class UWB_Minimap_C** EventTarget);
	void BPI_StartMinimapFocusMission(int32 MissionId, bool IsMessageWindow, class UWB_Minimap_C** EventTarget);
	void BPI_EndMinimapFocusMission(bool* Dummy);
	void BPI_AllMapUpdateRender(bool* Dummy);
	void BPI_MinimapOnOffEffectIcon(E_MINIMAP_POI_ICON Icon, bool* Dummy);
	void BPI_MinimapOnOffEffectAll(bool* Dummy);
	void BPI_ShowMapMagatsuhiGauge(bool Immediately, bool IsManualGauge, int32 ManualGauge);
	void BPI_HideMapMagatsuhiGauge();
	void BPI_AutoCheckShowMapMagatsuhiGauge(float ShowDuration, bool Immediately, bool IsManualGauge, int32 ManualGauge, bool* Dummy);
	void BPI_StartMinimapFocusMissionUI(int32 MissionId, class UWB_Minimap_C** EventTarget);
	void BPI_SetMinimapBGLocationCenter(const struct FVector& BGCenter, bool* Dummy);
	void BPI_GetCameraAngle(float* CameraAngle);
	void BPI_GetCurAreaNameLabel(class FName* Label);
	void BPI_MinimapOnOffEffectRyuketsu(bool* Dummy);
	void BPI_StartMinimapFocusMissionReport(int32 MissionId, class UWB_Minimap_C** EventTarget);
	void BPI_StartCoasterLineMinimap(int32 MinimapDataId, bool* Dummy);
	void BPI_FinishCoasterLineMinimap(bool* Dummy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_MapUICtrl_C">();
	}
	static class IBPI_MapUICtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_MapUICtrl_C>();
	}
};
static_assert(alignof(IBPI_MapUICtrl_C) == 0x000008, "Wrong alignment on IBPI_MapUICtrl_C");
static_assert(sizeof(IBPI_MapUICtrl_C) == 0x000028, "Wrong size on IBPI_MapUICtrl_C");

}

