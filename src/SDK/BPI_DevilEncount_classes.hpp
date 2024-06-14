#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DevilEncount

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_DevilEncount.BPI_DevilEncount_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_DevilEncount_C final : public IInterface
{
public:
	void BPI_CallEncount_ForAttack();
	void BPI_GetSymbolComponent(class UActorComponent** Component);
	void BPI_SymbolOnWater(bool* OnWater);
	void BPI_DestroyComponents_ForMapSymbol();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_DevilEncount_C">();
	}
	static class IBPI_DevilEncount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_DevilEncount_C>();
	}
};
static_assert(alignof(IBPI_DevilEncount_C) == 0x000008, "Wrong alignment on IBPI_DevilEncount_C");
static_assert(sizeof(IBPI_DevilEncount_C) == 0x000028, "Wrong size on IBPI_DevilEncount_C");

}

