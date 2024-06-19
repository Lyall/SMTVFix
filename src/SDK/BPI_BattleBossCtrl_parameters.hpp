#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleBossCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_BattleBossCtrl.BPI_BattleBossCtrl_C.BI_GetFirstFormEnemyList
// 0x0010 (0x0010 - 0x0000)
struct BPI_BattleBossCtrl_C_BI_GetFirstFormEnemyList final
{
public:
	TArray<TScriptInterface<class IBPI_CharaBaseAccessor_C>> RetValue;                                          // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_BattleBossCtrl_C_BI_GetFirstFormEnemyList) == 0x000008, "Wrong alignment on BPI_BattleBossCtrl_C_BI_GetFirstFormEnemyList");
static_assert(sizeof(BPI_BattleBossCtrl_C_BI_GetFirstFormEnemyList) == 0x000010, "Wrong size on BPI_BattleBossCtrl_C_BI_GetFirstFormEnemyList");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_GetFirstFormEnemyList, RetValue) == 0x000000, "Member 'BPI_BattleBossCtrl_C_BI_GetFirstFormEnemyList::RetValue' has a wrong offset!");

// Function BPI_BattleBossCtrl.BPI_BattleBossCtrl_C.BI_GetSecondFormEnemyList
// 0x0010 (0x0010 - 0x0000)
struct BPI_BattleBossCtrl_C_BI_GetSecondFormEnemyList final
{
public:
	TArray<TScriptInterface<class IBPI_CharaBaseAccessor_C>> RetValue;                                          // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_BattleBossCtrl_C_BI_GetSecondFormEnemyList) == 0x000008, "Wrong alignment on BPI_BattleBossCtrl_C_BI_GetSecondFormEnemyList");
static_assert(sizeof(BPI_BattleBossCtrl_C_BI_GetSecondFormEnemyList) == 0x000010, "Wrong size on BPI_BattleBossCtrl_C_BI_GetSecondFormEnemyList");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_GetSecondFormEnemyList, RetValue) == 0x000000, "Member 'BPI_BattleBossCtrl_C_BI_GetSecondFormEnemyList::RetValue' has a wrong offset!");

// Function BPI_BattleBossCtrl.BPI_BattleBossCtrl_C.BI_GetThirdFormEnemyList
// 0x0010 (0x0010 - 0x0000)
struct BPI_BattleBossCtrl_C_BI_GetThirdFormEnemyList final
{
public:
	TArray<TScriptInterface<class IBPI_CharaBaseAccessor_C>> RetValue;                                          // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_BattleBossCtrl_C_BI_GetThirdFormEnemyList) == 0x000008, "Wrong alignment on BPI_BattleBossCtrl_C_BI_GetThirdFormEnemyList");
static_assert(sizeof(BPI_BattleBossCtrl_C_BI_GetThirdFormEnemyList) == 0x000010, "Wrong size on BPI_BattleBossCtrl_C_BI_GetThirdFormEnemyList");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_GetThirdFormEnemyList, RetValue) == 0x000000, "Member 'BPI_BattleBossCtrl_C_BI_GetThirdFormEnemyList::RetValue' has a wrong offset!");

// Function BPI_BattleBossCtrl.BPI_BattleBossCtrl_C.BI_IsSecondFormReady
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleBossCtrl_C_BI_IsSecondFormReady final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleBossCtrl_C_BI_IsSecondFormReady) == 0x000001, "Wrong alignment on BPI_BattleBossCtrl_C_BI_IsSecondFormReady");
static_assert(sizeof(BPI_BattleBossCtrl_C_BI_IsSecondFormReady) == 0x000001, "Wrong size on BPI_BattleBossCtrl_C_BI_IsSecondFormReady");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_IsSecondFormReady, RetValue) == 0x000000, "Member 'BPI_BattleBossCtrl_C_BI_IsSecondFormReady::RetValue' has a wrong offset!");

