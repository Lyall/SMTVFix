#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PlayerManager

#include "Basic.hpp"

#include "E_PLAYER_MANAGER_TYPE_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_PlayerManager.BPI_PlayerManager_C.BPI_SetGamePlayer
// 0x0010 (0x0010 - 0x0000)
struct BPI_PlayerManager_C_BPI_SetGamePlayer final
{
public:
	TArray<class APawn*>                          In;                                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BPI_PlayerManager_C_BPI_SetGamePlayer) == 0x000008, "Wrong alignment on BPI_PlayerManager_C_BPI_SetGamePlayer");
static_assert(sizeof(BPI_PlayerManager_C_BPI_SetGamePlayer) == 0x000010, "Wrong size on BPI_PlayerManager_C_BPI_SetGamePlayer");
static_assert(offsetof(BPI_PlayerManager_C_BPI_SetGamePlayer, In) == 0x000000, "Member 'BPI_PlayerManager_C_BPI_SetGamePlayer::In' has a wrong offset!");

// Function BPI_PlayerManager.BPI_PlayerManager_C.BPI_GetGamePlayer
// 0x0010 (0x0010 - 0x0000)
struct BPI_PlayerManager_C_BPI_GetGamePlayer final
{
public:
	TArray<class APawn*>                          List;                                              // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_PlayerManager_C_BPI_GetGamePlayer) == 0x000008, "Wrong alignment on BPI_PlayerManager_C_BPI_GetGamePlayer");
static_assert(sizeof(BPI_PlayerManager_C_BPI_GetGamePlayer) == 0x000010, "Wrong size on BPI_PlayerManager_C_BPI_GetGamePlayer");
static_assert(offsetof(BPI_PlayerManager_C_BPI_GetGamePlayer, List) == 0x000000, "Member 'BPI_PlayerManager_C_BPI_GetGamePlayer::List' has a wrong offset!");

// Function BPI_PlayerManager.BPI_PlayerManager_C.BPI_SetDeactiveLocation
// 0x0040 (0x0040 - 0x0000)
struct BPI_PlayerManager_C_BPI_SetDeactiveLocation final
{
public:
	E_PLAYER_MANAGER_TYPE                         PlayerType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DB4[0xF];                                     // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Location;                                          // 0x0010(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PlayerManager_C_BPI_SetDeactiveLocation) == 0x000010, "Wrong alignment on BPI_PlayerManager_C_BPI_SetDeactiveLocation");
static_assert(sizeof(BPI_PlayerManager_C_BPI_SetDeactiveLocation) == 0x000040, "Wrong size on BPI_PlayerManager_C_BPI_SetDeactiveLocation");
static_assert(offsetof(BPI_PlayerManager_C_BPI_SetDeactiveLocation, PlayerType) == 0x000000, "Member 'BPI_PlayerManager_C_BPI_SetDeactiveLocation::PlayerType' has a wrong offset!");
static_assert(offsetof(BPI_PlayerManager_C_BPI_SetDeactiveLocation, Location) == 0x000010, "Member 'BPI_PlayerManager_C_BPI_SetDeactiveLocation::Location' has a wrong offset!");

// Function BPI_PlayerManager.BPI_PlayerManager_C.BPI_GetDeactiveLocation
// 0x0040 (0x0040 - 0x0000)
struct BPI_PlayerManager_C_BPI_GetDeactiveLocation final
{
public:
	E_PLAYER_MANAGER_TYPE                         PlayerType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DB5[0xF];                                     // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Location;                                          // 0x0010(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PlayerManager_C_BPI_GetDeactiveLocation) == 0x000010, "Wrong alignment on BPI_PlayerManager_C_BPI_GetDeactiveLocation");
static_assert(sizeof(BPI_PlayerManager_C_BPI_GetDeactiveLocation) == 0x000040, "Wrong size on BPI_PlayerManager_C_BPI_GetDeactiveLocation");
static_assert(offsetof(BPI_PlayerManager_C_BPI_GetDeactiveLocation, PlayerType) == 0x000000, "Member 'BPI_PlayerManager_C_BPI_GetDeactiveLocation::PlayerType' has a wrong offset!");
static_assert(offsetof(BPI_PlayerManager_C_BPI_GetDeactiveLocation, Location) == 0x000010, "Member 'BPI_PlayerManager_C_BPI_GetDeactiveLocation::Location' has a wrong offset!");

// Function BPI_PlayerManager.BPI_PlayerManager_C.BPI_SetActive
// 0x0002 (0x0002 - 0x0000)
struct BPI_PlayerManager_C_BPI_SetActive final
{
public:
	E_PLAYER_MANAGER_TYPE                         PlayerType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PlayerManager_C_BPI_SetActive) == 0x000001, "Wrong alignment on BPI_PlayerManager_C_BPI_SetActive");
static_assert(sizeof(BPI_PlayerManager_C_BPI_SetActive) == 0x000002, "Wrong size on BPI_PlayerManager_C_BPI_SetActive");
static_assert(offsetof(BPI_PlayerManager_C_BPI_SetActive, PlayerType) == 0x000000, "Member 'BPI_PlayerManager_C_BPI_SetActive::PlayerType' has a wrong offset!");
static_assert(offsetof(BPI_PlayerManager_C_BPI_SetActive, Active) == 0x000001, "Member 'BPI_PlayerManager_C_BPI_SetActive::Active' has a wrong offset!");

// Function BPI_PlayerManager.BPI_PlayerManager_C.BPI_GetActive
// 0x0002 (0x0002 - 0x0000)
struct BPI_PlayerManager_C_BPI_GetActive final
{
public:
	E_PLAYER_MANAGER_TYPE                         PlayerType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_PlayerManager_C_BPI_GetActive) == 0x000001, "Wrong alignment on BPI_PlayerManager_C_BPI_GetActive");
static_assert(sizeof(BPI_PlayerManager_C_BPI_GetActive) == 0x000002, "Wrong size on BPI_PlayerManager_C_BPI_GetActive");
static_assert(offsetof(BPI_PlayerManager_C_BPI_GetActive, PlayerType) == 0x000000, "Member 'BPI_PlayerManager_C_BPI_GetActive::PlayerType' has a wrong offset!");
static_assert(offsetof(BPI_PlayerManager_C_BPI_GetActive, IsActive) == 0x000001, "Member 'BPI_PlayerManager_C_BPI_GetActive::IsActive' has a wrong offset!");

// Function BPI_PlayerManager.BPI_PlayerManager_C.BPI_GetContlrolActivePawn
// 0x0010 (0x0010 - 0x0000)
struct BPI_PlayerManager_C_BPI_GetContlrolActivePawn final
{
public:
	class APlayerBase_C*                          Pawn;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PLAYER_MANAGER_TYPE                         Type;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_PlayerManager_C_BPI_GetContlrolActivePawn) == 0x000008, "Wrong alignment on BPI_PlayerManager_C_BPI_GetContlrolActivePawn");
