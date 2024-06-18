#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapRelic

#include "Basic.hpp"

#include "E_RelicColor_structs.hpp"
#include "Engine_structs.hpp"
#include "E_MapGimmickHideReason_structs.hpp"
#include "Project_structs.hpp"
#include "MapEventHit_Type_AAction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapRelic.BP_MapRelic_C
// 0x0098 (0x0468 - 0x03D0)
class ABP_MapRelic_C final : public AMapEventHit_Type_AAction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MapRelic_C;                      // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        WallCheckPoint;                                    // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Gaze_Point;                                        // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SE_Point;                                          // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_MapGimmickAreaEntry_C*             BPC_MapGimmickAreaEntry;                           // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SpawnPos;                                          // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMEC_MapRelic_C*                        MEC_MapRelic;                                      // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         SaveID_Start;                                      // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaveId;                                            // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CalcSaveID;                                        // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37DA[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_BP_MapRelic_C;                               // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ManualMapID;                                       // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseManualMapID;                                    // 0x042C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37DB[0x3];                                     // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRelicData                             RelicData;                                         // 0x0430(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_RelicColor                                  RelicColor;                                        // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37DC[0x3];                                     // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HideReason;                                        // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Gaze;                                              // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_MapRelic(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void EventHitAction();
	void UpdateActive();
	void BPI_HideGimmick(E_MapGimmickHideReason Param_HideReason);
	void BPI_ShowGimmick(E_MapGimmickHideReason Param_HideReason);
	void EventHitIN();
	void EvtDis_Result_(bool Success);
	void EvtDis_Hide_();
	void EvtDis_Show_();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void CalcSave();
	void GetRealSaveID(int32* Param_SaveId);
	void DebugTextView(bool View);
	void GetStaticMesh(class UStaticMeshComponent** StaticMesh);
	void GetParticle(class UParticleSystemComponent** ParticleSystem);
	void GetRelicAppearance(class ABP_RelicAppearanceBase_C** RelicApearance);
	void SetMinimapIconTableRow(int32 Param_Index, struct FMinimapIconTableRow* OutRow, bool* NeedToAddMore);

	EGazeTargetType GetGazeTargetType() const;
	struct FVector GetGazeTargetLocation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapRelic_C">();
	}
	static class ABP_MapRelic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapRelic_C>();
	}
};
static_assert(alignof(ABP_MapRelic_C) == 0x000008, "Wrong alignment on ABP_MapRelic_C");
static_assert(sizeof(ABP_MapRelic_C) == 0x000468, "Wrong size on ABP_MapRelic_C");
static_assert(offsetof(ABP_MapRelic_C, UberGraphFrame_BP_MapRelic_C) == 0x0003D0, "Member 'ABP_MapRelic_C::UberGraphFrame_BP_MapRelic_C' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, WallCheckPoint) == 0x0003D8, "Member 'ABP_MapRelic_C::WallCheckPoint' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, Gaze_Point) == 0x0003E0, "Member 'ABP_MapRelic_C::Gaze_Point' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, ChildActor) == 0x0003E8, "Member 'ABP_MapRelic_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, SE_Point) == 0x0003F0, "Member 'ABP_MapRelic_C::SE_Point' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, BPC_MapGimmickAreaEntry) == 0x0003F8, "Member 'ABP_MapRelic_C::BPC_MapGimmickAreaEntry' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, SpawnPos) == 0x000400, "Member 'ABP_MapRelic_C::SpawnPos' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, TextRender) == 0x000408, "Member 'ABP_MapRelic_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, MEC_MapRelic) == 0x000410, "Member 'ABP_MapRelic_C::MEC_MapRelic' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, SaveID_Start) == 0x000418, "Member 'ABP_MapRelic_C::SaveID_Start' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, SaveId) == 0x00041C, "Member 'ABP_MapRelic_C::SaveId' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, CalcSaveID) == 0x000420, "Member 'ABP_MapRelic_C::CalcSaveID' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, Index_BP_MapRelic_C) == 0x000424, "Member 'ABP_MapRelic_C::Index_BP_MapRelic_C' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, ManualMapID) == 0x000428, "Member 'ABP_MapRelic_C::ManualMapID' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, UseManualMapID) == 0x00042C, "Member 'ABP_MapRelic_C::UseManualMapID' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, RelicData) == 0x000430, "Member 'ABP_MapRelic_C::RelicData' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, RelicColor) == 0x000458, "Member 'ABP_MapRelic_C::RelicColor' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, HideReason) == 0x00045C, "Member 'ABP_MapRelic_C::HideReason' has a wrong offset!");
static_assert(offsetof(ABP_MapRelic_C, Gaze) == 0x000460, "Member 'ABP_MapRelic_C::Gaze' has a wrong offset!");

}

