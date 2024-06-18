#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_MAP_MOVE_AACTION

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MEC_MAP_MOVE_AACTION.MEC_MAP_MOVE_AACTION_C.ExecuteUbergraph_MEC_MAP_MOVE_AACTION
// 0x00E8 (0x00E8 - 0x0000)
struct MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_979E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_979F[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97A0[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapID_ReturnValue;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAreaID_ReturnValue;                    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSaveUniqueIdFromDataId_ReturnValue;    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION) == 0x000008, "Wrong alignment on MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION");
static_assert(sizeof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION) == 0x0000E8, "Wrong size on MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, EntryPoint) == 0x000000, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::EntryPoint' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000B0, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_OtherActor) == 0x0000B8, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_OtherComp) == 0x0000C0, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000C8, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, CallFunc_GetMinimapManager_ReturnValue) == 0x0000D0, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, CallFunc_GetMapID_ReturnValue) == 0x0000D8, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::CallFunc_GetMapID_ReturnValue' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, CallFunc_GetAreaID_ReturnValue) == 0x0000DC, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::CallFunc_GetAreaID_ReturnValue' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION, CallFunc_GetSaveUniqueIdFromDataId_ReturnValue) == 0x0000E0, "Member 'MEC_MAP_MOVE_AACTION_C_ExecuteUbergraph_MEC_MAP_MOVE_AACTION::CallFunc_GetSaveUniqueIdFromDataId_ReturnValue' has a wrong offset!");

// Function MEC_MAP_MOVE_AACTION.MEC_MAP_MOVE_AACTION_C.BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function MEC_MAP_MOVE_AACTION.MEC_MAP_MOVE_AACTION_C.BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A1[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'MEC_MAP_MOVE_AACTION_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function MEC_MAP_MOVE_AACTION.MEC_MAP_MOVE_AACTION_C.UserConstructionScript
// 0x0028 (0x0028 - 0x0000)
struct MEC_MAP_MOVE_AACTION_C_UserConstructionScript final
{
public:
	class FName                                   CallFunc_GetPersistentMapName_MapName;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A2[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0010(0x0018)()
};
static_assert(alignof(MEC_MAP_MOVE_AACTION_C_UserConstructionScript) == 0x000008, "Wrong alignment on MEC_MAP_MOVE_AACTION_C_UserConstructionScript");
static_assert(sizeof(MEC_MAP_MOVE_AACTION_C_UserConstructionScript) == 0x000028, "Wrong size on MEC_MAP_MOVE_AACTION_C_UserConstructionScript");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_UserConstructionScript, CallFunc_GetPersistentMapName_MapName) == 0x000000, "Member 'MEC_MAP_MOVE_AACTION_C_UserConstructionScript::CallFunc_GetPersistentMapName_MapName' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MEC_MAP_MOVE_AACTION_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_UserConstructionScript, CallFunc_Conv_NameToText_ReturnValue) == 0x000010, "Member 'MEC_MAP_MOVE_AACTION_C_UserConstructionScript::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");

// Function MEC_MAP_MOVE_AACTION.MEC_MAP_MOVE_AACTION_C.SetMinimapIconTableRow
// 0x00C0 (0x00C0 - 0x0000)
struct MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97A3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimapIconTableRow                   OutRow;                                            // 0x0008(0x0058)(Parm, OutParm)
	bool                                          NeedToAddMore;                                     // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A4[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimapIconTableRow                   CallFunc_SetMinimapIconTableRowFromHelper_OutRow;  // 0x0068(0x0058)()
};
static_assert(alignof(MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow) == 0x000008, "Wrong alignment on MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow");
static_assert(sizeof(MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow) == 0x0000C0, "Wrong size on MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow, Param_Index) == 0x000000, "Member 'MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow::Param_Index' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow, OutRow) == 0x000008, "Member 'MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow::OutRow' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow, NeedToAddMore) == 0x000060, "Member 'MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow::NeedToAddMore' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow, CallFunc_SetMinimapIconTableRowFromHelper_OutRow) == 0x000068, "Member 'MEC_MAP_MOVE_AACTION_C_SetMinimapIconTableRow::CallFunc_SetMinimapIconTableRowFromHelper_OutRow' has a wrong offset!");

// Function MEC_MAP_MOVE_AACTION.MEC_MAP_MOVE_AACTION_C.BPI_SetDataId
// 0x0048 (0x0048 - 0x0000)
struct MEC_MAP_MOVE_AACTION_C_BPI_SetDataId final
{
public:
	int32                                         DataId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dummy;                                             // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MEC_MAP_MOVE_AACTION_C_BPI_SetDataId) == 0x000008, "Wrong alignment on MEC_MAP_MOVE_AACTION_C_BPI_SetDataId");
static_assert(sizeof(MEC_MAP_MOVE_AACTION_C_BPI_SetDataId) == 0x000048, "Wrong size on MEC_MAP_MOVE_AACTION_C_BPI_SetDataId");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BPI_SetDataId, DataId) == 0x000000, "Member 'MEC_MAP_MOVE_AACTION_C_BPI_SetDataId::DataId' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BPI_SetDataId, Dummy) == 0x000004, "Member 'MEC_MAP_MOVE_AACTION_C_BPI_SetDataId::Dummy' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BPI_SetDataId, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'MEC_MAP_MOVE_AACTION_C_BPI_SetDataId::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BPI_SetDataId, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'MEC_MAP_MOVE_AACTION_C_BPI_SetDataId::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BPI_SetDataId, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'MEC_MAP_MOVE_AACTION_C_BPI_SetDataId::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MEC_MAP_MOVE_AACTION_C_BPI_SetDataId, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'MEC_MAP_MOVE_AACTION_C_BPI_SetDataId::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}

