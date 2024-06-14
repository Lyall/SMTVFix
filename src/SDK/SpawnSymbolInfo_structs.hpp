#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpawnSymbolInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SymbolActRecord_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// UserDefinedStruct SpawnSymbolInfo.SpawnSymbolInfo
// 0x00A0 (0x00A0 - 0x0000)
struct FSpawnSymbolInfo final
{
public:
	class ACustomPawn*                            Symbol_2_A3A78F894A1FAC8DBE99988D78D4A746;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEntry_5_D0E49F3D4008500D2EE64EB2C2A22C07;        // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53B1[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_8_47F04B1C459C33DE779470986D597E20;          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EncountID_11_54FB144349C4BF3C521FDB8874438847;     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SymbolID_12_77CF6609404B3FC79FBF69922DF36B42;      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dead_15_E938D4094359F545729DE1AF44510C5E;          // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53B2[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                StartLocation_18_C3E5519344202866464158B1138BF6F0; // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53B3[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ReturnTransform_21_E680CDEB46D3D53753F29197B32010C1; // 0x0030(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	E_MITAMA_ENCOUNT                              MitamaType_38_1F392C5F423E65208B0566B9F152B82C;    // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopSpawn_42_AF8A79594C0211FFDA0EA883CD44F299;     // 0x0061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53B4[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PackID_31_377C984A412AFCF4EFCDF6A4379B9866;        // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReqSpawn_33_F7281E094CFABEB06690D09EDDE73F28;      // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53B5[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSymbolActRecord                       ActRecord_36_5C22E82945C94F60660AE587F94C22BE;     // 0x0070(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          LastBattleSymbol_40_364EBF144788682BD8AB32B06927BA26; // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          MitamaCalcEnd_44_C40A8AF14903C329472334B8F6BA63C8; // 0x0091(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Magatsuhi_46_565AAF1D4066DC5552973186C3FE28D3;     // 0x0092(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSpawnSymbolInfo) == 0x000010, "Wrong alignment on FSpawnSymbolInfo");
static_assert(sizeof(FSpawnSymbolInfo) == 0x0000A0, "Wrong size on FSpawnSymbolInfo");
static_assert(offsetof(FSpawnSymbolInfo, Symbol_2_A3A78F894A1FAC8DBE99988D78D4A746) == 0x000000, "Member 'FSpawnSymbolInfo::Symbol_2_A3A78F894A1FAC8DBE99988D78D4A746' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, IsEntry_5_D0E49F3D4008500D2EE64EB2C2A22C07) == 0x000008, "Member 'FSpawnSymbolInfo::IsEntry_5_D0E49F3D4008500D2EE64EB2C2A22C07' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, Index_8_47F04B1C459C33DE779470986D597E20) == 0x00000C, "Member 'FSpawnSymbolInfo::Index_8_47F04B1C459C33DE779470986D597E20' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, EncountID_11_54FB144349C4BF3C521FDB8874438847) == 0x000010, "Member 'FSpawnSymbolInfo::EncountID_11_54FB144349C4BF3C521FDB8874438847' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, SymbolID_12_77CF6609404B3FC79FBF69922DF36B42) == 0x000014, "Member 'FSpawnSymbolInfo::SymbolID_12_77CF6609404B3FC79FBF69922DF36B42' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, Dead_15_E938D4094359F545729DE1AF44510C5E) == 0x000018, "Member 'FSpawnSymbolInfo::Dead_15_E938D4094359F545729DE1AF44510C5E' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, StartLocation_18_C3E5519344202866464158B1138BF6F0) == 0x00001C, "Member 'FSpawnSymbolInfo::StartLocation_18_C3E5519344202866464158B1138BF6F0' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, ReturnTransform_21_E680CDEB46D3D53753F29197B32010C1) == 0x000030, "Member 'FSpawnSymbolInfo::ReturnTransform_21_E680CDEB46D3D53753F29197B32010C1' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, MitamaType_38_1F392C5F423E65208B0566B9F152B82C) == 0x000060, "Member 'FSpawnSymbolInfo::MitamaType_38_1F392C5F423E65208B0566B9F152B82C' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, StopSpawn_42_AF8A79594C0211FFDA0EA883CD44F299) == 0x000061, "Member 'FSpawnSymbolInfo::StopSpawn_42_AF8A79594C0211FFDA0EA883CD44F299' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, PackID_31_377C984A412AFCF4EFCDF6A4379B9866) == 0x000064, "Member 'FSpawnSymbolInfo::PackID_31_377C984A412AFCF4EFCDF6A4379B9866' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, ReqSpawn_33_F7281E094CFABEB06690D09EDDE73F28) == 0x000068, "Member 'FSpawnSymbolInfo::ReqSpawn_33_F7281E094CFABEB06690D09EDDE73F28' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, ActRecord_36_5C22E82945C94F60660AE587F94C22BE) == 0x000070, "Member 'FSpawnSymbolInfo::ActRecord_36_5C22E82945C94F60660AE587F94C22BE' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, LastBattleSymbol_40_364EBF144788682BD8AB32B06927BA26) == 0x000090, "Member 'FSpawnSymbolInfo::LastBattleSymbol_40_364EBF144788682BD8AB32B06927BA26' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, MitamaCalcEnd_44_C40A8AF14903C329472334B8F6BA63C8) == 0x000091, "Member 'FSpawnSymbolInfo::MitamaCalcEnd_44_C40A8AF14903C329472334B8F6BA63C8' has a wrong offset!");
static_assert(offsetof(FSpawnSymbolInfo, Magatsuhi_46_565AAF1D4066DC5552973186C3FE28D3) == 0x000092, "Member 'FSpawnSymbolInfo::Magatsuhi_46_565AAF1D4066DC5552973186C3FE28D3' has a wrong offset!");

}

