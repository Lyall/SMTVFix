#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DebugParty_t

#include "Basic.hpp"

#include "DebugParty_Nkm_t_structs.hpp"
#include "DebugParty_Item_t_structs.hpp"
#include "DebugPartySkillLIb_t_structs.hpp"
#include "DebugPartyProperty_t_structs.hpp"


namespace SDK
{

// UserDefinedStruct DebugParty_t.DebugParty_t
// 0x00B0 (0x00B0 - 0x0000)
struct FDebugParty_t final
{
public:
	bool                                          InvokeFullTestSetting_43_C84462944FDEE7FBBC20E295B1D5246A; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseCurrentPartyData_45_25AD79DC42B17F1A5E4E4E84BCC269E6; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D8[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HeroLevel_2_5F1F31DF47CD6375F5C09BA5FDE0B461;      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 HeroSkill_5_4B29BA474810016DEC7229B578D2CEA7;      // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 HeroAutoSkill_7_74C71428414A4A78B73CDF9908F29A43;  // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 HeroDeffenceAishou_9_C105941F4029BAE05D51E986D6C9EB6C; // 0x0028(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 HeroSkillTekisei_11_C158BECB468CA80040A502817877D97F; // 0x0038(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 HeroParam_22_61A184704011E3EF072AF990978DD539;     // 0x0048(0x0010)(Edit, BlueprintVisible)
	int32                                         SkillSource_39_0E92BA464C8C853B1FBC84BDEFEA0334;   // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41D9[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDebugParty_Nkm_t>              Nkm_14_FA2A9AA0448E55FDDE9AC98C6817DEF6;           // 0x0060(0x0010)(Edit, BlueprintVisible)
	TArray<struct FDebugParty_Item_t>             Item_17_24B1F1674621D6E8C4CDF08902C0C9A2;          // 0x0070(0x0010)(Edit, BlueprintVisible)
	TArray<struct FDebugPartySkillLIb_t>          SkillLib_29_BD38943B4C098EAA89C6F8A3DDB1F79C;      // 0x0080(0x0010)(Edit, BlueprintVisible)
	TArray<struct FDebugPartyProperty_t>          Property_Aishou_33_9BB79D894741D415DCC0A1AB01F00C87; // 0x0090(0x0010)(Edit, BlueprintVisible)
	TArray<struct FDebugPartyProperty_t>          Property_Tekisei_36_8081BA834505FA686A409FB3CDA7714F; // 0x00A0(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FDebugParty_t) == 0x000008, "Wrong alignment on FDebugParty_t");
static_assert(sizeof(FDebugParty_t) == 0x0000B0, "Wrong size on FDebugParty_t");
static_assert(offsetof(FDebugParty_t, InvokeFullTestSetting_43_C84462944FDEE7FBBC20E295B1D5246A) == 0x000000, "Member 'FDebugParty_t::InvokeFullTestSetting_43_C84462944FDEE7FBBC20E295B1D5246A' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, UseCurrentPartyData_45_25AD79DC42B17F1A5E4E4E84BCC269E6) == 0x000001, "Member 'FDebugParty_t::UseCurrentPartyData_45_25AD79DC42B17F1A5E4E4E84BCC269E6' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, HeroLevel_2_5F1F31DF47CD6375F5C09BA5FDE0B461) == 0x000004, "Member 'FDebugParty_t::HeroLevel_2_5F1F31DF47CD6375F5C09BA5FDE0B461' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, HeroSkill_5_4B29BA474810016DEC7229B578D2CEA7) == 0x000008, "Member 'FDebugParty_t::HeroSkill_5_4B29BA474810016DEC7229B578D2CEA7' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, HeroAutoSkill_7_74C71428414A4A78B73CDF9908F29A43) == 0x000018, "Member 'FDebugParty_t::HeroAutoSkill_7_74C71428414A4A78B73CDF9908F29A43' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, HeroDeffenceAishou_9_C105941F4029BAE05D51E986D6C9EB6C) == 0x000028, "Member 'FDebugParty_t::HeroDeffenceAishou_9_C105941F4029BAE05D51E986D6C9EB6C' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, HeroSkillTekisei_11_C158BECB468CA80040A502817877D97F) == 0x000038, "Member 'FDebugParty_t::HeroSkillTekisei_11_C158BECB468CA80040A502817877D97F' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, HeroParam_22_61A184704011E3EF072AF990978DD539) == 0x000048, "Member 'FDebugParty_t::HeroParam_22_61A184704011E3EF072AF990978DD539' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, SkillSource_39_0E92BA464C8C853B1FBC84BDEFEA0334) == 0x000058, "Member 'FDebugParty_t::SkillSource_39_0E92BA464C8C853B1FBC84BDEFEA0334' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, Nkm_14_FA2A9AA0448E55FDDE9AC98C6817DEF6) == 0x000060, "Member 'FDebugParty_t::Nkm_14_FA2A9AA0448E55FDDE9AC98C6817DEF6' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, Item_17_24B1F1674621D6E8C4CDF08902C0C9A2) == 0x000070, "Member 'FDebugParty_t::Item_17_24B1F1674621D6E8C4CDF08902C0C9A2' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, SkillLib_29_BD38943B4C098EAA89C6F8A3DDB1F79C) == 0x000080, "Member 'FDebugParty_t::SkillLib_29_BD38943B4C098EAA89C6F8A3DDB1F79C' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, Property_Aishou_33_9BB79D894741D415DCC0A1AB01F00C87) == 0x000090, "Member 'FDebugParty_t::Property_Aishou_33_9BB79D894741D415DCC0A1AB01F00C87' has a wrong offset!");
static_assert(offsetof(FDebugParty_t, Property_Tekisei_36_8081BA834505FA686A409FB3CDA7714F) == 0x0000A0, "Member 'FDebugParty_t::Property_Tekisei_36_8081BA834505FA686A409FB3CDA7714F' has a wrong offset!");

}

