#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DG_TimeStopEffect

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_DG_TimeStopEffect.BPI_DG_TimeStopEffect_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_DG_TimeStopEffect_C final : public IInterface
{
public:
	void ToStopEffect(float EffectDuration);
	void ToMoveEffect(float EffectDuration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_DG_TimeStopEffect_C">();
	}
	static class IBPI_DG_TimeStopEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_DG_TimeStopEffect_C>();
	}
};
static_assert(alignof(IBPI_DG_TimeStopEffect_C) == 0x000008, "Wrong alignment on IBPI_DG_TimeStopEffect_C");
static_assert(sizeof(IBPI_DG_TimeStopEffect_C) == 0x000028, "Wrong size on IBPI_DG_TimeStopEffect_C");

}
