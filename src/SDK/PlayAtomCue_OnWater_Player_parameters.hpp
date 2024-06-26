#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayAtomCue_OnWater_Player

#include "Basic.hpp"


namespace SDK::Params
{

// Function PlayAtomCue_OnWater_Player.PlayAtomCue_OnWater_Player_C.GetNotifyName
// 0x0030 (0x0030 - 0x0000)
struct PlayAtomCue_OnWater_Player_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNotifyName_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayAtomCue_OnWater_Player_C_GetNotifyName) == 0x000008, "Wrong alignment on PlayAtomCue_OnWater_Player_C_GetNotifyName");
static_assert(sizeof(PlayAtomCue_OnWater_Player_C_GetNotifyName) == 0x000030, "Wrong size on PlayAtomCue_OnWater_Player_C_GetNotifyName");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'PlayAtomCue_OnWater_Player_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_GetNotifyName, CallFunc_GetNotifyName_ReturnValue) == 0x000010, "Member 'PlayAtomCue_OnWater_Player_C_GetNotifyName::CallFunc_GetNotifyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_GetNotifyName, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'PlayAtomCue_OnWater_Player_C_GetNotifyName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function PlayAtomCue_OnWater_Player.PlayAtomCue_OnWater_Player_C.Received_Notify
// 0x0030 (0x0030 - 0x0000)
struct PlayAtomCue_OnWater_Player_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Received_Notify_ReturnValue;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_675A[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerBase_C*                          K2Node_DynamicCast_AsPlayer_Base;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayAtomCue_OnWater_Player_C_Received_Notify) == 0x000008, "Wrong alignment on PlayAtomCue_OnWater_Player_C_Received_Notify");
static_assert(sizeof(PlayAtomCue_OnWater_Player_C_Received_Notify) == 0x000030, "Wrong size on PlayAtomCue_OnWater_Player_C_Received_Notify");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_Received_Notify, MeshComp) == 0x000000, "Member 'PlayAtomCue_OnWater_Player_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_Received_Notify, Animation) == 0x000008, "Member 'PlayAtomCue_OnWater_Player_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_Received_Notify, ReturnValue) == 0x000010, "Member 'PlayAtomCue_OnWater_Player_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_Received_Notify, CallFunc_Received_Notify_ReturnValue) == 0x000011, "Member 'PlayAtomCue_OnWater_Player_C_Received_Notify::CallFunc_Received_Notify_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'PlayAtomCue_OnWater_Player_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_Received_Notify, K2Node_DynamicCast_AsPlayer_Base) == 0x000020, "Member 'PlayAtomCue_OnWater_Player_C_Received_Notify::K2Node_DynamicCast_AsPlayer_Base' has a wrong offset!");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'PlayAtomCue_OnWater_Player_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayAtomCue_OnWater_Player_C_Received_Notify, CallFunc_Conv_IntToBool_ReturnValue) == 0x000029, "Member 'PlayAtomCue_OnWater_Player_C_Received_Notify::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");

}

