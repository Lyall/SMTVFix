#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EncountScene

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_EncountScene.BPI_EncountScene_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_EncountScene_C final : public IInterface
{
public:
	void BPI_EncountSceneFadeIn(float Time);
	void BPI_ReadyEncountSceneFade(bool* Ready);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_EncountScene_C">();
	}
	static class IBPI_EncountScene_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_EncountScene_C>();
	}
};
static_assert(alignof(IBPI_EncountScene_C) == 0x000008, "Wrong alignment on IBPI_EncountScene_C");
static_assert(sizeof(IBPI_EncountScene_C) == 0x000028, "Wrong size on IBPI_EncountScene_C");

}

