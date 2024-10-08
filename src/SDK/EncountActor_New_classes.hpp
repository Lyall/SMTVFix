#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EncountActor_New

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_PLAYER_MANAGER_TYPE_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EncountActor_New.EncountActor_New_C
// 0x0300 (0x0520 - 0x0220)
class AEncountActor_New_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       AreaSearchSphere;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Origin;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBattleCamActorFactory_C*               BattleCamActorFactory;                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleCamActorFactory_C> BPI_CamFactory;                                    // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         M_EncountID;                                       // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleField_C*                         M_BattleField;                                     // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         M_NotBattleActor;                                  // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int32>                                 M_EnemyIDList;                                     // 0x0278(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          M_IsEventBattle;                                   // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_289[0x7];                                      // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADevilBase_C*                           M_SymbolPawn;                                      // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         M_SearchArea;                                      // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_SearchInterval;                                  // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharaBase_C*>                   M_SearchedDevList;                                 // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACharaBase_C*>                   M_EnemySideList;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FTransform>                     M_EnemySidePos;                                    // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ACharaBase_C*>                   M_BattleActor;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	E_BTL_TASK_ONE_STATE                          M_EnemyIsReady;                                    // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleCameraSeamless_C*                M_BattleCameraSeamless;                            // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharaBase_C*>                   M_PlayerSideList;                                  // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	E_BTL_TASK_ONE_STATE                          M_PlayerIsReady;                                   // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x3];                                      // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_Step;                                            // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_308[0x8];                                      // 0x0308(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlDescData                           M_BattleDesc;                                      // 0x0310(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   ConstBattleSubLevel;                               // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsSafeBattle;                                    // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 M_MapCameraActor;                                  // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsBattleEnd;                                     // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTL_FINISHED_STATE                          M_BattleFinishedState;                             // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA[0x2];                                      // 0x03BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_BattleContinueSaveSlot;                          // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_ValidFade;                                       // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEncountStartCamera_C*                  M_EncountCamera;                                   // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_ReStartPoint;                                    // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_ExistNextEvent;                                  // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3D9[0x3];                                      // 0x03D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_NextEvtID;                                       // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 M_BattlePoint;                                     // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             M_SavePlayerTransform;                             // 0x03F0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          M_SpawnPoint;                                      // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421[0x3];                                      // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_DeltaTime;                                       // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_NowEventID;                                      // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          M_Manual;                                          // 0x042C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_42D[0x3];                                      // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelStreamingDynamic*                 M_EventSubLevel;                                   // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_END                                     M_BtlEndType;                                      // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439[0x7];                                      // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               M_BattleArea;                                      // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_ManualWhenNotEscape;                             // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_449[0x3];                                      // 0x0449(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_MapDarkID;                                       // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         CurrentBattleFieldID;                              // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BattleFIeldID;                                     // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_BTL_SYMBOL_ENCOUNT                          M_SymbolEncountType;                               // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_459[0x3];                                      // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_Target_Die__BlendTime;                           // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_Magatsuka;                                       // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_461[0x3];                                      // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ConstBattlePostProcessLevel;                       // 0x0464(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsBossRoom;                                      // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D[0x3];                                      // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ResultMain_C*                       M_ResultMain;                                      // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                M_BattleFieldLocation;                             // 0x0478(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_ResultUsed;                                      // 0x0484(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_485[0x3];                                      // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_Index;                                           // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48C[0x4];                                      // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULevelStreaming*>                M_BattleFieldStreamingList;                        // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ULevelStreaming*>                M_BattleFieldEnvList;                              // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_EnvEndRequestFromResult;                         // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_MagatsukaBoss;                                   // 0x04B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          M_HitMapAttack;                                    // 0x04B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4B3[0x5];                                      // 0x04B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FChainEncountInfo                      M_ChainEncountInfo;                                // 0x04B8(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         M_ChainEncountNum;                                 // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_Magatsuhi;                                       // 0x04DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          M_BossRush;                                        // 0x04DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          M_BossRushChallengeMode;                           // 0x04DE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4DF[0x1];                                      // 0x04DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULevelStreamingDynamic*>         M_PreviousEventSubLevel;                           // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_IsNaviEncount;                                   // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4F1[0x3];                                      // 0x04F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BatteFieldRotateZ;                                 // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundAtomCue*                          M_PrevBattleBGM;                                   // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_NaviDevilWaitStartTime;                          // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504[0x4];                                      // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 RecordNaviDevilPawnClass;                          // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 RecordNaviComponentClass;                          // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EncountActor_New(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Evt_StartHalfLessEncountSequence();
	void Evt_Destroy();
	void Evt_FieldFailed();
	void Evt_StartDefaultEncountSequence();
	void BndEvt__AreaSearchSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Evt_PlayerSideEndSetUp(TArray<class ACharaBase_C*>& PlayerUnitArray);
	void Evt_EnemySideEndSetUp(TArray<class ACharaBase_C*>& EnemyUnitArray, TArray<struct FTransform>& EnemyPos);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UnLoadBattleSubLevel();
	void Evt_LoadBattleSubLevel();
	void Evt_BattleStart();
	void ExistSublevelUnload();
	void Evt_StartManual();
	void Evt_StartMap();
	void Evt_StartEvent();
	void Evt_ReturnMap();
	void OnLoaded_57169B0B42D693905D24FCB178E94786(TSubclassOf<class UObject> Loaded);
	void OnLoaded_96204D22420F55F2CAEA739EB70954DE(class UObject* Loaded);
	void CheckType(E_BTL_ENCOUNT_SPAWN* RetValue);
	void SpawnBattleCameraSeamless(TArray<class ACharaBase_C*>& Enemys, TArray<struct FTransform>& EnemyPos, TSoftObjectPtr<class UMaterialParameterApplier> MPA_MapDark);
	void StartBattlePrevCamera(TArray<class ACharaBase_C*>& Enemys, TArray<struct FTransform>& EnemyPos);
	void SetBattleBGM();
	void Step1Func();
	void HoldMapCameraParam();
	void Step4Func();
	void StepFunc();
	void Step2Func();
	void Step3Func();
	void NoLoadMakeEnemy();
	void EventSeparete(class FName Param_Name, class FName Name2, bool* TURR);
	void NextEventSelect(class FName One_ONflag, class FName One_OFFFlag, class FName Two_ONFlag, class FName Two_OFFFlag, int32 One_Map, int32 One_Area, int32 One_Point, int32 Two_Map, int32 Two_Area, int32 Two_Point, int32* NextMap, int32* NextArea, int32* NextPoint);
	void LoadEventSubLevel();
	void FIndBattleMapDarkSetting(int32 MapDarkID, struct FBattleMapDark_T* MapDarkSetting);
	void GetOriginTrans(struct FTransform* Trans);
	void BattleFieldBeforeBattle(int32 BattleFieldPoint, bool* IsBattleFieldLevel);
	void BattleFieldAfterBattle();
	void EnableChangeMotion();
	void GetBattleFinishedState(E_BTL_FINISHED_STATE* BattleFinishedState, int32* BattleContinueSaveSlot);
	void DestroyActors();
	void PlayerPause(bool Pause);
	void SwapBattleAreaParticle(class UParticleSystem* Particle);
	void ChainEncountLog();
	void Is_Time_Attack_Battle(bool* IsTimeAttack);
	void IsInAgratField(bool* Inside);
	void IsBattleAreaHideUnload(bool* IsUnload);
	void IsEnv(const class FString& LevelName, bool* Param_IsEnv);
	void GetBattleHideLevel(TArray<struct FPrimaryAssetId>* BattleHideLevel);
	void RecordNaviPawnClass();
	void BI_CheckType(E_BTL_ENCOUNT_SPAWN* Type);
	void BI_SetEncountID(int32 EncountID, bool* NoUse);
	void BI_LoadEventSubLevel(bool* NoUse);
	void BI_NoLoadMakeEnemy(bool* NoUse);
	void BI_CallEncountCamera(bool* NoUse);
	void BI_SetBossRoomBattle(bool IsBossRoom, bool* NoUse);
	void BI_UnloadPreviousEventSubLevel(bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EncountActor_New_C">();
	}
	static class AEncountActor_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEncountActor_New_C>();
	}
};
static_assert(alignof(AEncountActor_New_C) == 0x000010, "Wrong alignment on AEncountActor_New_C");
static_assert(sizeof(AEncountActor_New_C) == 0x000520, "Wrong size on AEncountActor_New_C");
static_assert(offsetof(AEncountActor_New_C, UberGraphFrame) == 0x000220, "Member 'AEncountActor_New_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, AreaSearchSphere) == 0x000228, "Member 'AEncountActor_New_C::AreaSearchSphere' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, Origin) == 0x000230, "Member 'AEncountActor_New_C::Origin' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, BattleCamActorFactory) == 0x000238, "Member 'AEncountActor_New_C::BattleCamActorFactory' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, DefaultSceneRoot) == 0x000240, "Member 'AEncountActor_New_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, BPI_CamFactory) == 0x000248, "Member 'AEncountActor_New_C::BPI_CamFactory' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_EncountID) == 0x000258, "Member 'AEncountActor_New_C::M_EncountID' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleField) == 0x000260, "Member 'AEncountActor_New_C::M_BattleField' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_NotBattleActor) == 0x000268, "Member 'AEncountActor_New_C::M_NotBattleActor' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_EnemyIDList) == 0x000278, "Member 'AEncountActor_New_C::M_EnemyIDList' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_IsEventBattle) == 0x000288, "Member 'AEncountActor_New_C::M_IsEventBattle' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_SymbolPawn) == 0x000290, "Member 'AEncountActor_New_C::M_SymbolPawn' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_SearchArea) == 0x000298, "Member 'AEncountActor_New_C::M_SearchArea' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_SearchInterval) == 0x00029C, "Member 'AEncountActor_New_C::M_SearchInterval' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_SearchedDevList) == 0x0002A0, "Member 'AEncountActor_New_C::M_SearchedDevList' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_EnemySideList) == 0x0002B0, "Member 'AEncountActor_New_C::M_EnemySideList' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_EnemySidePos) == 0x0002C0, "Member 'AEncountActor_New_C::M_EnemySidePos' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleActor) == 0x0002D0, "Member 'AEncountActor_New_C::M_BattleActor' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_EnemyIsReady) == 0x0002E0, "Member 'AEncountActor_New_C::M_EnemyIsReady' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleCameraSeamless) == 0x0002E8, "Member 'AEncountActor_New_C::M_BattleCameraSeamless' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_PlayerSideList) == 0x0002F0, "Member 'AEncountActor_New_C::M_PlayerSideList' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_PlayerIsReady) == 0x000300, "Member 'AEncountActor_New_C::M_PlayerIsReady' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_Step) == 0x000304, "Member 'AEncountActor_New_C::M_Step' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleDesc) == 0x000310, "Member 'AEncountActor_New_C::M_BattleDesc' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, ConstBattleSubLevel) == 0x0003A0, "Member 'AEncountActor_New_C::ConstBattleSubLevel' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_IsSafeBattle) == 0x0003A8, "Member 'AEncountActor_New_C::M_IsSafeBattle' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_MapCameraActor) == 0x0003B0, "Member 'AEncountActor_New_C::M_MapCameraActor' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_IsBattleEnd) == 0x0003B8, "Member 'AEncountActor_New_C::M_IsBattleEnd' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleFinishedState) == 0x0003B9, "Member 'AEncountActor_New_C::M_BattleFinishedState' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleContinueSaveSlot) == 0x0003BC, "Member 'AEncountActor_New_C::M_BattleContinueSaveSlot' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_ValidFade) == 0x0003C0, "Member 'AEncountActor_New_C::M_ValidFade' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_EncountCamera) == 0x0003C8, "Member 'AEncountActor_New_C::M_EncountCamera' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_ReStartPoint) == 0x0003D0, "Member 'AEncountActor_New_C::M_ReStartPoint' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_ExistNextEvent) == 0x0003D8, "Member 'AEncountActor_New_C::M_ExistNextEvent' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_NextEvtID) == 0x0003DC, "Member 'AEncountActor_New_C::M_NextEvtID' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattlePoint) == 0x0003E0, "Member 'AEncountActor_New_C::M_BattlePoint' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_SavePlayerTransform) == 0x0003F0, "Member 'AEncountActor_New_C::M_SavePlayerTransform' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_SpawnPoint) == 0x000420, "Member 'AEncountActor_New_C::M_SpawnPoint' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_DeltaTime) == 0x000424, "Member 'AEncountActor_New_C::M_DeltaTime' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_NowEventID) == 0x000428, "Member 'AEncountActor_New_C::M_NowEventID' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_Manual) == 0x00042C, "Member 'AEncountActor_New_C::M_Manual' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_EventSubLevel) == 0x000430, "Member 'AEncountActor_New_C::M_EventSubLevel' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BtlEndType) == 0x000438, "Member 'AEncountActor_New_C::M_BtlEndType' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleArea) == 0x000440, "Member 'AEncountActor_New_C::M_BattleArea' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_ManualWhenNotEscape) == 0x000448, "Member 'AEncountActor_New_C::M_ManualWhenNotEscape' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_MapDarkID) == 0x00044C, "Member 'AEncountActor_New_C::M_MapDarkID' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, CurrentBattleFieldID) == 0x000450, "Member 'AEncountActor_New_C::CurrentBattleFieldID' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, BattleFIeldID) == 0x000454, "Member 'AEncountActor_New_C::BattleFIeldID' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_SymbolEncountType) == 0x000458, "Member 'AEncountActor_New_C::M_SymbolEncountType' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_Target_Die__BlendTime) == 0x00045C, "Member 'AEncountActor_New_C::M_Target_Die__BlendTime' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_Magatsuka) == 0x000460, "Member 'AEncountActor_New_C::M_Magatsuka' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, ConstBattlePostProcessLevel) == 0x000464, "Member 'AEncountActor_New_C::ConstBattlePostProcessLevel' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_IsBossRoom) == 0x00046C, "Member 'AEncountActor_New_C::M_IsBossRoom' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_ResultMain) == 0x000470, "Member 'AEncountActor_New_C::M_ResultMain' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleFieldLocation) == 0x000478, "Member 'AEncountActor_New_C::M_BattleFieldLocation' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_ResultUsed) == 0x000484, "Member 'AEncountActor_New_C::M_ResultUsed' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_Index) == 0x000488, "Member 'AEncountActor_New_C::M_Index' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleFieldStreamingList) == 0x000490, "Member 'AEncountActor_New_C::M_BattleFieldStreamingList' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BattleFieldEnvList) == 0x0004A0, "Member 'AEncountActor_New_C::M_BattleFieldEnvList' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_EnvEndRequestFromResult) == 0x0004B0, "Member 'AEncountActor_New_C::M_EnvEndRequestFromResult' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_MagatsukaBoss) == 0x0004B1, "Member 'AEncountActor_New_C::M_MagatsukaBoss' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_HitMapAttack) == 0x0004B2, "Member 'AEncountActor_New_C::M_HitMapAttack' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_ChainEncountInfo) == 0x0004B8, "Member 'AEncountActor_New_C::M_ChainEncountInfo' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_ChainEncountNum) == 0x0004D8, "Member 'AEncountActor_New_C::M_ChainEncountNum' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_Magatsuhi) == 0x0004DC, "Member 'AEncountActor_New_C::M_Magatsuhi' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BossRush) == 0x0004DD, "Member 'AEncountActor_New_C::M_BossRush' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_BossRushChallengeMode) == 0x0004DE, "Member 'AEncountActor_New_C::M_BossRushChallengeMode' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_PreviousEventSubLevel) == 0x0004E0, "Member 'AEncountActor_New_C::M_PreviousEventSubLevel' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_IsNaviEncount) == 0x0004F0, "Member 'AEncountActor_New_C::M_IsNaviEncount' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, BatteFieldRotateZ) == 0x0004F4, "Member 'AEncountActor_New_C::BatteFieldRotateZ' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_PrevBattleBGM) == 0x0004F8, "Member 'AEncountActor_New_C::M_PrevBattleBGM' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, M_NaviDevilWaitStartTime) == 0x000500, "Member 'AEncountActor_New_C::M_NaviDevilWaitStartTime' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, RecordNaviDevilPawnClass) == 0x000508, "Member 'AEncountActor_New_C::RecordNaviDevilPawnClass' has a wrong offset!");
static_assert(offsetof(AEncountActor_New_C, RecordNaviComponentClass) == 0x000510, "Member 'AEncountActor_New_C::RecordNaviComponentClass' has a wrong offset!");

}

