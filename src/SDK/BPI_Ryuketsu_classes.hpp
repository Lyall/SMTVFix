#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Ryuketsu

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Ryuketsu.BPI_Ryuketsu_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Ryuketsu_C final : public IInterface
{
public:
	void BPI_GetRyuketsuIndex(int32* RyuketsuIndex);
	void BPI_CallRyuketsu();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Ryuketsu_C">();
	}
	static class IBPI_Ryuketsu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Ryuketsu_C>();
	}
};
static_assert(alignof(IBPI_Ryuketsu_C) == 0x000008, "Wrong alignment on IBPI_Ryuketsu_C");
static_assert(sizeof(IBPI_Ryuketsu_C) == 0x000028, "Wrong size on IBPI_Ryuketsu_C");

}

