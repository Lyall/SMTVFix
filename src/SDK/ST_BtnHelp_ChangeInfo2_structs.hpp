#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_BtnHelp_ChangeInfo2

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_BtnHelp_ChangeInfo2.ST_BtnHelp_ChangeInfo2
// 0x0020 (0x0020 - 0x0000)
struct FST_BtnHelp_ChangeInfo2 final
{
public:
	E_BTN_HELP_POS_TYPE                           PositionType_7_1AEB67E44F07D7315E9ABF9B7DE77A22;   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_HELP_SET                                HelpPattern_13_488DA6254D128CF0EE08FA99409383D9;   // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B25[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBtnHelpInfo>                   ManualInfo_29_C124E813419A53FD8D6D5B95720DB8E1;    // 0x0008(0x0010)(Edit, BlueprintVisible)
	bool                                          CloseOtherHelp_12_94AA8BD2426C3516078ECCAF38D6A30E; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SkipAnimation_17_65E7D7CD495C455A6B7E70B691FB3283; // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ResetNowColor_22_1F71822947E3393EDE58659D23A40488; // 0x001A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ResetReserveColor_21_00B477B34BA96E0F8A596AABF4EC2648; // 0x001B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ResetHoldEffect_24_EDB187614CA357739FC6959912C6DCDA; // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FST_BtnHelp_ChangeInfo2) == 0x000008, "Wrong alignment on FST_BtnHelp_ChangeInfo2");
static_assert(sizeof(FST_BtnHelp_ChangeInfo2) == 0x000020, "Wrong size on FST_BtnHelp_ChangeInfo2");
static_assert(offsetof(FST_BtnHelp_ChangeInfo2, PositionType_7_1AEB67E44F07D7315E9ABF9B7DE77A22) == 0x000000, "Member 'FST_BtnHelp_ChangeInfo2::PositionType_7_1AEB67E44F07D7315E9ABF9B7DE77A22' has a wrong offset!");
static_assert(offsetof(FST_BtnHelp_ChangeInfo2, HelpPattern_13_488DA6254D128CF0EE08FA99409383D9) == 0x000001, "Member 'FST_BtnHelp_ChangeInfo2::HelpPattern_13_488DA6254D128CF0EE08FA99409383D9' has a wrong offset!");
static_assert(offsetof(FST_BtnHelp_ChangeInfo2, ManualInfo_29_C124E813419A53FD8D6D5B95720DB8E1) == 0x000008, "Member 'FST_BtnHelp_ChangeInfo2::ManualInfo_29_C124E813419A53FD8D6D5B95720DB8E1' has a wrong offset!");
static_assert(offsetof(FST_BtnHelp_ChangeInfo2, CloseOtherHelp_12_94AA8BD2426C3516078ECCAF38D6A30E) == 0x000018, "Member 'FST_BtnHelp_ChangeInfo2::CloseOtherHelp_12_94AA8BD2426C3516078ECCAF38D6A30E' has a wrong offset!");
static_assert(offsetof(FST_BtnHelp_ChangeInfo2, SkipAnimation_17_65E7D7CD495C455A6B7E70B691FB3283) == 0x000019, "Member 'FST_BtnHelp_ChangeInfo2::SkipAnimation_17_65E7D7CD495C455A6B7E70B691FB3283' has a wrong offset!");
static_assert(offsetof(FST_BtnHelp_ChangeInfo2, ResetNowColor_22_1F71822947E3393EDE58659D23A40488) == 0x00001A, "Member 'FST_BtnHelp_ChangeInfo2::ResetNowColor_22_1F71822947E3393EDE58659D23A40488' has a wrong offset!");
static_assert(offsetof(FST_BtnHelp_ChangeInfo2, ResetReserveColor_21_00B477B34BA96E0F8A596AABF4EC2648) == 0x00001B, "Member 'FST_BtnHelp_ChangeInfo2::ResetReserveColor_21_00B477B34BA96E0F8A596AABF4EC2648' has a wrong offset!");
static_assert(offsetof(FST_BtnHelp_ChangeInfo2, ResetHoldEffect_24_EDB187614CA357739FC6959912C6DCDA) == 0x00001C, "Member 'FST_BtnHelp_ChangeInfo2::ResetHoldEffect_24_EDB187614CA357739FC6959912C6DCDA' has a wrong offset!");

}

