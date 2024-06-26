#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EncountArea

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_EncountArea.BPI_EncountArea_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_EncountArea_C final : public IInterface
{
public:
	void BPI_GetEncountAreaBox(struct FTransform* BoxPos, struct FVector* BoxSize, TArray<struct FVector>* AddPoints);
	void BPI_SpawnSymbol(int32 Param_Index, bool IsManualPos, const struct FTransform& ManualPos, bool* NewParam);
	void BPI_DestroySymbol(class APawn* Pawn, bool* NewParam);
	void BPI_InComeArea(const struct FVector& Pos, float AddHitSize, bool* In);
	void BPI_CheckEncountAreaOverlap(bool* Overlap);
	void BPI_GetSymbolSpline(class USplineComponent** Spline);
	void BPI_ResetSymbolSpawn(bool* NewParam);
	void BPI_GetSymbolList(class APawn* IgnorePawn, TArray<class APawn*>* PawnList);
	void BPI_Discovery_FromOutside(int32 OutsideID, bool* NewParam);
	void BPI_SpawnSymbol_FromOutside(int32 OutsideID, bool* NewParam);
	void BPI_ReturnSymbol_FromOutside(int32 OutsideID, bool* NewParam);
	void BPI_RebornSymbol_FromOutside(int32 OutsideID, bool* NewParam);
	void BPI_EncountBattleStart(class APawn* SymbolPawn);
	void BPI_SpawnSymbols(bool* Success);
	void BPI_GiveUpSymbol_FromOutside(int32 OutsideID, bool* NewParam);
	void BPI_SummonSymbol(bool* Success);
	void BPI_GetSafeZoneID(bool* ManualSafeZoneID, int32* SafeZoneID);
	void BPI_GetEncountArea_RouteNodeList(TArray<struct FMapSymbolRouteNode>* NodeList);
	void BPI_GetEncountArea_RouteNodeSpace(float* Space);
	void BPI_GetEncountComeAreaInfo(struct FTransform* Transform, struct FVector* HitSize);
	void BPI_EncountArea_DestroySymbolAll(bool Respawn);
	void BPI_EncountArea_ReSpawnSymbolAll();
	void BPI_CheckMagatsukaEncountArea(bool* Magatsuka);
	void BPI_GetDeadSaveID(int32* DeadSaveID);
	void BPI_ActSymbolWhenPause_FromOutside(int32 OutsideID, bool* NewParam);
	void BPI_CheckViewSymbol(bool* View);
	void BPI_Summon_ForRoomGuardian();
	void BPI_CheckAreaIN(bool* AreaIN);
	void BPI_InHitArea(const struct FVector& Pos, float AddHitSize, bool* In);
	void BPI_NotOutHit(bool* NotOut);
	void BPI_ReturnSymbols(bool Effect, bool* NewParam);
	void BPI_GetSymbolInfo(int32 Param_Index, struct FSpawnSymbolInfo* SymbolInfo);
	void BPI_CheckLastBattleArea(bool* Last);
	void BPI_ChangeReturnPoint(int32 Param_Index, const struct FVector& ReturnPoint, bool* NewParam);
	void BPI_CheckGiveupHitList(bool* Hit);
	void BPI_RecalcFlag_ForMapSymbols();
	void BPI_SetSpawnSymbolEffect(bool EffectON, bool* NewParam1);
	void BPI_StopSymbolRespawn(class APawn* Pawn, bool Stop, bool* NewParam1);
	void BPI_SetChainEncountList(TArray<class UActorComponent*>& Components, bool* NewParam);
	void BPI_TimeAttackEncountAreaStart(bool CheckMission, int32 MissionId, bool* NewParam);
	void BPI_TimeAttackEncountAreaEnd(bool Effect, bool CheckMission, int32 MissionId, bool* NewParam);
	void BPI_SetMagatsuhiDevilAll(bool Magatsuhi, bool* NewParam);
	void BPI_ChangeSplineLocationZ(const struct FVector& SymbolLocation, float SymbolHalfHeight, bool* NewParam);
	void BPI_UpdateOptionSpline(bool* NewParam);
	void BPI_CheckOtherDiscoveryHit(bool* Overlap);
	void BPI_CheckEncountAreaGenerator(bool* Generator);
	void BPI_StopSpawn_FromIndex(int32 Param_Index, bool* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_EncountArea_C">();
	}
	static class IBPI_EncountArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_EncountArea_C>();
	}
};
static_assert(alignof(IBPI_EncountArea_C) == 0x000008, "Wrong alignment on IBPI_EncountArea_C");
static_assert(sizeof(IBPI_EncountArea_C) == 0x000028, "Wrong size on IBPI_EncountArea_C");

}

