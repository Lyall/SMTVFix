#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SystemMenu_Base

#include "Basic.hpp"

#include "E_SYSMENU_STEP_structs.hpp"


namespace SDK::Params
{

// Function BP_SystemMenu_Base.BP_SystemMenu_Base_C.SetSaveSlot
// 0x0008 (0x0008 - 0x0000)
struct BP_SystemMenu_Base_C_SetSaveSlot final
{
public:
	int32                                         Slot;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SystemMenu_Base_C_SetSaveSlot) == 0x000004, "Wrong alignment on BP_SystemMenu_Base_C_SetSaveSlot");
static_assert(sizeof(BP_SystemMenu_Base_C_SetSaveSlot) == 0x000008, "Wrong size on BP_SystemMenu_Base_C_SetSaveSlot");
static_assert(offsetof(BP_SystemMenu_Base_C_SetSaveSlot, Slot) == 0x000000, "Member 'BP_SystemMenu_Base_C_SetSaveSlot::Slot' has a wrong offset!");
static_assert(offsetof(BP_SystemMenu_Base_C_SetSaveSlot, Ret) == 0x000004, "Member 'BP_SystemMenu_Base_C_SetSaveSlot::Ret' has a wrong offset!");

// Function BP_SystemMenu_Base.BP_SystemMenu_Base_C.SetLoadSlot
// 0x0008 (0x0008 - 0x0000)
struct BP_SystemMenu_Base_C_SetLoadSlot final
{
public:
	int32                                         Slot;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SystemMenu_Base_C_SetLoadSlot) == 0x000004, "Wrong alignment on BP_SystemMenu_Base_C_SetLoadSlot");
static_assert(sizeof(BP_SystemMenu_Base_C_SetLoadSlot) == 0x000008, "Wrong size on BP_SystemMenu_Base_C_SetLoadSlot");
static_assert(offsetof(BP_SystemMenu_Base_C_SetLoadSlot, Slot) == 0x000000, "Member 'BP_SystemMenu_Base_C_SetLoadSlot::Slot' has a wrong offset!");
static_assert(offsetof(BP_SystemMenu_Base_C_SetLoadSlot, Ret) == 0x000004, "Member 'BP_SystemMenu_Base_C_SetLoadSlot::Ret' has a wrong offset!");

// Function BP_SystemMenu_Base.BP_SystemMenu_Base_C.ChangeMenuStep
// 0x0002 (0x0002 - 0x0000)
struct BP_SystemMenu_Base_C_ChangeMenuStep final
{
public:
	E_SYSMENU_STEP                                NextStep;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SystemMenu_Base_C_ChangeMenuStep) == 0x000001, "Wrong alignment on BP_SystemMenu_Base_C_ChangeMenuStep");
static_assert(sizeof(BP_SystemMenu_Base_C_ChangeMenuStep) == 0x000002, "Wrong size on BP_SystemMenu_Base_C_ChangeMenuStep");
static_assert(offsetof(BP_SystemMenu_Base_C_ChangeMenuStep, NextStep) == 0x000000, "Member 'BP_SystemMenu_Base_C_ChangeMenuStep::NextStep' has a wrong offset!");
static_assert(offsetof(BP_SystemMenu_Base_C_ChangeMenuStep, Ret) == 0x000001, "Member 'BP_SystemMenu_Base_C_ChangeMenuStep::Ret' has a wrong offset!");

// Function BP_SystemMenu_Base.BP_SystemMenu_Base_C.CheckActionSave
// 0x000C (0x000C - 0x0000)
struct BP_SystemMenu_Base_C_CheckActionSave final
{
public:
	bool                                          IsActionSave;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62BE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_SetSaveSlot;                                 // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SystemMenu_Base_C_CheckActionSave) == 0x000004, "Wrong alignment on BP_SystemMenu_Base_C_CheckActionSave");
static_assert(sizeof(BP_SystemMenu_Base_C_CheckActionSave) == 0x00000C, "Wrong size on BP_SystemMenu_Base_C_CheckActionSave");
static_assert(offsetof(BP_SystemMenu_Base_C_CheckActionSave, IsActionSave) == 0x000000, "Member 'BP_SystemMenu_Base_C_CheckActionSave::IsActionSave' has a wrong offset!");
static_assert(offsetof(BP_SystemMenu_Base_C_CheckActionSave, Param_SetSaveSlot) == 0x000004, "Member 'BP_SystemMenu_Base_C_CheckActionSave::Param_SetSaveSlot' has a wrong offset!");
static_assert(offsetof(BP_SystemMenu_Base_C_CheckActionSave, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'BP_SystemMenu_Base_C_CheckActionSave::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SystemMenu_Base.BP_SystemMenu_Base_C.CheckActionLoad
// 0x000C (0x000C - 0x0000)
struct BP_SystemMenu_Base_C_CheckActionLoad final
{
public:
	bool                                          IsActionLoad;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62BF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelSlotId;                                         // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SystemMenu_Base_C_CheckActionLoad) == 0x000004, "Wrong alignment on BP_SystemMenu_Base_C_CheckActionLoad");
static_assert(sizeof(BP_SystemMenu_Base_C_CheckActionLoad) == 0x00000C, "Wrong size on BP_SystemMenu_Base_C_CheckActionLoad");
static_assert(offsetof(BP_SystemMenu_Base_C_CheckActionLoad, IsActionLoad) == 0x000000, "Member 'BP_SystemMenu_Base_C_CheckActionLoad::IsActionLoad' has a wrong offset!");
static_assert(offsetof(BP_SystemMenu_Base_C_CheckActionLoad, SelSlotId) == 0x000004, "Member 'BP_SystemMenu_Base_C_CheckActionLoad::SelSlotId' has a wrong offset!");
static_assert(offsetof(BP_SystemMenu_Base_C_CheckActionLoad, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'BP_SystemMenu_Base_C_CheckActionLoad::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

