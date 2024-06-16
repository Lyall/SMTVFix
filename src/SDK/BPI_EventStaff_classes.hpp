#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EventStaff

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_EventStaff.BPI_EventStaff_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_EventStaff_C final : public IInterface
{
public:
	void BI_StaffPlay(class USoundAtomCue* BGM);
	void BI_StaffStop();
	void BI_StaffPause(bool Puase);
	void BI_StaffIsFinished(bool* IsFinished);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_EventStaff_C">();
	}
	static class IBPI_EventStaff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_EventStaff_C>();
	}
};
static_assert(alignof(IBPI_EventStaff_C) == 0x000008, "Wrong alignment on IBPI_EventStaff_C");
static_assert(sizeof(IBPI_EventStaff_C) == 0x000028, "Wrong size on IBPI_EventStaff_C");

}
