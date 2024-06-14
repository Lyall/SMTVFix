#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GimicChestTakara

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_GetTakaraId
// 0x0004 (0x0004 - 0x0000)
struct BPI_GimicChestTakara_C_BPI_GetTakaraId final
{
public:
	int32                                         TakaraID;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GimicChestTakara_C_BPI_GetTakaraId) == 0x000004, "Wrong alignment on BPI_GimicChestTakara_C_BPI_GetTakaraId");
static_assert(sizeof(BPI_GimicChestTakara_C_BPI_GetTakaraId) == 0x000004, "Wrong size on BPI_GimicChestTakara_C_BPI_GetTakaraId");
static_assert(offsetof(BPI_GimicChestTakara_C_BPI_GetTakaraId, TakaraID) == 0x000000, "Member 'BPI_GimicChestTakara_C_BPI_GetTakaraId::TakaraID' has a wrong offset!");

// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_ChangeTakaraFlag
// 0x0002 (0x0002 - 0x0000)
struct BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag final
{
public:
	bool                                          Sw;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NewParam1;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag) == 0x000001, "Wrong alignment on BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag");
static_assert(sizeof(BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag) == 0x000002, "Wrong size on BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag");
static_assert(offsetof(BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag, Sw) == 0x000000, "Member 'BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag::Sw' has a wrong offset!");
static_assert(offsetof(BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag, NewParam1) == 0x000001, "Member 'BPI_GimicChestTakara_C_BPI_ChangeTakaraFlag::NewParam1' has a wrong offset!");

// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_GetDebugMemo
// 0x0018 (0x0018 - 0x0000)
struct BPI_GimicChestTakara_C_BPI_GetDebugMemo final
{
public:
	class FText                                   Memo;                                              // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BPI_GimicChestTakara_C_BPI_GetDebugMemo) == 0x000008, "Wrong alignment on BPI_GimicChestTakara_C_BPI_GetDebugMemo");
static_assert(sizeof(BPI_GimicChestTakara_C_BPI_GetDebugMemo) == 0x000018, "Wrong size on BPI_GimicChestTakara_C_BPI_GetDebugMemo");
static_assert(offsetof(BPI_GimicChestTakara_C_BPI_GetDebugMemo, Memo) == 0x000000, "Member 'BPI_GimicChestTakara_C_BPI_GetDebugMemo::Memo' has a wrong offset!");

// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_SetTakaraPiece
// 0x0008 (0x0008 - 0x0000)
struct BPI_GimicChestTakara_C_BPI_SetTakaraPiece final
{
public:
	class AActor*                                 MovePiece;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GimicChestTakara_C_BPI_SetTakaraPiece) == 0x000008, "Wrong alignment on BPI_GimicChestTakara_C_BPI_SetTakaraPiece");
static_assert(sizeof(BPI_GimicChestTakara_C_BPI_SetTakaraPiece) == 0x000008, "Wrong size on BPI_GimicChestTakara_C_BPI_SetTakaraPiece");
static_assert(offsetof(BPI_GimicChestTakara_C_BPI_SetTakaraPiece, MovePiece) == 0x000000, "Member 'BPI_GimicChestTakara_C_BPI_SetTakaraPiece::MovePiece' has a wrong offset!");

// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_ChangeTakaraBreakFlag
// 0x0002 (0x0002 - 0x0000)
struct BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag final
{
public:
	bool                                          Sw;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NewParam;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag) == 0x000001, "Wrong alignment on BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag");
static_assert(sizeof(BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag) == 0x000002, "Wrong size on BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag");
static_assert(offsetof(BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag, Sw) == 0x000000, "Member 'BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag::Sw' has a wrong offset!");
static_assert(offsetof(BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag, NewParam) == 0x000001, "Member 'BPI_GimicChestTakara_C_BPI_ChangeTakaraBreakFlag::NewParam' has a wrong offset!");

// Function BPI_GimicChestTakara.BPI_GimicChestTakara_C.BPI_GetMovePiece
// 0x0008 (0x0008 - 0x0000)
struct BPI_GimicChestTakara_C_BPI_GetMovePiece final
{
public:
	class AActor*                                 MovePiece;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GimicChestTakara_C_BPI_GetMovePiece) == 0x000008, "Wrong alignment on BPI_GimicChestTakara_C_BPI_GetMovePiece");
static_assert(sizeof(BPI_GimicChestTakara_C_BPI_GetMovePiece) == 0x000008, "Wrong size on BPI_GimicChestTakara_C_BPI_GetMovePiece");
static_assert(offsetof(BPI_GimicChestTakara_C_BPI_GetMovePiece, MovePiece) == 0x000000, "Member 'BPI_GimicChestTakara_C_BPI_GetMovePiece::MovePiece' has a wrong offset!");

}
