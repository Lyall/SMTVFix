#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MagatsukaFoundEffect

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_MagatsukaFoundEffect.BPI_MagatsukaFoundEffect_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_MagatsukaFoundEffect_C final : public IInterface
{
public:
	void BPI_PauseFoundEffect();
	void BPI_RestartFoundEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_MagatsukaFoundEffect_C">();
	}
	static class IBPI_MagatsukaFoundEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_MagatsukaFoundEffect_C>();
	}
};
static_assert(alignof(IBPI_MagatsukaFoundEffect_C) == 0x000008, "Wrong alignment on IBPI_MagatsukaFoundEffect_C");
static_assert(sizeof(IBPI_MagatsukaFoundEffect_C) == 0x000028, "Wrong size on IBPI_MagatsukaFoundEffect_C");

}

