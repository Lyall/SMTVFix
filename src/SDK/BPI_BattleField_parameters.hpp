#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleField

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_BattleField.BPI_BattleField_C.BI_GetCommandBoxTransform
// 0x0030 (0x0030 - 0x0000)
struct BPI_BattleField_C_BI_GetCommandBoxTransform final
{
public:
	struct FTransform                             Trans;                                             // 0x0000(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleField_C_BI_GetCommandBoxTransform) == 0x000010, "Wrong alignment on BPI_BattleField_C_BI_GetCommandBoxTransform");
static_assert(sizeof(BPI_BattleField_C_BI_GetCommandBoxTransform) == 0x000030, "Wrong size on BPI_BattleField_C_BI_GetCommandBoxTransform");
static_assert(offsetof(BPI_BattleField_C_BI_GetCommandBoxTransform, Trans) == 0x000000, "Member 'BPI_BattleField_C_BI_GetCommandBoxTransform::Trans' has a wrong offset!");

// Function BPI_BattleField.BPI_BattleField_C.BI_ReplacePlayer
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleField_C_BI_ReplacePlayer final
{
public:
	TArray<int32>                                 InDevilList;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          NoUse;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleField_C_BI_ReplacePlayer) == 0x000008, "Wrong alignment on BPI_BattleField_C_BI_ReplacePlayer");
static_assert(sizeof(BPI_BattleField_C_BI_ReplacePlayer) == 0x000018, "Wrong size on BPI_BattleField_C_BI_ReplacePlayer");
static_assert(offsetof(BPI_BattleField_C_BI_ReplacePlayer, InDevilList) == 0x000000, "Member 'BPI_BattleField_C_BI_ReplacePlayer::InDevilList' has a wrong offset!");
static_assert(offsetof(BPI_BattleField_C_BI_ReplacePlayer, NoUse) == 0x000010, "Member 'BPI_BattleField_C_BI_ReplacePlayer::NoUse' has a wrong offset!");

// Function BPI_BattleField.BPI_BattleField_C.BI_IsReplaceFinished
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleField_C_BI_IsReplaceFinished final
{
public:
	bool                                          IsFinished;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleField_C_BI_IsReplaceFinished) == 0x000001, "Wrong alignment on BPI_BattleField_C_BI_IsReplaceFinished");
static_assert(sizeof(BPI_BattleField_C_BI_IsReplaceFinished) == 0x000001, "Wrong size on BPI_BattleField_C_BI_IsReplaceFinished");
static_assert(offsetof(BPI_BattleField_C_BI_IsReplaceFinished, IsFinished) == 0x000000, "Member 'BPI_BattleField_C_BI_IsReplaceFinished::IsFinished' has a wrong offset!");

// Function BPI_BattleField.BPI_BattleField_C.BI_GetPlayerReplaceResult
// 0x0050 (0x0050 - 0x0000)
struct BPI_BattleField_C_BI_GetPlayerReplaceResult final
{
public:
	TMap<int32, struct FTransform>                TransformMap;                                      // 0x0000(0x0050)(Parm, OutParm)
};
static_assert(alignof(BPI_BattleField_C_BI_GetPlayerReplaceResult) == 0x000008, "Wrong alignment on BPI_BattleField_C_BI_GetPlayerReplaceResult");
static_assert(sizeof(BPI_BattleField_C_BI_GetPlayerReplaceResult) == 0x000050, "Wrong size on BPI_BattleField_C_BI_GetPlayerReplaceResult");
static_assert(offsetof(BPI_BattleField_C_BI_GetPlayerReplaceResult, TransformMap) == 0x000000, "Member 'BPI_BattleField_C_BI_GetPlayerReplaceResult::TransformMap' has a wrong offset!");

