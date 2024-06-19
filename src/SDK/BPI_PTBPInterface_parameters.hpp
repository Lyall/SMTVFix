#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PTBPInterface

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_BeHome
// 0x0008 (0x0008 - 0x0000)
struct BPI_PTBPInterface_C_BI_BeHome final
{
public:
	int32                                         PartyIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_BeHome) == 0x000004, "Wrong alignment on BPI_PTBPInterface_C_BI_BeHome");
static_assert(sizeof(BPI_PTBPInterface_C_BI_BeHome) == 0x000008, "Wrong size on BPI_PTBPInterface_C_BI_BeHome");
static_assert(offsetof(BPI_PTBPInterface_C_BI_BeHome, PartyIndex) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_BeHome::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_BeHome, RetValue) == 0x000004, "Member 'BPI_PTBPInterface_C_BI_BeHome::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_BeHomeSideAll
// 0x0002 (0x0002 - 0x0000)
struct BPI_PTBPInterface_C_BI_BeHomeSideAll final
{
public:
	E_BTL_SIDE                                    Side;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_BeHomeSideAll) == 0x000001, "Wrong alignment on BPI_PTBPInterface_C_BI_BeHomeSideAll");
static_assert(sizeof(BPI_PTBPInterface_C_BI_BeHomeSideAll) == 0x000002, "Wrong size on BPI_PTBPInterface_C_BI_BeHomeSideAll");
static_assert(offsetof(BPI_PTBPInterface_C_BI_BeHomeSideAll, Side) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_BeHomeSideAll::Side' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_BeHomeSideAll, RetValue) == 0x000001, "Member 'BPI_PTBPInterface_C_BI_BeHomeSideAll::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_UnitSetVisibility
// 0x0008 (0x0008 - 0x0000)
struct BPI_PTBPInterface_C_BI_UnitSetVisibility final
{
public:
	int32                                         PartyIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sw;                                                // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_UnitSetVisibility) == 0x000004, "Wrong alignment on BPI_PTBPInterface_C_BI_UnitSetVisibility");
static_assert(sizeof(BPI_PTBPInterface_C_BI_UnitSetVisibility) == 0x000008, "Wrong size on BPI_PTBPInterface_C_BI_UnitSetVisibility");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetVisibility, PartyIndex) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_UnitSetVisibility::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetVisibility, Sw) == 0x000004, "Member 'BPI_PTBPInterface_C_BI_UnitSetVisibility::Sw' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetVisibility, RetValue) == 0x000005, "Member 'BPI_PTBPInterface_C_BI_UnitSetVisibility::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_UnitSetVisibilitySideAll
// 0x0003 (0x0003 - 0x0000)
struct BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll final
{
public:
	E_BTL_SIDE                                    Side;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sw;                                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll) == 0x000001, "Wrong alignment on BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll");
static_assert(sizeof(BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll) == 0x000003, "Wrong size on BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll, Side) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll::Side' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll, Sw) == 0x000001, "Member 'BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll::Sw' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll, RetValue) == 0x000002, "Member 'BPI_PTBPInterface_C_BI_UnitSetVisibilitySideAll::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_UnitSetVisibilityAll
// 0x0002 (0x0002 - 0x0000)
struct BPI_PTBPInterface_C_BI_UnitSetVisibilityAll final
{
public:
	bool                                          Sw;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_UnitSetVisibilityAll) == 0x000001, "Wrong alignment on BPI_PTBPInterface_C_BI_UnitSetVisibilityAll");
static_assert(sizeof(BPI_PTBPInterface_C_BI_UnitSetVisibilityAll) == 0x000002, "Wrong size on BPI_PTBPInterface_C_BI_UnitSetVisibilityAll");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetVisibilityAll, Sw) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_UnitSetVisibilityAll::Sw' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetVisibilityAll, RetValue) == 0x000001, "Member 'BPI_PTBPInterface_C_BI_UnitSetVisibilityAll::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_UpdateEnemyInfo
// 0x0001 (0x0001 - 0x0000)
struct BPI_PTBPInterface_C_BI_UpdateEnemyInfo final
{
public:
	bool                                          RetVlaue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_UpdateEnemyInfo) == 0x000001, "Wrong alignment on BPI_PTBPInterface_C_BI_UpdateEnemyInfo");
