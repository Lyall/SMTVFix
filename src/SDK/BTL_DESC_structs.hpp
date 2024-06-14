#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTL_DESC

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MapEncountPositionStruct_structs.hpp"


namespace SDK
{

// UserDefinedStruct BTL_DESC.BTL_DESC
// 0x00D0 (0x00D0 - 0x0000)
struct FBTL_DESC final
{
public:
	int32                                         M_EvtID_4_8138F49147EC1B8173A949A26C25CB32;        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         M_MapSymbolAtk_9_6B6B48A14230DA11DD816390EF0C8649; // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_557D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACharaBase_C*>                   M_pTargetMember_26_2A55C71B4F00F2E59D8649BE16F66844; // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         M_BGMNo_17_FC8948234E89F7163D7A6FAB1AE763E2;       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_EncID_20_CD89839A4F6BC6A427755CBE0BE21F5C;       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             M_OriginTransform_25_E3EC15744E79C107FDDE0688104561C8; // 0x0020(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int32                                         M_BtlStartCamActive_35_9F383D6340BE3145B8933C89080359DF; // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_557E[0xC];                                     // 0x0054(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapEncountPositionStruct              M_EncountPos_50_C81B27814CB2D4D1AC5BE9ACCB0DEE1C;  // 0x0060(0x0050)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         M_EndEvtID_53_D3977F53478C279DB85140884923F6E3;    // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_557F[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         M_NotBattleActor_57_4CD836A7495AC017A63BB1B7ADE99496; // 0x00B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
};
static_assert(alignof(FBTL_DESC) == 0x000010, "Wrong alignment on FBTL_DESC");
static_assert(sizeof(FBTL_DESC) == 0x0000D0, "Wrong size on FBTL_DESC");
static_assert(offsetof(FBTL_DESC, M_EvtID_4_8138F49147EC1B8173A949A26C25CB32) == 0x000000, "Member 'FBTL_DESC::M_EvtID_4_8138F49147EC1B8173A949A26C25CB32' has a wrong offset!");
static_assert(offsetof(FBTL_DESC, M_MapSymbolAtk_9_6B6B48A14230DA11DD816390EF0C8649) == 0x000004, "Member 'FBTL_DESC::M_MapSymbolAtk_9_6B6B48A14230DA11DD816390EF0C8649' has a wrong offset!");
static_assert(offsetof(FBTL_DESC, M_pTargetMember_26_2A55C71B4F00F2E59D8649BE16F66844) == 0x000008, "Member 'FBTL_DESC::M_pTargetMember_26_2A55C71B4F00F2E59D8649BE16F66844' has a wrong offset!");
static_assert(offsetof(FBTL_DESC, M_BGMNo_17_FC8948234E89F7163D7A6FAB1AE763E2) == 0x000018, "Member 'FBTL_DESC::M_BGMNo_17_FC8948234E89F7163D7A6FAB1AE763E2' has a wrong offset!");
static_assert(offsetof(FBTL_DESC, M_EncID_20_CD89839A4F6BC6A427755CBE0BE21F5C) == 0x00001C, "Member 'FBTL_DESC::M_EncID_20_CD89839A4F6BC6A427755CBE0BE21F5C' has a wrong offset!");
static_assert(offsetof(FBTL_DESC, M_OriginTransform_25_E3EC15744E79C107FDDE0688104561C8) == 0x000020, "Member 'FBTL_DESC::M_OriginTransform_25_E3EC15744E79C107FDDE0688104561C8' has a wrong offset!");
static_assert(offsetof(FBTL_DESC, M_BtlStartCamActive_35_9F383D6340BE3145B8933C89080359DF) == 0x000050, "Member 'FBTL_DESC::M_BtlStartCamActive_35_9F383D6340BE3145B8933C89080359DF' has a wrong offset!");
static_assert(offsetof(FBTL_DESC, M_EncountPos_50_C81B27814CB2D4D1AC5BE9ACCB0DEE1C) == 0x000060, "Member 'FBTL_DESC::M_EncountPos_50_C81B27814CB2D4D1AC5BE9ACCB0DEE1C' has a wrong offset!");
static_assert(offsetof(FBTL_DESC, M_EndEvtID_53_D3977F53478C279DB85140884923F6E3) == 0x0000B0, "Member 'FBTL_DESC::M_EndEvtID_53_D3977F53478C279DB85140884923F6E3' has a wrong offset!");
static_assert(offsetof(FBTL_DESC, M_NotBattleActor_57_4CD836A7495AC017A63BB1B7ADE99496) == 0x0000B8, "Member 'FBTL_DESC::M_NotBattleActor_57_4CD836A7495AC017A63BB1B7ADE99496' has a wrong offset!");

}
