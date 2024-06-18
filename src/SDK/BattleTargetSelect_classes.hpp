#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTargetSelect

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "Engine_structs.hpp"
#include "BTL_PAD_MAP_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleTargetSelect.BattleTargetSelect_C
// 0x01A8 (0x0258 - 0x00B0)
class UBattleTargetSelect_C final : public UBattleActorComponentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         M_ActorIndex;                                      // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBtlCommand                            M_Command;                                         // 0x00BC(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_SKILL_TARGET                                M_TargetType;                                      // 0x00CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1150[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_TargetIndex;                                     // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsFinished;                                      // 0x00D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1151[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Evt_InvSideOne;                                    // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_InvSideAll;                                    // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_SelfSideOne;                                   // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_SelfSideAll;                                   // 0x0108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_Self;                                          // 0x0118(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_AllSideAll;                                    // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_AllSideRandom;                                 // 0x0138(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_CMPOne;                                        // 0x0148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_CMPAll;                                        // 0x0158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_WaitTask;                                      // 0x0168(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	E_BTL_TASK_ONE_STATE                          M_State;                                           // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1152[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_PadMap;                                          // 0x017C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Step;                                            // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1153[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 M_Select;                                          // 0x0188(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_IsCounter;                                       // 0x0198(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsCancel;                                        // 0x0199(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1154[0x6];                                     // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Evt_Cancel;                                        // 0x01A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	E_BTL_TASK_ONE_STATE                          M_StatePrev;                                       // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1155[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 M_PartyIndex_ViewedFromCamera;                     // 0x01B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_SkillId;                                         // 0x01C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1156[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABattleTempParticleActor_C*>     M_TempParticleActor;                               // 0x01D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          M_InitializeFinished;                              // 0x01E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_Started;                                         // 0x01E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsEnemyAishouInfo;                               // 0x01E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1157[0x1];                                     // 0x01E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_PlayerTargetIndex;                               // 0x01E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_Pause;                                           // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1158[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattlePartySystem_C*                   M_PartySystem;                                     // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsInvTarget;                                     // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1159[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Lo_List;                                           // 0x0200(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_EnemyTargetIndex;                                // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_115A[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PTUtilInterface>  M_PTUtil;                                          // 0x0218(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsOverrideCommandCamera;                         // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsCursorEnable;                                  // 0x0229(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115B[0x2];                                     // 0x022A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_SkillID_ForHPExpection;                          // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_ItemID_ForHPExpection;                           // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_DecideSE;                                        // 0x0234(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_CancelSE;                                        // 0x023C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_ChangeSE;                                        // 0x0244(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_DirectSelectTargetIndex;                         // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_DirectDecideTargetIndex;                         // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Evt_InvSideOne__DelegateSignature();
	void Evt_InvSideAll__DelegateSignature();
	void Evt_SelfSideOne__DelegateSignature();
	void Evt_SelfSideAll__DelegateSignature();
	void Evt_Self__DelegateSignature();
	void Evt_AllSideAll__DelegateSignature();
	void Evt_AllSideRandom__DelegateSignature();
	void Evt_CMPOne__DelegateSignature();
	void Evt_CMPAll__DelegateSignature();
	void Evt_WaitTask__DelegateSignature();
	void Evt_Cancel__DelegateSignature();
	void ExecuteUbergraph_BattleTargetSelect(int32 EntryPoint);
	void BI_ResetDirectDicided();
	void BI_DirectDecideTargetIndex(int32 PartyIndex);
	void BI_DirectSelectTargetIndex(int32 PartyIndex);
	void SeqCancel();
	void ReceiveBeginPlay();
	void SeqAllSideRandom();
	void ReceiveTick(float DeltaSeconds);
	void SeqAllSideAll();
	void SeqInvSideOne();
	void SeqSelf();
	void SeqSelfSideAll();
	void SeqSelfSideOne();
	void SeqTaskWait();
	void SeqInvSideAll();
	void InvSideOneFunc();
	void StartSelect(int32 InPartyIndex, bool IsCounter, bool IsInvTarget, bool IsCursorEnable);
	void GetMainWork(class ABattleMain_C** RetValue);
	void GetPartySystem(class UBattlePartySystem_C** RetValue);
	void InvSideAllFunc();
	void SelfSideOneFunc();
	void SelfSideAllFunc();
	void SelfFunc();
	void AllSideAllFunc();
	void AllSideOneFunc();
	void CMPOneFunc();
	void CMPAllFunc();
	void TaskWaitFunc();
	void Input();
	void CallEvtFunc();
	void GetTaskFactory(class UBattleActionTaskFactory_C** RetValue);
	void SetIndexUnit(int32 Param_Index, bool IsUseCamRail, bool IsLock, bool IsNoSetCharSelect);
	void GetResult(TArray<uint8>* RetValue);
	void AddUnitIndex(int32 Param_Index, bool IsUseCamRail, bool IsLock, bool IsRecursion, bool IsNotSetCharSelect);
	void IsFinished(bool* RetValue);
	void ClearTargetChar();
	void SetCharSelect(int32 Param_Index, bool IsAllSelect);
	void GetEffectManager(class UBattleEffectManager_C** RetValue);
	void IsTargetTypePlayer(bool* IsPlayer);
	void GetCurrentTargetType(E_SKILL_TARGET* TargetType);
	void AllSideRandomFunc();
	void IsTargetableActor(int32 ActorIndex, bool* Ret);
	void CalcLookAtGlobalPos(E_SKILL_TARGET TargetType, class FName SocketName, struct FVector* GlobalPos, bool* IsValid);
	void IsCancel(bool* RetValue);
	void CancelFunc();
	void SetCharSelectPanel(int32 Param_Index, bool Sw);
	void SetSelfSideOnePanel(int32 Param_Index);
	void SetCharSelectPanelHideAll();
	void IsUseCamRailAtInvOne(bool* IsUse);
	void CalcFovyToTarget(float Distance_To_Target, float* Fovy);
	void CalcDistanceToTarget(int32 ActorIndex, int32 TargetIndex, float* Distance);
	void IsAdjustFovy(bool* IsUse);
	void AddCamFovyTask(TArray<int32>& WaitCommandList, float ToFovy, float InterpSpeedRatio, bool InterpWait);
	void IsTargetActor(int32 PartyIndex, bool* Ret);
	void CountValidTargets(int32 StartIndex, int32 LastIndex, int32* ValidNum);
	void PickUpPartyIndices(bool IsPlayerSide, TArray<int32>* PartyIndices);
	void AddUnitIndex_ViewedFromCamera(int32 Param_Index, bool IsUseCamRail, bool IsLock, bool IsRecursion, bool IsNoSetCharSelect);
	void ResetPartyDither(float InterpSec);
	void GetSaveTargetIndex(int32* RetValue);
	void ClearSaveTargetIndex();
	void SetSaveTargetIndex(int32 PartyIndex);
	void PlaySE(class FName Param_Name);
	void CalcLookAtLocalPos(E_SKILL_TARGET TargetType, class FName SocketName, struct FVector* LocalPos, bool* IsValid);
	void EnemyInfoSwitch(bool Sw, int32 FullIndex, bool VisibleAll, bool Immediately);
	void GetInvSideOneStartIndex(int32* RetValue);
	void AddUnitIndexForPlayer(int32 Param_Index, bool IsUseCamRail, bool IsLock, bool IsRecursion);
	void CalcLookAtGlobalPos_New(E_SKILL_TARGET TargetType, class FName SocketName, struct FVector* GlobalPos, bool* IsValid);
	void InitializeFunc();
	void AddUnitIndexForPlayer_Old(int32 Param_Index, bool IsUseCamRail, bool IsLock, bool IsRecursion);
	void PauseSelect(bool Pause);
	void MakeResult(E_SKILL_TARGET TargetType, TArray<uint8>* Param_M_Select);
	void DrawClearAll();
	void PrepareAcessors();
	void GetPTMemInterface(TScriptInterface<class IBPI_PTMemDataInterface>* RetValue);
	void GetMainInterface(TScriptInterface<class IBPI_MainInterface>* AsBPI_Main_Interface);
	void GetMainWorkBPI(TScriptInterface<class IBPI_BattleMain_C>* RetValue);
	void SetTargetAll(E_BTL_SIDE Side);
	void GetPartyUtilInterface(TScriptInterface<class IBPI_PTUtilInterface>* AsBPI_PTUtil_Interface);
	void IsInField(int32 PartyIndex, bool* InField);
	void InitializeSelectResult();
	int32 GetHeroIndex();
	void CalcDefenceAishou(E_ATTRIBUTE_TYPE* Aishou);
	bool IsTargetTypeEnemy();
	void CalcDefenceAishouArray(TArray<E_ATTRIBUTE_TYPE>* Aishou);
	void SetExpectionCharaPanel(int32 Param_Index, bool Sw, bool IsAllTarget);
	void CalcExeptionValue(const int32 TargetIndex, int32* HP_Exeption, int32* MP_Exeption);
	void CalcPenetrationEfficacy(bool* IsPenetration);
	void CalcSelfSideFirstTarget(int32* PartyIndex);
	void DirectSetUnitIndex(int32 Param_Index, bool IsUseCamRail, bool IsLock, bool IsNotSetCharSelect);
	void BI_GetCurrentTargetType(E_SKILL_TARGET* TargetType);
	void BI_CalcLookAtGlobalPos(E_SKILL_TARGET TargetType, class FName SocketName, struct FVector* GlobalPos, bool* IsValid);
	void BI_GetInvTargetIndex(int32* TargetIndex);
	void BI_DrawClearAll(bool* NoUse);
	void BI_SetInvTargetIndex(int32 TargetIndex, bool* NoUse);
	void BI_SetOverrideCommandCamera(bool IsOverride, bool* NoUse);
	void BI_IsOverrideCommandCamera(bool* IsOverride);
	void BI_SetPlayerTargetIndex(int32 PartyIndex, bool* NoUse);
	void BI_SetTargetType_Item(int32 ItemId, bool* NoUse);
	void BI_SetTargetType_Skill(int32 SkillId, bool* NoUse);
	void BI_GetCurrentTargetIndex(int32* PartyIndex);
	void BI_SetCureHPExpection_Item(int32 ItemId, int32 UserIndex, bool* NoUse);
	void BI_SetCureHPExpection_Skill(int32 SkillId, int32 UserIndex, bool* NoUse);
	void BI_IsDirectDicided(bool* IsDecided);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleTargetSelect_C">();
	}
	static class UBattleTargetSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleTargetSelect_C>();
	}
};
static_assert(alignof(UBattleTargetSelect_C) == 0x000008, "Wrong alignment on UBattleTargetSelect_C");
static_assert(sizeof(UBattleTargetSelect_C) == 0x000258, "Wrong size on UBattleTargetSelect_C");
static_assert(offsetof(UBattleTargetSelect_C, UberGraphFrame) == 0x0000B0, "Member 'UBattleTargetSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_ActorIndex) == 0x0000B8, "Member 'UBattleTargetSelect_C::M_ActorIndex' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_Command) == 0x0000BC, "Member 'UBattleTargetSelect_C::M_Command' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_TargetType) == 0x0000CC, "Member 'UBattleTargetSelect_C::M_TargetType' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_TargetIndex) == 0x0000D0, "Member 'UBattleTargetSelect_C::M_TargetIndex' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_IsFinished) == 0x0000D4, "Member 'UBattleTargetSelect_C::M_IsFinished' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_InvSideOne) == 0x0000D8, "Member 'UBattleTargetSelect_C::Evt_InvSideOne' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_InvSideAll) == 0x0000E8, "Member 'UBattleTargetSelect_C::Evt_InvSideAll' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_SelfSideOne) == 0x0000F8, "Member 'UBattleTargetSelect_C::Evt_SelfSideOne' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_SelfSideAll) == 0x000108, "Member 'UBattleTargetSelect_C::Evt_SelfSideAll' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_Self) == 0x000118, "Member 'UBattleTargetSelect_C::Evt_Self' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_AllSideAll) == 0x000128, "Member 'UBattleTargetSelect_C::Evt_AllSideAll' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_AllSideRandom) == 0x000138, "Member 'UBattleTargetSelect_C::Evt_AllSideRandom' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_CMPOne) == 0x000148, "Member 'UBattleTargetSelect_C::Evt_CMPOne' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_CMPAll) == 0x000158, "Member 'UBattleTargetSelect_C::Evt_CMPAll' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_WaitTask) == 0x000168, "Member 'UBattleTargetSelect_C::Evt_WaitTask' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_State) == 0x000178, "Member 'UBattleTargetSelect_C::M_State' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_PadMap) == 0x00017C, "Member 'UBattleTargetSelect_C::M_PadMap' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_Step) == 0x000180, "Member 'UBattleTargetSelect_C::M_Step' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_Select) == 0x000188, "Member 'UBattleTargetSelect_C::M_Select' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_IsCounter) == 0x000198, "Member 'UBattleTargetSelect_C::M_IsCounter' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_IsCancel) == 0x000199, "Member 'UBattleTargetSelect_C::M_IsCancel' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Evt_Cancel) == 0x0001A0, "Member 'UBattleTargetSelect_C::Evt_Cancel' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_StatePrev) == 0x0001B0, "Member 'UBattleTargetSelect_C::M_StatePrev' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_PartyIndex_ViewedFromCamera) == 0x0001B8, "Member 'UBattleTargetSelect_C::M_PartyIndex_ViewedFromCamera' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_SkillId) == 0x0001C8, "Member 'UBattleTargetSelect_C::M_SkillId' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_TempParticleActor) == 0x0001D0, "Member 'UBattleTargetSelect_C::M_TempParticleActor' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_InitializeFinished) == 0x0001E0, "Member 'UBattleTargetSelect_C::M_InitializeFinished' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_Started) == 0x0001E1, "Member 'UBattleTargetSelect_C::M_Started' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_IsEnemyAishouInfo) == 0x0001E2, "Member 'UBattleTargetSelect_C::M_IsEnemyAishouInfo' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_PlayerTargetIndex) == 0x0001E4, "Member 'UBattleTargetSelect_C::M_PlayerTargetIndex' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_Pause) == 0x0001E8, "Member 'UBattleTargetSelect_C::M_Pause' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_PartySystem) == 0x0001F0, "Member 'UBattleTargetSelect_C::M_PartySystem' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_IsInvTarget) == 0x0001F8, "Member 'UBattleTargetSelect_C::M_IsInvTarget' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, Lo_List) == 0x000200, "Member 'UBattleTargetSelect_C::Lo_List' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_EnemyTargetIndex) == 0x000210, "Member 'UBattleTargetSelect_C::M_EnemyTargetIndex' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_PTUtil) == 0x000218, "Member 'UBattleTargetSelect_C::M_PTUtil' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_IsOverrideCommandCamera) == 0x000228, "Member 'UBattleTargetSelect_C::M_IsOverrideCommandCamera' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_IsCursorEnable) == 0x000229, "Member 'UBattleTargetSelect_C::M_IsCursorEnable' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_SkillID_ForHPExpection) == 0x00022C, "Member 'UBattleTargetSelect_C::M_SkillID_ForHPExpection' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_ItemID_ForHPExpection) == 0x000230, "Member 'UBattleTargetSelect_C::M_ItemID_ForHPExpection' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_DecideSE) == 0x000234, "Member 'UBattleTargetSelect_C::M_DecideSE' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_CancelSE) == 0x00023C, "Member 'UBattleTargetSelect_C::M_CancelSE' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_ChangeSE) == 0x000244, "Member 'UBattleTargetSelect_C::M_ChangeSE' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_DirectSelectTargetIndex) == 0x00024C, "Member 'UBattleTargetSelect_C::M_DirectSelectTargetIndex' has a wrong offset!");
static_assert(offsetof(UBattleTargetSelect_C, M_DirectDecideTargetIndex) == 0x000250, "Member 'UBattleTargetSelect_C::M_DirectDecideTargetIndex' has a wrong offset!");

}

