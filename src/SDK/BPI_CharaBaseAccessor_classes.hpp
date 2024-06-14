#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharaBaseAccessor

#include "Basic.hpp"

#include "E_CHARA_MATERIAL_ANIMATION_SLOT_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "E_IK_TYPE_LIST_structs.hpp"
#include "Project_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CharaBaseAccessor.BPI_CharaBaseAccessor_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CharaBaseAccessor_C final : public IInterface
{
public:
	void BI_GetMeshComponent(class UMeshComponent** MeshComp);
	void BI_GetPlayRate(float* PlayRate);
	void BI_GetEffectScale(float* EffectScale);
	void BI_GetCharaParamComponent(class UCharaParamComponent** Comp);
	void BI_GetCapsuleComponent(class UCapsuleComponent** Param);
	void BI_GetActorRotation(struct FRotator* Rotation);
	void BI_ResetScalarParam(TArray<class FName>& ParamNames, bool* NoUs);
	void BI_BadStatusMaterialOn(TArray<E_BAD_STATUS>& OnBadStatus, bool* NoUse);
	void BI_BadStatusMaterialOff(const TArray<E_BAD_STATUS>& OffBadStatus, bool* NoUse);
	void BI_EvtResetEffect(bool* NoUse);
	void BI_EvtResetBadStatusMaterial(bool* NoUse);
	void BI_SetActionState(const E_CHARA_ACTION_TYPE InAction, uint8 State, bool* NoUse);
	void BI_CreateBadStatusPSComp(class UParticleSystemComponent** PSComp);
	void BI_ResetState(int32 State, bool* NoUse);
	void BI_SetNotifyApplyHit(bool IsNotified, E_ANIM_NOTIFY_APPLY_HIT_TYPE NotifyType, bool* NoUse);
	void BI_InvalidIKEnd(class FName Param_Name, int32 Param_Index, bool* NoUse);
	void BI_SpawnMaterialAnimDecalAttached(const class UMaterialInstance*& DecalMaterial, const TArray<struct FMaterialAnimSetting_T>& MaterialAnimSettings, const struct FVector& DecalSize, const struct FVector& OffsetLocation, class FName AttachPointName, float OverrideLifeSec, uint8 LocationType, const struct FRotator& Rotation, class UMaterialAnimDecalComponent_C** Comp);
	void BI_GetAlreadyChangeEnableDecal(class FName Key, bool* IsChanged);
	void BI_SetAlreadyChangeEnableDecal(class FName Key, bool* NoUse);
	void BI_GetAlreadyChangeEnableEffect(class FName Key, bool* IsChanged);
	void BI_SetAlreadyChangeEnableEffect(class FName Key, bool* NoUse);
	void BI_PlayMotion(E_CHARA_MOTION_ID MotionID, bool IsUseDuration, float Duration, bool IsUseBlendTimeOverride, float BlendTimeOverride, float StartOffsetTime, bool* NoUse);
	void BI_SetNotifyDeadTiming(bool IsNotified, bool* NoUse);
	void BI_InstantMaterialAnimation(E_CHARA_MATERIAL_ANIMATION_SLOT Slot, const TArray<int32>& ElementNo, const TArray<struct FMaterialAnimSetting_T>& MaterialAnimSettings, bool IsForward, bool IsOnlyFirstTime, bool* NoUse);
	void BI_AttachClockingParticleSystem(const class UParticleSystem*& EmitterTemplate, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, uint8 LocationType, const bool IsCastShadow, const bool AutoDestroy, bool* NoUse);
	void BI_SetNotifySkillFire(bool IsNotified, bool* NoUse);
	void BI_SetNotifyWarpTiming(bool IsNotified, bool* NoUse);
	void BI_PerchEnd(bool* NoUse);
	void BI_PerchBegin(bool* NoUse);
	void BI_WatchOnesStepEnd(bool* NoUse);
	void BI_WatchOnesStepBegin(bool* NoUse);
	void BI_InvalidIKBegin(class FName Param_Name, int32 Param_Index, bool* NoUse);
	void BI_SetParticleTemplate(const class UParticleSystemComponent*& TargetParticleSys, class UParticleSystem* Template, float Scale, bool* NoUse);
	void BI_GetCurrentSurfaceStatusMaterial(TArray<E_BAD_STATUS>* CurrentSurface);
	void BI_GetActionState(E_CHARA_ACTION_TYPE InAction, uint8* Value);
	void BI_EventPlayMotion(class UAnimSequenceBase* Animation, bool Loop, float BlendTime, float StartOffsetTime, bool* NoUse);
	void BI_SetCompletelyDead(bool IsDead, bool* NoUse);
	void BI_SetAllVisibility(bool IsVisible, bool* NoUse);
	void BI_InitializeMaterial(bool* No_Use);
	void BI_CommonEffectOff(bool* NoUse);
	void BI_PauseMotion(bool* NoUse);
	void BI_UpdateSurfaceBadStatus(int32 CurrentStatus, bool* NoUse);
	void BI_SetScalarParam(const TArray<class FName>& Param_Names, float Value, bool* No_Use);
	void BI_SetScalarParamByArray(const TArray<class UMaterialInstanceDynamic*>& Material, const TArray<class FName>& Param_Names, const float Value, bool* No_Use);
	void BI_GetSocketTransform(class FName SocketName, struct FTransform* RetVal);
	void BI_IsNotifyDeadTiming(bool* IsNotified);
	void BI_GetMeshRelativeScale(float* Scale);
	void BI_SetMeshRelativeScale(float NewScale, float NewBoundsScale, bool* NoUse);
	void BI_GetBadStatusEffectScale(float* Scale);
	void BI_SetNotifyRapidReturnTiming(bool IsNotified, bool* NoUse);
	void BI_IsNotifyRapidReturnTiming(bool* IsNotified);
	void BI_ApplyMaterialParam(class UMaterialParameterApplier* ParamApplier, bool* NoUse);
	void BI_GetTimeLineComponent(E_BTL_DEAD_EFFECT DeadEffect, class UTimelineComponent** Comp);
	void BI_SetVectorParam(TArray<class FName>& Param_Names, const struct FLinearColor& Vector, bool* No_Use);
	void BI_LookAt(class USceneComponent* Point, class FName Socket, bool* NoUse);
	void BI_GetSkeletalMeshComponents(TArray<class USkeletalMeshComponent*>* Meshes);
	void BI_SetNotifyDeadVoice(class USoundAtomCue* Voice, bool* NoUse);
	void BI_GetNotifyDeadVoice(class USoundAtomCue** Voice);
	void BI_RetrieveMotionNotifyNames(E_CHARA_MOTION_ID Motion, TArray<class FString>* Names);
	void BI_CalcBattleCameraScale(float* Scale);
	void BI_PlayStartEffect();
	void BI_GetMeshComponents(TArray<class UMeshComponent*>* Meshes);
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
	void BI_IsPlayMotion(E_CHARA_MOTION_ID MotionID, bool* IsPlay);
	void BI_SetFacial(class FName Facial, float BlendTimeOverride, bool* NotUse);
	void BI_GetDefaultAnimation(class UAnimSequenceBase** Ret);
	void BI_GetAnimInstance(class UAnimInstance** Ret);
	void BI_InvokeLookAtIKImmediately(bool IncludeEyeIK, bool* NoUse);
	void BI_IKEnableFlag(E_IK_TYPE_LIST Type, bool Enable, bool Immediately, bool* NoUse);
	void BI_CalcEffectScale(float* Scale);
	void BI_SetVoiceSkillTarget(E_SKILL_TARGET Target, bool* NoUse);
	void BI_GetVoiceSkillTarget(E_SKILL_TARGET* Target);
	void BI_GetDefaultIdleMotion(E_CHARA_MOTION_ID* Motion);
	void BI_SetDefaultIdleMotion(E_CHARA_MOTION_ID Motion, bool* NoUse);
	void BI_SetEnableCollision(bool Enable, bool* NoUse);
	void BI_SetCollisionObjectType(ECollisionChannel Channel, bool* NoUse);
	void BI_IsCharaShaking(bool* Shaking);
	void BI_StopCharaShake(bool* NoUse);
	void BI_GetForceRotate(bool* Ret);
	void BI_BattlePlayMotion(E_CHARA_MOTION_ID MotionID, bool IsUseDuration, float Duration, bool IsUseBlendTimeOverride, float BlendTimeOverride, float StartOffsetTime, bool* NoUse);
	void BI_BattleStopMotion(bool* NoUse);
	void BI_EnableSilhouette(bool IsEnable, bool* NoUse);
	void BI_IsSilhouetteEnabled(bool* IsEnabled);
	void BI_FloatNoRotation(bool NoRotation, bool* NoUse);
	void BI_GetParentChara(TScriptInterface<class IBPI_CharaBaseAccessor_C>* Parent, bool* IsExist);
	void BI_SetDevilRootMotion(bool Enable);
	void BI_AdjustMeshScale(bool IsReset);
	void BI_GuestBattleInitialize(bool Dither100);
	void BI_GuestBattleFinalize();
	void BI_AddIgnoreAtomComp(class UAtomComponent*& IgnoreComp, bool* NoUse);
	void BI_CheckIgnoreAtomComp(class UAtomComponent*& IgnoreComp, bool* IsIgnoreID);
	void BI_TempToggleCameraDitherState(bool ForceDitherOff);
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
	void BI_SetLimitLookAtRange(bool IsActive);
	void BI_ForceDisableLimitLookAt(bool Disable);
	void BI_SetForceUpdateLookAt(bool IsForceUpdate);
	void BI_DirectPlayMotion(class UAnimSequenceBase* DefaultAnim, class UAnimSequenceBase* LoopAnim, float MotionBlendTime, float StartOffsetTime, bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CharaBaseAccessor_C">();
	}
	static class IBPI_CharaBaseAccessor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CharaBaseAccessor_C>();
	}
};
static_assert(alignof(IBPI_CharaBaseAccessor_C) == 0x000008, "Wrong alignment on IBPI_CharaBaseAccessor_C");
static_assert(sizeof(IBPI_CharaBaseAccessor_C) == 0x000028, "Wrong size on IBPI_CharaBaseAccessor_C");

}
