#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ProjectPlayerCameraManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_ProjectPlayerCameraManager.BPI_ProjectPlayerCameraManager_C.MapCameraForce_IN
// 0x000C (0x000C - 0x0000)
struct BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN final
{
public:
	float                                         FOV;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Height;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN) == 0x000004, "Wrong alignment on BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN");
static_assert(sizeof(BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN) == 0x00000C, "Wrong size on BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN");
static_assert(offsetof(BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN, FOV) == 0x000000, "Member 'BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN::FOV' has a wrong offset!");
static_assert(offsetof(BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN, Distance) == 0x000004, "Member 'BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN::Distance' has a wrong offset!");
static_assert(offsetof(BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN, Height) == 0x000008, "Member 'BPI_ProjectPlayerCameraManager_C_MapCameraForce_IN::Height' has a wrong offset!");

// Function BPI_ProjectPlayerCameraManager.BPI_ProjectPlayerCameraManager_C.IsRequestFinishCameraUpdateDone
// 0x0001 (0x0001 - 0x0000)
struct BPI_ProjectPlayerCameraManager_C_IsRequestFinishCameraUpdateDone final
{
public:
	bool                                          Done;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ProjectPlayerCameraManager_C_IsRequestFinishCameraUpdateDone) == 0x000001, "Wrong alignment on BPI_ProjectPlayerCameraManager_C_IsRequestFinishCameraUpdateDone");
static_assert(sizeof(BPI_ProjectPlayerCameraManager_C_IsRequestFinishCameraUpdateDone) == 0x000001, "Wrong size on BPI_ProjectPlayerCameraManager_C_IsRequestFinishCameraUpdateDone");
static_assert(offsetof(BPI_ProjectPlayerCameraManager_C_IsRequestFinishCameraUpdateDone, Done) == 0x000000, "Member 'BPI_ProjectPlayerCameraManager_C_IsRequestFinishCameraUpdateDone::Done' has a wrong offset!");

// Function BPI_ProjectPlayerCameraManager.BPI_ProjectPlayerCameraManager_C.SetForceKeepMeshesVisible
// 0x0001 (0x0001 - 0x0000)
struct BPI_ProjectPlayerCameraManager_C_SetForceKeepMeshesVisible final
{
public:
	bool                                          ForceKeepVisible;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ProjectPlayerCameraManager_C_SetForceKeepMeshesVisible) == 0x000001, "Wrong alignment on BPI_ProjectPlayerCameraManager_C_SetForceKeepMeshesVisible");
static_assert(sizeof(BPI_ProjectPlayerCameraManager_C_SetForceKeepMeshesVisible) == 0x000001, "Wrong size on BPI_ProjectPlayerCameraManager_C_SetForceKeepMeshesVisible");
static_assert(offsetof(BPI_ProjectPlayerCameraManager_C_SetForceKeepMeshesVisible, ForceKeepVisible) == 0x000000, "Member 'BPI_ProjectPlayerCameraManager_C_SetForceKeepMeshesVisible::ForceKeepVisible' has a wrong offset!");

// Function BPI_ProjectPlayerCameraManager.BPI_ProjectPlayerCameraManager_C.GetDefaultFOV
// 0x0004 (0x0004 - 0x0000)
struct BPI_ProjectPlayerCameraManager_C_GetDefaultFOV final
{
public:
	float                                         DefaultFOV;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_ProjectPlayerCameraManager_C_GetDefaultFOV) == 0x000004, "Wrong alignment on BPI_ProjectPlayerCameraManager_C_GetDefaultFOV");
static_assert(sizeof(BPI_ProjectPlayerCameraManager_C_GetDefaultFOV) == 0x000004, "Wrong size on BPI_ProjectPlayerCameraManager_C_GetDefaultFOV");
static_assert(offsetof(BPI_ProjectPlayerCameraManager_C_GetDefaultFOV, DefaultFOV) == 0x000000, "Member 'BPI_ProjectPlayerCameraManager_C_GetDefaultFOV::DefaultFOV' has a wrong offset!");

// Function BPI_ProjectPlayerCameraManager.BPI_ProjectPlayerCameraManager_C.Player Camera Manual Tick
// 0x0001 (0x0001 - 0x0000)
struct BPI_ProjectPlayerCameraManager_C_Player_Camera_Manual_Tick final
{
public:
	bool                                          Dummy;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ProjectPlayerCameraManager_C_Player_Camera_Manual_Tick) == 0x000001, "Wrong alignment on BPI_ProjectPlayerCameraManager_C_Player_Camera_Manual_Tick");
static_assert(sizeof(BPI_ProjectPlayerCameraManager_C_Player_Camera_Manual_Tick) == 0x000001, "Wrong size on BPI_ProjectPlayerCameraManager_C_Player_Camera_Manual_Tick");
static_assert(offsetof(BPI_ProjectPlayerCameraManager_C_Player_Camera_Manual_Tick, Dummy) == 0x000000, "Member 'BPI_ProjectPlayerCameraManager_C_Player_Camera_Manual_Tick::Dummy' has a wrong offset!");

// Function BPI_ProjectPlayerCameraManager.BPI_ProjectPlayerCameraManager_C.Player Camera Root Init
// 0x0001 (0x0001 - 0x0000)
struct BPI_ProjectPlayerCameraManager_C_Player_Camera_Root_Init final
{
public:
	bool                                          Dummy;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ProjectPlayerCameraManager_C_Player_Camera_Root_Init) == 0x000001, "Wrong alignment on BPI_ProjectPlayerCameraManager_C_Player_Camera_Root_Init");
static_assert(sizeof(BPI_ProjectPlayerCameraManager_C_Player_Camera_Root_Init) == 0x000001, "Wrong size on BPI_ProjectPlayerCameraManager_C_Player_Camera_Root_Init");
static_assert(offsetof(BPI_ProjectPlayerCameraManager_C_Player_Camera_Root_Init, Dummy) == 0x000000, "Member 'BPI_ProjectPlayerCameraManager_C_Player_Camera_Root_Init::Dummy' has a wrong offset!");

}