// Function BPI_BattleField.BPI_BattleField_C.BI_GetAddPost
// 0x0010 (0x0010 - 0x0000)
struct BPI_BattleField_C_BI_GetAddPost final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D6F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        Output;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleField_C_BI_GetAddPost) == 0x000008, "Wrong alignment on BPI_BattleField_C_BI_GetAddPost");
static_assert(sizeof(BPI_BattleField_C_BI_GetAddPost) == 0x000010, "Wrong size on BPI_BattleField_C_BI_GetAddPost");
static_assert(offsetof(BPI_BattleField_C_BI_GetAddPost, Param_Index) == 0x000000, "Member 'BPI_BattleField_C_BI_GetAddPost::Param_Index' has a wrong offset!");
static_assert(offsetof(BPI_BattleField_C_BI_GetAddPost, Output) == 0x000008, "Member 'BPI_BattleField_C_BI_GetAddPost::Output' has a wrong offset!");

// Function BPI_BattleField.BPI_BattleField_C.PrepareRenzokuBattle
// 0x0020 (0x0020 - 0x0000)
struct BPI_BattleField_C_PrepareRenzokuBattle final
{
public:
	int32                                         EncountID;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEvent;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D70[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 EnemyIds;                                          // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          OnlyApplyEncountPostData;                          // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleField_C_PrepareRenzokuBattle) == 0x000008, "Wrong alignment on BPI_BattleField_C_PrepareRenzokuBattle");
static_assert(sizeof(BPI_BattleField_C_PrepareRenzokuBattle) == 0x000020, "Wrong size on BPI_BattleField_C_PrepareRenzokuBattle");
static_assert(offsetof(BPI_BattleField_C_PrepareRenzokuBattle, EncountID) == 0x000000, "Member 'BPI_BattleField_C_PrepareRenzokuBattle::EncountID' has a wrong offset!");
static_assert(offsetof(BPI_BattleField_C_PrepareRenzokuBattle, IsEvent) == 0x000004, "Member 'BPI_BattleField_C_PrepareRenzokuBattle::IsEvent' has a wrong offset!");
static_assert(offsetof(BPI_BattleField_C_PrepareRenzokuBattle, EnemyIds) == 0x000008, "Member 'BPI_BattleField_C_PrepareRenzokuBattle::EnemyIds' has a wrong offset!");
static_assert(offsetof(BPI_BattleField_C_PrepareRenzokuBattle, OnlyApplyEncountPostData) == 0x000018, "Member 'BPI_BattleField_C_PrepareRenzokuBattle::OnlyApplyEncountPostData' has a wrong offset!");

// Function BPI_BattleField.BPI_BattleField_C.GetRenzokuBattleEnemy
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleField_C_GetRenzokuBattleEnemy final
{
public:
	TArray<class ACharaBase_C*>                   Enemy;                                             // 0x0000(0x0010)(Parm, OutParm)
	int32                                         EncountID;                                         // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleField_C_GetRenzokuBattleEnemy) == 0x000008, "Wrong alignment on BPI_BattleField_C_GetRenzokuBattleEnemy");
static_assert(sizeof(BPI_BattleField_C_GetRenzokuBattleEnemy) == 0x000018, "Wrong size on BPI_BattleField_C_GetRenzokuBattleEnemy");
static_assert(offsetof(BPI_BattleField_C_GetRenzokuBattleEnemy, Enemy) == 0x000000, "Member 'BPI_BattleField_C_GetRenzokuBattleEnemy::Enemy' has a wrong offset!");
static_assert(offsetof(BPI_BattleField_C_GetRenzokuBattleEnemy, EncountID) == 0x000010, "Member 'BPI_BattleField_C_GetRenzokuBattleEnemy::EncountID' has a wrong offset!");

// Function BPI_BattleField.BPI_BattleField_C.IsEndPrepareRenzokuBattle
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleField_C_IsEndPrepareRenzokuBattle final
{
public:
	bool                                          IsDone;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleField_C_IsEndPrepareRenzokuBattle) == 0x000001, "Wrong alignment on BPI_BattleField_C_IsEndPrepareRenzokuBattle");
static_assert(sizeof(BPI_BattleField_C_IsEndPrepareRenzokuBattle) == 0x000001, "Wrong size on BPI_BattleField_C_IsEndPrepareRenzokuBattle");
static_assert(offsetof(BPI_BattleField_C_IsEndPrepareRenzokuBattle, IsDone) == 0x000000, "Member 'BPI_BattleField_C_IsEndPrepareRenzokuBattle::IsDone' has a wrong offset!");

}
