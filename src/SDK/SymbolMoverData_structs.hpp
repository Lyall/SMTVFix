#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SymbolMoverData

#include "Basic.hpp"

#include "E_Symbol_Discovery_structs.hpp"
#include "SymbolSplinePointAct_structs.hpp"
#include "SymbolActPattern_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SymbolMoverData.SymbolMoverData
// 0x00B8 (0x00B8 - 0x0000)
struct FSymbolMoverData final
{
public:
	TArray<struct FSymbolActPattern>              FirstActPatterns_32_FA397D674A6CBBDAA280AAA7953436C4; // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSymbolActPattern>              SecondActPatterns_34_5F696A1840D7E0FBE7C345B7F8290D35; // 0x0010(0x0010)(Edit, BlueprintVisible)
	E_Symbol_Discovery                            DiscoveryPattern_8_89895D334DF697DA2DEDB3866E78FF51; // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EyeAngle_12_B9C90E994E8516850E5D8FBC1F3EC487;      // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyeLength_13_8844CF0A4CE07904597CB6B9EDAF10E3;     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         SummonAreaList_24_F26EBC714F454B1644A622B6F16334F0; // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FSymbolSplinePointAct>          SplinePointAct_28_262EB9E9401A876CE6E3B796991970D0; // 0x0040(0x0010)(Edit, BlueprintVisible)
	bool                                          WallKantsu_42_CDCAF982450835B3863BC587A92C8345;    // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DiscoveryTeam_46_23E7C9194532DFF02CE196805AABD4AA; // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSymbolActPattern>              GiveUpPatterns_50_8849DAD04DAE76886EF6AFA244A50C3D; // 0x0058(0x0010)(Edit, BlueprintVisible)
	int32                                         SpawnSplinePoint_53_3129A17D46877963DF9334B697006416; // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstDiscovery_55_09B562E54DE14FC00D9217A6DE19E855; // 0x006C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSymbolActPattern>              NoRoutePatterns_60_28F96121408BD081F056E0AA730907B0; // 0x0070(0x0010)(Edit, BlueprintVisible)
	bool                                          IsSpeedRandom_62_93BD5A444A20D6A3BCBF83A1F963A9FF; // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EyeWidth_66_78930648431B24DFD7947BAD7853D32B;      // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyeHeight_70_D0C486CE440DFC3765FFBAA20F550322;     // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ChainDiscoveryAreas_75_B677CA1845A4CFFEB4E4F79944F2716B; // 0x0090(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          IsFly_77_59DD43EB425BAA6BA98B688CE098DDD1;         // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsTalkStart_79_C8BB29F54438AD08F224BB92794B83A6;   // 0x00A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReSpawn_92_E52877B942DAA255D531D28C2857A89B;       // 0x00A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Discovery_LevelDifference_95_430093B64C48E29F2912338D7CCC2223; // 0x00A3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DirtEffect_97_239764ED48877FC4F8E224ABFA630A2B;    // 0x00A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnLocation_100_3D0230054B50AB97CEC46CAC3DA4744A; // 0x00A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnLocationManual_103_5F7ED6A24D926BB9F3CE6DBE8CE6506F; // 0x00B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSymbolMoverData) == 0x000008, "Wrong alignment on FSymbolMoverData");
static_assert(sizeof(FSymbolMoverData) == 0x0000B8, "Wrong size on FSymbolMoverData");
static_assert(offsetof(FSymbolMoverData, FirstActPatterns_32_FA397D674A6CBBDAA280AAA7953436C4) == 0x000000, "Member 'FSymbolMoverData::FirstActPatterns_32_FA397D674A6CBBDAA280AAA7953436C4' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, SecondActPatterns_34_5F696A1840D7E0FBE7C345B7F8290D35) == 0x000010, "Member 'FSymbolMoverData::SecondActPatterns_34_5F696A1840D7E0FBE7C345B7F8290D35' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, DiscoveryPattern_8_89895D334DF697DA2DEDB3866E78FF51) == 0x000020, "Member 'FSymbolMoverData::DiscoveryPattern_8_89895D334DF697DA2DEDB3866E78FF51' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, EyeAngle_12_B9C90E994E8516850E5D8FBC1F3EC487) == 0x000024, "Member 'FSymbolMoverData::EyeAngle_12_B9C90E994E8516850E5D8FBC1F3EC487' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, EyeLength_13_8844CF0A4CE07904597CB6B9EDAF10E3) == 0x000028, "Member 'FSymbolMoverData::EyeLength_13_8844CF0A4CE07904597CB6B9EDAF10E3' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, SummonAreaList_24_F26EBC714F454B1644A622B6F16334F0) == 0x000030, "Member 'FSymbolMoverData::SummonAreaList_24_F26EBC714F454B1644A622B6F16334F0' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, SplinePointAct_28_262EB9E9401A876CE6E3B796991970D0) == 0x000040, "Member 'FSymbolMoverData::SplinePointAct_28_262EB9E9401A876CE6E3B796991970D0' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, WallKantsu_42_CDCAF982450835B3863BC587A92C8345) == 0x000050, "Member 'FSymbolMoverData::WallKantsu_42_CDCAF982450835B3863BC587A92C8345' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, DiscoveryTeam_46_23E7C9194532DFF02CE196805AABD4AA) == 0x000054, "Member 'FSymbolMoverData::DiscoveryTeam_46_23E7C9194532DFF02CE196805AABD4AA' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, GiveUpPatterns_50_8849DAD04DAE76886EF6AFA244A50C3D) == 0x000058, "Member 'FSymbolMoverData::GiveUpPatterns_50_8849DAD04DAE76886EF6AFA244A50C3D' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, SpawnSplinePoint_53_3129A17D46877963DF9334B697006416) == 0x000068, "Member 'FSymbolMoverData::SpawnSplinePoint_53_3129A17D46877963DF9334B697006416' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, IsFirstDiscovery_55_09B562E54DE14FC00D9217A6DE19E855) == 0x00006C, "Member 'FSymbolMoverData::IsFirstDiscovery_55_09B562E54DE14FC00D9217A6DE19E855' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, NoRoutePatterns_60_28F96121408BD081F056E0AA730907B0) == 0x000070, "Member 'FSymbolMoverData::NoRoutePatterns_60_28F96121408BD081F056E0AA730907B0' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, IsSpeedRandom_62_93BD5A444A20D6A3BCBF83A1F963A9FF) == 0x000080, "Member 'FSymbolMoverData::IsSpeedRandom_62_93BD5A444A20D6A3BCBF83A1F963A9FF' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, EyeWidth_66_78930648431B24DFD7947BAD7853D32B) == 0x000084, "Member 'FSymbolMoverData::EyeWidth_66_78930648431B24DFD7947BAD7853D32B' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, EyeHeight_70_D0C486CE440DFC3765FFBAA20F550322) == 0x000088, "Member 'FSymbolMoverData::EyeHeight_70_D0C486CE440DFC3765FFBAA20F550322' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, ChainDiscoveryAreas_75_B677CA1845A4CFFEB4E4F79944F2716B) == 0x000090, "Member 'FSymbolMoverData::ChainDiscoveryAreas_75_B677CA1845A4CFFEB4E4F79944F2716B' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, IsFly_77_59DD43EB425BAA6BA98B688CE098DDD1) == 0x0000A0, "Member 'FSymbolMoverData::IsFly_77_59DD43EB425BAA6BA98B688CE098DDD1' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, IsTalkStart_79_C8BB29F54438AD08F224BB92794B83A6) == 0x0000A1, "Member 'FSymbolMoverData::IsTalkStart_79_C8BB29F54438AD08F224BB92794B83A6' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, ReSpawn_92_E52877B942DAA255D531D28C2857A89B) == 0x0000A2, "Member 'FSymbolMoverData::ReSpawn_92_E52877B942DAA255D531D28C2857A89B' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, Discovery_LevelDifference_95_430093B64C48E29F2912338D7CCC2223) == 0x0000A3, "Member 'FSymbolMoverData::Discovery_LevelDifference_95_430093B64C48E29F2912338D7CCC2223' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, DirtEffect_97_239764ED48877FC4F8E224ABFA630A2B) == 0x0000A4, "Member 'FSymbolMoverData::DirtEffect_97_239764ED48877FC4F8E224ABFA630A2B' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, ReturnLocation_100_3D0230054B50AB97CEC46CAC3DA4744A) == 0x0000A8, "Member 'FSymbolMoverData::ReturnLocation_100_3D0230054B50AB97CEC46CAC3DA4744A' has a wrong offset!");
static_assert(offsetof(FSymbolMoverData, ReturnLocationManual_103_5F7ED6A24D926BB9F3CE6DBE8CE6506F) == 0x0000B4, "Member 'FSymbolMoverData::ReturnLocationManual_103_5F7ED6A24D926BB9F3CE6DBE8CE6506F' has a wrong offset!");

}

