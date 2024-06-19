#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleUtilIconActor

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BattleUtilIconActor.BattleUtilIconActor_C.ExecuteUbergraph_BattleUtilIconActor
// 0x0018 (0x0018 - 0x0000)
struct BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A11[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_BtlUtilIcon_C*                      CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddToWidgetPrio_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor) == 0x000008, "Wrong alignment on BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor");
static_assert(sizeof(BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor) == 0x000018, "Wrong size on BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor");
static_assert(offsetof(BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor, EntryPoint) == 0x000000, "Member 'BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor, CallFunc_AddToWidgetPrio_ReturnValue) == 0x000014, "Member 'BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor::CallFunc_AddToWidgetPrio_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor, K2Node_Event_EndPlayReason) == 0x000015, "Member 'BattleUtilIconActor_C_ExecuteUbergraph_BattleUtilIconActor::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BattleUtilIconActor_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleUtilIconActor_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BattleUtilIconActor_C_ReceiveEndPlay");
static_assert(sizeof(BattleUtilIconActor_C_ReceiveEndPlay) == 0x000001, "Wrong size on BattleUtilIconActor_C_ReceiveEndPlay");
static_assert(offsetof(BattleUtilIconActor_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BattleUtilIconActor_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BattleUtilIconActor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleUtilIconActor_C_ReceiveTick) == 0x000004, "Wrong alignment on BattleUtilIconActor_C_ReceiveTick");
static_assert(sizeof(BattleUtilIconActor_C_ReceiveTick) == 0x000004, "Wrong size on BattleUtilIconActor_C_ReceiveTick");
static_assert(offsetof(BattleUtilIconActor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BattleUtilIconActor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.Show
// 0x0150 (0x0150 - 0x0000)
struct BattleUtilIconActor_C_Show final
{
public:
	E_BTL_UTIL_ICON_TYPE                          Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A12[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayRate;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0014(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A13[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A14[0xC];                                     // 0x00C4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00D0(0x0030)(IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A15[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x013C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleUtilIconActor_C_Show) == 0x000010, "Wrong alignment on BattleUtilIconActor_C_Show");
static_assert(sizeof(BattleUtilIconActor_C_Show) == 0x000150, "Wrong size on BattleUtilIconActor_C_Show");
static_assert(offsetof(BattleUtilIconActor_C_Show, Type) == 0x000000, "Member 'BattleUtilIconActor_C_Show::Type' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, Location) == 0x000004, "Member 'BattleUtilIconActor_C_Show::Location' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, PlayRate) == 0x000010, "Member 'BattleUtilIconActor_C_Show::PlayRate' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000014, "Member 'BattleUtilIconActor_C_Show::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_K2_SetActorLocation_ReturnValue) == 0x00009C, "Member 'BattleUtilIconActor_C_Show::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_BreakTransform_Location) == 0x0000A0, "Member 'BattleUtilIconActor_C_Show::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_BreakTransform_Rotation) == 0x0000AC, "Member 'BattleUtilIconActor_C_Show::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_BreakTransform_Scale) == 0x0000B8, "Member 'BattleUtilIconActor_C_Show::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_MakeTransform_ReturnValue) == 0x0000D0, "Member 'BattleUtilIconActor_C_Show::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_GetPlayerController_ReturnValue) == 0x000100, "Member 'BattleUtilIconActor_C_Show::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x000108, "Member 'BattleUtilIconActor_C_Show::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x000110, "Member 'BattleUtilIconActor_C_Show::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_BreakVector2D_X) == 0x000114, "Member 'BattleUtilIconActor_C_Show::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_BreakVector2D_Y) == 0x000118, "Member 'BattleUtilIconActor_C_Show::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_FTrunc_ReturnValue) == 0x00011C, "Member 'BattleUtilIconActor_C_Show::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_FTrunc_ReturnValue_1) == 0x000120, "Member 'BattleUtilIconActor_C_Show::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000124, "Member 'BattleUtilIconActor_C_Show::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000128, "Member 'BattleUtilIconActor_C_Show::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, K2Node_CreateDelegate_OutputDelegate) == 0x00012C, "Member 'BattleUtilIconActor_C_Show::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_Show, CallFunc_MakeVector2D_ReturnValue) == 0x00013C, "Member 'BattleUtilIconActor_C_Show::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.IsFinished
// 0x0002 (0x0002 - 0x0000)
struct BattleUtilIconActor_C_IsFinished final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFinished_retValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleUtilIconActor_C_IsFinished) == 0x000001, "Wrong alignment on BattleUtilIconActor_C_IsFinished");
static_assert(sizeof(BattleUtilIconActor_C_IsFinished) == 0x000002, "Wrong size on BattleUtilIconActor_C_IsFinished");
static_assert(offsetof(BattleUtilIconActor_C_IsFinished, RetValue) == 0x000000, "Member 'BattleUtilIconActor_C_IsFinished::RetValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_IsFinished, CallFunc_IsFinished_retValue) == 0x000001, "Member 'BattleUtilIconActor_C_IsFinished::CallFunc_IsFinished_retValue' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.ShowByPartyIndex
// 0x0130 (0x0130 - 0x0000)
struct BattleUtilIconActor_C_ShowByPartyIndex final
{
public:
	E_BTL_UTIL_ICON_TYPE                          Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A16[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlayRate;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PartyIndex;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0014(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A17[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A18[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleParty_C>    CallFunc_GetBIPartySystem_retValue;                // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_CharaBaseAccessor_C> CallFunc_BI_GetPartyUnit_retValue;                 // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A19[0x8];                                     // 0x00F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_BI_GetSocketTransform_RetVal;             // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleUtilIconActor_C_ShowByPartyIndex) == 0x000010, "Wrong alignment on BattleUtilIconActor_C_ShowByPartyIndex");
static_assert(sizeof(BattleUtilIconActor_C_ShowByPartyIndex) == 0x000130, "Wrong size on BattleUtilIconActor_C_ShowByPartyIndex");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, Type) == 0x000000, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::Type' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, PlayRate) == 0x000004, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::PlayRate' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, PartyIndex) == 0x000008, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::PartyIndex' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, SocketName) == 0x00000C, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::SocketName' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000014, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_K2_SetActorTransform_ReturnValue) == 0x00009C, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00009D, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_GetPlayerController_ReturnValue) == 0x0000A0, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_BreakTransform_Location) == 0x0000A8, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_BreakTransform_Rotation) == 0x0000B4, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_BreakTransform_Scale) == 0x0000C0, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x0000CC, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x0000D4, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_GetBIPartySystem_retValue) == 0x0000D8, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_GetBIPartySystem_retValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_BI_GetPartyUnit_retValue) == 0x0000E8, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_BI_GetPartyUnit_retValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_ShowByPartyIndex, CallFunc_BI_GetSocketTransform_RetVal) == 0x000100, "Member 'BattleUtilIconActor_C_ShowByPartyIndex::CallFunc_BI_GetSocketTransform_RetVal' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.GetBIPartySystem
// 0x0030 (0x0030 - 0x0000)
struct BattleUtilIconActor_C_GetBIPartySystem final
{
public:
	TScriptInterface<class IBPI_BattleParty_C>    RetValue;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_GetBIMainWork_retValue;                   // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_BattleParty_C>    CallFunc_BI_GetPartySystem_ret;                    // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleUtilIconActor_C_GetBIPartySystem) == 0x000008, "Wrong alignment on BattleUtilIconActor_C_GetBIPartySystem");
static_assert(sizeof(BattleUtilIconActor_C_GetBIPartySystem) == 0x000030, "Wrong size on BattleUtilIconActor_C_GetBIPartySystem");
static_assert(offsetof(BattleUtilIconActor_C_GetBIPartySystem, RetValue) == 0x000000, "Member 'BattleUtilIconActor_C_GetBIPartySystem::RetValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_GetBIPartySystem, CallFunc_GetBIMainWork_retValue) == 0x000010, "Member 'BattleUtilIconActor_C_GetBIPartySystem::CallFunc_GetBIMainWork_retValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_GetBIPartySystem, CallFunc_BI_GetPartySystem_ret) == 0x000020, "Member 'BattleUtilIconActor_C_GetBIPartySystem::CallFunc_BI_GetPartySystem_ret' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.GetBIMainWork
// 0x0030 (0x0030 - 0x0000)
struct BattleUtilIconActor_C_GetBIMainWork final
{
public:
	TScriptInterface<class IBPI_BattleMain_C>     RetValue;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleMain_C>     K2Node_DynamicCast_AsBPI_Battle_Main;              // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleUtilIconActor_C_GetBIMainWork) == 0x000008, "Wrong alignment on BattleUtilIconActor_C_GetBIMainWork");
static_assert(sizeof(BattleUtilIconActor_C_GetBIMainWork) == 0x000030, "Wrong size on BattleUtilIconActor_C_GetBIMainWork");
static_assert(offsetof(BattleUtilIconActor_C_GetBIMainWork, RetValue) == 0x000000, "Member 'BattleUtilIconActor_C_GetBIMainWork::RetValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_GetBIMainWork, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BattleUtilIconActor_C_GetBIMainWork::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_GetBIMainWork, K2Node_DynamicCast_AsBPI_Battle_Main) == 0x000018, "Member 'BattleUtilIconActor_C_GetBIMainWork::K2Node_DynamicCast_AsBPI_Battle_Main' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_GetBIMainWork, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BattleUtilIconActor_C_GetBIMainWork::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.UpdateActorPosition
// 0x0068 (0x0068 - 0x0000)
struct BattleUtilIconActor_C_UpdateActorPosition final
{
public:
	float                                         Tick;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A1A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1B[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1C[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleUtilIconActor_C_UpdateActorPosition) == 0x000008, "Wrong alignment on BattleUtilIconActor_C_UpdateActorPosition");
static_assert(sizeof(BattleUtilIconActor_C_UpdateActorPosition) == 0x000068, "Wrong size on BattleUtilIconActor_C_UpdateActorPosition");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, Tick) == 0x000000, "Member 'BattleUtilIconActor_C_UpdateActorPosition::Tick' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_BreakTransform_Location) == 0x000010, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_BreakTransform_Rotation) == 0x00001C, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_BreakTransform_Scale) == 0x000028, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000034, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x000038, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x000040, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_BreakVector2D_X) == 0x000044, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_BreakVector2D_Y) == 0x000048, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_FTrunc_ReturnValue) == 0x00004C, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_FTrunc_ReturnValue_1) == 0x000050, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000054, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000058, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_UpdateActorPosition, CallFunc_MakeVector2D_ReturnValue) == 0x00005C, "Member 'BattleUtilIconActor_C_UpdateActorPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.SetWidgetVisibility
// 0x0005 (0x0005 - 0x0000)
struct BattleUtilIconActor_C_SetWidgetVisibility final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleUtilIconActor_C_SetWidgetVisibility) == 0x000001, "Wrong alignment on BattleUtilIconActor_C_SetWidgetVisibility");
static_assert(sizeof(BattleUtilIconActor_C_SetWidgetVisibility) == 0x000005, "Wrong size on BattleUtilIconActor_C_SetWidgetVisibility");
static_assert(offsetof(BattleUtilIconActor_C_SetWidgetVisibility, IsVisible) == 0x000000, "Member 'BattleUtilIconActor_C_SetWidgetVisibility::IsVisible' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_SetWidgetVisibility, Temp_bool_Variable) == 0x000001, "Member 'BattleUtilIconActor_C_SetWidgetVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_SetWidgetVisibility, Temp_byte_Variable) == 0x000002, "Member 'BattleUtilIconActor_C_SetWidgetVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_SetWidgetVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'BattleUtilIconActor_C_SetWidgetVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_SetWidgetVisibility, K2Node_Select_Default) == 0x000004, "Member 'BattleUtilIconActor_C_SetWidgetVisibility::K2Node_Select_Default' has a wrong offset!");

// Function BattleUtilIconActor.BattleUtilIconActor_C.BI_IsFinished
// 0x0002 (0x0002 - 0x0000)
struct BattleUtilIconActor_C_BI_IsFinished final
{
public:
	bool                                          IsFinished;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFinished_retValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleUtilIconActor_C_BI_IsFinished) == 0x000001, "Wrong alignment on BattleUtilIconActor_C_BI_IsFinished");
static_assert(sizeof(BattleUtilIconActor_C_BI_IsFinished) == 0x000002, "Wrong size on BattleUtilIconActor_C_BI_IsFinished");
static_assert(offsetof(BattleUtilIconActor_C_BI_IsFinished, IsFinished) == 0x000000, "Member 'BattleUtilIconActor_C_BI_IsFinished::IsFinished' has a wrong offset!");
static_assert(offsetof(BattleUtilIconActor_C_BI_IsFinished, CallFunc_IsFinished_retValue) == 0x000001, "Member 'BattleUtilIconActor_C_BI_IsFinished::CallFunc_IsFinished_retValue' has a wrong offset!");

}

