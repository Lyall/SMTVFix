#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTL_ADD_DECAL_TASK_DATA

#include "Basic.hpp"

#include "MaterialAnimSetting_T_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct BTL_ADD_DECAL_TASK_DATA.BTL_ADD_DECAL_TASK_DATA
// 0x0040 (0x0040 - 0x0000)
struct FBTL_ADD_DECAL_TASK_DATA final
{
public:
	class UMaterialInstance*                      MaterialInstance_7_F9ED11674E2F7494AF9247834C46240E; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMaterialAnimSetting_T>         MaterialAnimSetting_3_F3AB18964172128932D48E8FA2D22C1C; // 0x0008(0x0010)(Edit, BlueprintVisible)
	struct FRotator                               Rotation_10_1D599BC14C84CCD1F086448D07AF988C;      // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         RotationRandMin_13_46EAB1444FA0532B2EB31B97A6438F16; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationRandMax_15_A44D336646E5F8ABC4100A997F56D9A8; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleSkillActionBase_C> SkillAction_18_3D0BDC054FEF585DB7F2A2B58A94860D;   // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FBTL_ADD_DECAL_TASK_DATA) == 0x000008, "Wrong alignment on FBTL_ADD_DECAL_TASK_DATA");
static_assert(sizeof(FBTL_ADD_DECAL_TASK_DATA) == 0x000040, "Wrong size on FBTL_ADD_DECAL_TASK_DATA");
static_assert(offsetof(FBTL_ADD_DECAL_TASK_DATA, MaterialInstance_7_F9ED11674E2F7494AF9247834C46240E) == 0x000000, "Member 'FBTL_ADD_DECAL_TASK_DATA::MaterialInstance_7_F9ED11674E2F7494AF9247834C46240E' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_DECAL_TASK_DATA, MaterialAnimSetting_3_F3AB18964172128932D48E8FA2D22C1C) == 0x000008, "Member 'FBTL_ADD_DECAL_TASK_DATA::MaterialAnimSetting_3_F3AB18964172128932D48E8FA2D22C1C' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_DECAL_TASK_DATA, Rotation_10_1D599BC14C84CCD1F086448D07AF988C) == 0x000018, "Member 'FBTL_ADD_DECAL_TASK_DATA::Rotation_10_1D599BC14C84CCD1F086448D07AF988C' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_DECAL_TASK_DATA, RotationRandMin_13_46EAB1444FA0532B2EB31B97A6438F16) == 0x000024, "Member 'FBTL_ADD_DECAL_TASK_DATA::RotationRandMin_13_46EAB1444FA0532B2EB31B97A6438F16' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_DECAL_TASK_DATA, RotationRandMax_15_A44D336646E5F8ABC4100A997F56D9A8) == 0x000028, "Member 'FBTL_ADD_DECAL_TASK_DATA::RotationRandMax_15_A44D336646E5F8ABC4100A997F56D9A8' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_DECAL_TASK_DATA, SkillAction_18_3D0BDC054FEF585DB7F2A2B58A94860D) == 0x000030, "Member 'FBTL_ADD_DECAL_TASK_DATA::SkillAction_18_3D0BDC054FEF585DB7F2A2B58A94860D' has a wrong offset!");

}

