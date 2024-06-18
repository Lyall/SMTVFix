#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapSubLevelMinimap_ST

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct MapSubLevelMinimap_ST.MapSubLevelMinimap_ST
// 0x0050 (0x0050 - 0x0000)
struct FMapSubLevelMinimap_ST final
{
public:
	float                                         Dimensions_15_1308D4AC41ADB40A51F92E9C03B1DC3C;    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zoom_17_620A912744F5CD83A883FAB4E0DE6AE4;          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPersistent_1_0EBA936A4436D8C84A8DF7B60B694398;   // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture>                PersistentTexture_4_F05B5DF44104D87D1F20BBAEE5AEB957; // 0x0010(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          IsAreaTexture_12_CC43CF9A420D08E4F71E488DB28F4744; // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB4[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UTexture>>        AreaTextures_8_EF0542654E91C937D3065E936C8F62BD;   // 0x0040(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FMapSubLevelMinimap_ST) == 0x000008, "Wrong alignment on FMapSubLevelMinimap_ST");
static_assert(sizeof(FMapSubLevelMinimap_ST) == 0x000050, "Wrong size on FMapSubLevelMinimap_ST");
static_assert(offsetof(FMapSubLevelMinimap_ST, Dimensions_15_1308D4AC41ADB40A51F92E9C03B1DC3C) == 0x000000, "Member 'FMapSubLevelMinimap_ST::Dimensions_15_1308D4AC41ADB40A51F92E9C03B1DC3C' has a wrong offset!");
static_assert(offsetof(FMapSubLevelMinimap_ST, Zoom_17_620A912744F5CD83A883FAB4E0DE6AE4) == 0x000004, "Member 'FMapSubLevelMinimap_ST::Zoom_17_620A912744F5CD83A883FAB4E0DE6AE4' has a wrong offset!");
static_assert(offsetof(FMapSubLevelMinimap_ST, IsPersistent_1_0EBA936A4436D8C84A8DF7B60B694398) == 0x000008, "Member 'FMapSubLevelMinimap_ST::IsPersistent_1_0EBA936A4436D8C84A8DF7B60B694398' has a wrong offset!");
static_assert(offsetof(FMapSubLevelMinimap_ST, PersistentTexture_4_F05B5DF44104D87D1F20BBAEE5AEB957) == 0x000010, "Member 'FMapSubLevelMinimap_ST::PersistentTexture_4_F05B5DF44104D87D1F20BBAEE5AEB957' has a wrong offset!");
static_assert(offsetof(FMapSubLevelMinimap_ST, IsAreaTexture_12_CC43CF9A420D08E4F71E488DB28F4744) == 0x000038, "Member 'FMapSubLevelMinimap_ST::IsAreaTexture_12_CC43CF9A420D08E4F71E488DB28F4744' has a wrong offset!");
static_assert(offsetof(FMapSubLevelMinimap_ST, AreaTextures_8_EF0542654E91C937D3065E936C8F62BD) == 0x000040, "Member 'FMapSubLevelMinimap_ST::AreaTextures_8_EF0542654E91C937D3065E936C8F62BD' has a wrong offset!");

}

