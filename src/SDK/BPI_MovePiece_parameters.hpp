#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MovePiece

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_MovePiece.BPI_MovePiece_C.BPI_InitMovePiece
// 0x0014 (0x0014 - 0x0000)
struct BPI_MovePiece_C_BPI_InitMovePiece final
{
public:
	struct FPieceData                             PieceData;                                         // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          IsBtlResult;                                       // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsForceGet;                                        // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InfoOnly;                                          // 0x000E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PrevNum;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MovePiece_C_BPI_InitMovePiece) == 0x000004, "Wrong alignment on BPI_MovePiece_C_BPI_InitMovePiece");
static_assert(sizeof(BPI_MovePiece_C_BPI_InitMovePiece) == 0x000014, "Wrong size on BPI_MovePiece_C_BPI_InitMovePiece");
static_assert(offsetof(BPI_MovePiece_C_BPI_InitMovePiece, PieceData) == 0x000000, "Member 'BPI_MovePiece_C_BPI_InitMovePiece::PieceData' has a wrong offset!");
static_assert(offsetof(BPI_MovePiece_C_BPI_InitMovePiece, IsBtlResult) == 0x00000C, "Member 'BPI_MovePiece_C_BPI_InitMovePiece::IsBtlResult' has a wrong offset!");
static_assert(offsetof(BPI_MovePiece_C_BPI_InitMovePiece, IsForceGet) == 0x00000D, "Member 'BPI_MovePiece_C_BPI_InitMovePiece::IsForceGet' has a wrong offset!");
static_assert(offsetof(BPI_MovePiece_C_BPI_InitMovePiece, InfoOnly) == 0x00000E, "Member 'BPI_MovePiece_C_BPI_InitMovePiece::InfoOnly' has a wrong offset!");
static_assert(offsetof(BPI_MovePiece_C_BPI_InitMovePiece, PrevNum) == 0x000010, "Member 'BPI_MovePiece_C_BPI_InitMovePiece::PrevNum' has a wrong offset!");

// Function BPI_MovePiece.BPI_MovePiece_C.BPI_GetMovePieceCollision
// 0x0008 (0x0008 - 0x0000)
struct BPI_MovePiece_C_BPI_GetMovePieceCollision final
{
public:
	class UBoxComponent*                          Collision;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MovePiece_C_BPI_GetMovePieceCollision) == 0x000008, "Wrong alignment on BPI_MovePiece_C_BPI_GetMovePieceCollision");
static_assert(sizeof(BPI_MovePiece_C_BPI_GetMovePieceCollision) == 0x000008, "Wrong size on BPI_MovePiece_C_BPI_GetMovePieceCollision");
static_assert(offsetof(BPI_MovePiece_C_BPI_GetMovePieceCollision, Collision) == 0x000000, "Member 'BPI_MovePiece_C_BPI_GetMovePieceCollision::Collision' has a wrong offset!");

// Function BPI_MovePiece.BPI_MovePiece_C.BPI_MissedTakara
// 0x0018 (0x0018 - 0x0000)
struct BPI_MovePiece_C_BPI_MissedTakara final
{
public:
	int32                                         SaveId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TakaraActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AfterFlag;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HaveLimitOver;                                     // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MovePiece_C_BPI_MissedTakara) == 0x000008, "Wrong alignment on BPI_MovePiece_C_BPI_MissedTakara");
static_assert(sizeof(BPI_MovePiece_C_BPI_MissedTakara) == 0x000018, "Wrong size on BPI_MovePiece_C_BPI_MissedTakara");
static_assert(offsetof(BPI_MovePiece_C_BPI_MissedTakara, SaveId) == 0x000000, "Member 'BPI_MovePiece_C_BPI_MissedTakara::SaveId' has a wrong offset!");
static_assert(offsetof(BPI_MovePiece_C_BPI_MissedTakara, TakaraActor) == 0x000008, "Member 'BPI_MovePiece_C_BPI_MissedTakara::TakaraActor' has a wrong offset!");
static_assert(offsetof(BPI_MovePiece_C_BPI_MissedTakara, AfterFlag) == 0x000010, "Member 'BPI_MovePiece_C_BPI_MissedTakara::AfterFlag' has a wrong offset!");
static_assert(offsetof(BPI_MovePiece_C_BPI_MissedTakara, HaveLimitOver) == 0x000014, "Member 'BPI_MovePiece_C_BPI_MissedTakara::HaveLimitOver' has a wrong offset!");

}

