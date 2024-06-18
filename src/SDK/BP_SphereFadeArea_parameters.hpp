#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SphereFadeArea

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SphereFadeArea.BP_SphereFadeArea_C.ExecuteUbergraph_BP_SphereFadeArea
// 0x01A8 (0x01A8 - 0x0000)
struct BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94C8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_3;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_3;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_3;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_3;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_1;           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94C9[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_1;          // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_2;           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_2;            // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_2;       // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94CA[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94CB[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00F0(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetShapeScale_ReturnValue;                // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetShapeScale_ReturnValue_1;              // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea) == 0x000008, "Wrong alignment on BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea");
static_assert(sizeof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea) == 0x0001A8, "Wrong size on BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, EntryPoint) == 0x000000, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OverlappedComponent_3) == 0x000008, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OverlappedComponent_3' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherActor_3) == 0x000010, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherActor_3' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherComp_3) == 0x000018, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherComp_3' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherBodyIndex_3) == 0x000020, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherBodyIndex_3' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_bFromSweep_1) == 0x000024, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_bFromSweep_1' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_SweepResult_1) == 0x000028, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_SweepResult_1' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OverlappedComponent_2) == 0x0000B0, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OverlappedComponent_2' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherActor_2) == 0x0000B8, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherActor_2' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherComp_2) == 0x0000C0, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherComp_2' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherBodyIndex_2) == 0x0000C8, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherBodyIndex_2' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x0000D0, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherActor_1) == 0x0000D8, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherComp_1) == 0x0000E0, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x0000E8, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000EC, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_SweepResult) == 0x0000F0, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000178, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherActor) == 0x000180, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherComp) == 0x000188, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000190, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, CallFunc_GetShapeScale_ReturnValue) == 0x000194, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::CallFunc_GetShapeScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, CallFunc_GetShapeScale_ReturnValue_1) == 0x000198, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::CallFunc_GetShapeScale_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00019C, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0001A0, "Member 'BP_SphereFadeArea_C_ExecuteUbergraph_BP_SphereFadeArea::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function BP_SphereFadeArea.BP_SphereFadeArea_C.BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_SphereFadeArea.BP_SphereFadeArea_C.BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94CC[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_SphereFadeArea_C_BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_SphereFadeArea.BP_SphereFadeArea_C.BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_SphereFadeArea.BP_SphereFadeArea_C.BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94CD[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_SphereFadeArea_C_BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_SphereFadeArea.BP_SphereFadeArea_C.UserConstructionScript
// 0x000C (0x000C - 0x0000)
struct BP_SphereFadeArea_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereFadeArea_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_SphereFadeArea_C_UserConstructionScript");
static_assert(sizeof(BP_SphereFadeArea_C_UserConstructionScript) == 0x00000C, "Wrong size on BP_SphereFadeArea_C_UserConstructionScript");
static_assert(offsetof(BP_SphereFadeArea_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000000, "Member 'BP_SphereFadeArea_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_SphereFadeArea.BP_SphereFadeArea_C.GetFadeRate
// 0x0050 (0x0050 - 0x0000)
struct BP_SphereFadeArea_C_GetFadeRate final
{
public:
	float                                         FadeRate;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94CE[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereFadeArea_C_GetFadeRate) == 0x000008, "Wrong alignment on BP_SphereFadeArea_C_GetFadeRate");
static_assert(sizeof(BP_SphereFadeArea_C_GetFadeRate) == 0x000050, "Wrong size on BP_SphereFadeArea_C_GetFadeRate");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, FadeRate) == 0x000000, "Member 'BP_SphereFadeArea_C_GetFadeRate::FadeRate' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_GetPlayerPawn_ReturnValue) == 0x000018, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000020, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00002C, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_VSize_ReturnValue) == 0x000038, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00003C, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_FClamp_ReturnValue) == 0x000044, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereFadeArea_C_GetFadeRate, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000048, "Member 'BP_SphereFadeArea_C_GetFadeRate::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");

}

