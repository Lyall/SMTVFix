#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaBadStatusBase

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "BadStatusDecal_T_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BadStatusParticles_T_structs.hpp"
#include "BadStatusNecessaries_T_structs.hpp"


namespace SDK::Params
{

// Function CharaBadStatusBase.CharaBadStatusBase_C.ExecuteUbergraph_CharaBadStatusBase
// 0x0004 (0x0004 - 0x0000)
struct CharaBadStatusBase_C_ExecuteUbergraph_CharaBadStatusBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaBadStatusBase_C_ExecuteUbergraph_CharaBadStatusBase) == 0x000004, "Wrong alignment on CharaBadStatusBase_C_ExecuteUbergraph_CharaBadStatusBase");
static_assert(sizeof(CharaBadStatusBase_C_ExecuteUbergraph_CharaBadStatusBase) == 0x000004, "Wrong size on CharaBadStatusBase_C_ExecuteUbergraph_CharaBadStatusBase");
static_assert(offsetof(CharaBadStatusBase_C_ExecuteUbergraph_CharaBadStatusBase, EntryPoint) == 0x000000, "Member 'CharaBadStatusBase_C_ExecuteUbergraph_CharaBadStatusBase::EntryPoint' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpStatus
// 0x0040 (0x0040 - 0x0000)
struct CharaBadStatusBase_C_PickUpStatus final
{
public:
	int32                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_BAD_STATUS>                          Ret;                                               // 0x0008(0x0010)(Parm, OutParm)
	int32                                         StatusLast;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_BAD_STATUS>                          BadStatus;                                         // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<E_BAD_STATUS>                          CallFunc_PickUpStatus_inner_ReturnValue;           // 0x0030(0x0010)(ReferenceParm)
};
static_assert(alignof(CharaBadStatusBase_C_PickUpStatus) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_PickUpStatus");
static_assert(sizeof(CharaBadStatusBase_C_PickUpStatus) == 0x000040, "Wrong size on CharaBadStatusBase_C_PickUpStatus");
static_assert(offsetof(CharaBadStatusBase_C_PickUpStatus, State) == 0x000000, "Member 'CharaBadStatusBase_C_PickUpStatus::State' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpStatus, Ret) == 0x000008, "Member 'CharaBadStatusBase_C_PickUpStatus::Ret' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpStatus, StatusLast) == 0x000018, "Member 'CharaBadStatusBase_C_PickUpStatus::StatusLast' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpStatus, BadStatus) == 0x000020, "Member 'CharaBadStatusBase_C_PickUpStatus::BadStatus' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpStatus, CallFunc_PickUpStatus_inner_ReturnValue) == 0x000030, "Member 'CharaBadStatusBase_C_PickUpStatus::CallFunc_PickUpStatus_inner_ReturnValue' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpOnBit
// 0x0014 (0x0014 - 0x0000)
struct CharaBadStatusBase_C_PickUpOnBit final
{
public:
	int32                                         Src;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Current;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         On;                                                // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PickUpDifferenceBit_ret;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaBadStatusBase_C_PickUpOnBit) == 0x000004, "Wrong alignment on CharaBadStatusBase_C_PickUpOnBit");
static_assert(sizeof(CharaBadStatusBase_C_PickUpOnBit) == 0x000014, "Wrong size on CharaBadStatusBase_C_PickUpOnBit");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOnBit, Src) == 0x000000, "Member 'CharaBadStatusBase_C_PickUpOnBit::Src' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOnBit, Current) == 0x000004, "Member 'CharaBadStatusBase_C_PickUpOnBit::Current' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOnBit, On) == 0x000008, "Member 'CharaBadStatusBase_C_PickUpOnBit::On' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOnBit, CallFunc_PickUpDifferenceBit_ret) == 0x00000C, "Member 'CharaBadStatusBase_C_PickUpOnBit::CallFunc_PickUpDifferenceBit_ret' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOnBit, CallFunc_And_IntInt_ReturnValue) == 0x000010, "Member 'CharaBadStatusBase_C_PickUpOnBit::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpOffBit
// 0x0014 (0x0014 - 0x0000)
struct CharaBadStatusBase_C_PickUpOffBit final
{
public:
	int32                                         Src;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Current;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Off;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PickUpDifferenceBit_ret;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaBadStatusBase_C_PickUpOffBit) == 0x000004, "Wrong alignment on CharaBadStatusBase_C_PickUpOffBit");