// Function BPI_BattleBossCtrl.BPI_BattleBossCtrl_C.BI_IsThirdFormReady
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleBossCtrl_C_BI_IsThirdFormReady final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleBossCtrl_C_BI_IsThirdFormReady) == 0x000001, "Wrong alignment on BPI_BattleBossCtrl_C_BI_IsThirdFormReady");
static_assert(sizeof(BPI_BattleBossCtrl_C_BI_IsThirdFormReady) == 0x000001, "Wrong size on BPI_BattleBossCtrl_C_BI_IsThirdFormReady");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_IsThirdFormReady, RetValue) == 0x000000, "Member 'BPI_BattleBossCtrl_C_BI_IsThirdFormReady::RetValue' has a wrong offset!");

// Function BPI_BattleBossCtrl.BPI_BattleBossCtrl_C.BI_GetEnemyActor
// 0x0010 (0x0010 - 0x0000)
struct BPI_BattleBossCtrl_C_BI_GetEnemyActor final
{
public:
	TArray<TScriptInterface<class IBPI_CharaBaseAccessor_C>> EnemyActorList;                                    // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_BattleBossCtrl_C_BI_GetEnemyActor) == 0x000008, "Wrong alignment on BPI_BattleBossCtrl_C_BI_GetEnemyActor");
static_assert(sizeof(BPI_BattleBossCtrl_C_BI_GetEnemyActor) == 0x000010, "Wrong size on BPI_BattleBossCtrl_C_BI_GetEnemyActor");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_GetEnemyActor, EnemyActorList) == 0x000000, "Member 'BPI_BattleBossCtrl_C_BI_GetEnemyActor::EnemyActorList' has a wrong offset!");

// Function BPI_BattleBossCtrl.BPI_BattleBossCtrl_C.BI_BattlePlayMotion
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleBossCtrl_C_BI_BattlePlayMotion final
{
public:
	E_CHARA_MOTION_ID                             MotionID;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUseDuration;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C0E[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUseBlendTimeOverride;                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C0F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendTimeOverride;                                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartOffsetTime;                                   // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleBossCtrl_C_BI_BattlePlayMotion) == 0x000004, "Wrong alignment on BPI_BattleBossCtrl_C_BI_BattlePlayMotion");
static_assert(sizeof(BPI_BattleBossCtrl_C_BI_BattlePlayMotion) == 0x000018, "Wrong size on BPI_BattleBossCtrl_C_BI_BattlePlayMotion");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_BattlePlayMotion, MotionID) == 0x000000, "Member 'BPI_BattleBossCtrl_C_BI_BattlePlayMotion::MotionID' has a wrong offset!");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_BattlePlayMotion, IsUseDuration) == 0x000001, "Member 'BPI_BattleBossCtrl_C_BI_BattlePlayMotion::IsUseDuration' has a wrong offset!");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_BattlePlayMotion, Duration) == 0x000004, "Member 'BPI_BattleBossCtrl_C_BI_BattlePlayMotion::Duration' has a wrong offset!");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_BattlePlayMotion, IsUseBlendTimeOverride) == 0x000008, "Member 'BPI_BattleBossCtrl_C_BI_BattlePlayMotion::IsUseBlendTimeOverride' has a wrong offset!");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_BattlePlayMotion, BlendTimeOverride) == 0x00000C, "Member 'BPI_BattleBossCtrl_C_BI_BattlePlayMotion::BlendTimeOverride' has a wrong offset!");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_BattlePlayMotion, StartOffsetTime) == 0x000010, "Member 'BPI_BattleBossCtrl_C_BI_BattlePlayMotion::StartOffsetTime' has a wrong offset!");
static_assert(offsetof(BPI_BattleBossCtrl_C_BI_BattlePlayMotion, RetValue) == 0x000014, "Member 'BPI_BattleBossCtrl_C_BI_BattlePlayMotion::RetValue' has a wrong offset!");

}

