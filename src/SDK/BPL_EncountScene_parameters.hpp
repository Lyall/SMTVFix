#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_EncountScene

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_EncountScene.BPL_EncountScene_C.BPL_GetEncountScene
// 0x0038 (0x0038 - 0x0000)
struct BPL_EncountScene_C_BPL_GetEncountScene final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ProjectGameInstance_C> K2Node_DynamicCast_AsBPI_Project_Game_Instance;    // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BPI_GetEncountScene_EncountScene;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_EncountScene_C_BPL_GetEncountScene) == 0x000008, "Wrong alignment on BPL_EncountScene_C_BPL_GetEncountScene");
static_assert(sizeof(BPL_EncountScene_C_BPL_GetEncountScene) == 0x000038, "Wrong size on BPL_EncountScene_C_BPL_GetEncountScene");
static_assert(offsetof(BPL_EncountScene_C_BPL_GetEncountScene, __WorldContext) == 0x000000, "Member 'BPL_EncountScene_C_BPL_GetEncountScene::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_GetEncountScene, Actor) == 0x000008, "Member 'BPL_EncountScene_C_BPL_GetEncountScene::Actor' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_GetEncountScene, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BPL_EncountScene_C_BPL_GetEncountScene::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_GetEncountScene, K2Node_DynamicCast_AsBPI_Project_Game_Instance) == 0x000018, "Member 'BPL_EncountScene_C_BPL_GetEncountScene::K2Node_DynamicCast_AsBPI_Project_Game_Instance' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_GetEncountScene, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BPL_EncountScene_C_BPL_GetEncountScene::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_GetEncountScene, CallFunc_BPI_GetEncountScene_EncountScene) == 0x000030, "Member 'BPL_EncountScene_C_BPL_GetEncountScene::CallFunc_BPI_GetEncountScene_EncountScene' has a wrong offset!");

// Function BPL_EncountScene.BPL_EncountScene_C.BPL_ReadyEncountSceneFade
// 0x0038 (0x0038 - 0x0000)
struct BPL_EncountScene_C_BPL_ReadyEncountSceneFade final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ready;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BPL_GetEncountScene_Actor;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_EncountScene_C>   K2Node_DynamicCast_AsBPI_Encount_Scene;            // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPI_ReadyEncountSceneFade_Ready;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_EncountScene_C_BPL_ReadyEncountSceneFade) == 0x000008, "Wrong alignment on BPL_EncountScene_C_BPL_ReadyEncountSceneFade");
static_assert(sizeof(BPL_EncountScene_C_BPL_ReadyEncountSceneFade) == 0x000038, "Wrong size on BPL_EncountScene_C_BPL_ReadyEncountSceneFade");
static_assert(offsetof(BPL_EncountScene_C_BPL_ReadyEncountSceneFade, __WorldContext) == 0x000000, "Member 'BPL_EncountScene_C_BPL_ReadyEncountSceneFade::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_ReadyEncountSceneFade, Ready) == 0x000008, "Member 'BPL_EncountScene_C_BPL_ReadyEncountSceneFade::Ready' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_ReadyEncountSceneFade, CallFunc_BPL_GetEncountScene_Actor) == 0x000010, "Member 'BPL_EncountScene_C_BPL_ReadyEncountSceneFade::CallFunc_BPL_GetEncountScene_Actor' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_ReadyEncountSceneFade, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BPL_EncountScene_C_BPL_ReadyEncountSceneFade::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_ReadyEncountSceneFade, K2Node_DynamicCast_AsBPI_Encount_Scene) == 0x000020, "Member 'BPL_EncountScene_C_BPL_ReadyEncountSceneFade::K2Node_DynamicCast_AsBPI_Encount_Scene' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_ReadyEncountSceneFade, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPL_EncountScene_C_BPL_ReadyEncountSceneFade::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_EncountScene_C_BPL_ReadyEncountSceneFade, CallFunc_BPI_ReadyEncountSceneFade_Ready) == 0x000031, "Member 'BPL_EncountScene_C_BPL_ReadyEncountSceneFade::CallFunc_BPI_ReadyEncountSceneFade_Ready' has a wrong offset!");

}

