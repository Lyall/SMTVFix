#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NaviDevilParam_st

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// UserDefinedStruct NaviDevilParam_st.NaviDevilParam_st
// 0x0098 (0x0098 - 0x0000)
struct FNaviDevilParam_st final
{
public:
	E_NAVI_DEVIL                                  NaviType_2_4D57470A4E91DFDF2873E6AF861A5C5F;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67E3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale_5_C8E5B29740F2B9A7D7A7E381DCD4D194;          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundAtomCue>           FindVoice_9_464633A149B5CA3B9F9FBA8FC6898AA0;      // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundAtomCue>           GoVoice_12_C54BB7C5431B34877F308088A684F2E4;       // 0x0030(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         CollisionRadius_15_E4CFEA15416D099BFEB3D7A7482875E6; // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionHalfHeight_17_373533954D6E9572C8A8EA96591AADB4; // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BasePosition_20_3D000AE54FCA92D430495CBFA58A611A;  // 0x0060(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraInsideCheckLocation_23_E715504446FBEA85FB25CFA8D6E76ED0; // 0x006C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraInsideCheckSize_25_A3D295D74F30BD084040BEB9B70A0DDE; // 0x0078(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MeshOffsetEnable_30_296FBC5041992166E071C290F428DB21; // 0x0084(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E4[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                MeshOffeset_31_CDF0C413486ED438D167B48FC16F5A6E;   // 0x0088(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_MOTION_ID                             GimmickMotion_36_4F5245034F40B4119D37A1AB8B789D5B; // 0x0094(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnGround_33_6BDE00BB4179A5A4417ED3AAB4036BFA;      // 0x0095(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FNaviDevilParam_st) == 0x000008, "Wrong alignment on FNaviDevilParam_st");
static_assert(sizeof(FNaviDevilParam_st) == 0x000098, "Wrong size on FNaviDevilParam_st");
static_assert(offsetof(FNaviDevilParam_st, NaviType_2_4D57470A4E91DFDF2873E6AF861A5C5F) == 0x000000, "Member 'FNaviDevilParam_st::NaviType_2_4D57470A4E91DFDF2873E6AF861A5C5F' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, Scale_5_C8E5B29740F2B9A7D7A7E381DCD4D194) == 0x000004, "Member 'FNaviDevilParam_st::Scale_5_C8E5B29740F2B9A7D7A7E381DCD4D194' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, FindVoice_9_464633A149B5CA3B9F9FBA8FC6898AA0) == 0x000008, "Member 'FNaviDevilParam_st::FindVoice_9_464633A149B5CA3B9F9FBA8FC6898AA0' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, GoVoice_12_C54BB7C5431B34877F308088A684F2E4) == 0x000030, "Member 'FNaviDevilParam_st::GoVoice_12_C54BB7C5431B34877F308088A684F2E4' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, CollisionRadius_15_E4CFEA15416D099BFEB3D7A7482875E6) == 0x000058, "Member 'FNaviDevilParam_st::CollisionRadius_15_E4CFEA15416D099BFEB3D7A7482875E6' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, CollisionHalfHeight_17_373533954D6E9572C8A8EA96591AADB4) == 0x00005C, "Member 'FNaviDevilParam_st::CollisionHalfHeight_17_373533954D6E9572C8A8EA96591AADB4' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, BasePosition_20_3D000AE54FCA92D430495CBFA58A611A) == 0x000060, "Member 'FNaviDevilParam_st::BasePosition_20_3D000AE54FCA92D430495CBFA58A611A' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, CameraInsideCheckLocation_23_E715504446FBEA85FB25CFA8D6E76ED0) == 0x00006C, "Member 'FNaviDevilParam_st::CameraInsideCheckLocation_23_E715504446FBEA85FB25CFA8D6E76ED0' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, CameraInsideCheckSize_25_A3D295D74F30BD084040BEB9B70A0DDE) == 0x000078, "Member 'FNaviDevilParam_st::CameraInsideCheckSize_25_A3D295D74F30BD084040BEB9B70A0DDE' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, MeshOffsetEnable_30_296FBC5041992166E071C290F428DB21) == 0x000084, "Member 'FNaviDevilParam_st::MeshOffsetEnable_30_296FBC5041992166E071C290F428DB21' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, MeshOffeset_31_CDF0C413486ED438D167B48FC16F5A6E) == 0x000088, "Member 'FNaviDevilParam_st::MeshOffeset_31_CDF0C413486ED438D167B48FC16F5A6E' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, GimmickMotion_36_4F5245034F40B4119D37A1AB8B789D5B) == 0x000094, "Member 'FNaviDevilParam_st::GimmickMotion_36_4F5245034F40B4119D37A1AB8B789D5B' has a wrong offset!");
static_assert(offsetof(FNaviDevilParam_st, OnGround_33_6BDE00BB4179A5A4417ED3AAB4036BFA) == 0x000095, "Member 'FNaviDevilParam_st::OnGround_33_6BDE00BB4179A5A4417ED3AAB4036BFA' has a wrong offset!");

}

