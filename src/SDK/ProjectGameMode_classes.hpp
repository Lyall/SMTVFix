#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProjectGameMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "E_MAP_SYSTEMRESIDENT_ID_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ProjectGameMode.ProjectGameMode_C
// 0x00F8 (0x0438 - 0x0340)
class AProjectGameMode_C : public AProjectGameModeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                DebugPlayerTrace;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerManager_C*                       PlayerManager;                                     // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_MapSoundSelector_C*                BPC_MapSoundSelector;                              // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMapSubLevelManager_C*                  MapSubLevelManager;                                // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   BP_ScreenFade;                                     // 0x0370(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EndResidentLoad;                                   // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EndMapInit;                                        // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          FadeCancel;                                        // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InitStep;                                          // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GameStart;                                         // 0x03BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB[0x5];                                      // 0x03BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EndUnResidentLoad;                                 // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsEndUnResidentLoad;                               // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MIsMapEventPlaying;                                // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PauseCancel;                                       // 0x03D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D3[0x5];                                      // 0x03D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Traport_Soft;                                      // 0x03D8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             MapStartBefore;                                    // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DisablePlayerLoad;                                 // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EndAreaInit;                                       // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          NowAutoPause;                                      // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NowAutoPauseDialog;                                // 0x0429(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ReadyMapInitStart;                                 // 0x042A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FromSaveLoad;                                      // 0x042B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         BridgeNextMapId;                                   // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BridgeNextAreaId;                                  // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EndResidentLoad__DelegateSignature();
	void EndMapInit__DelegateSignature();
	void EndUnResidentLoad__DelegateSignature();
	void MapStartBefore__DelegateSignature();
	void EndAreaInit__DelegateSignature();
	void ExecuteUbergraph_ProjectGameMode(int32 EntryPoint);
	void OnDestroyed_AutoPause(class AActor* DestroyedActor);
	void CallReactivatedApp_ForConsumer();
	void CallAutoPause_ForConsumer();
	void EndAreaInit_();
	void PreloadMap(int32 MapId, int32 AreaId);
	void ForceTraport();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void StartGardenLoad(int32 MapId, int32 WarpPoint, bool LoadAfterView);
	void StartGardenUnload(int32 MapId);
	void MapAreaChange(int32 MapId, int32 CurrentAreaId, int32 NewAreaId, bool LoadAfterView);
	void MapSystemBKHide(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void EndLoadUnResident();
	void LevelChange(const struct FPrimaryAssetId& UnLoad, const struct FPrimaryAssetId& Load);
	void MapSystem_StreamOnlyLoad(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void MapSystem_StreamOnlyUnLoad(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void MapSystemBKView(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void MapSystemBKUnLoad(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void MapSystemBKLoad(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type);
	void NextMapBGUnLoad();
	void MapInitEnd();
	void MapOpenLevel(int32 Old_mapID, int32 Old_AreaID, int32 New_MapID, int32 New_AreaId);
	void StartNextMapBGLoad(int32 MapId, int32 AreaId);
	void MapUnResidentView(int32 MapId);
	void MapUnResidentUnLoad(int32 MapId);
	void MapUnResidentLoad(int32 MapId, int32 AreaId, bool LoadAfterView);
	void MapAreaView(int32 Map, int32 Area);
	void MapAreaUnload(int32 Map, int32 Area);
	void MapAreaLoad(int32 Map, int32 Area, bool LoadAfterView);
	void AllresidentLoadEnd______0();
	void MapAllResidentDelete(int32 NextMap, int32 NextArea);
	void MapStartLoad();
	void Tick_ReadyMapInitStart();
	void OnAllresidentLoadEnd();
	void InitPause();
	void OtherSubLevelLoad();
	void InitFadeCancel();
	void GameInit();
	void GamePlayStart();
	void MapInitStart();
	void MapLoadStart();
	void PlayerLoadStart();
	void GameLoadStart();
	void DebugTraceViewOFF();
	void DebugTraceActivePos(const struct FDebugTrace_St_Action& Action);
	void DebugTraceView_Player();
	void DebugTraceStop();
	void DebugTraceStart();
	void DaathSublevelManagerInit();
	void SetDaathAreaLock(bool Lock);
	void OnLoaded_A5C472BF496F2067C4FFFBB5841704CC(TSubclassOf<class UObject> Loaded);
	void OnLoaded_A7E7758C4A4D3C8A1981CA8D45CB3767(TSubclassOf<class UObject> Loaded);
	void IsLoadMapArea(bool* End);
	void IsLoadMapUnResident(int32 MapId, bool* LoadAfterView);
	void IsNextMapBGLoadEnd(bool* End);
	void IsMapSystemBKLoadEnd(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type, bool* End);
	void IsMapSystemOnlyLoadEnd(bool* End);
	void IsUnLoadMapArea(bool* End);
	void IsBGLoadMapArea(bool* Emd);
	void IsGameStart(bool* Enable);
	void IsMapSystemLevelLoadEnd(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Type, bool* End);
	void IsMapEventPlaying(bool* Param_IsMapEventPlaying);
	void SetMapEventPlaying(bool IsMapEventPlaying, bool* Dummy);
	void IsMapSystemUnloadEnd(bool* End);
	void IsMapSystemHideEnd(bool* End);
	void IsGardenLoaded(bool* End);
	void GetGardenWarpPoint(int32* WarpPoint);
	void IsInGardenLevel(bool* Param_IsInGardenLevel);
	void IsGardenOpen(int32 MapId, bool* Param_IsGardenOpen);
	void ApplyMissionMapBGM(bool* Dummy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProjectGameMode_C">();
	}
	static class AProjectGameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProjectGameMode_C>();
	}
};
static_assert(alignof(AProjectGameMode_C) == 0x000008, "Wrong alignment on AProjectGameMode_C");
static_assert(sizeof(AProjectGameMode_C) == 0x000438, "Wrong size on AProjectGameMode_C");
static_assert(offsetof(AProjectGameMode_C, UberGraphFrame) == 0x000340, "Member 'AProjectGameMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, DebugPlayerTrace) == 0x000348, "Member 'AProjectGameMode_C::DebugPlayerTrace' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, PlayerManager) == 0x000350, "Member 'AProjectGameMode_C::PlayerManager' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, BPC_MapSoundSelector) == 0x000358, "Member 'AProjectGameMode_C::BPC_MapSoundSelector' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, MapSubLevelManager) == 0x000360, "Member 'AProjectGameMode_C::MapSubLevelManager' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, DefaultSceneRoot) == 0x000368, "Member 'AProjectGameMode_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, BP_ScreenFade) == 0x000370, "Member 'AProjectGameMode_C::BP_ScreenFade' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, EndResidentLoad) == 0x000398, "Member 'AProjectGameMode_C::EndResidentLoad' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, EndMapInit) == 0x0003A8, "Member 'AProjectGameMode_C::EndMapInit' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, FadeCancel) == 0x0003B8, "Member 'AProjectGameMode_C::FadeCancel' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, InitStep) == 0x0003B9, "Member 'AProjectGameMode_C::InitStep' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, GameStart) == 0x0003BA, "Member 'AProjectGameMode_C::GameStart' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, EndUnResidentLoad) == 0x0003C0, "Member 'AProjectGameMode_C::EndUnResidentLoad' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, IsEndUnResidentLoad) == 0x0003D0, "Member 'AProjectGameMode_C::IsEndUnResidentLoad' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, MIsMapEventPlaying) == 0x0003D1, "Member 'AProjectGameMode_C::MIsMapEventPlaying' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, PauseCancel) == 0x0003D2, "Member 'AProjectGameMode_C::PauseCancel' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, Traport_Soft) == 0x0003D8, "Member 'AProjectGameMode_C::Traport_Soft' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, MapStartBefore) == 0x000400, "Member 'AProjectGameMode_C::MapStartBefore' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, DisablePlayerLoad) == 0x000410, "Member 'AProjectGameMode_C::DisablePlayerLoad' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, EndAreaInit) == 0x000418, "Member 'AProjectGameMode_C::EndAreaInit' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, NowAutoPause) == 0x000428, "Member 'AProjectGameMode_C::NowAutoPause' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, NowAutoPauseDialog) == 0x000429, "Member 'AProjectGameMode_C::NowAutoPauseDialog' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, ReadyMapInitStart) == 0x00042A, "Member 'AProjectGameMode_C::ReadyMapInitStart' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, FromSaveLoad) == 0x00042B, "Member 'AProjectGameMode_C::FromSaveLoad' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, BridgeNextMapId) == 0x00042C, "Member 'AProjectGameMode_C::BridgeNextMapId' has a wrong offset!");
static_assert(offsetof(AProjectGameMode_C, BridgeNextAreaId) == 0x000430, "Member 'AProjectGameMode_C::BridgeNextAreaId' has a wrong offset!");

}

