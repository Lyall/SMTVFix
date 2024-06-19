#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTL_ADD_SKILL_LIGHT_TASK_DATA

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct BTL_ADD_SKILL_LIGHT_TASK_DATA.BTL_ADD_SKILL_LIGHT_TASK_DATA
// 0x0068 (0x0068 - 0x0000)
struct FBTL_ADD_SKILL_LIGHT_TASK_DATA final
{
public:
	TScriptInterface<class IBPI_BattleSkillActionBase_C> SkillBase_42_5F21119E45F63A51B4FC319E56E835D7;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 SocketName_5_B0D9AA984CEDB385B69F3DA97CEBBA2E;     // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                OffsetPos_9_BC2B93E842F649D214887BB71555BA2C;      // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LightFuncMatIndex_12_6DB1467F461AE4F52512D19259D53CE6; // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GroupID_14_069B27CA4C8FD5AC3199DF8707537E01;       // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCastShadow_17_F77F504D4D6E600C9935E6997A2AAFF2;  // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsFollowSocket_19_21F3BDA84F2A6BAF5459CE9261F2FFD8; // 0x0035(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsActorLight_21_0EE10330409AD549069C61B9E0E4B307;  // 0x0036(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsParty_31_CBA4059548680E5BC0FF2FA4B2CD7B9A;       // 0x0037(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsMagatsuhi_46_81DB187B43BB32A151FB67B0AB074D8A;   // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2ABB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      Color_24_E0236CF84A174635FCEF3CA645067475;         // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Intensity_27_3405AA8447E4DDE89D8557AAE2E28C55;     // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Radius_29_84593E17488F356B3E87BBB3FA19E28C;        // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FalloffExponent_41_65493A6241E0CAFCC04DB5A316FFA6AE; // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideInReflection_35_87AE02AA4FD92D8FAB3676B5A0A419A6; // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HideInAbsorbAndBlock_36_DBA2BC5F41E3C039D35610843161D63A; // 0x0061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCharaOnly_38_FE06A202495562DAFB735D8B21A7F6F2;   // 0x0062(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBarrierTimingPassed_44_2336DF6F493D0E88E08B9BAFF1C29396; // 0x0063(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CheckSocketExist_49_4D23DEB74D8761FAF4BDC4A7419ACD3C; // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FBTL_ADD_SKILL_LIGHT_TASK_DATA) == 0x000008, "Wrong alignment on FBTL_ADD_SKILL_LIGHT_TASK_DATA");
static_assert(sizeof(FBTL_ADD_SKILL_LIGHT_TASK_DATA) == 0x000068, "Wrong size on FBTL_ADD_SKILL_LIGHT_TASK_DATA");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, SkillBase_42_5F21119E45F63A51B4FC319E56E835D7) == 0x000000, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::SkillBase_42_5F21119E45F63A51B4FC319E56E835D7' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, SocketName_5_B0D9AA984CEDB385B69F3DA97CEBBA2E) == 0x000010, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::SocketName_5_B0D9AA984CEDB385B69F3DA97CEBBA2E' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, OffsetPos_9_BC2B93E842F649D214887BB71555BA2C) == 0x000020, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::OffsetPos_9_BC2B93E842F649D214887BB71555BA2C' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, LightFuncMatIndex_12_6DB1467F461AE4F52512D19259D53CE6) == 0x00002C, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::LightFuncMatIndex_12_6DB1467F461AE4F52512D19259D53CE6' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, GroupID_14_069B27CA4C8FD5AC3199DF8707537E01) == 0x000030, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::GroupID_14_069B27CA4C8FD5AC3199DF8707537E01' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, IsCastShadow_17_F77F504D4D6E600C9935E6997A2AAFF2) == 0x000034, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::IsCastShadow_17_F77F504D4D6E600C9935E6997A2AAFF2' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, IsFollowSocket_19_21F3BDA84F2A6BAF5459CE9261F2FFD8) == 0x000035, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::IsFollowSocket_19_21F3BDA84F2A6BAF5459CE9261F2FFD8' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, IsActorLight_21_0EE10330409AD549069C61B9E0E4B307) == 0x000036, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::IsActorLight_21_0EE10330409AD549069C61B9E0E4B307' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, IsParty_31_CBA4059548680E5BC0FF2FA4B2CD7B9A) == 0x000037, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::IsParty_31_CBA4059548680E5BC0FF2FA4B2CD7B9A' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, IsMagatsuhi_46_81DB187B43BB32A151FB67B0AB074D8A) == 0x000038, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::IsMagatsuhi_46_81DB187B43BB32A151FB67B0AB074D8A' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, Color_24_E0236CF84A174635FCEF3CA645067475) == 0x000040, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::Color_24_E0236CF84A174635FCEF3CA645067475' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, Intensity_27_3405AA8447E4DDE89D8557AAE2E28C55) == 0x000048, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::Intensity_27_3405AA8447E4DDE89D8557AAE2E28C55' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, Radius_29_84593E17488F356B3E87BBB3FA19E28C) == 0x000050, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::Radius_29_84593E17488F356B3E87BBB3FA19E28C' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, FalloffExponent_41_65493A6241E0CAFCC04DB5A316FFA6AE) == 0x000058, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::FalloffExponent_41_65493A6241E0CAFCC04DB5A316FFA6AE' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, HideInReflection_35_87AE02AA4FD92D8FAB3676B5A0A419A6) == 0x000060, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::HideInReflection_35_87AE02AA4FD92D8FAB3676B5A0A419A6' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, HideInAbsorbAndBlock_36_DBA2BC5F41E3C039D35610843161D63A) == 0x000061, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::HideInAbsorbAndBlock_36_DBA2BC5F41E3C039D35610843161D63A' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, IsCharaOnly_38_FE06A202495562DAFB735D8B21A7F6F2) == 0x000062, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::IsCharaOnly_38_FE06A202495562DAFB735D8B21A7F6F2' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, IsBarrierTimingPassed_44_2336DF6F493D0E88E08B9BAFF1C29396) == 0x000063, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::IsBarrierTimingPassed_44_2336DF6F493D0E88E08B9BAFF1C29396' has a wrong offset!");
static_assert(offsetof(FBTL_ADD_SKILL_LIGHT_TASK_DATA, CheckSocketExist_49_4D23DEB74D8761FAF4BDC4A7419ACD3C) == 0x000064, "Member 'FBTL_ADD_SKILL_LIGHT_TASK_DATA::CheckSocketExist_49_4D23DEB74D8761FAF4BDC4A7419ACD3C' has a wrong offset!");

}