static_assert(sizeof(CharaBadStatusBase_C_PickUpOffBit) == 0x000014, "Wrong size on CharaBadStatusBase_C_PickUpOffBit");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOffBit, Src) == 0x000000, "Member 'CharaBadStatusBase_C_PickUpOffBit::Src' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOffBit, Current) == 0x000004, "Member 'CharaBadStatusBase_C_PickUpOffBit::Current' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOffBit, Off) == 0x000008, "Member 'CharaBadStatusBase_C_PickUpOffBit::Off' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOffBit, CallFunc_PickUpDifferenceBit_ret) == 0x00000C, "Member 'CharaBadStatusBase_C_PickUpOffBit::CallFunc_PickUpDifferenceBit_ret' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpOffBit, CallFunc_And_IntInt_ReturnValue) == 0x000010, "Member 'CharaBadStatusBase_C_PickUpOffBit::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpDifferenceBit
// 0x0010 (0x0010 - 0x0000)
struct CharaBadStatusBase_C_PickUpDifferenceBit final
{
public:
	int32                                         Origin;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Input;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ret;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Xor_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaBadStatusBase_C_PickUpDifferenceBit) == 0x000004, "Wrong alignment on CharaBadStatusBase_C_PickUpDifferenceBit");
static_assert(sizeof(CharaBadStatusBase_C_PickUpDifferenceBit) == 0x000010, "Wrong size on CharaBadStatusBase_C_PickUpDifferenceBit");
static_assert(offsetof(CharaBadStatusBase_C_PickUpDifferenceBit, Origin) == 0x000000, "Member 'CharaBadStatusBase_C_PickUpDifferenceBit::Origin' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpDifferenceBit, Input) == 0x000004, "Member 'CharaBadStatusBase_C_PickUpDifferenceBit::Input' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpDifferenceBit, Ret) == 0x000008, "Member 'CharaBadStatusBase_C_PickUpDifferenceBit::Ret' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpDifferenceBit, CallFunc_Xor_IntInt_ReturnValue) == 0x00000C, "Member 'CharaBadStatusBase_C_PickUpDifferenceBit::CallFunc_Xor_IntInt_ReturnValue' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpSurfaceStatus
// 0x000C (0x000C - 0x0000)
struct CharaBadStatusBase_C_PickUpSurfaceStatus final
{
public:
	int32                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BAD_STATUS                                  BeforeStatus;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BAD_STATUS                                  Ret;                                               // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNeedResetMaterial;                               // 0x0006(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BAD_STATUS                                  CallFunc_PickUpSurfaceStatus_inner_Ret;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PickUpSurfaceStatus_inner_IsNeedResetMaterial; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaBadStatusBase_C_PickUpSurfaceStatus) == 0x000004, "Wrong alignment on CharaBadStatusBase_C_PickUpSurfaceStatus");
static_assert(sizeof(CharaBadStatusBase_C_PickUpSurfaceStatus) == 0x00000C, "Wrong size on CharaBadStatusBase_C_PickUpSurfaceStatus");
static_assert(offsetof(CharaBadStatusBase_C_PickUpSurfaceStatus, State) == 0x000000, "Member 'CharaBadStatusBase_C_PickUpSurfaceStatus::State' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpSurfaceStatus, BeforeStatus) == 0x000004, "Member 'CharaBadStatusBase_C_PickUpSurfaceStatus::BeforeStatus' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpSurfaceStatus, Ret) == 0x000005, "Member 'CharaBadStatusBase_C_PickUpSurfaceStatus::Ret' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpSurfaceStatus, IsNeedResetMaterial) == 0x000006, "Member 'CharaBadStatusBase_C_PickUpSurfaceStatus::IsNeedResetMaterial' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpSurfaceStatus, CallFunc_PickUpSurfaceStatus_inner_Ret) == 0x000007, "Member 'CharaBadStatusBase_C_PickUpSurfaceStatus::CallFunc_PickUpSurfaceStatus_inner_Ret' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpSurfaceStatus, CallFunc_PickUpSurfaceStatus_inner_IsNeedResetMaterial) == 0x000008, "Member 'CharaBadStatusBase_C_PickUpSurfaceStatus::CallFunc_PickUpSurfaceStatus_inner_IsNeedResetMaterial' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.UpdateBadStatusParticle
// 0x0028 (0x0028 - 0x0000)
struct CharaBadStatusBase_C_UpdateBadStatusParticle final
{
public:
	TArray<E_BAD_STATUS>                          Lo_Checker;                                        // 0x0000(0x0010)(Edit, BlueprintVisible)
	class UParticleSystemComponent*               Lo_ParticleComp;                                   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<E_BAD_STATUS>                          K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
};
static_assert(alignof(CharaBadStatusBase_C_UpdateBadStatusParticle) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_UpdateBadStatusParticle");
static_assert(sizeof(CharaBadStatusBase_C_UpdateBadStatusParticle) == 0x000028, "Wrong size on CharaBadStatusBase_C_UpdateBadStatusParticle");
static_assert(offsetof(CharaBadStatusBase_C_UpdateBadStatusParticle, Lo_Checker) == 0x000000, "Member 'CharaBadStatusBase_C_UpdateBadStatusParticle::Lo_Checker' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_UpdateBadStatusParticle, Lo_ParticleComp) == 0x000010, "Member 'CharaBadStatusBase_C_UpdateBadStatusParticle::Lo_ParticleComp' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_UpdateBadStatusParticle, K2Node_MakeArray_Array) == 0x000018, "Member 'CharaBadStatusBase_C_UpdateBadStatusParticle::K2Node_MakeArray_Array' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.FindBadStatusSocketName
// 0x0040 (0x0040 - 0x0000)
struct CharaBadStatusBase_C_FindBadStatusSocketName final
{
public:
	TArray<struct FBadStatusParticles_T>          BadParticleSettings;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	E_CHARA_BAD_STATUS_APPEAR                     Appear;                                            // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SocketName;                                        // 0x0014(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lo_Length;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaBadStatusBase_C_FindBadStatusSocketName) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_FindBadStatusSocketName");
static_assert(sizeof(CharaBadStatusBase_C_FindBadStatusSocketName) == 0x000040, "Wrong size on CharaBadStatusBase_C_FindBadStatusSocketName");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, BadParticleSettings) == 0x000000, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::BadParticleSettings' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, Appear) == 0x000010, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::Appear' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, SocketName) == 0x000014, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::SocketName' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, Lo_Length) == 0x00001C, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::Lo_Length' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, Temp_int_Variable) == 0x000020, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000028, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, Temp_int_Variable_1) == 0x000030, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_FindBadStatusSocketName, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'CharaBadStatusBase_C_FindBadStatusSocketName::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.RegisterTarget
// 0x0008 (0x0008 - 0x0000)
struct CharaBadStatusBase_C_RegisterTarget final
{
public:
	class USkeletalMeshComponent*                 Param_Mesh;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaBadStatusBase_C_RegisterTarget) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_RegisterTarget");
