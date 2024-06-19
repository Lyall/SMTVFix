#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EventHitFacility

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_EventHitFacility.BPI_EventHitFacility_C.BPI_GetFacilityId
// 0x0004 (0x0004 - 0x0000)
struct BPI_EventHitFacility_C_BPI_GetFacilityId final
{
public:
	int32                                         FacitlityId;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_EventHitFacility_C_BPI_GetFacilityId) == 0x000004, "Wrong alignment on BPI_EventHitFacility_C_BPI_GetFacilityId");
static_assert(sizeof(BPI_EventHitFacility_C_BPI_GetFacilityId) == 0x000004, "Wrong size on BPI_EventHitFacility_C_BPI_GetFacilityId");
static_assert(offsetof(BPI_EventHitFacility_C_BPI_GetFacilityId, FacitlityId) == 0x000000, "Member 'BPI_EventHitFacility_C_BPI_GetFacilityId::FacitlityId' has a wrong offset!");

// Function BPI_EventHitFacility.BPI_EventHitFacility_C.BPI_GetFacilityType
// 0x0001 (0x0001 - 0x0000)
struct BPI_EventHitFacility_C_BPI_GetFacilityType final
{
public:
	E_FACILITY_TYPE                               Type;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_EventHitFacility_C_BPI_GetFacilityType) == 0x000001, "Wrong alignment on BPI_EventHitFacility_C_BPI_GetFacilityType");
static_assert(sizeof(BPI_EventHitFacility_C_BPI_GetFacilityType) == 0x000001, "Wrong size on BPI_EventHitFacility_C_BPI_GetFacilityType");
static_assert(offsetof(BPI_EventHitFacility_C_BPI_GetFacilityType, Type) == 0x000000, "Member 'BPI_EventHitFacility_C_BPI_GetFacilityType::Type' has a wrong offset!");

// Function BPI_EventHitFacility.BPI_EventHitFacility_C.BPI_GetDebugMemo
// 0x0018 (0x0018 - 0x0000)
struct BPI_EventHitFacility_C_BPI_GetDebugMemo final
{
public:
	class FText                                   Memo;                                              // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BPI_EventHitFacility_C_BPI_GetDebugMemo) == 0x000008, "Wrong alignment on BPI_EventHitFacility_C_BPI_GetDebugMemo");
static_assert(sizeof(BPI_EventHitFacility_C_BPI_GetDebugMemo) == 0x000018, "Wrong size on BPI_EventHitFacility_C_BPI_GetDebugMemo");
static_assert(offsetof(BPI_EventHitFacility_C_BPI_GetDebugMemo, Memo) == 0x000000, "Member 'BPI_EventHitFacility_C_BPI_GetDebugMemo::Memo' has a wrong offset!");

}

