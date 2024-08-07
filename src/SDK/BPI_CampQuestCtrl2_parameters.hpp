#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampQuestCtrl2

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "E_CampQuest_CtrlState_structs.hpp"


namespace SDK::Params
{

// Function BPI_CampQuestCtrl2.BPI_CampQuestCtrl2_C.CampQuest_IsExistNewIcon
// 0x0001 (0x0001 - 0x0000)
struct BPI_CampQuestCtrl2_C_CampQuest_IsExistNewIcon final
{
public:
	bool                                          ExistNewIcon;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CampQuestCtrl2_C_CampQuest_IsExistNewIcon) == 0x000001, "Wrong alignment on BPI_CampQuestCtrl2_C_CampQuest_IsExistNewIcon");
static_assert(sizeof(BPI_CampQuestCtrl2_C_CampQuest_IsExistNewIcon) == 0x000001, "Wrong size on BPI_CampQuestCtrl2_C_CampQuest_IsExistNewIcon");
static_assert(offsetof(BPI_CampQuestCtrl2_C_CampQuest_IsExistNewIcon, ExistNewIcon) == 0x000000, "Member 'BPI_CampQuestCtrl2_C_CampQuest_IsExistNewIcon::ExistNewIcon' has a wrong offset!");

// Function BPI_CampQuestCtrl2.BPI_CampQuestCtrl2_C.CampQuest_GetSubState
// 0x0004 (0x0004 - 0x0000)
struct BPI_CampQuestCtrl2_C_CampQuest_GetSubState final
{
public:
	int32                                         SubState;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CampQuestCtrl2_C_CampQuest_GetSubState) == 0x000004, "Wrong alignment on BPI_CampQuestCtrl2_C_CampQuest_GetSubState");
static_assert(sizeof(BPI_CampQuestCtrl2_C_CampQuest_GetSubState) == 0x000004, "Wrong size on BPI_CampQuestCtrl2_C_CampQuest_GetSubState");
static_assert(offsetof(BPI_CampQuestCtrl2_C_CampQuest_GetSubState, SubState) == 0x000000, "Member 'BPI_CampQuestCtrl2_C_CampQuest_GetSubState::SubState' has a wrong offset!");

// Function BPI_CampQuestCtrl2.BPI_CampQuestCtrl2_C.CampQuest_GetState
// 0x0001 (0x0001 - 0x0000)
struct BPI_CampQuestCtrl2_C_CampQuest_GetState final
{
public:
	E_CampQuest_CtrlState                         CampQuestState;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CampQuestCtrl2_C_CampQuest_GetState) == 0x000001, "Wrong alignment on BPI_CampQuestCtrl2_C_CampQuest_GetState");
static_assert(sizeof(BPI_CampQuestCtrl2_C_CampQuest_GetState) == 0x000001, "Wrong size on BPI_CampQuestCtrl2_C_CampQuest_GetState");
static_assert(offsetof(BPI_CampQuestCtrl2_C_CampQuest_GetState, CampQuestState) == 0x000000, "Member 'BPI_CampQuestCtrl2_C_CampQuest_GetState::CampQuestState' has a wrong offset!");

// Function BPI_CampQuestCtrl2.BPI_CampQuestCtrl2_C.CampQuest_Close
// 0x0001 (0x0001 - 0x0000)
struct BPI_CampQuestCtrl2_C_CampQuest_Close final
{
public:
	bool                                          SkipAnim;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CampQuestCtrl2_C_CampQuest_Close) == 0x000001, "Wrong alignment on BPI_CampQuestCtrl2_C_CampQuest_Close");
static_assert(sizeof(BPI_CampQuestCtrl2_C_CampQuest_Close) == 0x000001, "Wrong size on BPI_CampQuestCtrl2_C_CampQuest_Close");
static_assert(offsetof(BPI_CampQuestCtrl2_C_CampQuest_Close, SkipAnim) == 0x000000, "Member 'BPI_CampQuestCtrl2_C_CampQuest_Close::SkipAnim' has a wrong offset!");

// Function BPI_CampQuestCtrl2.BPI_CampQuestCtrl2_C.CampQuest_Open
// 0x0001 (0x0001 - 0x0000)
struct BPI_CampQuestCtrl2_C_CampQuest_Open final
{
public:
	E_WIDGET_PRIO                                 InWidgetPrio;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CampQuestCtrl2_C_CampQuest_Open) == 0x000001, "Wrong alignment on BPI_CampQuestCtrl2_C_CampQuest_Open");
static_assert(sizeof(BPI_CampQuestCtrl2_C_CampQuest_Open) == 0x000001, "Wrong size on BPI_CampQuestCtrl2_C_CampQuest_Open");
static_assert(offsetof(BPI_CampQuestCtrl2_C_CampQuest_Open, InWidgetPrio) == 0x000000, "Member 'BPI_CampQuestCtrl2_C_CampQuest_Open::InWidgetPrio' has a wrong offset!");

}