static_assert(sizeof(CharaBadStatusBase_C_RegisterTarget) == 0x000008, "Wrong size on CharaBadStatusBase_C_RegisterTarget");
static_assert(offsetof(CharaBadStatusBase_C_RegisterTarget, Param_Mesh) == 0x000000, "Member 'CharaBadStatusBase_C_RegisterTarget::Param_Mesh' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.GetCurrentSurfaceMaterial
// 0x0010 (0x0010 - 0x0000)
struct CharaBadStatusBase_C_GetCurrentSurfaceMaterial final
{
public:
	TArray<E_BAD_STATUS>                          SurfaceMaterial;                                   // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(CharaBadStatusBase_C_GetCurrentSurfaceMaterial) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_GetCurrentSurfaceMaterial");
static_assert(sizeof(CharaBadStatusBase_C_GetCurrentSurfaceMaterial) == 0x000010, "Wrong size on CharaBadStatusBase_C_GetCurrentSurfaceMaterial");
static_assert(offsetof(CharaBadStatusBase_C_GetCurrentSurfaceMaterial, SurfaceMaterial) == 0x000000, "Member 'CharaBadStatusBase_C_GetCurrentSurfaceMaterial::SurfaceMaterial' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.ResetBadStatusMaterial
// 0x0060 (0x0060 - 0x0000)
struct CharaBadStatusBase_C_ResetBadStatusMaterial final
{
public:
	struct FBadStatusNecessaries_T                CallFunc_BPL_GetBadStatusNecessaries_Necessaries;  // 0x0000(0x0050)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_ResetScalarParam_NoUs;                 // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaBadStatusBase_C_ResetBadStatusMaterial) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_ResetBadStatusMaterial");
static_assert(sizeof(CharaBadStatusBase_C_ResetBadStatusMaterial) == 0x000060, "Wrong size on CharaBadStatusBase_C_ResetBadStatusMaterial");
static_assert(offsetof(CharaBadStatusBase_C_ResetBadStatusMaterial, CallFunc_BPL_GetBadStatusNecessaries_Necessaries) == 0x000000, "Member 'CharaBadStatusBase_C_ResetBadStatusMaterial::CallFunc_BPL_GetBadStatusNecessaries_Necessaries' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_ResetBadStatusMaterial, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000050, "Member 'CharaBadStatusBase_C_ResetBadStatusMaterial::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_ResetBadStatusMaterial, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'CharaBadStatusBase_C_ResetBadStatusMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_ResetBadStatusMaterial, CallFunc_BI_ResetScalarParam_NoUs) == 0x000059, "Member 'CharaBadStatusBase_C_ResetBadStatusMaterial::CallFunc_BI_ResetScalarParam_NoUs' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.IsRegistered
// 0x0001 (0x0001 - 0x0000)
struct CharaBadStatusBase_C_IsRegistered final
{
public:
	bool                                          Param_IsRegistered;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaBadStatusBase_C_IsRegistered) == 0x000001, "Wrong alignment on CharaBadStatusBase_C_IsRegistered");
static_assert(sizeof(CharaBadStatusBase_C_IsRegistered) == 0x000001, "Wrong size on CharaBadStatusBase_C_IsRegistered");
static_assert(offsetof(CharaBadStatusBase_C_IsRegistered, Param_IsRegistered) == 0x000000, "Member 'CharaBadStatusBase_C_IsRegistered::Param_IsRegistered' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.SetParticleTemplate
// 0x0040 (0x0040 - 0x0000)
struct CharaBadStatusBase_C_SetParticleTemplate final
{
public:
	class UParticleSystemComponent*               PSComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Template;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaBadStatusBase_C_SetParticleTemplate) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_SetParticleTemplate");
static_assert(sizeof(CharaBadStatusBase_C_SetParticleTemplate) == 0x000040, "Wrong size on CharaBadStatusBase_C_SetParticleTemplate");
static_assert(offsetof(CharaBadStatusBase_C_SetParticleTemplate, PSComp) == 0x000000, "Member 'CharaBadStatusBase_C_SetParticleTemplate::PSComp' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_SetParticleTemplate, Template) == 0x000008, "Member 'CharaBadStatusBase_C_SetParticleTemplate::Template' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_SetParticleTemplate, Scale) == 0x000010, "Member 'CharaBadStatusBase_C_SetParticleTemplate::Scale' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_SetParticleTemplate, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'CharaBadStatusBase_C_SetParticleTemplate::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_SetParticleTemplate, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'CharaBadStatusBase_C_SetParticleTemplate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_SetParticleTemplate, CallFunc_MakeVector_ReturnValue) == 0x000024, "Member 'CharaBadStatusBase_C_SetParticleTemplate::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_SetParticleTemplate, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000030, "Member 'CharaBadStatusBase_C_SetParticleTemplate::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpParticleSettings
// 0x0028 (0x0028 - 0x0000)
struct CharaBadStatusBase_C_PickUpParticleSettings final
{
public:
	E_BAD_STATUS                                  Kind;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBadStatusParticles_T>          ParticleSettings;                                  // 0x0008(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FBadStatusParticles_T>          CallFunc_BPL_GetBadStatusParticleSettings_ParticleSettings; // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(CharaBadStatusBase_C_PickUpParticleSettings) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_PickUpParticleSettings");
static_assert(sizeof(CharaBadStatusBase_C_PickUpParticleSettings) == 0x000028, "Wrong size on CharaBadStatusBase_C_PickUpParticleSettings");
static_assert(offsetof(CharaBadStatusBase_C_PickUpParticleSettings, Kind) == 0x000000, "Member 'CharaBadStatusBase_C_PickUpParticleSettings::Kind' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpParticleSettings, ParticleSettings) == 0x000008, "Member 'CharaBadStatusBase_C_PickUpParticleSettings::ParticleSettings' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpParticleSettings, CallFunc_BPL_GetBadStatusParticleSettings_ParticleSettings) == 0x000018, "Member 'CharaBadStatusBase_C_PickUpParticleSettings::CallFunc_BPL_GetBadStatusParticleSettings_ParticleSettings' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.GetTargetMesh
// 0x0008 (0x0008 - 0x0000)
struct CharaBadStatusBase_C_GetTargetMesh final
{
public:
	class USkeletalMeshComponent*                 ParticleSettings;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaBadStatusBase_C_GetTargetMesh) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_GetTargetMesh");
static_assert(sizeof(CharaBadStatusBase_C_GetTargetMesh) == 0x000008, "Wrong size on CharaBadStatusBase_C_GetTargetMesh");
static_assert(offsetof(CharaBadStatusBase_C_GetTargetMesh, ParticleSettings) == 0x000000, "Member 'CharaBadStatusBase_C_GetTargetMesh::ParticleSettings' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.SetCurrentSurfaceMaterial
// 0x0010 (0x0010 - 0x0000)
struct CharaBadStatusBase_C_SetCurrentSurfaceMaterial final
{
public:
	TArray<E_BAD_STATUS>                          Surface;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CharaBadStatusBase_C_SetCurrentSurfaceMaterial) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_SetCurrentSurfaceMaterial");
static_assert(sizeof(CharaBadStatusBase_C_SetCurrentSurfaceMaterial) == 0x000010, "Wrong size on CharaBadStatusBase_C_SetCurrentSurfaceMaterial");
static_assert(offsetof(CharaBadStatusBase_C_SetCurrentSurfaceMaterial, Surface) == 0x000000, "Member 'CharaBadStatusBase_C_SetCurrentSurfaceMaterial::Surface' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpBothExistBit
// 0x0010 (0x0010 - 0x0000)
struct CharaBadStatusBase_C_PickUpBothExistBit final
{
public:
	int32                                         Origin;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Input;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ret;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaBadStatusBase_C_PickUpBothExistBit) == 0x000004, "Wrong alignment on CharaBadStatusBase_C_PickUpBothExistBit");
static_assert(sizeof(CharaBadStatusBase_C_PickUpBothExistBit) == 0x000010, "Wrong size on CharaBadStatusBase_C_PickUpBothExistBit");
static_assert(offsetof(CharaBadStatusBase_C_PickUpBothExistBit, Origin) == 0x000000, "Member 'CharaBadStatusBase_C_PickUpBothExistBit::Origin' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpBothExistBit, Input) == 0x000004, "Member 'CharaBadStatusBase_C_PickUpBothExistBit::Input' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpBothExistBit, Ret) == 0x000008, "Member 'CharaBadStatusBase_C_PickUpBothExistBit::Ret' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpBothExistBit, CallFunc_And_IntInt_ReturnValue) == 0x00000C, "Member 'CharaBadStatusBase_C_PickUpBothExistBit::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.HasBadStatus
// 0x0001 (0x0001 - 0x0000)
struct CharaBadStatusBase_C_HasBadStatus final
{
public:
	bool                                          Param_HasBadStatus;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaBadStatusBase_C_HasBadStatus) == 0x000001, "Wrong alignment on CharaBadStatusBase_C_HasBadStatus");
static_assert(sizeof(CharaBadStatusBase_C_HasBadStatus) == 0x000001, "Wrong size on CharaBadStatusBase_C_HasBadStatus");
static_assert(offsetof(CharaBadStatusBase_C_HasBadStatus, Param_HasBadStatus) == 0x000000, "Member 'CharaBadStatusBase_C_HasBadStatus::Param_HasBadStatus' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.SetHasBadStatus
// 0x0001 (0x0001 - 0x0000)
struct CharaBadStatusBase_C_SetHasBadStatus final
{
public:
	bool                                          Has;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaBadStatusBase_C_SetHasBadStatus) == 0x000001, "Wrong alignment on CharaBadStatusBase_C_SetHasBadStatus");
static_assert(sizeof(CharaBadStatusBase_C_SetHasBadStatus) == 0x000001, "Wrong size on CharaBadStatusBase_C_SetHasBadStatus");
static_assert(offsetof(CharaBadStatusBase_C_SetHasBadStatus, Has) == 0x000000, "Member 'CharaBadStatusBase_C_SetHasBadStatus::Has' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.SetCharaBaseAccessor
// 0x0010 (0x0010 - 0x0000)
struct CharaBadStatusBase_C_SetCharaBaseAccessor final
{
public:
	TScriptInterface<class IBPI_CharaBaseAccessor_C> Accessor;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaBadStatusBase_C_SetCharaBaseAccessor) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_SetCharaBaseAccessor");
static_assert(sizeof(CharaBadStatusBase_C_SetCharaBaseAccessor) == 0x000010, "Wrong size on CharaBadStatusBase_C_SetCharaBaseAccessor");
static_assert(offsetof(CharaBadStatusBase_C_SetCharaBaseAccessor, Accessor) == 0x000000, "Member 'CharaBadStatusBase_C_SetCharaBaseAccessor::Accessor' has a wrong offset!");

// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpDecalSettings
// 0x0028 (0x0028 - 0x0000)
struct CharaBadStatusBase_C_PickUpDecalSettings final
{
public:
	E_BAD_STATUS                                  Kind;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBadStatusDecal_T>              DecalSettings;                                     // 0x0008(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FBadStatusDecal_T>              CallFunc_BPL_GetBadStatusDecalSettings_DecalSettings; // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(CharaBadStatusBase_C_PickUpDecalSettings) == 0x000008, "Wrong alignment on CharaBadStatusBase_C_PickUpDecalSettings");
static_assert(sizeof(CharaBadStatusBase_C_PickUpDecalSettings) == 0x000028, "Wrong size on CharaBadStatusBase_C_PickUpDecalSettings");
static_assert(offsetof(CharaBadStatusBase_C_PickUpDecalSettings, Kind) == 0x000000, "Member 'CharaBadStatusBase_C_PickUpDecalSettings::Kind' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpDecalSettings, DecalSettings) == 0x000008, "Member 'CharaBadStatusBase_C_PickUpDecalSettings::DecalSettings' has a wrong offset!");
static_assert(offsetof(CharaBadStatusBase_C_PickUpDecalSettings, CallFunc_BPL_GetBadStatusDecalSettings_DecalSettings) == 0x000018, "Member 'CharaBadStatusBase_C_PickUpDecalSettings::CallFunc_BPL_GetBadStatusDecalSettings_DecalSettings' has a wrong offset!");

}

