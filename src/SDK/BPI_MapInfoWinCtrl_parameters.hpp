#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapInfoWinCtrl

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_MapInfoWinCtrl.BPI_MapInfoWinCtrl_C.BPI_OpenMapInfo
// 0x0048 (0x0048 - 0x0000)
struct BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo final
{
public:
	class FName                                   Label;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 TagParams;                                         // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TSoftObjectPtr<class USoundAtomCue>           OpenSE;                                            // 0x0018(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          RemoveSameInfo;                                    // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B24[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RemoveSameInfoID;                                  // 0x0044(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo) == 0x000008, "Wrong alignment on BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo");
static_assert(sizeof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo) == 0x000048, "Wrong size on BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo, Label) == 0x000000, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo::Label' has a wrong offset!");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo, TagParams) == 0x000008, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo::TagParams' has a wrong offset!");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo, OpenSE) == 0x000018, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo::OpenSE' has a wrong offset!");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo, RemoveSameInfo) == 0x000040, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo::RemoveSameInfo' has a wrong offset!");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo, RemoveSameInfoID) == 0x000044, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo::RemoveSameInfoID' has a wrong offset!");

// Function BPI_MapInfoWinCtrl.BPI_MapInfoWinCtrl_C.BPI_CheckActive
// 0x0001 (0x0001 - 0x0000)
struct BPI_MapInfoWinCtrl_C_BPI_CheckActive final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MapInfoWinCtrl_C_BPI_CheckActive) == 0x000001, "Wrong alignment on BPI_MapInfoWinCtrl_C_BPI_CheckActive");
static_assert(sizeof(BPI_MapInfoWinCtrl_C_BPI_CheckActive) == 0x000001, "Wrong size on BPI_MapInfoWinCtrl_C_BPI_CheckActive");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_CheckActive, Active) == 0x000000, "Member 'BPI_MapInfoWinCtrl_C_BPI_CheckActive::Active' has a wrong offset!");

// Function BPI_MapInfoWinCtrl.BPI_MapInfoWinCtrl_C.BPI_SetLock_MapInfo
// 0x0001 (0x0001 - 0x0000)
struct BPI_MapInfoWinCtrl_C_BPI_SetLock_MapInfo final
{
public:
	bool                                          Lock;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MapInfoWinCtrl_C_BPI_SetLock_MapInfo) == 0x000001, "Wrong alignment on BPI_MapInfoWinCtrl_C_BPI_SetLock_MapInfo");
static_assert(sizeof(BPI_MapInfoWinCtrl_C_BPI_SetLock_MapInfo) == 0x000001, "Wrong size on BPI_MapInfoWinCtrl_C_BPI_SetLock_MapInfo");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_SetLock_MapInfo, Lock) == 0x000000, "Member 'BPI_MapInfoWinCtrl_C_BPI_SetLock_MapInfo::Lock' has a wrong offset!");

// Function BPI_MapInfoWinCtrl.BPI_MapInfoWinCtrl_C.BPI_SetShowTime
// 0x0004 (0x0004 - 0x0000)
struct BPI_MapInfoWinCtrl_C_BPI_SetShowTime final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapInfoWinCtrl_C_BPI_SetShowTime) == 0x000004, "Wrong alignment on BPI_MapInfoWinCtrl_C_BPI_SetShowTime");
static_assert(sizeof(BPI_MapInfoWinCtrl_C_BPI_SetShowTime) == 0x000004, "Wrong size on BPI_MapInfoWinCtrl_C_BPI_SetShowTime");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_SetShowTime, Time) == 0x000000, "Member 'BPI_MapInfoWinCtrl_C_BPI_SetShowTime::Time' has a wrong offset!");

// Function BPI_MapInfoWinCtrl.BPI_MapInfoWinCtrl_C.BPI_OpenMapInfo_AndMakkaWindow
// 0x0008 (0x0008 - 0x0000)
struct BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_AndMakkaWindow final
{
public:
	int32                                         PrevMakka;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddMakka;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_AndMakkaWindow) == 0x000004, "Wrong alignment on BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_AndMakkaWindow");
static_assert(sizeof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_AndMakkaWindow) == 0x000008, "Wrong size on BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_AndMakkaWindow");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_AndMakkaWindow, PrevMakka) == 0x000000, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_AndMakkaWindow::PrevMakka' has a wrong offset!");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_AndMakkaWindow, AddMakka) == 0x000004, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_AndMakkaWindow::AddMakka' has a wrong offset!");

// Function BPI_MapInfoWinCtrl.BPI_MapInfoWinCtrl_C.BPI_ClearMapInfo
// 0x0008 (0x0008 - 0x0000)
struct BPI_MapInfoWinCtrl_C_BPI_ClearMapInfo final
{
public:
	class FName                                   Label;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapInfoWinCtrl_C_BPI_ClearMapInfo) == 0x000004, "Wrong alignment on BPI_MapInfoWinCtrl_C_BPI_ClearMapInfo");
static_assert(sizeof(BPI_MapInfoWinCtrl_C_BPI_ClearMapInfo) == 0x000008, "Wrong size on BPI_MapInfoWinCtrl_C_BPI_ClearMapInfo");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_ClearMapInfo, Label) == 0x000000, "Member 'BPI_MapInfoWinCtrl_C_BPI_ClearMapInfo::Label' has a wrong offset!");

// Function BPI_MapInfoWinCtrl.BPI_MapInfoWinCtrl_C.BPI_CancelMissionMapInfo
// 0x0004 (0x0004 - 0x0000)
struct BPI_MapInfoWinCtrl_C_BPI_CancelMissionMapInfo final
{
public:
	int32                                         MissionId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapInfoWinCtrl_C_BPI_CancelMissionMapInfo) == 0x000004, "Wrong alignment on BPI_MapInfoWinCtrl_C_BPI_CancelMissionMapInfo");
static_assert(sizeof(BPI_MapInfoWinCtrl_C_BPI_CancelMissionMapInfo) == 0x000004, "Wrong size on BPI_MapInfoWinCtrl_C_BPI_CancelMissionMapInfo");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_CancelMissionMapInfo, MissionId) == 0x000000, "Member 'BPI_MapInfoWinCtrl_C_BPI_CancelMissionMapInfo::MissionId' has a wrong offset!");

// Function BPI_MapInfoWinCtrl.BPI_MapInfoWinCtrl_C.BPI_OpenMapInfo_Mission
// 0x0048 (0x0048 - 0x0000)
struct BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission final
{
public:
	class FName                                   Label;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 TagParams;                                         // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TSoftObjectPtr<class USoundAtomCue>           OpenSE;                                            // 0x0018(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         MissionId;                                         // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission) == 0x000008, "Wrong alignment on BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission");
static_assert(sizeof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission) == 0x000048, "Wrong size on BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission, Label) == 0x000000, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission::Label' has a wrong offset!");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission, TagParams) == 0x000008, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission::TagParams' has a wrong offset!");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission, OpenSE) == 0x000018, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission::OpenSE' has a wrong offset!");
static_assert(offsetof(BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission, MissionId) == 0x000040, "Member 'BPI_MapInfoWinCtrl_C_BPI_OpenMapInfo_Mission::MissionId' has a wrong offset!");

}