static_assert(sizeof(BPI_PTBPInterface_C_BI_UpdateEnemyInfo) == 0x000001, "Wrong size on BPI_PTBPInterface_C_BI_UpdateEnemyInfo");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UpdateEnemyInfo, RetVlaue) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_UpdateEnemyInfo::RetVlaue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_UpdateUnitState
// 0x000C (0x000C - 0x0000)
struct BPI_PTBPInterface_C_BI_UpdateUnitState final
{
public:
	int32                                         PartyIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCureBySkill;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsLacerationDamage;                                // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UpdateLookAt;                                      // 0x0006(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ForcePlayMotion;                                   // 0x0007(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_UpdateUnitState) == 0x000004, "Wrong alignment on BPI_PTBPInterface_C_BI_UpdateUnitState");
static_assert(sizeof(BPI_PTBPInterface_C_BI_UpdateUnitState) == 0x00000C, "Wrong size on BPI_PTBPInterface_C_BI_UpdateUnitState");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UpdateUnitState, PartyIndex) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_UpdateUnitState::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UpdateUnitState, IsCureBySkill) == 0x000004, "Member 'BPI_PTBPInterface_C_BI_UpdateUnitState::IsCureBySkill' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UpdateUnitState, IsLacerationDamage) == 0x000005, "Member 'BPI_PTBPInterface_C_BI_UpdateUnitState::IsLacerationDamage' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UpdateUnitState, UpdateLookAt) == 0x000006, "Member 'BPI_PTBPInterface_C_BI_UpdateUnitState::UpdateLookAt' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UpdateUnitState, ForcePlayMotion) == 0x000007, "Member 'BPI_PTBPInterface_C_BI_UpdateUnitState::ForcePlayMotion' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UpdateUnitState, RetValue) == 0x000008, "Member 'BPI_PTBPInterface_C_BI_UpdateUnitState::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_GetPartyUnit
// 0x0018 (0x0018 - 0x0000)
struct BPI_PTBPInterface_C_BI_GetPartyUnit final
{
public:
	int32                                         PartyIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B73[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> RetValue;                                          // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_GetPartyUnit) == 0x000008, "Wrong alignment on BPI_PTBPInterface_C_BI_GetPartyUnit");
static_assert(sizeof(BPI_PTBPInterface_C_BI_GetPartyUnit) == 0x000018, "Wrong size on BPI_PTBPInterface_C_BI_GetPartyUnit");
static_assert(offsetof(BPI_PTBPInterface_C_BI_GetPartyUnit, PartyIndex) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_GetPartyUnit::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_GetPartyUnit, RetValue) == 0x000008, "Member 'BPI_PTBPInterface_C_BI_GetPartyUnit::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_SetPartyUnit
// 0x0020 (0x0020 - 0x0000)
struct BPI_PTBPInterface_C_BI_SetPartyUnit final
{
public:
	int32                                         PartyIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B74[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> InUnit;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         DevilID;                                           // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_CHAR_TYPE                               Type;                                              // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReader;                                          // 0x001D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x001E(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_SetPartyUnit) == 0x000008, "Wrong alignment on BPI_PTBPInterface_C_BI_SetPartyUnit");
static_assert(sizeof(BPI_PTBPInterface_C_BI_SetPartyUnit) == 0x000020, "Wrong size on BPI_PTBPInterface_C_BI_SetPartyUnit");
static_assert(offsetof(BPI_PTBPInterface_C_BI_SetPartyUnit, PartyIndex) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_SetPartyUnit::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_SetPartyUnit, InUnit) == 0x000008, "Member 'BPI_PTBPInterface_C_BI_SetPartyUnit::InUnit' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_SetPartyUnit, DevilID) == 0x000018, "Member 'BPI_PTBPInterface_C_BI_SetPartyUnit::DevilID' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_SetPartyUnit, Type) == 0x00001C, "Member 'BPI_PTBPInterface_C_BI_SetPartyUnit::Type' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_SetPartyUnit, IsReader) == 0x00001D, "Member 'BPI_PTBPInterface_C_BI_SetPartyUnit::IsReader' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_SetPartyUnit, RetValue) == 0x00001E, "Member 'BPI_PTBPInterface_C_BI_SetPartyUnit::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_UnitSetDitherValue
// 0x000C (0x000C - 0x0000)
struct BPI_PTBPInterface_C_BI_UnitSetDitherValue final
{
public:
	int32                                         PartyIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFadeOut;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_UnitSetDitherValue) == 0x000004, "Wrong alignment on BPI_PTBPInterface_C_BI_UnitSetDitherValue");
static_assert(sizeof(BPI_PTBPInterface_C_BI_UnitSetDitherValue) == 0x00000C, "Wrong size on BPI_PTBPInterface_C_BI_UnitSetDitherValue");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetDitherValue, PartyIndex) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_UnitSetDitherValue::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetDitherValue, Time) == 0x000004, "Member 'BPI_PTBPInterface_C_BI_UnitSetDitherValue::Time' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetDitherValue, IsFadeOut) == 0x000008, "Member 'BPI_PTBPInterface_C_BI_UnitSetDitherValue::IsFadeOut' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetDitherValue, RetValue) == 0x000009, "Member 'BPI_PTBPInterface_C_BI_UnitSetDitherValue::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_UnitSetDitherValueSideAll
// 0x0008 (0x0008 - 0x0000)
struct BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFadeOut;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPlayer;                                          // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0006(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll) == 0x000004, "Wrong alignment on BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll");
static_assert(sizeof(BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll) == 0x000008, "Wrong size on BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll, Time) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll::Time' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll, IsFadeOut) == 0x000004, "Member 'BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll::IsFadeOut' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll, IsPlayer) == 0x000005, "Member 'BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll::IsPlayer' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll, RetValue) == 0x000006, "Member 'BPI_PTBPInterface_C_BI_UnitSetDitherValueSideAll::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_GetUnitStateMotion
// 0x0008 (0x0008 - 0x0000)
struct BPI_PTBPInterface_C_BI_GetUnitStateMotion final
{
public:
	int32                                         PartyIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_MOTION_ID                             RetValue;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_GetUnitStateMotion) == 0x000004, "Wrong alignment on BPI_PTBPInterface_C_BI_GetUnitStateMotion");
