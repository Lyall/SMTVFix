#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MovePiece

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_MovePiece.BPI_MovePiece_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_MovePiece_C final : public IInterface
{
public:
	void BPI_InitMovePiece(const struct FPieceData& PieceData, bool IsBtlResult, bool IsForceGet, bool InfoOnly, int32 PrevNum);
	void BPI_GetMovePieceCollision(class UBoxComponent** Collision);
	void BPI_MissedTakara(int32 SaveId, class AActor* TakaraActor, int32 AfterFlag, bool HaveLimitOver);
	void BPI_ShowAgainMovePiece();
	void BPI_HideMovePiece();
	void BPI_CallWhenRoomRotateStart();
	void BPI_CallWhenRoomRotateEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_MovePiece_C">();
	}
	static class IBPI_MovePiece_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_MovePiece_C>();
	}
};
static_assert(alignof(IBPI_MovePiece_C) == 0x000008, "Wrong alignment on IBPI_MovePiece_C");
static_assert(sizeof(IBPI_MovePiece_C) == 0x000028, "Wrong size on IBPI_MovePiece_C");

}

