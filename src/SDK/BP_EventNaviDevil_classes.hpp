#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventNaviDevil

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_EventMissionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventNaviDevil.BP_EventNaviDevil_C
// 0x01D0 (0x04F0 - 0x0320)
class ABP_EventNaviDevil_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_EventNaviDevil_C;                // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2747[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Spawn;                                             // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNaviDevilData                         NaviDevilData;                                     // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNaviDevilGimmickData                  NaviGimmickData;                                   // 0x0348(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Gimmick_MapID;                                     // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Gimmick_Index;                                     // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         EncountID;                                         // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2748[0x4];                                     // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 EnemyIdList;                                       // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             EvtDis_EndEvent;                                   // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UScriptMessageAsset*                    MessageAsset;                                      // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Rand;                                              // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SafeZoneID;                                        // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ManualSafeZone;                                    // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2749[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EncountSceneCtrl_C*                 EncountSceneCtrl;                                  // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevMakka;                                         // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemId;                                            // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemNum;                                           // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddMakka;                                          // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHaveOver;                                        // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_274A[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MiitsuPoint;                                       // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AutoRotateFocus_C*                  AutoRotateCtrl;                                    // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevMiitsu;                                        // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274B[0x4];                                     // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PlayerPos;                                         // 0x0410(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         GimmickTableIndex;                                 // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UniqueSaveID;                                      // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoasterGimmickBase_C*               CoasterGimmick;                                    // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FPackEncount                           EncountPackData;                                   // 0x0450(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NowBattle;                                         // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_274C[0x7];                                     // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             NaviTransform;                                     // 0x04B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UBPC_CharaFollower_C*                   NaviComp;                                          // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvtDis_EndEvent__DelegateSignature();
	void ExecuteUbergraph_BP_EventNaviDevil(int32 EntryPoint);
	void EndNaviTick();
	void StartNaviTick();
	void EvtDis_EndFadeOut_FoundGimmick_();
	void Event_EndStep();
	void EvtDis_EndFoundGimmick_();
	void OnDestroyed______0(class AActor* DestroyedActor);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnDestroyed_(class AActor* DestroyedActor);
	void Evt_EndBattle(E_BTL_END BtlEndType, int32 ChainEncountNum);
	void QuestExecute();
	void ReceiveBeginPlay();
	void LotItem(bool* IsItem, bool* IsMakka, int32* Param_ItemId, int32* Num, int32* OnFlag);
	void ItemInfo(bool HaveOver);
	void MakkaInfo();
	void GetEncountID(int32* Param_EncountID, struct FPackEncount* PackData);
	void GodInfo();
	void OnlySaveLog();
	void Lot_ItemOrEncount(bool* ItemGet);
	void SaveUniqueGimmick();
	void CalcChainEncountInfo(struct FChainEncountInfo* Info);
	void DebugLog(const class FString& Str);
	void GetMsgAsset(E_NAVI_DEVIL NaviType, class UScriptMessageAsset** MsgAsset);
	void GetGazeTargetSocket(class FName* Socket);
	void CalcMitama(const struct FPackEncount& PackData, E_MITAMA_ENCOUNT* MitamaType, struct FPackEncount* OutPackData);
	void CalcMagatsuhi(const struct FPackEncount& PackData, TArray<int32>& EnemyIDS, bool* Magatsuhi);
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventNaviDevil_C">();
	}
	static class ABP_EventNaviDevil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventNaviDevil_C>();
	}
};
static_assert(alignof(ABP_EventNaviDevil_C) == 0x000010, "Wrong alignment on ABP_EventNaviDevil_C");
static_assert(sizeof(ABP_EventNaviDevil_C) == 0x0004F0, "Wrong size on ABP_EventNaviDevil_C");
static_assert(offsetof(ABP_EventNaviDevil_C, UberGraphFrame_BP_EventNaviDevil_C) == 0x000320, "Member 'ABP_EventNaviDevil_C::UberGraphFrame_BP_EventNaviDevil_C' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, SelectIndex) == 0x000328, "Member 'ABP_EventNaviDevil_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, Spawn) == 0x000330, "Member 'ABP_EventNaviDevil_C::Spawn' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, NaviDevilData) == 0x000338, "Member 'ABP_EventNaviDevil_C::NaviDevilData' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, NaviGimmickData) == 0x000348, "Member 'ABP_EventNaviDevil_C::NaviGimmickData' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, Gimmick_MapID) == 0x000398, "Member 'ABP_EventNaviDevil_C::Gimmick_MapID' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, Gimmick_Index) == 0x00039C, "Member 'ABP_EventNaviDevil_C::Gimmick_Index' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, EncountID) == 0x0003A0, "Member 'ABP_EventNaviDevil_C::EncountID' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, EnemyIdList) == 0x0003A8, "Member 'ABP_EventNaviDevil_C::EnemyIdList' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, EvtDis_EndEvent) == 0x0003B8, "Member 'ABP_EventNaviDevil_C::EvtDis_EndEvent' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, MessageAsset) == 0x0003C8, "Member 'ABP_EventNaviDevil_C::MessageAsset' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, Rand) == 0x0003D0, "Member 'ABP_EventNaviDevil_C::Rand' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, SafeZoneID) == 0x0003D4, "Member 'ABP_EventNaviDevil_C::SafeZoneID' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, ManualSafeZone) == 0x0003D8, "Member 'ABP_EventNaviDevil_C::ManualSafeZone' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, EncountSceneCtrl) == 0x0003E0, "Member 'ABP_EventNaviDevil_C::EncountSceneCtrl' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, PrevMakka) == 0x0003E8, "Member 'ABP_EventNaviDevil_C::PrevMakka' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, ItemId) == 0x0003EC, "Member 'ABP_EventNaviDevil_C::ItemId' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, ItemNum) == 0x0003F0, "Member 'ABP_EventNaviDevil_C::ItemNum' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, AddMakka) == 0x0003F4, "Member 'ABP_EventNaviDevil_C::AddMakka' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, IsHaveOver) == 0x0003F8, "Member 'ABP_EventNaviDevil_C::IsHaveOver' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, MiitsuPoint) == 0x0003FC, "Member 'ABP_EventNaviDevil_C::MiitsuPoint' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, AutoRotateCtrl) == 0x000400, "Member 'ABP_EventNaviDevil_C::AutoRotateCtrl' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, PrevMiitsu) == 0x000408, "Member 'ABP_EventNaviDevil_C::PrevMiitsu' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, PlayerPos) == 0x000410, "Member 'ABP_EventNaviDevil_C::PlayerPos' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, GimmickTableIndex) == 0x000440, "Member 'ABP_EventNaviDevil_C::GimmickTableIndex' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, UniqueSaveID) == 0x000444, "Member 'ABP_EventNaviDevil_C::UniqueSaveID' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, CoasterGimmick) == 0x000448, "Member 'ABP_EventNaviDevil_C::CoasterGimmick' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, EncountPackData) == 0x000450, "Member 'ABP_EventNaviDevil_C::EncountPackData' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, NowBattle) == 0x0004A8, "Member 'ABP_EventNaviDevil_C::NowBattle' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, NaviTransform) == 0x0004B0, "Member 'ABP_EventNaviDevil_C::NaviTransform' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil_C, NaviComp) == 0x0004E0, "Member 'ABP_EventNaviDevil_C::NaviComp' has a wrong offset!");

}

