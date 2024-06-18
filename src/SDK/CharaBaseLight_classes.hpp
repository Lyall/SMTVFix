#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaBaseLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_IK_TYPE_LIST_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "E_CHARA_MATERIAL_ANIMATION_SLOT_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharaBaseLight.CharaBaseLight_C
// 0x0160 (0x0448 - 0x02E8)
class ACharaBaseLight_C : public ACustomPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Capsule;                                           // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaMotionPlayerComponent*            Motion;                                            // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaSinkHelperComponent_C*            SinkHelper;                                        // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         _______0___Track_0_FFAB3A6B40A40D122A7D49A8DD1FA733; // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_FFAB3A6B40A40D122A7D49A8DD1FA733; // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2887[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_MOTION_ID                             MotionID;                                          // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_MOTION_ID                             MotionIDPrevious;                                  // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LegIKEnableFlag;                                   // 0x031A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HeadIKEnableFlag;                                  // 0x031B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EyeIKEnableFlag;                                   // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          BodyIKEnableFlag;                                  // 0x031D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          FloatingIKEnableFlag;                              // 0x031E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2888[0x1];                                     // 0x031F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WatchOnesStepCount;                                // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerchCount;                                        // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FloatingIKPerch;                                   // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         SinkActorOffset;                                   // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        LookAtComponent;                                   // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LookAtSocket;                                      // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaActionState                      ActionState;                                       // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AlwaysAutoTransitionAnimationMode;                 // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_IsParalyzed;                                     // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2889[0x6];                                     // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomPoseWeightTable*                 PoseWeightTable;                                   // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_MotionBlendTime;                                 // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_MotionIsUseDuration;                             // 0x0364(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_288A[0x3];                                     // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_MotionDuration;                                  // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_MotionIsUseBlendTime;                            // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsFreezeMotion;                                  // 0x036D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_288B[0x2];                                     // 0x036E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_CharaPlayRate;                                   // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsAnnouncedInvalidMotionTable;                   // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_CHARA_MOTION_ID                             M_DefaultIdleMotion;                               // 0x0375(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_288C[0x2];                                     // 0x0376(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                M_DefaultMeshOffset;                               // 0x0378(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CalcIKMax;                                         // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CalcIKCount;                                       // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CalcIKForceTrue;                                   // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CalcIKEventMode;                                   // 0x038D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_288D[0x2];                                     // 0x038E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialAnimCoreComponent_C*           MaterialAnimCore;                                  // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    Ref_SpringArm_Up;                                  // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaBlink*                            BlinkAsset;                                        // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseBlink;                                          // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBlinkToNotify;                                   // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_288E[0x6];                                     // 0x03AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      AnimationRef;                                      // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUpdateAnimation;                                 // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_288F[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaFloatingComponent_C*              CharaFloatingComp;                                 // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaStepSmootherComponent_C*          CharaStepSmootherComp;                             // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaSlopeAdapterComponent_C*          CharaSlopAdapterComp;                              // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCharaSinkTesterInterface_C*>    CharaSinkTesterComps;                              // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UCharaLegComponent_C*>           CharaLegComps;                                     // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UCharaBodyComponent_C*>          CharaBodyComps;                                    // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UCharaHeadComponent_C*>          CharaHeadComps;                                    // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UCharaEyeComponent_C*>           CharaEyeComps;                                     // 0x0418(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UCharaFaceComponent*                    CharaFaceComp;                                     // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SaveGazeTarget;                                    // 0x0430(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LimitLookAtRange;                                  // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LookAtActive;                                      // 0x043D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2890[0x2];                                     // 0x043E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LookAtRange;                                       // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceDisableLimitLookAt;                           // 0x0444(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ForceUpdateLookAt;                                 // 0x0445(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CharaBaseLight(int32 EntryPoint);
	void BI_SetForceUpdateLookAt(bool IsForceUpdate);
	void BI_ForceDisableLimitLookAt(bool Disable);
	void BI_SetLimitLookAtRange(bool IsActive);
	void TempHidden();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void BI_GuestBattleInitialize(bool Dither100);
	void OnTransformUpdatedForIK(bool Teleport);
	void PostEvaluateAnimation();
	void UpdateAnimation(float DeltaTime);
	void InitializeAnimation();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BI_PlayStartEffect();
	void StopDefaultBlink();
	void PlayDefaultBlink();
	void BI_SetDevilRootMotion(bool Enable);
	void StopLipSync();
	void BI_AdjustMeshScale(bool IsReset);
	void PlayLipSync(class UCharaLipSync* Param_PlayLipSync, bool IsLoop);
	void BI_SetLipClearDelay(float Delay);
	void BI_SetHeadIKSpeed(float Speed);
	void StopSpeakingMotion();
	void PlaySpeakingMotion();
	void BI_TempToggleCameraDitherState(bool ForceDitherOff);
	void BI_GuestBattleFinalize();
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();
	void UserConstructionScript();
	void PlayMotion(E_CHARA_MOTION_ID Param_MotionID, bool Param_IsUseDuration, float Duration, bool IsUseBlendTimeOverride, float BlendTimeOverride, float StartOffsetTime);
	void StopMotion();
	void PauseMotion();
	void ResumeMotion();
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetEyeIKEnable(bool Enable, bool Immediately);
	void InitializeIK();
	void UpdateIK(float DeltaTime);
	void UpdateSink(float DeltaTime, TArray<class UCharaSinkTesterInterface_C*>& Array, struct FVector* Offset);
	void ApplySinkOffset();
	void LookAt(class USceneComponent* Point, class FName Socket);
	void LoadMotion();
	void IsMotionFinished(E_CHARA_MOTION_ID Param_MotionID, bool* RetValue);
	void GetNowMotionID(E_CHARA_MOTION_ID* RetValue);
	void GetValidIdolMotionIDs(TArray<E_CHARA_MOTION_ID>* IDs);
	void AdjustValidMotionID(E_CHARA_MOTION_ID Param_MotionID, E_CHARA_MOTION_ID* ValidMotionID);
	void SetBodyIKEnable(bool Enable, bool Immediately);
	void IsSameMotion(E_CHARA_MOTION_ID Param_MotionID, bool* RetValue);
	void HasValidMotion(E_CHARA_MOTION_ID Param_MotionID, bool* RetVal);
	void EventPlayMotion(class UAnimSequenceBase* Animation, bool Loop, float BlendTime, float StartOffsetTime);
	void EventSetMotionRateScale(float MotionRateScale);
	void InvokeLegIKImmediately();
	void InvokeHeadIKImmediately();
	void InvokeEyeIKImmediately();
	void InvokeBodyIKImmediately();
	void SetLookAtIKEnable(bool Enable, bool Immediately, bool IncludeEyeIK);
	void InvokeLookAtIKImmediately(bool IncludeEyeIK);
	void InitializeExpression();
	void UpdateExpression(float DeltaTime);
	void SetMumbleEnable(bool Enable);
	void InvokeFloatingIKImmediately();
	void ResetSink();
	void WatchOnesStepBegin();
	void WatchOnesStepEnd();
	void PerchBegin();
	void PerchEnd();
	void InitializeBoneTrans();
	void InvalidIKBegin(class FName Param_Name, int32 Param_Index);
	void InvalidIKEnd(class FName Param_Name, int32 Param_Index);
	void GetPreviousMotionID(E_CHARA_MOTION_ID* RetValue);
	void SetNowMotionID(E_CHARA_MOTION_ID MotionIDCurrent);
	void SetPreviousMotionID(E_CHARA_MOTION_ID Param_MotionID);
	void SetMotionIsUseDuration(bool Param_IsUseDuration);
	void SetMotionDuration(float Duration);
	void SetIsUseBlendTime(bool IsUseBlendTime);
	void SetBlendTime(float BlendTime);
	void GetParalyzed(bool* Paralyzed);
	void IsFreezeMotion(bool* Param_M_IsFreezeMotion);
	void IsUseDuration(bool* Param_IsUseDuration);
	void SetDefaultIdleMotion(E_CHARA_MOTION_ID Default_Idle);
	void GetDefaultIdleMotion(E_CHARA_MOTION_ID* Idle);
	void CheckUpdateIK(bool* ClacIK, int32* DeltaRate);
	void GetSocketTransform(class FName SocketName, struct FTransform* Transform);
	void StackPlayMotion(class UAnimSequenceBase* Animation, bool Loop, float BlendTime, float StartOffsetTime);
	void SetAllVisibility(bool IsVisible);
	void LookAtCalc();
	void SetIsUpdateAnimation(bool Update, bool* Ret);
	void SetAlwaysAutoTransitionAnimationMode(bool Check, bool* NotUse);
	void SetIsUpdateIK(bool Update, bool* Ret);
	void BI_SetNPCCollision(bool* Ret);
	void BI_GetMeshComponents(TArray<class UMeshComponent*>* Meshes);
	void BI_CalcBattleCameraScale(float* Scale);
	void BI_RetrieveMotionNotifyNames(E_CHARA_MOTION_ID Param_Motion, TArray<class FString>* Names);
	void BI_GetNotifyDeadVoice(class USoundAtomCue** Voice);
	void BI_SetNotifyDeadVoice(class USoundAtomCue* Voice, bool* NoUse);
	void BI_GetSkeletalMeshComponents(TArray<class USkeletalMeshComponent*>* Meshes);
	void BI_LookAt(class USceneComponent* Point, class FName Socket, bool* NoUse);
	void BI_SetVectorParam(TArray<class FName>& Param_Names, const struct FLinearColor& Vector, bool* No_Use);
	void BI_GetTimeLineComponent(E_BTL_DEAD_EFFECT DeadEffect, class UTimelineComponent** Comp);
	void BI_ApplyMaterialParam(class UMaterialParameterApplier* ParamApplier, bool* NoUse);
	void BI_IsNotifyRapidReturnTiming(bool* IsNotified);
	void BI_SetNotifyRapidReturnTiming(bool IsNotified, bool* NoUse);
	void BI_GetBadStatusEffectScale(float* Scale);
	void BI_SetMeshRelativeScale(float NewScale, float NewBoundsScale, bool* NoUse);
	void BI_GetMeshRelativeScale(float* Scale);
	void BI_IsNotifyDeadTiming(bool* IsNotified);
	void BI_GetSocketTransform(class FName SocketName, struct FTransform* RetVal);
	void BI_SetScalarParamByArray(const TArray<class UMaterialInstanceDynamic*>& Material, const TArray<class FName>& Param_Names, const float Value, bool* No_Use);
	void BI_SetScalarParam(const TArray<class FName>& Param_Names, float Value, bool* No_Use);
	void BI_UpdateSurfaceBadStatus(int32 CurrentStatus, bool* NoUse);
	void BI_PauseMotion(bool* NoUse);
	void BI_CommonEffectOff(bool* NoUse);
	void BI_InitializeMaterial(bool* No_Use);
	void BI_SetAllVisibility(bool IsVisible, bool* NoUse);
	void BI_SetCompletelyDead(bool IsDead, bool* NoUse);
	void BI_EventPlayMotion(class UAnimSequenceBase* Animation, bool Loop, float BlendTime, float StartOffsetTime, bool* NoUse);
	void BI_GetActionState(E_CHARA_ACTION_TYPE InAction, uint8* Value);
	void BI_GetCurrentSurfaceStatusMaterial(TArray<E_BAD_STATUS>* CurrentSurface);
	void BI_SetParticleTemplate(const class UParticleSystemComponent*& TargetParticleSys, class UParticleSystem* Template, float Scale, bool* NoUse);
	void BI_InvalidIKBegin(class FName Param_Name, int32 Param_Index, bool* NoUse);
	void BI_WatchOnesStepBegin(bool* NoUse);
	void BI_WatchOnesStepEnd(bool* NoUse);
	void BI_PerchBegin(bool* NoUse);
	void BI_PerchEnd(bool* NoUse);
	void BI_SetNotifyWarpTiming(bool IsNotified, bool* NoUse);
	void BI_SetNotifySkillFire(bool IsNotified, bool* NoUse);
	void BI_AttachClockingParticleSystem(const class UParticleSystem*& EmitterTemplate, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, uint8 LocationType, const bool IsCastShadow, const bool AutoDestroy, bool* NoUse);
	void BI_InstantMaterialAnimation(E_CHARA_MATERIAL_ANIMATION_SLOT Slot, const TArray<int32>& ElementNo, const TArray<struct FMaterialAnimSetting_T>& MaterialAnimSettings, bool IsForward, bool IsOnlyFirstTime, bool* NoUse);
	void BI_SetNotifyDeadTiming(bool IsNotified, bool* NoUse);
	void BI_PlayMotion(E_CHARA_MOTION_ID Param_MotionID, bool IsUseDuration, float Duration, bool IsUseBlendTimeOverride, float BlendTimeOverride, float StartOffsetTime, bool* NoUse);
	void BI_SetAlreadyChangeEnableEffect(class FName Key, bool* NoUse);
	void BI_GetAlreadyChangeEnableEffect(class FName Key, bool* IsChanged);
	void BI_SetAlreadyChangeEnableDecal(class FName Key, bool* NoUse);
	void BI_GetAlreadyChangeEnableDecal(class FName Key, bool* IsChanged);
	void BI_SpawnMaterialAnimDecalAttached(const class UMaterialInstance*& DecalMaterial, const TArray<struct FMaterialAnimSetting_T>& MaterialAnimSettings, const struct FVector& DecalSize, const struct FVector& OffsetLocation, class FName AttachPointName, float OverrideLifeSec, uint8 LocationType, const struct FRotator& Rotation, class UMaterialAnimDecalComponent_C** Comp);
	void BI_InvalidIKEnd(class FName Param_Name, int32 Param_Index, bool* NoUse);
	void BI_SetNotifyApplyHit(bool IsNotified, E_ANIM_NOTIFY_APPLY_HIT_TYPE NotifyType, bool* NoUse);
	void BI_ResetState(int32 State, bool* NoUse);
	void BI_CreateBadStatusPSComp(class UParticleSystemComponent** PSComp);
	void BI_SetActionState(const E_CHARA_ACTION_TYPE InAction, uint8 State, bool* NoUse);
	void BI_EvtResetBadStatusMaterial(bool* NoUse);
	void BI_EvtResetEffect(bool* NoUse);
	void BI_BadStatusMaterialOff(const TArray<E_BAD_STATUS>& OffBadStatus, bool* NoUse);
	void BI_BadStatusMaterialOn(TArray<E_BAD_STATUS>& OnBadStatus, bool* NoUse);
	void BI_ResetScalarParam(TArray<class FName>& ParamNames, bool* NoUs);
	void BI_GetActorRotation(struct FRotator* Rotation);
	void BI_GetCapsuleComponent(class UCapsuleComponent** Param);
	void BI_GetCharaParamComponent(class UCharaParamComponent** Comp);
	void BI_GetEffectScale(float* EffectScale);
	void BI_GetPlayRate(float* PlayRate);
	void BI_GetMeshComponent(class UMeshComponent** MeshComp);
	void BI_PlayDefaultBlink(bool* NoUse);
	void BI_StopDefaultBlink(bool* NoUse);
	void BI_StackPlayMotion(class UAnimSequenceBase* Animation, bool Loop, float BlendTime, float StartOffsetTime, bool* NoUse);
	void BI_ResetAllParam(bool* NoUse);
	void BI_StopMotion(bool* NoUse);
	void BI_GetMotionComponent(class UCharaMotionPlayerComponent** MotionComponent);
	void BI_GetEnableChangeMotion(bool* IsEnable);
	void BI_SetEnableChangeMotion(bool Enable, bool* NoUse);
	void BI_SetSkillPerformDuration(bool IsTrue, bool* NoUse);
	void BI_GetSkillPerformDuration(bool* IsTrue);
	void BI_GetPlayBlink(bool* IsPlay);
	void BI_PlayBlinkToNotify(bool* NoUse);
	void BI_StopBlinkToNotify(bool* NoUse);
	void BI_SetVoiceSkillType(E_SKILL_TYPE Type, bool* NoUse);
	void BI_GetVoiceSkillType(E_SKILL_TYPE* Type);
	void BI_SetElectrification(bool Enable, bool* NoUse);
	void BI_SetDitherEnable(bool Enable, bool* No_Use);
	void BI_SetDitherRate(float InRate, float InInterpSec, bool* No_Use);
	void BI_ResetDitherRate(float InInterpSec, bool* No_Use);
	void BI_SetVoiceSkillAttr(E_ATTRIBUTE_TYPE SkillAttr, bool* NoUse);
	void BI_GetVoiceSkillAttr(E_ATTRIBUTE_TYPE* SkillAttr);
	void BI_IsPlayMotion(E_CHARA_MOTION_ID Param_MotionID, bool* IsPlay);
	void BI_SetFacial(class FName Facial, float BlendTimeOverride, bool* NotUse);
	void BI_GetDefaultAnimation(class UAnimSequenceBase** Ret);
	void BI_GetAnimInstance(class UAnimInstance** Ret);
	void BI_InvokeLookAtIKImmediately(bool IncludeEyeIK, bool* NoUse);
	void BI_IKEnableFlag(E_IK_TYPE_LIST Type, bool Enable, bool Immediately, bool* NoUse);
	void BI_CalcEffectScale(float* Scale);
	void BI_SetVoiceSkillTarget(E_SKILL_TARGET Target, bool* NoUse);
	void BI_GetVoiceSkillTarget(E_SKILL_TARGET* Target);
	void BI_GetDefaultIdleMotion(E_CHARA_MOTION_ID* Param_Motion);
	void BI_SetDefaultIdleMotion(E_CHARA_MOTION_ID Param_Motion, bool* NoUse);
	void BI_SetEnableCollision(bool Enable, bool* NoUse);
	void BI_SetCollisionObjectType(ECollisionChannel Channel, bool* NoUse);
	void BI_IsCharaShaking(bool* Shaking);
	void BI_StopCharaShake(bool* NoUse);
	void BI_GetForceRotate(bool* Ret);
	void BI_BattlePlayMotion(E_CHARA_MOTION_ID Param_MotionID, bool IsUseDuration, float Duration, bool IsUseBlendTimeOverride, float BlendTimeOverride, float StartOffsetTime, bool* NoUse);
	void BI_BattleStopMotion(bool* NoUse);
	void BI_EnableSilhouette(bool IsEnable, bool* NoUse);
	void BI_IsSilhouetteEnabled(bool* IsEnabled);
	void BI_FloatNoRotation(bool NoRotation, bool* NoUse);
	void BI_GetParentChara(TScriptInterface<class IBPI_CharaBaseAccessor_C>* Parent, bool* IsExist);
	void BI_AddIgnoreAtomComp(class UAtomComponent*& IgnoreComp, bool* NoUse);
	void BI_CheckIgnoreAtomComp(class UAtomComponent*& IgnoreComp, bool* IsIgnoreID);
	void BI_CreateSkeletalMeshComp(class USkeletalMeshComponent** SkelMeshComp);
	void BI_DestroySkeletalMeshComp(class USkeletalMeshComponent* SkelMeshComp, bool* NoUse);
	void BI_RemoveAllMaterialAnimDecalAttached(bool* NoUse);
	void BI_CreateSkeletalMeshActor(class ASkeletalMeshActor** SkelMeshActor);
	void BI_SetAnimBP(class UAnimInstance* AnimInstance, bool* NoUse);
	void BI_DestroySkeletalMeshActor(class ASkeletalMeshActor* SkelActor, bool* NoUse);
	void BI_GetSkeletalMeshActors(TArray<class ASkeletalMeshActor*>* SkelMeshActors);
	void BI_DeactivateAttachedParticles(bool NoDestroyComponent, bool* NoUse);
	void BI_ActivateAttachedParticles(bool* NoUse);
	void BI_SetVoiceSkillID(int32 SkillId, bool* NoUse);
	void BI_GetVoiceSkillID(int32* SkillId);
	void BI_DirectPlayMotion(class UAnimSequenceBase* DefaultAnim, class UAnimSequenceBase* LoopAnim, float MotionBlendTime, float StartOffsetTime, bool* NoUse);

	bool IsWatchingOnesStep() const;
	bool IsPerching() const;
	EGazeTargetType GetGazeTargetType() const;
	struct FVector GetGazeTargetLocation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaBaseLight_C">();
	}
	static class ACharaBaseLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACharaBaseLight_C>();
	}
};
static_assert(alignof(ACharaBaseLight_C) == 0x000008, "Wrong alignment on ACharaBaseLight_C");
static_assert(sizeof(ACharaBaseLight_C) == 0x000448, "Wrong size on ACharaBaseLight_C");
static_assert(offsetof(ACharaBaseLight_C, UberGraphFrame) == 0x0002E8, "Member 'ACharaBaseLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, Capsule) == 0x0002F0, "Member 'ACharaBaseLight_C::Capsule' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, Motion) == 0x0002F8, "Member 'ACharaBaseLight_C::Motion' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, SinkHelper) == 0x000300, "Member 'ACharaBaseLight_C::SinkHelper' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, _______0___Track_0_FFAB3A6B40A40D122A7D49A8DD1FA733) == 0x000308, "Member 'ACharaBaseLight_C::_______0___Track_0_FFAB3A6B40A40D122A7D49A8DD1FA733' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, _______0__Direction_FFAB3A6B40A40D122A7D49A8DD1FA733) == 0x00030C, "Member 'ACharaBaseLight_C::_______0__Direction_FFAB3A6B40A40D122A7D49A8DD1FA733' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, _______0) == 0x000310, "Member 'ACharaBaseLight_C::_______0' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, MotionID) == 0x000318, "Member 'ACharaBaseLight_C::MotionID' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, MotionIDPrevious) == 0x000319, "Member 'ACharaBaseLight_C::MotionIDPrevious' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, LegIKEnableFlag) == 0x00031A, "Member 'ACharaBaseLight_C::LegIKEnableFlag' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, HeadIKEnableFlag) == 0x00031B, "Member 'ACharaBaseLight_C::HeadIKEnableFlag' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, EyeIKEnableFlag) == 0x00031C, "Member 'ACharaBaseLight_C::EyeIKEnableFlag' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, BodyIKEnableFlag) == 0x00031D, "Member 'ACharaBaseLight_C::BodyIKEnableFlag' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, FloatingIKEnableFlag) == 0x00031E, "Member 'ACharaBaseLight_C::FloatingIKEnableFlag' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, WatchOnesStepCount) == 0x000320, "Member 'ACharaBaseLight_C::WatchOnesStepCount' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, PerchCount) == 0x000324, "Member 'ACharaBaseLight_C::PerchCount' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, FloatingIKPerch) == 0x000328, "Member 'ACharaBaseLight_C::FloatingIKPerch' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, SinkActorOffset) == 0x00032C, "Member 'ACharaBaseLight_C::SinkActorOffset' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, LookAtComponent) == 0x000330, "Member 'ACharaBaseLight_C::LookAtComponent' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, LookAtSocket) == 0x000338, "Member 'ACharaBaseLight_C::LookAtSocket' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, ActionState) == 0x000340, "Member 'ACharaBaseLight_C::ActionState' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, AlwaysAutoTransitionAnimationMode) == 0x000350, "Member 'ACharaBaseLight_C::AlwaysAutoTransitionAnimationMode' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_IsParalyzed) == 0x000351, "Member 'ACharaBaseLight_C::M_IsParalyzed' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, PoseWeightTable) == 0x000358, "Member 'ACharaBaseLight_C::PoseWeightTable' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_MotionBlendTime) == 0x000360, "Member 'ACharaBaseLight_C::M_MotionBlendTime' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_MotionIsUseDuration) == 0x000364, "Member 'ACharaBaseLight_C::M_MotionIsUseDuration' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_MotionDuration) == 0x000368, "Member 'ACharaBaseLight_C::M_MotionDuration' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_MotionIsUseBlendTime) == 0x00036C, "Member 'ACharaBaseLight_C::M_MotionIsUseBlendTime' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_IsFreezeMotion) == 0x00036D, "Member 'ACharaBaseLight_C::M_IsFreezeMotion' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_CharaPlayRate) == 0x000370, "Member 'ACharaBaseLight_C::M_CharaPlayRate' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_IsAnnouncedInvalidMotionTable) == 0x000374, "Member 'ACharaBaseLight_C::M_IsAnnouncedInvalidMotionTable' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_DefaultIdleMotion) == 0x000375, "Member 'ACharaBaseLight_C::M_DefaultIdleMotion' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, M_DefaultMeshOffset) == 0x000378, "Member 'ACharaBaseLight_C::M_DefaultMeshOffset' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CalcIKMax) == 0x000384, "Member 'ACharaBaseLight_C::CalcIKMax' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CalcIKCount) == 0x000388, "Member 'ACharaBaseLight_C::CalcIKCount' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CalcIKForceTrue) == 0x00038C, "Member 'ACharaBaseLight_C::CalcIKForceTrue' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CalcIKEventMode) == 0x00038D, "Member 'ACharaBaseLight_C::CalcIKEventMode' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, MaterialAnimCore) == 0x000390, "Member 'ACharaBaseLight_C::MaterialAnimCore' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, Ref_SpringArm_Up) == 0x000398, "Member 'ACharaBaseLight_C::Ref_SpringArm_Up' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, BlinkAsset) == 0x0003A0, "Member 'ACharaBaseLight_C::BlinkAsset' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, UseBlink) == 0x0003A8, "Member 'ACharaBaseLight_C::UseBlink' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, IsBlinkToNotify) == 0x0003A9, "Member 'ACharaBaseLight_C::IsBlinkToNotify' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, AnimationRef) == 0x0003B0, "Member 'ACharaBaseLight_C::AnimationRef' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, IsUpdateAnimation) == 0x0003B8, "Member 'ACharaBaseLight_C::IsUpdateAnimation' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CharaFloatingComp) == 0x0003C0, "Member 'ACharaBaseLight_C::CharaFloatingComp' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CharaStepSmootherComp) == 0x0003C8, "Member 'ACharaBaseLight_C::CharaStepSmootherComp' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CharaSlopAdapterComp) == 0x0003D0, "Member 'ACharaBaseLight_C::CharaSlopAdapterComp' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CharaSinkTesterComps) == 0x0003D8, "Member 'ACharaBaseLight_C::CharaSinkTesterComps' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CharaLegComps) == 0x0003E8, "Member 'ACharaBaseLight_C::CharaLegComps' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CharaBodyComps) == 0x0003F8, "Member 'ACharaBaseLight_C::CharaBodyComps' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CharaHeadComps) == 0x000408, "Member 'ACharaBaseLight_C::CharaHeadComps' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CharaEyeComps) == 0x000418, "Member 'ACharaBaseLight_C::CharaEyeComps' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, CharaFaceComp) == 0x000428, "Member 'ACharaBaseLight_C::CharaFaceComp' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, SaveGazeTarget) == 0x000430, "Member 'ACharaBaseLight_C::SaveGazeTarget' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, LimitLookAtRange) == 0x00043C, "Member 'ACharaBaseLight_C::LimitLookAtRange' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, LookAtActive) == 0x00043D, "Member 'ACharaBaseLight_C::LookAtActive' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, LookAtRange) == 0x000440, "Member 'ACharaBaseLight_C::LookAtRange' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, ForceDisableLimitLookAt) == 0x000444, "Member 'ACharaBaseLight_C::ForceDisableLimitLookAt' has a wrong offset!");
static_assert(offsetof(ACharaBaseLight_C, ForceUpdateLookAt) == 0x000445, "Member 'ACharaBaseLight_C::ForceUpdateLookAt' has a wrong offset!");

}

