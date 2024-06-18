#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapEncountSafeZonePoint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MapEncountSafeZonePoint.MapEncountSafeZonePoint_C.GetBattleFieldInfo
// 0x01E0 (0x01E0 - 0x0000)
struct MapEncountSafeZonePoint_C_GetBattleFieldInfo final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	int32                                         Param_BattleFIeldID;                               // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                L_Location;                                        // 0x0034(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0040(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00C8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62BB[0x1];                                     // 0x0153(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62BC[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x01D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEncountSafeZonePoint_C_GetBattleFieldInfo) == 0x000010, "Wrong alignment on MapEncountSafeZonePoint_C_GetBattleFieldInfo");
static_assert(sizeof(MapEncountSafeZonePoint_C_GetBattleFieldInfo) == 0x0001E0, "Wrong size on MapEncountSafeZonePoint_C_GetBattleFieldInfo");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, Transform) == 0x000000, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::Transform' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, Param_BattleFIeldID) == 0x000030, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::Param_BattleFIeldID' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, L_Location) == 0x000034, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::L_Location' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, Temp_object_Variable) == 0x000040, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_Add_VectorVector_ReturnValue) == 0x00005C, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000068, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000074, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000B0, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0000BC, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_LineTraceSingle_OutHit) == 0x0000C8, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_LineTraceSingle_ReturnValue) == 0x000150, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_bBlockingHit) == 0x000151, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_bInitialOverlap) == 0x000152, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_Time) == 0x000154, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_Distance) == 0x000158, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_Location) == 0x00015C, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_ImpactPoint) == 0x000168, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_Normal) == 0x000174, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_ImpactNormal) == 0x000180, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_PhysMat) == 0x000190, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_HitActor) == 0x000198, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_HitComponent) == 0x0001A0, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_HitBoneName) == 0x0001A8, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_HitItem) == 0x0001B0, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_ElementIndex) == 0x0001B4, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_FaceIndex) == 0x0001B8, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_TraceStart) == 0x0001BC, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_BreakHitResult_TraceEnd) == 0x0001C8, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(MapEncountSafeZonePoint_C_GetBattleFieldInfo, CallFunc_Add_VectorVector_ReturnValue_3) == 0x0001D4, "Member 'MapEncountSafeZonePoint_C_GetBattleFieldInfo::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");

// Function MapEncountSafeZonePoint.MapEncountSafeZonePoint_C.BPI_GetSafeZoneID
// 0x0004 (0x0004 - 0x0000)
struct MapEncountSafeZonePoint_C_BPI_GetSafeZoneID final
{
public:
	int32                                         Param_SafeZoneID;                                  // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEncountSafeZonePoint_C_BPI_GetSafeZoneID) == 0x000004, "Wrong alignment on MapEncountSafeZonePoint_C_BPI_GetSafeZoneID");
static_assert(sizeof(MapEncountSafeZonePoint_C_BPI_GetSafeZoneID) == 0x000004, "Wrong size on MapEncountSafeZonePoint_C_BPI_GetSafeZoneID");
static_assert(offsetof(MapEncountSafeZonePoint_C_BPI_GetSafeZoneID, Param_SafeZoneID) == 0x000000, "Member 'MapEncountSafeZonePoint_C_BPI_GetSafeZoneID::Param_SafeZoneID' has a wrong offset!");

}

