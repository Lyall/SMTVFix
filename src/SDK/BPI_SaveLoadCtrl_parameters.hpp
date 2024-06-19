#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_SaveLoadCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "E_SaveLoadEndType_structs.hpp"


namespace SDK::Params
{

// Function BPI_SaveLoadCtrl.BPI_SaveLoadCtrl_C.setupLoadMenu
// 0x0001 (0x0001 - 0x0000)
struct BPI_SaveLoadCtrl_C_SetupLoadMenu final
{
public:
	E_Load_LOCATION                               InLocation;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SaveLoadCtrl_C_SetupLoadMenu) == 0x000001, "Wrong alignment on BPI_SaveLoadCtrl_C_SetupLoadMenu");
static_assert(sizeof(BPI_SaveLoadCtrl_C_SetupLoadMenu) == 0x000001, "Wrong size on BPI_SaveLoadCtrl_C_SetupLoadMenu");
static_assert(offsetof(BPI_SaveLoadCtrl_C_SetupLoadMenu, InLocation) == 0x000000, "Member 'BPI_SaveLoadCtrl_C_SetupLoadMenu::InLocation' has a wrong offset!");

// Function BPI_SaveLoadCtrl.BPI_SaveLoadCtrl_C.isEndSaveLoad
// 0x0001 (0x0001 - 0x0000)
struct BPI_SaveLoadCtrl_C_IsEndSaveLoad final
{
public:
	E_SaveLoadEndType                             OutEndType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SaveLoadCtrl_C_IsEndSaveLoad) == 0x000001, "Wrong alignment on BPI_SaveLoadCtrl_C_IsEndSaveLoad");
static_assert(sizeof(BPI_SaveLoadCtrl_C_IsEndSaveLoad) == 0x000001, "Wrong size on BPI_SaveLoadCtrl_C_IsEndSaveLoad");
static_assert(offsetof(BPI_SaveLoadCtrl_C_IsEndSaveLoad, OutEndType) == 0x000000, "Member 'BPI_SaveLoadCtrl_C_IsEndSaveLoad::OutEndType' has a wrong offset!");

// Function BPI_SaveLoadCtrl.BPI_SaveLoadCtrl_C.IsCancel
// 0x0001 (0x0001 - 0x0000)
struct BPI_SaveLoadCtrl_C_IsCancel final
{
public:
	bool                                          OutValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SaveLoadCtrl_C_IsCancel) == 0x000001, "Wrong alignment on BPI_SaveLoadCtrl_C_IsCancel");
static_assert(sizeof(BPI_SaveLoadCtrl_C_IsCancel) == 0x000001, "Wrong size on BPI_SaveLoadCtrl_C_IsCancel");
static_assert(offsetof(BPI_SaveLoadCtrl_C_IsCancel, OutValue) == 0x000000, "Member 'BPI_SaveLoadCtrl_C_IsCancel::OutValue' has a wrong offset!");

// Function BPI_SaveLoadCtrl.BPI_SaveLoadCtrl_C.setupSaveMenu
// 0x0001 (0x0001 - 0x0000)
struct BPI_SaveLoadCtrl_C_SetupSaveMenu final
{
public:
	E_SAVE_LOCATION                               InLocation;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SaveLoadCtrl_C_SetupSaveMenu) == 0x000001, "Wrong alignment on BPI_SaveLoadCtrl_C_SetupSaveMenu");
static_assert(sizeof(BPI_SaveLoadCtrl_C_SetupSaveMenu) == 0x000001, "Wrong size on BPI_SaveLoadCtrl_C_SetupSaveMenu");
static_assert(offsetof(BPI_SaveLoadCtrl_C_SetupSaveMenu, InLocation) == 0x000000, "Member 'BPI_SaveLoadCtrl_C_SetupSaveMenu::InLocation' has a wrong offset!");

// Function BPI_SaveLoadCtrl.BPI_SaveLoadCtrl_C.isSetUpComplete
// 0x0001 (0x0001 - 0x0000)
struct BPI_SaveLoadCtrl_C_IsSetUpComplete final
{
public:
	bool                                          OutValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SaveLoadCtrl_C_IsSetUpComplete) == 0x000001, "Wrong alignment on BPI_SaveLoadCtrl_C_IsSetUpComplete");
static_assert(sizeof(BPI_SaveLoadCtrl_C_IsSetUpComplete) == 0x000001, "Wrong size on BPI_SaveLoadCtrl_C_IsSetUpComplete");
static_assert(offsetof(BPI_SaveLoadCtrl_C_IsSetUpComplete, OutValue) == 0x000000, "Member 'BPI_SaveLoadCtrl_C_IsSetUpComplete::OutValue' has a wrong offset!");

// Function BPI_SaveLoadCtrl.BPI_SaveLoadCtrl_C.isStartedFieldReturnFade
// 0x0001 (0x0001 - 0x0000)
struct BPI_SaveLoadCtrl_C_IsStartedFieldReturnFade final
{
public:
	bool                                          IsStarted;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SaveLoadCtrl_C_IsStartedFieldReturnFade) == 0x000001, "Wrong alignment on BPI_SaveLoadCtrl_C_IsStartedFieldReturnFade");
static_assert(sizeof(BPI_SaveLoadCtrl_C_IsStartedFieldReturnFade) == 0x000001, "Wrong size on BPI_SaveLoadCtrl_C_IsStartedFieldReturnFade");
static_assert(offsetof(BPI_SaveLoadCtrl_C_IsStartedFieldReturnFade, IsStarted) == 0x000000, "Member 'BPI_SaveLoadCtrl_C_IsStartedFieldReturnFade::IsStarted' has a wrong offset!");

// Function BPI_SaveLoadCtrl.BPI_SaveLoadCtrl_C.getMediator
// 0x0008 (0x0008 - 0x0000)
struct BPI_SaveLoadCtrl_C_GetMediator final
{
public:
	class UObject*                                Mediator;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SaveLoadCtrl_C_GetMediator) == 0x000008, "Wrong alignment on BPI_SaveLoadCtrl_C_GetMediator");
static_assert(sizeof(BPI_SaveLoadCtrl_C_GetMediator) == 0x000008, "Wrong size on BPI_SaveLoadCtrl_C_GetMediator");
static_assert(offsetof(BPI_SaveLoadCtrl_C_GetMediator, Mediator) == 0x000000, "Member 'BPI_SaveLoadCtrl_C_GetMediator::Mediator' has a wrong offset!");

}

