#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleSkillActionBase

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_BattleSkillActionBase.BPI_BattleSkillActionBase_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_BattleSkillActionBase_C final : public IInterface
{
public:
	void BI_Com_ActorSetMotion(int32 WaitCommandIndex, E_CHARA_MOTION_ID MotionID, bool WaitMotionFinished, int32* Com_Index);
	void BI_Com_AttackMoveActor(int32 WaitCommandIndex, int32* Com_Index);
	void BI_CallEvt_SkillPerformance(int32 Step);
	void BI_BlinkHitLight(int32 PartyIndex);
	void BI_AddPointLight_Auto(const struct FBTL_ADD_SKILL_LIGHT_TASK_DATA& SkillLightData);
	void BI_BeginHitStop();
	void BI_FirstSetting();
	void BI_RegisterDecal(class ADevilSpawnDecal_C* Decal, bool* NoUse);
	void BI_RegisterDecalComponent(class UMaterialAnimDecalComponent_C* Decal, bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_BattleSkillActionBase_C">();
	}
	static class IBPI_BattleSkillActionBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_BattleSkillActionBase_C>();
	}
};
static_assert(alignof(IBPI_BattleSkillActionBase_C) == 0x000008, "Wrong alignment on IBPI_BattleSkillActionBase_C");
static_assert(sizeof(IBPI_BattleSkillActionBase_C) == 0x000028, "Wrong size on IBPI_BattleSkillActionBase_C");

}

