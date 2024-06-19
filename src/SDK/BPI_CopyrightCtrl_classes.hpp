#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CopyrightCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CopyrightCtrl.BPI_CopyrightCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CopyrightCtrl_C final : public IInterface
{
public:
	void Initialize();
	void StartCtrl();
	void IsEnd(bool* Param_IsEnd);
	void Finalize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CopyrightCtrl_C">();
	}
	static class IBPI_CopyrightCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CopyrightCtrl_C>();
	}
};
static_assert(alignof(IBPI_CopyrightCtrl_C) == 0x000008, "Wrong alignment on IBPI_CopyrightCtrl_C");
static_assert(sizeof(IBPI_CopyrightCtrl_C) == 0x000028, "Wrong size on IBPI_CopyrightCtrl_C");

}

