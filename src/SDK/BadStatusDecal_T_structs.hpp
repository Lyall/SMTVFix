#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BadStatusDecal_T

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MaterialAnimSetting_T_structs.hpp"


namespace SDK
{

// UserDefinedStruct BadStatusDecal_T.BadStatusDecal_T
// 0x0058 (0x0058 - 0x0000)
struct FBadStatusDecal_T final
{
public:
	E_BAD_STATUS                                  BadStatusKind_3_9AD9F3E64EE90FA58E9328AD7AE82D60;  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_BAD_STATUS_APPEAR                     AppearTiming_6_B64AE0364DF80032DA6D9586E4565810;   // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SocketName_9_609C1BC84D8AB20766B0709AB7E310BD;     // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialInterface>      DecalMaterial_18_FB728269499DA891E9C9A9A237D0F211; // 0x0010(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FVector                                DecalSize_21_07E577AE4B03C55418C67E9ACD9BF02F;     // 0x0038(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMaterialAnimSetting_T>         MaterialAnimSetting_13_3B78C59A4C599CBB43EDE9BD86304432; // 0x0048(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FBadStatusDecal_T) == 0x000008, "Wrong alignment on FBadStatusDecal_T");
static_assert(sizeof(FBadStatusDecal_T) == 0x000058, "Wrong size on FBadStatusDecal_T");
static_assert(offsetof(FBadStatusDecal_T, BadStatusKind_3_9AD9F3E64EE90FA58E9328AD7AE82D60) == 0x000000, "Member 'FBadStatusDecal_T::BadStatusKind_3_9AD9F3E64EE90FA58E9328AD7AE82D60' has a wrong offset!");
static_assert(offsetof(FBadStatusDecal_T, AppearTiming_6_B64AE0364DF80032DA6D9586E4565810) == 0x000001, "Member 'FBadStatusDecal_T::AppearTiming_6_B64AE0364DF80032DA6D9586E4565810' has a wrong offset!");
static_assert(offsetof(FBadStatusDecal_T, SocketName_9_609C1BC84D8AB20766B0709AB7E310BD) == 0x000004, "Member 'FBadStatusDecal_T::SocketName_9_609C1BC84D8AB20766B0709AB7E310BD' has a wrong offset!");
static_assert(offsetof(FBadStatusDecal_T, DecalMaterial_18_FB728269499DA891E9C9A9A237D0F211) == 0x000010, "Member 'FBadStatusDecal_T::DecalMaterial_18_FB728269499DA891E9C9A9A237D0F211' has a wrong offset!");
static_assert(offsetof(FBadStatusDecal_T, DecalSize_21_07E577AE4B03C55418C67E9ACD9BF02F) == 0x000038, "Member 'FBadStatusDecal_T::DecalSize_21_07E577AE4B03C55418C67E9ACD9BF02F' has a wrong offset!");
static_assert(offsetof(FBadStatusDecal_T, MaterialAnimSetting_13_3B78C59A4C599CBB43EDE9BD86304432) == 0x000048, "Member 'FBadStatusDecal_T::MaterialAnimSetting_13_3B78C59A4C599CBB43EDE9BD86304432' has a wrong offset!");

}

