#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleNumberActor

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_BattleNumberActor.BPI_BattleNumberActor_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_BattleNumberActor_C final : public IInterface
{
public:
	void BI_IsFinished(bool* IsFinished);
	void BI_Update(float Delta, bool* NoUse);
	void BI_Hide(bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_BattleNumberActor_C">();
	}
	static class IBPI_BattleNumberActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_BattleNumberActor_C>();
	}
};
static_assert(alignof(IBPI_BattleNumberActor_C) == 0x000008, "Wrong alignment on IBPI_BattleNumberActor_C");
static_assert(sizeof(IBPI_BattleNumberActor_C) == 0x000028, "Wrong size on IBPI_BattleNumberActor_C");

}