static_assert(sizeof(BPI_PlayerManager_C_BPI_GetContlrolActivePawn) == 0x000010, "Wrong size on BPI_PlayerManager_C_BPI_GetContlrolActivePawn");
static_assert(offsetof(BPI_PlayerManager_C_BPI_GetContlrolActivePawn, Pawn) == 0x000000, "Member 'BPI_PlayerManager_C_BPI_GetContlrolActivePawn::Pawn' has a wrong offset!");
static_assert(offsetof(BPI_PlayerManager_C_BPI_GetContlrolActivePawn, Type) == 0x000008, "Member 'BPI_PlayerManager_C_BPI_GetContlrolActivePawn::Type' has a wrong offset!");

// Function BPI_PlayerManager.BPI_PlayerManager_C.BPI_SetContlrolActivePawn
// 0x0010 (0x0010 - 0x0000)
struct BPI_PlayerManager_C_BPI_SetContlrolActivePawn final
{
public:
	class APlayerBase_C*                          Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PLAYER_MANAGER_TYPE                         Type;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_PlayerManager_C_BPI_SetContlrolActivePawn) == 0x000008, "Wrong alignment on BPI_PlayerManager_C_BPI_SetContlrolActivePawn");
static_assert(sizeof(BPI_PlayerManager_C_BPI_SetContlrolActivePawn) == 0x000010, "Wrong size on BPI_PlayerManager_C_BPI_SetContlrolActivePawn");
static_assert(offsetof(BPI_PlayerManager_C_BPI_SetContlrolActivePawn, Pawn) == 0x000000, "Member 'BPI_PlayerManager_C_BPI_SetContlrolActivePawn::Pawn' has a wrong offset!");
static_assert(offsetof(BPI_PlayerManager_C_BPI_SetContlrolActivePawn, Type) == 0x000008, "Member 'BPI_PlayerManager_C_BPI_SetContlrolActivePawn::Type' has a wrong offset!");

}

