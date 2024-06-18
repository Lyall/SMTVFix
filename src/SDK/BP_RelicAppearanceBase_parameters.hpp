#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RelicAppearanceBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_RelicAppearanceBase.BP_RelicAppearanceBase_C.ExecuteUbergraph_BP_RelicAppearanceBase
// 0x0028 (0x0028 - 0x0000)
struct BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45DB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               K2Node_CustomEvent_PSystem;                        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Immediate;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Immediate_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(class UParticleSystemComponent* PSystem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase) == 0x000008, "Wrong alignment on BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase");
static_assert(sizeof(BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase) == 0x000028, "Wrong size on BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase");
static_assert(offsetof(BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase, EntryPoint) == 0x000000, "Member 'BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase, K2Node_CustomEvent_PSystem) == 0x000008, "Member 'BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase::K2Node_CustomEvent_PSystem' has a wrong offset!");
static_assert(offsetof(BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase, K2Node_CustomEvent_Immediate) == 0x000010, "Member 'BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase::K2Node_CustomEvent_Immediate' has a wrong offset!");
static_assert(offsetof(BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase, K2Node_CustomEvent_Immediate_1) == 0x000011, "Member 'BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase::K2Node_CustomEvent_Immediate_1' has a wrong offset!");
static_assert(offsetof(BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase, CallFunc_IsValid_ReturnValue) == 0x000012, "Member 'BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase, CallFunc_Not_PreBool_ReturnValue) == 0x000013, "Member 'BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_RelicAppearanceBase_C_ExecuteUbergraph_BP_RelicAppearanceBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_RelicAppearanceBase.BP_RelicAppearanceBase_C.Finished
// 0x0008 (0x0008 - 0x0000)
struct BP_RelicAppearanceBase_C_Finished final
{
public:
	class UParticleSystemComponent*               PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RelicAppearanceBase_C_Finished) == 0x000008, "Wrong alignment on BP_RelicAppearanceBase_C_Finished");
static_assert(sizeof(BP_RelicAppearanceBase_C_Finished) == 0x000008, "Wrong size on BP_RelicAppearanceBase_C_Finished");
static_assert(offsetof(BP_RelicAppearanceBase_C_Finished, PSystem) == 0x000000, "Member 'BP_RelicAppearanceBase_C_Finished::PSystem' has a wrong offset!");

// Function BP_RelicAppearanceBase.BP_RelicAppearanceBase_C.HideParticle
// 0x0001 (0x0001 - 0x0000)
struct BP_RelicAppearanceBase_C_HideParticle final
{
public:
	bool                                          Immediate;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RelicAppearanceBase_C_HideParticle) == 0x000001, "Wrong alignment on BP_RelicAppearanceBase_C_HideParticle");
static_assert(sizeof(BP_RelicAppearanceBase_C_HideParticle) == 0x000001, "Wrong size on BP_RelicAppearanceBase_C_HideParticle");
static_assert(offsetof(BP_RelicAppearanceBase_C_HideParticle, Immediate) == 0x000000, "Member 'BP_RelicAppearanceBase_C_HideParticle::Immediate' has a wrong offset!");

// Function BP_RelicAppearanceBase.BP_RelicAppearanceBase_C.ShowParticle
// 0x0001 (0x0001 - 0x0000)
struct BP_RelicAppearanceBase_C_ShowParticle final
{
public:
	bool                                          Immediate;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RelicAppearanceBase_C_ShowParticle) == 0x000001, "Wrong alignment on BP_RelicAppearanceBase_C_ShowParticle");
static_assert(sizeof(BP_RelicAppearanceBase_C_ShowParticle) == 0x000001, "Wrong size on BP_RelicAppearanceBase_C_ShowParticle");
static_assert(offsetof(BP_RelicAppearanceBase_C_ShowParticle, Immediate) == 0x000000, "Member 'BP_RelicAppearanceBase_C_ShowParticle::Immediate' has a wrong offset!");

// Function BP_RelicAppearanceBase.BP_RelicAppearanceBase_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct BP_RelicAppearanceBase_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IS_PREVIEW_WORLD_ReturnValue;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RelicAppearanceBase_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_RelicAppearanceBase_C_UserConstructionScript");
static_assert(sizeof(BP_RelicAppearanceBase_C_UserConstructionScript) == 0x000001, "Wrong size on BP_RelicAppearanceBase_C_UserConstructionScript");
static_assert(offsetof(BP_RelicAppearanceBase_C_UserConstructionScript, CallFunc_IS_PREVIEW_WORLD_ReturnValue) == 0x000000, "Member 'BP_RelicAppearanceBase_C_UserConstructionScript::CallFunc_IS_PREVIEW_WORLD_ReturnValue' has a wrong offset!");

}

