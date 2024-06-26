#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev038

#include "Basic.hpp"


namespace SDK::Params
{

// Function Dev038.Dev038_C.ExecuteUbergraph_Dev038
// 0x0018 (0x0018 - 0x0000)
struct Dev038_C_ExecuteUbergraph_Dev038 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DDE5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UParticleSystem*                  Temp_object_Variable;                              // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dev038_C_ExecuteUbergraph_Dev038) == 0x000008, "Wrong alignment on Dev038_C_ExecuteUbergraph_Dev038");
static_assert(sizeof(Dev038_C_ExecuteUbergraph_Dev038) == 0x000018, "Wrong size on Dev038_C_ExecuteUbergraph_Dev038");
static_assert(offsetof(Dev038_C_ExecuteUbergraph_Dev038, EntryPoint) == 0x000000, "Member 'Dev038_C_ExecuteUbergraph_Dev038::EntryPoint' has a wrong offset!");
static_assert(offsetof(Dev038_C_ExecuteUbergraph_Dev038, Temp_object_Variable) == 0x000008, "Member 'Dev038_C_ExecuteUbergraph_Dev038::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Dev038_C_ExecuteUbergraph_Dev038, CallFunc_Array_Add_ReturnValue) == 0x000010, "Member 'Dev038_C_ExecuteUbergraph_Dev038::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function Dev038.Dev038_C.ActivateDyingParticle
// 0x0040 (0x0040 - 0x0000)
struct Dev038_C_ActivateDyingParticle final
{
public:
	TArray<class UParticleSystemComponent*>       Lo_particles;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DDE6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DDE7[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystemComponent*>       CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(Dev038_C_ActivateDyingParticle) == 0x000008, "Wrong alignment on Dev038_C_ActivateDyingParticle");
static_assert(sizeof(Dev038_C_ActivateDyingParticle) == 0x000040, "Wrong size on Dev038_C_ActivateDyingParticle");
static_assert(offsetof(Dev038_C_ActivateDyingParticle, Lo_particles) == 0x000000, "Member 'Dev038_C_ActivateDyingParticle::Lo_particles' has a wrong offset!");
static_assert(offsetof(Dev038_C_ActivateDyingParticle, Temp_int_Array_Index_Variable) == 0x000010, "Member 'Dev038_C_ActivateDyingParticle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Dev038_C_ActivateDyingParticle, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'Dev038_C_ActivateDyingParticle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Dev038_C_ActivateDyingParticle, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'Dev038_C_ActivateDyingParticle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dev038_C_ActivateDyingParticle, CallFunc_Array_Get_Item) == 0x000020, "Member 'Dev038_C_ActivateDyingParticle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Dev038_C_ActivateDyingParticle, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'Dev038_C_ActivateDyingParticle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dev038_C_ActivateDyingParticle, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'Dev038_C_ActivateDyingParticle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dev038_C_ActivateDyingParticle, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00002D, "Member 'Dev038_C_ActivateDyingParticle::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dev038_C_ActivateDyingParticle, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000030, "Member 'Dev038_C_ActivateDyingParticle::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");

}

