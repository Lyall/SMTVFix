#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MapSymbolMover

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_MapSymbolMover.BPL_MapSymbolMover_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_MapSymbolMover_C final : public UBlueprintFunctionLibrary
{
public:
	static void Check_SymbolReturnBug(class UObject* __WorldContext, bool* BugCheck);
	static void SpawnSymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext);
	static void DiscoverySymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext);
	static void ReturnSymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext);
	static void RebornSymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext);
	static void GiveUpSymbol_FromOutside(int32 OutsideID, class UObject* __WorldContext);
	static void DestroyMapSymbolAll(class UObject* __WorldContext);
	static void ReSpawnMapSymbolAll(class UObject* __WorldContext);
	static void ActSymbolWhenPause_FromOutside(int32 OutsideID, class UObject* __WorldContext);
	static void DestroyMapSymbolAll_NotRespawn(class UObject* __WorldContext);
	static void GetMapSymbolParam(int32 DevilID, class UObject* __WorldContext, struct FMapSymbolParam* Param);
	static void RecalcFlag_ForMapSymbols(class UObject* __WorldContext);
	static void StartTimeAttack_ForEncountArea(int32 MissionId, class UObject* __WorldContext);
	static void EndTimeAttack_ForEncountArea(int32 MissionId, class UObject* __WorldContext);
	static void SetEncountAreaManagerTickEnable(bool Enable, class UObject* __WorldContext);
	static void StopSpawnMapSymbol_FromIndex(int32 Param_Index, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_MapSymbolMover_C">();
	}
	static class UBPL_MapSymbolMover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_MapSymbolMover_C>();
	}
};
static_assert(alignof(UBPL_MapSymbolMover_C) == 0x000008, "Wrong alignment on UBPL_MapSymbolMover_C");
static_assert(sizeof(UBPL_MapSymbolMover_C) == 0x000028, "Wrong size on UBPL_MapSymbolMover_C");

}

