#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapAttackDamager

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_MapAttackDamager.BPI_MapAttackDamager_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_MapAttackDamager_C final : public IInterface
{
public:
	void BPI_ReceiveMapAttack(const struct FMapAttackDamageData& MapAttackData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_MapAttackDamager_C">();
	}
	static class IBPI_MapAttackDamager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_MapAttackDamager_C>();
	}
};
static_assert(alignof(IBPI_MapAttackDamager_C) == 0x000008, "Wrong alignment on IBPI_MapAttackDamager_C");
static_assert(sizeof(IBPI_MapAttackDamager_C) == 0x000028, "Wrong size on IBPI_MapAttackDamager_C");

}

