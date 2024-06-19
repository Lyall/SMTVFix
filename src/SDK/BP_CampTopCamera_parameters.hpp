#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampTopCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CampTopCamera.BP_CampTopCamera_C.UserConstructionScript
// 0x05A0 (0x05A0 - 0x0000)
struct BP_CampTopCamera_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsOriginalMovieResolution_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B75[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0008(0x0010)(NoDestructor)
	TArray<struct FWeightedBlendable>             K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0028(0x0010)()
	uint8                                         Pad_2B76[0x8];                                     // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x0040(0x0560)()
};
static_assert(alignof(BP_CampTopCamera_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_CampTopCamera_C_UserConstructionScript");
static_assert(sizeof(BP_CampTopCamera_C_UserConstructionScript) == 0x0005A0, "Wrong size on BP_CampTopCamera_C_UserConstructionScript");
static_assert(offsetof(BP_CampTopCamera_C_UserConstructionScript, CallFunc_IsOriginalMovieResolution_ReturnValue) == 0x000000, "Member 'BP_CampTopCamera_C_UserConstructionScript::CallFunc_IsOriginalMovieResolution_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTopCamera_C_UserConstructionScript, K2Node_MakeStruct_WeightedBlendable) == 0x000008, "Member 'BP_CampTopCamera_C_UserConstructionScript::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(BP_CampTopCamera_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_CampTopCamera_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_CampTopCamera_C_UserConstructionScript, K2Node_MakeStruct_WeightedBlendables) == 0x000028, "Member 'BP_CampTopCamera_C_UserConstructionScript::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(BP_CampTopCamera_C_UserConstructionScript, K2Node_MakeStruct_PostProcessSettings) == 0x000040, "Member 'BP_CampTopCamera_C_UserConstructionScript::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");

}

