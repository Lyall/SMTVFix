#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EdgeGripper

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_EdgeGripper.BPI_EdgeGripper_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_EdgeGripper_C final : public IInterface
{
public:
	void ForceEndEdgeGrip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_EdgeGripper_C">();
	}
	static class IBPI_EdgeGripper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_EdgeGripper_C>();
	}
};
static_assert(alignof(IBPI_EdgeGripper_C) == 0x000008, "Wrong alignment on IBPI_EdgeGripper_C");
static_assert(sizeof(IBPI_EdgeGripper_C) == 0x000028, "Wrong size on IBPI_EdgeGripper_C");

}

