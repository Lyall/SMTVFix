#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_MapRelic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MEC_BaseTask_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MEC_MapRelic.MEC_MapRelic_C
// 0x00B0 (0x02D0 - 0x0220)
class UMEC_MapRelic_C final : public UMEC_BaseTask_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MEC_MapRelic_C;                     // 0x0218(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRelicData                             RelicData;                                         // 0x0220(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          FirstGet;                                          // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF5[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRelicGroupData                        RelicItemData;                                     // 0x024C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_4AF6[0x8];                                     // 0x0258(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             SpawnPos;                                          // 0x0260(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         SaveId;                                            // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AF7[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_Result;                                     // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                SEPoint;                                           // 0x02A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lot;                                               // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GodBonus;                                          // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF8[0x2];                                     // 0x02B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemNum;                                           // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MapPauseCheck;                                     // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF9[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GetNum;                                            // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvtDis_Result__DelegateSignature(bool Success);
	void ExecuteUbergraph_MEC_MapRelic(int32 EntryPoint);
	void CallTask();
	void AfterGetPiece();
	void LotItem();
	void CheckHaveLimit(int32 Param_ItemId, int32 Add, bool* CanHave);
	void CureHpMp(TArray<int32>* NkmIndexList, TArray<int32>* HPCureList, TArray<int32>* MPCureList);
	void CureMagatsuhi(int32* PrevMagatsuhi, int32* AddMagatsuhi);
	void EffectCureHpMp(TArray<int32>& NkmIndexList, TArray<int32>& HPCureList, TArray<int32>& MPCureList);
	void EffectCureMagatsuhi(int32 PrevMagatsuhi, int32 AddMagatsuhi);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MEC_MapRelic_C">();
	}
	static class UMEC_MapRelic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMEC_MapRelic_C>();
	}
};
static_assert(alignof(UMEC_MapRelic_C) == 0x000010, "Wrong alignment on UMEC_MapRelic_C");
static_assert(sizeof(UMEC_MapRelic_C) == 0x0002D0, "Wrong size on UMEC_MapRelic_C");
static_assert(offsetof(UMEC_MapRelic_C, UberGraphFrame_MEC_MapRelic_C) == 0x000218, "Member 'UMEC_MapRelic_C::UberGraphFrame_MEC_MapRelic_C' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, RelicData) == 0x000220, "Member 'UMEC_MapRelic_C::RelicData' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, FirstGet) == 0x000248, "Member 'UMEC_MapRelic_C::FirstGet' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, RelicItemData) == 0x00024C, "Member 'UMEC_MapRelic_C::RelicItemData' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, SpawnPos) == 0x000260, "Member 'UMEC_MapRelic_C::SpawnPos' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, SaveId) == 0x000290, "Member 'UMEC_MapRelic_C::SaveId' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, EvtDis_Result) == 0x000298, "Member 'UMEC_MapRelic_C::EvtDis_Result' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, SEPoint) == 0x0002A8, "Member 'UMEC_MapRelic_C::SEPoint' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, Lot) == 0x0002B4, "Member 'UMEC_MapRelic_C::Lot' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, GodBonus) == 0x0002B5, "Member 'UMEC_MapRelic_C::GodBonus' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, ItemId) == 0x0002B8, "Member 'UMEC_MapRelic_C::ItemId' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, ItemNum) == 0x0002BC, "Member 'UMEC_MapRelic_C::ItemNum' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, MapPauseCheck) == 0x0002C0, "Member 'UMEC_MapRelic_C::MapPauseCheck' has a wrong offset!");
static_assert(offsetof(UMEC_MapRelic_C, GetNum) == 0x0002C4, "Member 'UMEC_MapRelic_C::GetNum' has a wrong offset!");

}

