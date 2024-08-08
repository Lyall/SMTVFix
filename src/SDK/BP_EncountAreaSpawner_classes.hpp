#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EncountAreaSpawner

#include "Basic.hpp"

#include "SymbolMoverData_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EncountData_st_structs.hpp"
#include "SymbolActRecord_structs.hpp"
#include "MapActorCore_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EncountAreaSpawner.BP_EncountAreaSpawner_C
// 0x0210 (0x0488 - 0x0278)
class ABP_EncountAreaSpawner_C final : public AMapActorCore_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_EncountAreaSpawner_C;            // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Sucsess;                                           // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_281[0x3];                                      // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SpawnLocation;                                     // 0x0284(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EncountID;                                         // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_SpawnDevil;                                 // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 EnemyIdList;                                       // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SymbolID;                                          // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         ActionType;                                        // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   ClassAssetID;                                      // 0x02C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FEncountData_st                        EncountInputData;                                  // 0x02E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ADevilBase_C*                           SpawnDevil;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapSymbolBaseCompornent_C*             SymbolComponent;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceTop;                                          // 0x0320(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                TraceBottom;                                       // 0x032C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsSpawnEffect;                                     // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAngleManual;                                     // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33A[0x2];                                      // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Angle;                                             // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSymbolMoverData                       MoverData;                                         // 0x0340(0x00B8)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IgnorePause;                                       // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F9[0x3];                                      // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_BP_EncountAreaSpawner_C;                     // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReqReturn;                                         // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_SpawnEnd;                                   // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PackId;                                            // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          NotCalcAngle;                                      // 0x041C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D[0x3];                                      // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UniqueSymbolID;                                    // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsUniqueSymbol;                                    // 0x0424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          SpawnMotion;                                       // 0x0425(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_426[0x2];                                      // 0x0426(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSymbolActRecord                       ActRecord;                                         // 0x0428(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UniqueIcon;                                        // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_449[0x3];                                      // 0x0449(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpawnerRadius;                                     // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         DistanceToAvoidSymbols;                            // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Manual_DistanceToAvoidSymbols;                     // 0x0454(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          RespawnAfterOtherScene;                            // 0x0455(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          DevilView;                                         // 0x0456(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_457[0x1];                                      // 0x0457(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UActorComponent>         NewVar_0;                                          // 0x0458(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	class UClass*                                 ClassAsset;                                        // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvtDis_SpawnDevil__DelegateSignature(class ACustomPawn* Devil, class ABP_EncountAreaSpawner_C* This);
	void EvtDis_SpawnEnd__DelegateSignature(class ABP_EncountAreaSpawner_C* This);
	void ExecuteUbergraph_BP_EncountAreaSpawner(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void Debug_TraceAndSpawnSymbol(int32 DevilID, int32 BlankIndex);
	void DeleteSpawn();
	void SpawnSymbol();
	void TraceAndSpawnSymbol(float Delay, bool IsEffect, bool AngleManual, float Param_Angle, bool Param_IgnorePause, int32 Param_Index, bool Param_NotCalcAngle, bool Param_SpawnMotion);
	void _EvtDis_EndInit(bool Success);
	void OnLoaded_E5E0B1E74B354A4530CE2ABDF1028360(TSubclassOf<class UObject> Loaded);
	void GetSuccsess(bool* Param_Sucsess);
	void FirstReturn();
	void PrintSpawn();
	void FailLog(const class FString& Reason);
	void AddExComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EncountAreaSpawner_C">();
	}
	static class ABP_EncountAreaSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EncountAreaSpawner_C>();
	}
};
static_assert(alignof(ABP_EncountAreaSpawner_C) == 0x000008, "Wrong alignment on ABP_EncountAreaSpawner_C");
static_assert(sizeof(ABP_EncountAreaSpawner_C) == 0x000488, "Wrong size on ABP_EncountAreaSpawner_C");
static_assert(offsetof(ABP_EncountAreaSpawner_C, UberGraphFrame_BP_EncountAreaSpawner_C) == 0x000278, "Member 'ABP_EncountAreaSpawner_C::UberGraphFrame_BP_EncountAreaSpawner_C' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, Sucsess) == 0x000280, "Member 'ABP_EncountAreaSpawner_C::Sucsess' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, SpawnLocation) == 0x000284, "Member 'ABP_EncountAreaSpawner_C::SpawnLocation' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, EncountID) == 0x000290, "Member 'ABP_EncountAreaSpawner_C::EncountID' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, EvtDis_SpawnDevil) == 0x000298, "Member 'ABP_EncountAreaSpawner_C::EvtDis_SpawnDevil' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, EnemyIdList) == 0x0002A8, "Member 'ABP_EncountAreaSpawner_C::EnemyIdList' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, SymbolID) == 0x0002B8, "Member 'ABP_EncountAreaSpawner_C::SymbolID' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, ActionType) == 0x0002BC, "Member 'ABP_EncountAreaSpawner_C::ActionType' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, ClassAssetID) == 0x0002C0, "Member 'ABP_EncountAreaSpawner_C::ClassAssetID' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, EncountInputData) == 0x0002E8, "Member 'ABP_EncountAreaSpawner_C::EncountInputData' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, SpawnDevil) == 0x000310, "Member 'ABP_EncountAreaSpawner_C::SpawnDevil' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, SymbolComponent) == 0x000318, "Member 'ABP_EncountAreaSpawner_C::SymbolComponent' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, TraceTop) == 0x000320, "Member 'ABP_EncountAreaSpawner_C::TraceTop' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, TraceBottom) == 0x00032C, "Member 'ABP_EncountAreaSpawner_C::TraceBottom' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, IsSpawnEffect) == 0x000338, "Member 'ABP_EncountAreaSpawner_C::IsSpawnEffect' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, IsAngleManual) == 0x000339, "Member 'ABP_EncountAreaSpawner_C::IsAngleManual' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, Angle) == 0x00033C, "Member 'ABP_EncountAreaSpawner_C::Angle' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, MoverData) == 0x000340, "Member 'ABP_EncountAreaSpawner_C::MoverData' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, IgnorePause) == 0x0003F8, "Member 'ABP_EncountAreaSpawner_C::IgnorePause' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, Index_BP_EncountAreaSpawner_C) == 0x0003FC, "Member 'ABP_EncountAreaSpawner_C::Index_BP_EncountAreaSpawner_C' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, ReqReturn) == 0x000400, "Member 'ABP_EncountAreaSpawner_C::ReqReturn' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, EvtDis_SpawnEnd) == 0x000408, "Member 'ABP_EncountAreaSpawner_C::EvtDis_SpawnEnd' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, PackId) == 0x000418, "Member 'ABP_EncountAreaSpawner_C::PackId' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, NotCalcAngle) == 0x00041C, "Member 'ABP_EncountAreaSpawner_C::NotCalcAngle' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, UniqueSymbolID) == 0x000420, "Member 'ABP_EncountAreaSpawner_C::UniqueSymbolID' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, IsUniqueSymbol) == 0x000424, "Member 'ABP_EncountAreaSpawner_C::IsUniqueSymbol' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, SpawnMotion) == 0x000425, "Member 'ABP_EncountAreaSpawner_C::SpawnMotion' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, ActRecord) == 0x000428, "Member 'ABP_EncountAreaSpawner_C::ActRecord' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, UniqueIcon) == 0x000448, "Member 'ABP_EncountAreaSpawner_C::UniqueIcon' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, SpawnerRadius) == 0x00044C, "Member 'ABP_EncountAreaSpawner_C::SpawnerRadius' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, DistanceToAvoidSymbols) == 0x000450, "Member 'ABP_EncountAreaSpawner_C::DistanceToAvoidSymbols' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, Manual_DistanceToAvoidSymbols) == 0x000454, "Member 'ABP_EncountAreaSpawner_C::Manual_DistanceToAvoidSymbols' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, RespawnAfterOtherScene) == 0x000455, "Member 'ABP_EncountAreaSpawner_C::RespawnAfterOtherScene' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, DevilView) == 0x000456, "Member 'ABP_EncountAreaSpawner_C::DevilView' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, NewVar_0) == 0x000458, "Member 'ABP_EncountAreaSpawner_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ABP_EncountAreaSpawner_C, ClassAsset) == 0x000480, "Member 'ABP_EncountAreaSpawner_C::ClassAsset' has a wrong offset!");

}

