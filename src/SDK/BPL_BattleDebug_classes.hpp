#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_BattleDebug

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_BattleDebug.BPL_BattleDebug_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_BattleDebug_C final : public UBlueprintFunctionLibrary
{
public:
	static void AddDebugMenuBattleDebug(class UObject* __WorldContext);
	static bool BattleDebugIsEnemySideAvoid(class UObject* __WorldContext);
	static bool BattleDebugIsPlayerSideAvoid(class UObject* __WorldContext);
	static bool BattleDebugIsEnemyDamage0(class UObject* __WorldContext);
	static bool BattleDebugIsPlayerDamage0(class UObject* __WorldContext);
	static bool BattleDebugIsDamageMax(class UObject* __WorldContext);
	static bool BattleDebugIsEnemySideBad0(class UObject* __WorldContext);
	static bool BattleDebugIsPlayerSideBad0(class UObject* __WorldContext);
	static bool BattleDebugIsEnemySideBad100(class UObject* __WorldContext);
	static bool BattleDebugIsPlayerSideBad100(class UObject* __WorldContext);
	static bool BattleDebugIsNumberPartyIndex(class UObject* __WorldContext);
	static bool BattleDebugIsEnemySideCritical(class UObject* __WorldContext);
	static bool BattleDebugIsPlayerSideCritical(class UObject* __WorldContext);
	static void Add_Debug_Menu_Battle_SP(class UObject* __WorldContext);
	static bool BattleDebugIsPartnerAct100(class UObject* __WorldContext);
	static bool BattleDebugIsLogOn(class UObject* __WorldContext);
	static void BattleDebugIsUnionGaugeMax(class UObject* __WorldContext, bool* RetValue);
	static void BattleDebugSetMagGauge(class UObject* __WorldContext, int32* RetValue);
	static void AddPartyIndexMenu(const class FString& ParentName, int32 PartyIndex, TScriptInterface<class IBPI_BattleParty_C> PartySystem, class UObject* __WorldContext);
	static bool BattleDebugIsEnemySideHit100(class UObject* __WorldContext);
	static bool BattleDebugIsPlayerSideHit100(class UObject* __WorldContext);
	static bool BattleDebugIsInochigoi100(class UObject* __WorldContext);
	static void BattleDebugIsEscapeSuccess(class UObject* __WorldContext, bool* RetValue);
	static void BattleDebugIsEscapeFail(class UObject* __WorldContext, bool* RetValue);
	static void BattleDebugGetEnemyCriticalCnt(class UObject* __WorldContext, int32* RetValue);
	static void BattleDebugGetPlayerCriticalCnt(class UObject* __WorldContext, int32* RetValue);
	static bool BattleDebugIsOnlyMyTurn(class UObject* __WorldContext);
	static void BattleDebugGetFreeEnemySummon(class UObject* __WorldContext, int32* RetValue);
	static void BattleDebugClearFreeEnemySummon(class UObject* __WorldContext);
	static void BattleDebugGetGetFovyOverride(class UObject* __WorldContext, int32* RetValue);
	static bool BattleDebugIsActOrderOn(class UObject* __WorldContext);
	static bool BattleDebugIsCommandUIChange(class UObject* __WorldContext);
	static bool BattleDebugIsForcePartyChange(class UObject* __WorldContext);
	static bool BattleDebugIsCycleLogOn(class UObject* __WorldContext);
	static void BattleDebugIsNoCostOn(class UObject* __WorldContext, bool* RetValue);
	static void BattleDebugDrawUIFlag(class UObject* __WorldContext, bool* Panel, bool* EnemyUI, bool* Menu, bool* PressIcon, bool* Uplifting, bool* MoonAge, bool* Message, bool* Damage, bool* UI_Ctrl);
	static void BattleDebugDrawFieldEffect(class UObject* __WorldContext, bool* Area);
	static void BattleDebug2NoPress(class UObject* __WorldContext, bool* Ret);
	static void BattleDebugGetBattleSpeedOverrideBase(class UObject* __WorldContext, float* BattleSpeed);
	static void BattleDebugPlayerUpliftingGauge(class UObject* __WorldContext, int32* Ret);
	static void BattleDebugEnemyUpliftingGauge(class UObject* __WorldContext, int32* Ret);
	static bool BattleDebugIsAllRefrex(class UObject* __WorldContext);
	static bool BattleDebugIsAllAbsorb(class UObject* __WorldContext);
	static bool BattleDebugIsAllBlock(class UObject* __WorldContext);
	static bool BattleDebugNoDamage(class UObject* __WorldContext);
	static bool BattleDebugAllSkill(class UObject* __WorldContext);
	static void BattleDebugExpRate(class UObject* __WorldContext, int32* Ret);
	static void BattleDebugMakkaRate(class UObject* __WorldContext, int32* Ret);
	static void BattleDebugPlayerFirst(class UObject* __WorldContext, bool* Ret);
	static void BattleDebugEnemyFirst(class UObject* __WorldContext, bool* Ret);
	static void BattleDebugAutoFirstUnLock(class UObject* __WorldContext, bool* Ret);
	static bool BattleDebugCanUseRecome(class UObject* __WorldContext);
	static bool BattleDebugCharm(E_BTL_STATE_DEBUG_2 CharmType, class UObject* __WorldContext);
	static void CheckParam(class FName CheckName, class UObject* __WorldContext, bool* Ret);
	static bool BattleDebugConfuse(E_BTL_STATE_DEBUG_2 CharmType, class UObject* __WorldContext);
	static bool BattleDebugNotCureBstTimeout(class UObject* __WorldContext);
	static bool BattleDebugItemDropLoop100(class UObject* __WorldContext);
	static bool BattleDebugResultSkip(class UObject* __WorldContext);
	static bool BattleDebugBstHitLoop100(class UObject* __WorldContext);
	static bool BattleDebugAllUseSkill(class UObject* __WorldContext);
	static bool BattleDebugNoDamageOnlyHero(class UObject* __WorldContext);
	static bool BattleDebugNoUpliftingGauge(class UObject* __WorldContext);
	static void BattleDebugGetBattleSpeedEnableAuto(class UObject* __WorldContext, bool* Enable);
	static void BattleDebugGetBattleSpeedOverrideAuto(class UObject* __WorldContext, float* AutoSpeed);
	static void BattleDebugGetBattleSpeedEnableSkip(class UObject* __WorldContext, bool* Enable);
	static void BattleDebugGetBattleSpeedOverrideSkip(class UObject* __WorldContext, float* AutoSpeed);
	static void BattleDebugGetBattleSpeedEnableBase(class UObject* __WorldContext, bool* Enable);
	static bool BattleDebugCounter100(class UObject* __WorldContext);
	static bool BattleDebugIsAutoLogOn(class UObject* __WorldContext);
	static bool BattleDebugForceEncount(class UObject* __WorldContext);
	static bool BattleDebugNotForceEncount(class UObject* __WorldContext);
	static int32 BattleDebugRenzokuEncountID(int32 Param_Index, class UObject* __WorldContext);
	static bool BattleDebugForceChallengeMode(class UObject* __WorldContext);
	static bool BattleDebugProvoke100(class UObject* __WorldContext);
	static bool BattleDebugSkillSelectIcon(E_SKILL_ICON SkillIcon, class UObject* __WorldContext);
	static bool BattleDebugNoDeath(class UObject* __WorldContext);
	static bool BattleDebugCancelBadStatusTutorial(class UObject* __WorldContext);
	static bool BattleDebugAIProgramLog(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_BattleDebug_C">();
	}
	static class UBPL_BattleDebug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_BattleDebug_C>();
	}
};
static_assert(alignof(UBPL_BattleDebug_C) == 0x000008, "Wrong alignment on UBPL_BattleDebug_C");
static_assert(sizeof(UBPL_BattleDebug_C) == 0x000028, "Wrong size on UBPL_BattleDebug_C");

}

