#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FogCtrlHolder

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_FogCtrlHolder.BP_FogCtrlHolder_C.ExecuteUbergraph_BP_FogCtrlHolder
// 0x00C0 (0x00C0 - 0x0000)
struct BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E7E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      CallFunc_GetActorOfClass_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E7F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDirectionalLightComponent*             K2Node_DynamicCast_AsDirectional_Light_Component;  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E80[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  K2Node_DynamicCast_As___________;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E81[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_HeightFogParamStr_OutStr;                 // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E82[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue_1;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  K2Node_DynamicCast_As____________1;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E83[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      CallFunc_GetActorOfClass_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E84[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDirectionalLightComponent*             K2Node_DynamicCast_AsDirectional_Light_Component_1; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E85[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_DirectionalLightParamStr_OutStr;          // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder) == 0x000008, "Wrong alignment on BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder");
static_assert(sizeof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder) == 0x0000C0, "Wrong size on BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, EntryPoint) == 0x000000, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, CallFunc_GetActorOfClass_ReturnValue) == 0x000008, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, Temp_bool_Has_Been_Initd_Variable) == 0x000010, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, K2Node_DynamicCast_AsDirectional_Light_Component) == 0x000018, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::K2Node_DynamicCast_AsDirectional_Light_Component' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, CallFunc_GetAttachParentActor_ReturnValue) == 0x000028, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, K2Node_DynamicCast_As___________) == 0x000030, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::K2Node_DynamicCast_As___________' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, CallFunc_HeightFogParamStr_OutStr) == 0x000040, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::CallFunc_HeightFogParamStr_OutStr' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, Temp_bool_IsClosed_Variable) == 0x000060, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, CallFunc_GetAttachParentActor_ReturnValue_1) == 0x000068, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::CallFunc_GetAttachParentActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, K2Node_DynamicCast_As____________1) == 0x000070, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::K2Node_DynamicCast_As____________1' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, CallFunc_GetActorOfClass_ReturnValue_1) == 0x000080, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::CallFunc_GetActorOfClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, K2Node_DynamicCast_AsDirectional_Light_Component_1) == 0x000090, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::K2Node_DynamicCast_AsDirectional_Light_Component_1' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, K2Node_DynamicCast_bSuccess_3) == 0x000098, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, CallFunc_DirectionalLightParamStr_OutStr) == 0x0000A0, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::CallFunc_DirectionalLightParamStr_OutStr' has a wrong offset!");
static_assert(offsetof(BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000B0, "Member 'BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}