static_assert(sizeof(BPI_PTBPInterface_C_BI_GetUnitStateMotion) == 0x000008, "Wrong size on BPI_PTBPInterface_C_BI_GetUnitStateMotion");
static_assert(offsetof(BPI_PTBPInterface_C_BI_GetUnitStateMotion, PartyIndex) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_GetUnitStateMotion::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_PTBPInterface_C_BI_GetUnitStateMotion, RetValue) == 0x000004, "Member 'BPI_PTBPInterface_C_BI_GetUnitStateMotion::RetValue' has a wrong offset!");

// Function BPI_PTBPInterface.BPI_PTBPInterface_C.BI_UpdateUnitAveLocation
// 0x0001 (0x0001 - 0x0000)
struct BPI_PTBPInterface_C_BI_UpdateUnitAveLocation final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PTBPInterface_C_BI_UpdateUnitAveLocation) == 0x000001, "Wrong alignment on BPI_PTBPInterface_C_BI_UpdateUnitAveLocation");
static_assert(sizeof(BPI_PTBPInterface_C_BI_UpdateUnitAveLocation) == 0x000001, "Wrong size on BPI_PTBPInterface_C_BI_UpdateUnitAveLocation");
static_assert(offsetof(BPI_PTBPInterface_C_BI_UpdateUnitAveLocation, NoUse) == 0x000000, "Member 'BPI_PTBPInterface_C_BI_UpdateUnitAveLocation::NoUse' has a wrong offset!");

}

