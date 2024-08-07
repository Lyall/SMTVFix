#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_SimpeStatus

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_SimpeStatus.BPI_SimpeStatus_C.BPI_Init_SimpleStatus
// 0x0010 (0x0010 - 0x0000)
struct BPI_SimpeStatus_C_BPI_Init_SimpleStatus final
{
public:
	class UObject*                                StatusData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_WIDGET_PRIO                                 WidgetPriority;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SimpeStatus_C_BPI_Init_SimpleStatus) == 0x000008, "Wrong alignment on BPI_SimpeStatus_C_BPI_Init_SimpleStatus");
static_assert(sizeof(BPI_SimpeStatus_C_BPI_Init_SimpleStatus) == 0x000010, "Wrong size on BPI_SimpeStatus_C_BPI_Init_SimpleStatus");
static_assert(offsetof(BPI_SimpeStatus_C_BPI_Init_SimpleStatus, StatusData) == 0x000000, "Member 'BPI_SimpeStatus_C_BPI_Init_SimpleStatus::StatusData' has a wrong offset!");
static_assert(offsetof(BPI_SimpeStatus_C_BPI_Init_SimpleStatus, WidgetPriority) == 0x000008, "Member 'BPI_SimpeStatus_C_BPI_Init_SimpleStatus::WidgetPriority' has a wrong offset!");
static_assert(offsetof(BPI_SimpeStatus_C_BPI_Init_SimpleStatus, Success) == 0x000009, "Member 'BPI_SimpeStatus_C_BPI_Init_SimpleStatus::Success' has a wrong offset!");

// Function BPI_SimpeStatus.BPI_SimpeStatus_C.BPI_Open_SimpleStatus
// 0x0002 (0x0002 - 0x0000)
struct BPI_SimpeStatus_C_BPI_Open_SimpleStatus final
{
public:
	bool                                          Immediate;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Dummy;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SimpeStatus_C_BPI_Open_SimpleStatus) == 0x000001, "Wrong alignment on BPI_SimpeStatus_C_BPI_Open_SimpleStatus");
static_assert(sizeof(BPI_SimpeStatus_C_BPI_Open_SimpleStatus) == 0x000002, "Wrong size on BPI_SimpeStatus_C_BPI_Open_SimpleStatus");
static_assert(offsetof(BPI_SimpeStatus_C_BPI_Open_SimpleStatus, Immediate) == 0x000000, "Member 'BPI_SimpeStatus_C_BPI_Open_SimpleStatus::Immediate' has a wrong offset!");
static_assert(offsetof(BPI_SimpeStatus_C_BPI_Open_SimpleStatus, Dummy) == 0x000001, "Member 'BPI_SimpeStatus_C_BPI_Open_SimpleStatus::Dummy' has a wrong offset!");

// Function BPI_SimpeStatus.BPI_SimpeStatus_C.BPI_ChangeStatus
// 0x0001 (0x0001 - 0x0000)
struct BPI_SimpeStatus_C_BPI_ChangeStatus final
{
public:
	bool                                          Dummy;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SimpeStatus_C_BPI_ChangeStatus) == 0x000001, "Wrong alignment on BPI_SimpeStatus_C_BPI_ChangeStatus");
static_assert(sizeof(BPI_SimpeStatus_C_BPI_ChangeStatus) == 0x000001, "Wrong size on BPI_SimpeStatus_C_BPI_ChangeStatus");
static_assert(offsetof(BPI_SimpeStatus_C_BPI_ChangeStatus, Dummy) == 0x000000, "Member 'BPI_SimpeStatus_C_BPI_ChangeStatus::Dummy' has a wrong offset!");

// Function BPI_SimpeStatus.BPI_SimpeStatus_C.BPI_Close_SimpleStatus
// 0x0002 (0x0002 - 0x0000)
struct BPI_SimpeStatus_C_BPI_Close_SimpleStatus final
{
public:
	bool                                          Immediate;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Dummy;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SimpeStatus_C_BPI_Close_SimpleStatus) == 0x000001, "Wrong alignment on BPI_SimpeStatus_C_BPI_Close_SimpleStatus");
static_assert(sizeof(BPI_SimpeStatus_C_BPI_Close_SimpleStatus) == 0x000002, "Wrong size on BPI_SimpeStatus_C_BPI_Close_SimpleStatus");
static_assert(offsetof(BPI_SimpeStatus_C_BPI_Close_SimpleStatus, Immediate) == 0x000000, "Member 'BPI_SimpeStatus_C_BPI_Close_SimpleStatus::Immediate' has a wrong offset!");
static_assert(offsetof(BPI_SimpeStatus_C_BPI_Close_SimpleStatus, Dummy) == 0x000001, "Member 'BPI_SimpeStatus_C_BPI_Close_SimpleStatus::Dummy' has a wrong offset!");

// Function BPI_SimpeStatus.BPI_SimpeStatus_C.BPI_IsEndAnimation_SimpleStatus
// 0x0001 (0x0001 - 0x0000)
struct BPI_SimpeStatus_C_BPI_IsEndAnimation_SimpleStatus final
{
public:
	bool                                          IsEnd;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SimpeStatus_C_BPI_IsEndAnimation_SimpleStatus) == 0x000001, "Wrong alignment on BPI_SimpeStatus_C_BPI_IsEndAnimation_SimpleStatus");
static_assert(sizeof(BPI_SimpeStatus_C_BPI_IsEndAnimation_SimpleStatus) == 0x000001, "Wrong size on BPI_SimpeStatus_C_BPI_IsEndAnimation_SimpleStatus");
static_assert(offsetof(BPI_SimpeStatus_C_BPI_IsEndAnimation_SimpleStatus, IsEnd) == 0x000000, "Member 'BPI_SimpeStatus_C_BPI_IsEndAnimation_SimpleStatus::IsEnd' has a wrong offset!");

}

