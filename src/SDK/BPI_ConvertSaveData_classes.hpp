#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ConvertSaveData

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_ConvertSaveData.BPI_ConvertSaveData_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_ConvertSaveData_C final : public IInterface
{
public:
	void StartCtrl();
	void IsEnd(bool* Param_IsEnd);
	void GetResult(bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_ConvertSaveData_C">();
	}
	static class IBPI_ConvertSaveData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_ConvertSaveData_C>();
	}
};
static_assert(alignof(IBPI_ConvertSaveData_C) == 0x000008, "Wrong alignment on IBPI_ConvertSaveData_C");
static_assert(sizeof(IBPI_ConvertSaveData_C) == 0x000028, "Wrong size on IBPI_ConvertSaveData_C");

}

