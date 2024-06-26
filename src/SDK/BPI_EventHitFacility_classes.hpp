#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EventHitFacility

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_EventHitFacility.BPI_EventHitFacility_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_EventHitFacility_C final : public IInterface
{
public:
	void BPI_GetFacilityId(int32* FacitlityId);
	void BPI_GetFacilityType(E_FACILITY_TYPE* Type);
	void BPI_GetDebugMemo(class FText* Memo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_EventHitFacility_C">();
	}
	static class IBPI_EventHitFacility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_EventHitFacility_C>();
	}
};
static_assert(alignof(IBPI_EventHitFacility_C) == 0x000008, "Wrong alignment on IBPI_EventHitFacility_C");
static_assert(sizeof(IBPI_EventHitFacility_C) == 0x000028, "Wrong size on IBPI_EventHitFacility_C");

}

