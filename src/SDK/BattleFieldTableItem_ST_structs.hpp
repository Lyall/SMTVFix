#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleFieldTableItem_ST

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct BattleFieldTableItem_ST.BattleFieldTableItem_ST
// 0x0070 (0x0070 - 0x0000)
struct FBattleFieldTableItem_ST final
{
public:
	int32                                         BattleFieldID_10_F1D5061E49F18B808D9E699E555A0716; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MapID_12_FA5053CA44C00A0D01A5BBB133A1BE14;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AreaID_14_AD5184B34D65BB824E57619D6E14F850;        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B83[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPrimaryAssetId>                Levels_19_DAF1040C4EF97DEF746165A8C16648F4;        // 0x0010(0x0010)(Edit, BlueprintVisible)
	bool                                          IsRandomRotate_7_EA47D3AA44DBEFE98A641DA90750BA20; // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B84[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MapDarkID_17_DD6D3C7944430E781A53EABCD57BC7FA;     // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location_22_EC977CBE46BC57C9923A329BCB5EC6D8;      // 0x0028(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B85[0xC];                                     // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             EncountTransform_28_A5F38CD44BCD1C41E66BD2A75E1DCF18; // 0x0040(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FBattleFieldTableItem_ST) == 0x000010, "Wrong alignment on FBattleFieldTableItem_ST");
static_assert(sizeof(FBattleFieldTableItem_ST) == 0x000070, "Wrong size on FBattleFieldTableItem_ST");
static_assert(offsetof(FBattleFieldTableItem_ST, BattleFieldID_10_F1D5061E49F18B808D9E699E555A0716) == 0x000000, "Member 'FBattleFieldTableItem_ST::BattleFieldID_10_F1D5061E49F18B808D9E699E555A0716' has a wrong offset!");
static_assert(offsetof(FBattleFieldTableItem_ST, MapID_12_FA5053CA44C00A0D01A5BBB133A1BE14) == 0x000004, "Member 'FBattleFieldTableItem_ST::MapID_12_FA5053CA44C00A0D01A5BBB133A1BE14' has a wrong offset!");
static_assert(offsetof(FBattleFieldTableItem_ST, AreaID_14_AD5184B34D65BB824E57619D6E14F850) == 0x000008, "Member 'FBattleFieldTableItem_ST::AreaID_14_AD5184B34D65BB824E57619D6E14F850' has a wrong offset!");
static_assert(offsetof(FBattleFieldTableItem_ST, Levels_19_DAF1040C4EF97DEF746165A8C16648F4) == 0x000010, "Member 'FBattleFieldTableItem_ST::Levels_19_DAF1040C4EF97DEF746165A8C16648F4' has a wrong offset!");
static_assert(offsetof(FBattleFieldTableItem_ST, IsRandomRotate_7_EA47D3AA44DBEFE98A641DA90750BA20) == 0x000020, "Member 'FBattleFieldTableItem_ST::IsRandomRotate_7_EA47D3AA44DBEFE98A641DA90750BA20' has a wrong offset!");
static_assert(offsetof(FBattleFieldTableItem_ST, MapDarkID_17_DD6D3C7944430E781A53EABCD57BC7FA) == 0x000024, "Member 'FBattleFieldTableItem_ST::MapDarkID_17_DD6D3C7944430E781A53EABCD57BC7FA' has a wrong offset!");
static_assert(offsetof(FBattleFieldTableItem_ST, Location_22_EC977CBE46BC57C9923A329BCB5EC6D8) == 0x000028, "Member 'FBattleFieldTableItem_ST::Location_22_EC977CBE46BC57C9923A329BCB5EC6D8' has a wrong offset!");
static_assert(offsetof(FBattleFieldTableItem_ST, EncountTransform_28_A5F38CD44BCD1C41E66BD2A75E1DCF18) == 0x000040, "Member 'FBattleFieldTableItem_ST::EncountTransform_28_A5F38CD44BCD1C41E66BD2A75E1DCF18' has a wrong offset!");

}

