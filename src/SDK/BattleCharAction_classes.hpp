#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleCharAction

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"
#include "BattleBGMType_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_BTL_PTYPNL_TYPE_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleCharAction.BattleCharAction_C
// 0x07B8 (0x0E00 - 0x0648)
class ABattleCharAction_C final : public ABattleCharaActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0648(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBattleAsyncWork_C*                     BattleAsyncWork;                                   // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Status;                                          // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_ACT_SEQ                                 M_Seq;                                             // 0x0664(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_ACT_SEQ                                 M_NextSeq;                                         // 0x0665(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_666[0x2];                                      // 0x0666(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_SeqTime;                                         // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_SeqCnt;                                          // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_SkillTime;                                       // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_ACT_TYPE                                M_ActType;                                         // 0x0674(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_675[0x3];                                      // 0x0675(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_ActionData;                                      // 0x0678(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnd;                                             // 0x067C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67D[0x3];                                      // 0x067D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 M_StrayDefenceId;                                  // 0x0680(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_TargetIndex;                                     // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_NextActId;                                       // 0x0694(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_EffectOffsetFrame;                               // 0x0698(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69C[0x4];                                      // 0x069C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 M_Select;                                          // 0x06A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_Type;                                            // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Target;                                          // 0x06B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Timer;                                           // 0x06B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Err;                                             // 0x06BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CaseMes;                                         // 0x06C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CaseVarId;                                       // 0x06C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CaseVarInd;                                      // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_AutoSkill;                                       // 0x06CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_AllHpDamage;                                     // 0x06D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_AllMpDamage;                                     // 0x06D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_MuscleId;                                        // 0x06D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_DeadType;                                        // 0x06DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_DeadTiming;                                      // 0x06E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsEffectInv;                                     // 0x06E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsDead;                                          // 0x06E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E6[0x2];                                      // 0x06E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_AiCommand;                                       // 0x06E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_AIValue;                                         // 0x06EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBtlRefData>                    M_RefList;                                         // 0x06F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABtlAI_Base_C*                          M_AIActor;                                         // 0x0700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_PecID;                                           // 0x0708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         M_Step;                                            // 0x070C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBtlParty                              M_Party;                                           // 0x0710(0x0320)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSkillActionTargetInfo>         M_SkillActionTarget;                               // 0x0A30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABattleSkillActionBase_C*               M_SkillAction;                                     // 0x0A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TalkCtrl_C*                         M_TalkCtrl;                                        // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsChangeActor;                                   // 0x0A50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTL_UI_COMM_STEP                            M_CallCommand;                                     // 0x0A51(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsSeqPause;                                      // 0x0A52(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A53[0x1];                                      // 0x0A53(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_CallIndex;                                       // 0x0A54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_TopIndex;                                        // 0x0A58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BAD_STATUS                                  M_MissByStatus;                                    // 0x0A5C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5D[0x3];                                      // 0x0A5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlPartnerAction                      M_PartnerAction;                                   // 0x0A60(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_BTL_PTYPNL_TYPE                             M_StkSelType;                                      // 0x0A74(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_CAM_TYPE                                M_CommandCamera;                                   // 0x0A75(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A76[0x2];                                      // 0x0A76(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleSkillActionBase_C*               M_Escape;                                          // 0x0A78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 M_ReflectCharaList;                                // 0x0A80(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 M_ReflectCntList;                                  // 0x0A90(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_SkillValidNum;                                   // 0x0AA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_SkillNowIndex;                                   // 0x0AA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBtlAttack                             M_AttackData;                                      // 0x0AA8(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSkillActionTargetInfo                 Lo_ActionTarget;                                   // 0x0B28(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSkillBaseData                         M_SkillBaseData;                                   // 0x0BC0(0x0100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUseItemData                           M_ItemData;                                        // 0x0CC0(0x005C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_D1C[0x4];                                      // 0x0D1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 M_MissList;                                        // 0x0D20(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         M_PlayRate;                                        // 0x0D30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         DebugCommandReativeRotationZ;                      // 0x0D34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBattleUnitPlaceOne>            M_UnitArray;                                       // 0x0D38(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 M_Src;                                             // 0x0D48(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 M_Dst;                                             // 0x0D58(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, struct FTransform>                M_SummonAfter;                                     // 0x0D68(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_IsAlreadySkiped;                                 // 0x0DB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsGodSkillSummonStart;                             // 0x0DB9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DBA[0x2];                                      // 0x0DBA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentBGM_Vol;                                    // 0x0DBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsReducedBGM;                                    // 0x0DC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTL_ACT_SEQ                                 M_PrevSeq;                                         // 0x0DC1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC2[0x6];                                      // 0x0DC2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class USoundAtomCue>           SummonVoice;                                       // 0x0DC8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsSpeedCtrl;                                       // 0x0DF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF1[0x3];                                      // 0x0DF1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_PrevBattleTempo;                                 // 0x0DF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_SpeedCtrlStartRemainSec;                         // 0x0DF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattleCharAction(int32 EntryPoint);
	void LoadEnemyAI(TSoftClassPtr<class UClass> InAIName, bool IsCounter, bool IsPartner, int32 ActorIndex);
	void BP_SetSummonTask(int32 TargetIndex);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLoaded_6350A8714EA87FA1A6E72CBC95C623AF(TSubclassOf<class UObject> Loaded);
	void Initialize();
	void CallSeqEvent();
	void SetActionSeq(E_BTL_ACT_SEQ InValue);
	void CallSeqEventCore();
	void IsFinished(bool* RetValue);
	void SetNoneFunc();
	void SeqNoneFunc();
	void ClearActionParam();
	void SetAuto();
	void SeqNone_ActTypeSet(bool* RetValue);
	void SetCommFunc();
	void SeqCommFunc();
	void SetTarselFunc();
	void SeqTarselFunc();
	void SeqReadyFunc();
	void SetAIFunc();
	void SeqAIFunc();
	void SetCheck1Func();
	void SeqCheck1Func();
	void SetCheck2Func();
	void SeqCheck2Func();
	void GetCommand(struct FBtlCommand* RetValue);
	void GetPartyIndex(int32* RetValue);
	void SetEndFunc();
	void SeqEndFunc();
	void GetPecID(int32* RetValue);
	void SetTalkFunc();
	void SeqTalkFunc();
	void SetTalkResultFunc();
	void SeqTalkResultFunc();
	void SetEscapeFunc();
	void SeqEscapeFunc();
	void SetChangeActorFunc();
	void SeqChangeActorFunc();
	void GetRefListHP(int32 PartyIndex, int32* RetValue);
	void SetDeadTask(TArray<int32>& WaitTaskList, int32 PartyIndex);
	void SetCounterActor(int32 SrcIndex, int32 DstIndex, bool* RetValue);
	void IsCounterActor(bool* RetValue);
	void SetCounterWaitFunc();
	void SeqCounterWaitFunc();
	void CreateActor();
	void SetSkillActionFunc();
	void SeqSkillActionFunc();
	void DokodemoPoa(E_BTL_SIDE Inside);
	void CheckTickValid(bool* RetValue);
	void SubActorTickPause(bool Sw);
	void PauseSeq();
	void Debug_IsDamage0(int32 DstParty, bool* RetValue);
	void Debug_Damage(int32 DstParty, int32 InDamage, int32* RetValue);
	void Debug_IsDamageMax(bool* RetValue);
	void SetBadWaitFunc();
	void SeqBadWaitFunc();
	void IsConfuseActor(bool* RetValue);
	void IsCharmActor(bool* RetValue);
	void GetBstSkill(int32* RetValue);
	void SetExtraBadFunc();
	void SeqExtraBadFunc();
	void SetPartnerActor(bool* RetValue);
	void SetPartnerWaitFunc();
	void SeqPartnerWaitFunc();
	void IsPartnerActor(bool* RetValue);
	void SetPartnerTargetSelect();
	void GetDeadEffectType(int32 SrcIndex, int32 DstIndex, E_BTL_DAMAGE_HIT_TYPE HitType, E_BTL_DEAD_EFFECT* RetValue);
	void GetBIMainWork(TScriptInterface<class IBPI_BattleMain_C>* RetValue);
	void SetStkselFunc();
	void SeqStkFunc();
	void Com_SkillSelAfter(int32 SkillId, E_BTL_SIDE Side);
	void Com_ItemSelAfter(int32 ItemId, E_BTL_SIDE Side);
	void SetSmnSelFunc();
	void SeqSmnSelFunc();
	void SkillMasterApplyAidEffect(const struct FBtlAttack& AttackData, int32 SrcIndex, int32 DstIndex);
	void SetSummonTask(int32 TargetIndex);
	void ApplySummon();
	void ClearReflectCharaList();
	void SeqSkillFunc_New();
	void CalcActionDamage_Finish();
	void AutoCommProc(bool* IsAuto);
	void SetPlayRate(float PlayRate);
	void Com_TalkSelAfter();
	void CreateSettleCriticalListThread();
	void GetBPI_PartyMember(TScriptInterface<class IBPI_PTMemDataInterface>* RetValue);
	void GetBPI_PartyFlag(TScriptInterface<class IBPI_PTFlagInterface>* RetValue);
	void GetBPI_PartyBadStatus(TScriptInterface<class IBPI_PTBadStatusInterface>* RetValue);
	void GetBPI_PartyUtil(TScriptInterface<class IBPI_PTUtilInterface>* RetValue);
	void GetMainWork(class ABattleMain_C** AsBattle_Main);
	void GetBPI_PartyUnit(TScriptInterface<class IBPI_PTBPInterface_C>* RetValue);
	void GetBPI_Calc(TScriptInterface<class IBPI_CalcInterface>* RetValue);
	void GetBPI_Main(TScriptInterface<class IBPI_MainInterface>* RetValue);
	void GetLeftIndex(int32* Param_Index);
	void SeqCheck3Func();
	void FindUnit(int32 PartyIndex, class ACharaBase_C** Unit);
	void SetWaitFunc();
	void SeqWaitFunc();
	void SetSkillFuncNew();
	void ChangeBGM(EBattleBGMType BGM_Type, EFadeType FadeType, bool* Valid);
	void SkillSkipCtrl();
	void IsSkillSkippable(bool* IsSkipable);
	void RecoverFading();
	void Update(float DelatSec, bool* ContinueUpdate);
	void SeqSkillActionFuncUpdateElectrification(TArray<int32>& WaitTaskList, TArray<int32>* Ret);
	void SeqSkillActionFuncUpdatePressIcon(TArray<int32>& WaitTaskList, TArray<int32>* Ret);
	void SeqSkillActionFuncUpliftingOff(TArray<int32>& WaitTaskList, TArray<int32>* Ret);
	void GetHeroIndex(int32* Param_Index);
	void IsPlayMotion(TScriptInterface<class IBPI_BattleParty_C> PartySys, int32 PartyIndex, E_CHARA_MOTION_ID Motion, bool* IsPlay);
	void ShowActionName(int32 WaitTaskID, E_BTL_COMM_TYPE ActionType, int32 ShowPos, int32* TaskID);
	void HideActionName(TArray<int32>& WaitTaskID, int32* TaskID);
	void SeqSkillActionFuncMPCure(TArray<int32>& WaitTaskList, TArray<int32>* Ret);
	void SeqSkillActionFuncAfter();
	void CheckCommandSkillIsSummon(bool* Ret);
	void CheckCommandItemIsTelescope(bool* Ret);
	void RetrieveTargetIndex(TArray<int32>* Param_Index);
	void CalcSummonTarget(TArray<int32>& Src, TArray<int32>& Dest, int32* Target, bool* IsReturn, bool* IsSummon);
	void ReduceBGM(float Rate);
	void ResumeBGM();
	void GetEnemyNum(int32* Num);
	void CalcSkillAptitude(int32 SkillId, int32* Aptitude);
	void GetBIPartySystem(TScriptInterface<class IBPI_BattleParty_C>* BPIPartySystem);
	void SetDitherEnablePlayerSide(bool Enable);
	void HideActionName_forOutsider();
	void ShowActionName_forOutsider();
	void SeqSkillActionFuncUpdateApplyUnitState(TArray<int32>& WaitTaskList, TArray<int32>* Ret);
	void SeqSkillActionFuncUniqueSkillCure(bool IsAllAction, bool IsDeadOnly);
	bool IsDecideSkip();
	void BeginSkillSpeedCtrl();
	bool IsDecideSpeedCtrl();
	void EndSkillSpeedCtrl();
	void SetAutoPassFunc();
	void SeqAutoPassFunc();
	void IsDecideButtonSpeedCtrl(bool* IsCtrl);
	void IsAlwaysSkillSkip(bool* IsSkip);
	void UpdateSpeedCtrlRemainSec();
	void BeginBattleSpeedCtrl();
	void EndBattleSpeedCtrl();
	bool IsUnusualBGMBattle();
	void CheckStopAutoBattle(bool* DoStop);
	void HasUniqueSkillExtraEffect(const int32& PartyIndex, TArray<E_AUTO_SKILL_EXTRA_EFFECT>& ExtraEffects, int32* UniqueSkillID, bool* IsContains, bool* Efficacy);
	void UniqueSkill_AddMagatsuhiGauge();
	bool CheckAction(E_INPUT_TYPE InputType);
	void Unique_Skill_Charge_Dead(int32 ActorIndex);
	void CheckUniqueSkillEfficacy(int32 UniqueSkillID, E_SKILL_INFO_MESS_TIMING Timing, TArray<int32>& Target, bool* Efficacy, TArray<int32>* EffectiveTargets);
	void RetrieveUniqueSkillIDs(TArray<int32>& PartyIndexs, TArray<int32>* UniqueSkillIDs);
	bool IsWhiteOutFinishBlow();
	void BPI_GetActorIndex(int32* Ret);
	void BPI_SetSelectList(const TArray<uint8>& List, int32* Ret);
	void BPI_GetSelectList(TArray<uint8>* List);
	void BPI_ClearSelectList(bool* Ret);
	void BPI_ApplySummon(int32* Ret);
	void BPI_SupportTsukuyomiSummon(int32* Ret);
	void BPL_GetReflectCharaList(TArray<int32>* Ret);
	void Do(bool* Complete);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleCharAction_C">();
	}
	static class ABattleCharAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleCharAction_C>();
	}
};
static_assert(alignof(ABattleCharAction_C) == 0x000010, "Wrong alignment on ABattleCharAction_C");
static_assert(sizeof(ABattleCharAction_C) == 0x000E00, "Wrong size on ABattleCharAction_C");
static_assert(offsetof(ABattleCharAction_C, UberGraphFrame) == 0x000648, "Member 'ABattleCharAction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, DefaultSceneRoot) == 0x000650, "Member 'ABattleCharAction_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, BattleAsyncWork) == 0x000658, "Member 'ABattleCharAction_C::BattleAsyncWork' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Status) == 0x000660, "Member 'ABattleCharAction_C::M_Status' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Seq) == 0x000664, "Member 'ABattleCharAction_C::M_Seq' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_NextSeq) == 0x000665, "Member 'ABattleCharAction_C::M_NextSeq' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SeqTime) == 0x000668, "Member 'ABattleCharAction_C::M_SeqTime' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SeqCnt) == 0x00066C, "Member 'ABattleCharAction_C::M_SeqCnt' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SkillTime) == 0x000670, "Member 'ABattleCharAction_C::M_SkillTime' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_ActType) == 0x000674, "Member 'ABattleCharAction_C::M_ActType' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_ActionData) == 0x000678, "Member 'ABattleCharAction_C::M_ActionData' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, IsEnd) == 0x00067C, "Member 'ABattleCharAction_C::IsEnd' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_StrayDefenceId) == 0x000680, "Member 'ABattleCharAction_C::M_StrayDefenceId' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_TargetIndex) == 0x000690, "Member 'ABattleCharAction_C::M_TargetIndex' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_NextActId) == 0x000694, "Member 'ABattleCharAction_C::M_NextActId' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_EffectOffsetFrame) == 0x000698, "Member 'ABattleCharAction_C::M_EffectOffsetFrame' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Select) == 0x0006A0, "Member 'ABattleCharAction_C::M_Select' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Type) == 0x0006B0, "Member 'ABattleCharAction_C::M_Type' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Target) == 0x0006B4, "Member 'ABattleCharAction_C::M_Target' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Timer) == 0x0006B8, "Member 'ABattleCharAction_C::M_Timer' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Err) == 0x0006BC, "Member 'ABattleCharAction_C::M_Err' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_CaseMes) == 0x0006C0, "Member 'ABattleCharAction_C::M_CaseMes' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_CaseVarId) == 0x0006C4, "Member 'ABattleCharAction_C::M_CaseVarId' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_CaseVarInd) == 0x0006C8, "Member 'ABattleCharAction_C::M_CaseVarInd' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_AutoSkill) == 0x0006CC, "Member 'ABattleCharAction_C::M_AutoSkill' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_AllHpDamage) == 0x0006D0, "Member 'ABattleCharAction_C::M_AllHpDamage' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_AllMpDamage) == 0x0006D4, "Member 'ABattleCharAction_C::M_AllMpDamage' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_MuscleId) == 0x0006D8, "Member 'ABattleCharAction_C::M_MuscleId' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_DeadType) == 0x0006DC, "Member 'ABattleCharAction_C::M_DeadType' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_DeadTiming) == 0x0006E0, "Member 'ABattleCharAction_C::M_DeadTiming' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_IsEffectInv) == 0x0006E4, "Member 'ABattleCharAction_C::M_IsEffectInv' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_IsDead) == 0x0006E5, "Member 'ABattleCharAction_C::M_IsDead' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_AiCommand) == 0x0006E8, "Member 'ABattleCharAction_C::M_AiCommand' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_AIValue) == 0x0006EC, "Member 'ABattleCharAction_C::M_AIValue' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_RefList) == 0x0006F0, "Member 'ABattleCharAction_C::M_RefList' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_AIActor) == 0x000700, "Member 'ABattleCharAction_C::M_AIActor' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_PecID) == 0x000708, "Member 'ABattleCharAction_C::M_PecID' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Step) == 0x00070C, "Member 'ABattleCharAction_C::M_Step' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Party) == 0x000710, "Member 'ABattleCharAction_C::M_Party' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SkillActionTarget) == 0x000A30, "Member 'ABattleCharAction_C::M_SkillActionTarget' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SkillAction) == 0x000A40, "Member 'ABattleCharAction_C::M_SkillAction' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_TalkCtrl) == 0x000A48, "Member 'ABattleCharAction_C::M_TalkCtrl' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_IsChangeActor) == 0x000A50, "Member 'ABattleCharAction_C::M_IsChangeActor' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_CallCommand) == 0x000A51, "Member 'ABattleCharAction_C::M_CallCommand' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_IsSeqPause) == 0x000A52, "Member 'ABattleCharAction_C::M_IsSeqPause' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_CallIndex) == 0x000A54, "Member 'ABattleCharAction_C::M_CallIndex' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_TopIndex) == 0x000A58, "Member 'ABattleCharAction_C::M_TopIndex' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_MissByStatus) == 0x000A5C, "Member 'ABattleCharAction_C::M_MissByStatus' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_PartnerAction) == 0x000A60, "Member 'ABattleCharAction_C::M_PartnerAction' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_StkSelType) == 0x000A74, "Member 'ABattleCharAction_C::M_StkSelType' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_CommandCamera) == 0x000A75, "Member 'ABattleCharAction_C::M_CommandCamera' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Escape) == 0x000A78, "Member 'ABattleCharAction_C::M_Escape' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_ReflectCharaList) == 0x000A80, "Member 'ABattleCharAction_C::M_ReflectCharaList' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_ReflectCntList) == 0x000A90, "Member 'ABattleCharAction_C::M_ReflectCntList' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SkillValidNum) == 0x000AA0, "Member 'ABattleCharAction_C::M_SkillValidNum' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SkillNowIndex) == 0x000AA4, "Member 'ABattleCharAction_C::M_SkillNowIndex' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_AttackData) == 0x000AA8, "Member 'ABattleCharAction_C::M_AttackData' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, Lo_ActionTarget) == 0x000B28, "Member 'ABattleCharAction_C::Lo_ActionTarget' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SkillBaseData) == 0x000BC0, "Member 'ABattleCharAction_C::M_SkillBaseData' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_ItemData) == 0x000CC0, "Member 'ABattleCharAction_C::M_ItemData' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_MissList) == 0x000D20, "Member 'ABattleCharAction_C::M_MissList' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_PlayRate) == 0x000D30, "Member 'ABattleCharAction_C::M_PlayRate' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, DebugCommandReativeRotationZ) == 0x000D34, "Member 'ABattleCharAction_C::DebugCommandReativeRotationZ' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_UnitArray) == 0x000D38, "Member 'ABattleCharAction_C::M_UnitArray' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Src) == 0x000D48, "Member 'ABattleCharAction_C::M_Src' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_Dst) == 0x000D58, "Member 'ABattleCharAction_C::M_Dst' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SummonAfter) == 0x000D68, "Member 'ABattleCharAction_C::M_SummonAfter' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_IsAlreadySkiped) == 0x000DB8, "Member 'ABattleCharAction_C::M_IsAlreadySkiped' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, IsGodSkillSummonStart) == 0x000DB9, "Member 'ABattleCharAction_C::IsGodSkillSummonStart' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, CurrentBGM_Vol) == 0x000DBC, "Member 'ABattleCharAction_C::CurrentBGM_Vol' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_IsReducedBGM) == 0x000DC0, "Member 'ABattleCharAction_C::M_IsReducedBGM' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_PrevSeq) == 0x000DC1, "Member 'ABattleCharAction_C::M_PrevSeq' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, SummonVoice) == 0x000DC8, "Member 'ABattleCharAction_C::SummonVoice' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, IsSpeedCtrl) == 0x000DF0, "Member 'ABattleCharAction_C::IsSpeedCtrl' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_PrevBattleTempo) == 0x000DF4, "Member 'ABattleCharAction_C::M_PrevBattleTempo' has a wrong offset!");
static_assert(offsetof(ABattleCharAction_C, M_SpeedCtrlStartRemainSec) == 0x000DF8, "Member 'ABattleCharAction_C::M_SpeedCtrlStartRemainSec' has a wrong offset!");

}

