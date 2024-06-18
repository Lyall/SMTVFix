#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_CharaFollower

#include "Basic.hpp"

#include "E_NaviDevilHideReason_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"
#include "E_CharaFollowerState_structs.hpp"
#include "NaviDevilParam_st_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_CharaFollower.BPC_CharaFollower_C
// 0x02C8 (0x0378 - 0x00B0)
class UBPC_CharaFollower_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TargetDistance;                                    // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ToTargetDirection;                                 // 0x00BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DotForward;                                        // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DotRight;                                          // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Velocity;                                          // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF71[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TargetActor;                                       // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NowAndTargetAngle;                                 // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSec;                                          // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NextPos;                                           // 0x00E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NextMoveRotate;                                    // 0x00F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_CHARA_MOTION_ID                             NowMotion;                                         // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF72[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_StoppedTarget;                              // 0x0108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                TargetPos;                                         // 0x0118(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF73[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_LeaveTarget;                                // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AActor*>                         TargetActorList;                                   // 0x0138(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         CapsuleRadius;                                     // 0x0148(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CapsuleHalfHeight;                                 // 0x014C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetDir;                                         // 0x0150(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetDir_Plane;                                   // 0x015C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TargetMoveRotate;                                  // 0x0168(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                NowPos;                                            // 0x0174(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FloatingIK;                                        // 0x0180(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bPlayerLook;                                       // 0x0181(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_NAVI_DEVIL                                  NaviType;                                          // 0x0182(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          WillStop;                                          // 0x0183(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         IdleReqCounter;                                    // 0x0184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_MOTION_ID                             ReqMotion;                                         // 0x0188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF74[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetDistance_Vec;                                // 0x018C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FllowPlaceCounter;                                 // 0x0198(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WALL_HEIGHT;                                       // 0x019C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WallAngle;                                         // 0x01A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionRadius;                                   // 0x01A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionHalfHeight;                               // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionOffsetZ;                                  // 0x01AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_NaviDevilBlock_C*>           NaviDevilBlock;                                    // 0x01B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_NaviDevilCollision_C*               NPCCollision;                                      // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNaviDevilParam_st                     NaviParam;                                         // 0x01C8(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          VelocityUpdateLock;                                // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BF75[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HitCounter;                                        // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SecondAfterHit;                                    // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GimmickMotionCounter;                              // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rendered;                                          // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BF76[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystemComponent*>       MeshEffects;                                       // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<float>                                 MeshEffects_SecondsBeforeInactive;                 // 0x0288(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                          CheckMeshEffects;                                  // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BF77[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_WarpBasePos;                                // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          TutorialMoving;                                    // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BF78[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MOVE_POINT_SPEED1;                                 // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MeshOffsetCounter;                                 // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MeshOffsetCounterEnd;                              // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevMeshOffset;                                    // 0x02C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LookRotate;                                        // 0x02CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DistanceTooCloseToPlayer;                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CharaFollowerState                          FollowerState;                                     // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF79[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StateCounter;                                      // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GimmickRoute_TargetPos;                            // 0x02E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GimmickRoute_Alpha;                                // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF7A[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               MoveEffect;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MOVE_POINT_SPEED2;                                 // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GimmickRoute_Right;                                // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BF7B[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               GimmickEffect;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GimmickEffectPos;                                  // 0x0310(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EffectDeactivate;                                  // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Visible;                                           // 0x031D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PrevVisible;                                       // 0x031E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PositionLeft;                                      // 0x031F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         HideReason;                                        // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMermaid;                                         // 0x0324(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMoveEffect;                                      // 0x0325(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BF7C[0x2];                                     // 0x0326(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NaviParamName;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaMotionPlayerComponent*            MotionComponent;                                   // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopUntilPlayerMove;                               // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BF7D[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NaviScale;                                         // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RidingCoaster;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugMenu_GimmickColision;                         // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugMenu_CameraInside;                            // 0x0342(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LegIK;                                             // 0x0343(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BF7E[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  TargetCoasterList;                                 // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         RecordGimmickDistance;                             // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecordGimmickDistanceCounter;                      // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         TargetGimmickList;                                 // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          FromLoad;                                          // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsGimmickEffect;                                   // 0x0371(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EvtDis_StoppedTarget__DelegateSignature(class AActor* Target, class UBPC_CharaFollower_C* This);
	void EvtDis_LeaveTarget__DelegateSignature(class AActor* Target, class UBPC_CharaFollower_C* This);
	void EvtDis_WarpBasePos__DelegateSignature(class AActor* Target, class UBPC_CharaFollower_C* This);
	void ExecuteUbergraph_BPC_CharaFollower(int32 EntryPoint);
	void BPI_SetVisible_NaviMoveEffect(bool Param_Visible);
	void BPI_SetVisible_NaviGimmickEffect(bool Param_Visible);
	void Tick_FromEventNaviDevil();
	void BPI_GetOffCoaster_ForNaviDevl();
	void BPI_RideCoaster_ForNaviDevil();
	void BPI_TeleportNaviLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation, bool Param_StopUntilPlayerMove);
	void Tick_DecideState();
	void Hide_ForSomeReason(bool Hide, E_NaviDevilHideReason Reason);
	void PlayIdleMotion();
	void Tick_DecideMotion();
	void Tick_DecideNextPos();
	void Tick_DecideTargetRotate();
	void Tick_DecideTargetPos();
	void Tick_DecideVelocity();
	void BPI_ChangeDecalAnimNotify(class UDecalComponent* Decal, bool Param_Visible);
	void BPI_ProcMermaid_WhenFoundCoaster();
	void BPI_DiveMermaid();
	void TickDebug();
	void BPI_SetVisibility(bool Param_Visible);
	void SettingMeshOffset();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void StartMoveEffect();
	void EndMoveEffect();
	void EvtDis_LeaveTarget_Event(class AActor* Target, class UBPC_CharaFollower_C* This);
	void StartGimmickEffect();
	void EvtDis_StoppedTarget_Event(class AActor* Target, class UBPC_CharaFollower_C* This);
	void EndGimmickEffect(bool Immediately);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnEndMoveEffect(class UParticleSystemComponent* PSystem);
	void Tick_CalcWarp();
	void Tick_ProcMove();
	void Tick_CalcCamera();
	void OnSystemFinished______0(class UParticleSystemComponent* PSystem);
	void AddTargetActor(class AActor* Target, bool IsCoaster, class AActor* Gimmick);
	void RemoveTargetActor(class AActor* Target);
	void PlayerLook(bool Look);
	void TraceGround(const struct FVector& Param_NextPos, struct FVector* OutPos, bool* Hit);
	void GetIdleMotionID(E_CHARA_MOTION_ID* MotionID);
	void GetRunMotionID(E_CHARA_MOTION_ID* MotionID);
	void Trace_CanClimb(const struct FVector& StartPos, const struct FVector& Move, float Upper, bool* CanClimb, bool* DetourRight, struct FVector* Normal);
	void CalcDir_AlongWall(const struct FHitResult& Hit, struct FVector* Dir);
	void CapsureTrace(const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool* Hit, bool* HitNPC);
	void LineTrace(const struct FVector& Start, const struct FVector& End, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool* Hit);
	void GetNaviParam(struct FNaviDevilParam_st* Param);
	void GetNaviBasePosition(struct FVector* Location, struct FRotator* Rotation);
	void DebugLog(const class FString& InString);
	void GetGimmickMotionID(E_CHARA_MOTION_ID* MotionID);
	void CheckEnableChangeMotion(bool* Enable);
	void UpdateHitCount();
	void AddHitCount();
	void ClearHitCount();
	void GetNaviWarpPosition(struct FVector* Location, struct FRotator* Rotation);
	void CheckIdleMotion_AfterGimmickMotion(bool* Enable);
	void UpdatePerticle();
	void CheckInsideCamera(bool* Inside);
	void ChangeFollowerState(E_CharaFollowerState State, class AActor* Param_TargetActor);
	void CalcGimmickRoute();
	void CheckFrontNavi_ThanPlayer(bool* FrontNavi);
	void SetURO(bool URO);
	void ResetMoveParam();
	void CompareDistance(const struct FVector& Pos1, const struct FVector& Pos2, float FlatDistance, float HeightDistance, bool* Inner);
	void UpdateNaviScale();
	void AfterWarp();
	void GetMotionBlendTime(float* BlendTime);
	void CalcRecordGimmickDistance(bool* Warp);
	void GetNaviWarpPosition_ForGimmick(struct FVector* Location, struct FRotator* Rotation);
	void IsCheckGotoGimmickMoving(bool* CheckGotoGimmickMoving);
	void ConvertCapsuleTraceLocation(const struct FVector& Start, const struct FVector& Target, const struct FVector& HitLocation, struct FVector* Margin);
	void SetFromLoad(bool Param_FromLoad);
	void CheckMermaidDivingHit(bool* Diving);
	void BPI_WarpNaviDevilBasePos(bool CalcOnGround, bool* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_CharaFollower_C">();
	}
	static class UBPC_CharaFollower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_CharaFollower_C>();
	}
};
static_assert(alignof(UBPC_CharaFollower_C) == 0x000008, "Wrong alignment on UBPC_CharaFollower_C");
static_assert(sizeof(UBPC_CharaFollower_C) == 0x000378, "Wrong size on UBPC_CharaFollower_C");
static_assert(offsetof(UBPC_CharaFollower_C, UberGraphFrame) == 0x0000B0, "Member 'UBPC_CharaFollower_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetDistance) == 0x0000B8, "Member 'UBPC_CharaFollower_C::TargetDistance' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, ToTargetDirection) == 0x0000BC, "Member 'UBPC_CharaFollower_C::ToTargetDirection' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, DotForward) == 0x0000C8, "Member 'UBPC_CharaFollower_C::DotForward' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, DotRight) == 0x0000CC, "Member 'UBPC_CharaFollower_C::DotRight' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, Velocity) == 0x0000D0, "Member 'UBPC_CharaFollower_C::Velocity' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetActor) == 0x0000D8, "Member 'UBPC_CharaFollower_C::TargetActor' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NowAndTargetAngle) == 0x0000E0, "Member 'UBPC_CharaFollower_C::NowAndTargetAngle' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, DeltaSec) == 0x0000E4, "Member 'UBPC_CharaFollower_C::DeltaSec' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NextPos) == 0x0000E8, "Member 'UBPC_CharaFollower_C::NextPos' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NextMoveRotate) == 0x0000F4, "Member 'UBPC_CharaFollower_C::NextMoveRotate' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NowMotion) == 0x000100, "Member 'UBPC_CharaFollower_C::NowMotion' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, EvtDis_StoppedTarget) == 0x000108, "Member 'UBPC_CharaFollower_C::EvtDis_StoppedTarget' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetPos) == 0x000118, "Member 'UBPC_CharaFollower_C::TargetPos' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, EvtDis_LeaveTarget) == 0x000128, "Member 'UBPC_CharaFollower_C::EvtDis_LeaveTarget' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetActorList) == 0x000138, "Member 'UBPC_CharaFollower_C::TargetActorList' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, CapsuleRadius) == 0x000148, "Member 'UBPC_CharaFollower_C::CapsuleRadius' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, CapsuleHalfHeight) == 0x00014C, "Member 'UBPC_CharaFollower_C::CapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetDir) == 0x000150, "Member 'UBPC_CharaFollower_C::TargetDir' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetDir_Plane) == 0x00015C, "Member 'UBPC_CharaFollower_C::TargetDir_Plane' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetMoveRotate) == 0x000168, "Member 'UBPC_CharaFollower_C::TargetMoveRotate' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NowPos) == 0x000174, "Member 'UBPC_CharaFollower_C::NowPos' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, FloatingIK) == 0x000180, "Member 'UBPC_CharaFollower_C::FloatingIK' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, bPlayerLook) == 0x000181, "Member 'UBPC_CharaFollower_C::bPlayerLook' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NaviType) == 0x000182, "Member 'UBPC_CharaFollower_C::NaviType' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, WillStop) == 0x000183, "Member 'UBPC_CharaFollower_C::WillStop' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, IdleReqCounter) == 0x000184, "Member 'UBPC_CharaFollower_C::IdleReqCounter' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, ReqMotion) == 0x000188, "Member 'UBPC_CharaFollower_C::ReqMotion' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetDistance_Vec) == 0x00018C, "Member 'UBPC_CharaFollower_C::TargetDistance_Vec' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, FllowPlaceCounter) == 0x000198, "Member 'UBPC_CharaFollower_C::FllowPlaceCounter' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, WALL_HEIGHT) == 0x00019C, "Member 'UBPC_CharaFollower_C::WALL_HEIGHT' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, WallAngle) == 0x0001A0, "Member 'UBPC_CharaFollower_C::WallAngle' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, CollisionRadius) == 0x0001A4, "Member 'UBPC_CharaFollower_C::CollisionRadius' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, CollisionHalfHeight) == 0x0001A8, "Member 'UBPC_CharaFollower_C::CollisionHalfHeight' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, CollisionOffsetZ) == 0x0001AC, "Member 'UBPC_CharaFollower_C::CollisionOffsetZ' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NaviDevilBlock) == 0x0001B0, "Member 'UBPC_CharaFollower_C::NaviDevilBlock' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NPCCollision) == 0x0001C0, "Member 'UBPC_CharaFollower_C::NPCCollision' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NaviParam) == 0x0001C8, "Member 'UBPC_CharaFollower_C::NaviParam' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, VelocityUpdateLock) == 0x000260, "Member 'UBPC_CharaFollower_C::VelocityUpdateLock' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, HitCounter) == 0x000264, "Member 'UBPC_CharaFollower_C::HitCounter' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, SecondAfterHit) == 0x000268, "Member 'UBPC_CharaFollower_C::SecondAfterHit' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, GimmickMotionCounter) == 0x00026C, "Member 'UBPC_CharaFollower_C::GimmickMotionCounter' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, Rendered) == 0x000270, "Member 'UBPC_CharaFollower_C::Rendered' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, MeshEffects) == 0x000278, "Member 'UBPC_CharaFollower_C::MeshEffects' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, MeshEffects_SecondsBeforeInactive) == 0x000288, "Member 'UBPC_CharaFollower_C::MeshEffects_SecondsBeforeInactive' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, CheckMeshEffects) == 0x000298, "Member 'UBPC_CharaFollower_C::CheckMeshEffects' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, EvtDis_WarpBasePos) == 0x0002A0, "Member 'UBPC_CharaFollower_C::EvtDis_WarpBasePos' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TutorialMoving) == 0x0002B0, "Member 'UBPC_CharaFollower_C::TutorialMoving' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, MOVE_POINT_SPEED1) == 0x0002B4, "Member 'UBPC_CharaFollower_C::MOVE_POINT_SPEED1' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, MeshOffsetCounter) == 0x0002B8, "Member 'UBPC_CharaFollower_C::MeshOffsetCounter' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, MeshOffsetCounterEnd) == 0x0002BC, "Member 'UBPC_CharaFollower_C::MeshOffsetCounterEnd' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, PrevMeshOffset) == 0x0002C0, "Member 'UBPC_CharaFollower_C::PrevMeshOffset' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, LookRotate) == 0x0002CC, "Member 'UBPC_CharaFollower_C::LookRotate' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, DistanceTooCloseToPlayer) == 0x0002D8, "Member 'UBPC_CharaFollower_C::DistanceTooCloseToPlayer' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, FollowerState) == 0x0002DC, "Member 'UBPC_CharaFollower_C::FollowerState' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, StateCounter) == 0x0002E0, "Member 'UBPC_CharaFollower_C::StateCounter' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, GimmickRoute_TargetPos) == 0x0002E4, "Member 'UBPC_CharaFollower_C::GimmickRoute_TargetPos' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, GimmickRoute_Alpha) == 0x0002F0, "Member 'UBPC_CharaFollower_C::GimmickRoute_Alpha' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, MoveEffect) == 0x0002F8, "Member 'UBPC_CharaFollower_C::MoveEffect' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, MOVE_POINT_SPEED2) == 0x000300, "Member 'UBPC_CharaFollower_C::MOVE_POINT_SPEED2' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, GimmickRoute_Right) == 0x000304, "Member 'UBPC_CharaFollower_C::GimmickRoute_Right' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, GimmickEffect) == 0x000308, "Member 'UBPC_CharaFollower_C::GimmickEffect' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, GimmickEffectPos) == 0x000310, "Member 'UBPC_CharaFollower_C::GimmickEffectPos' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, EffectDeactivate) == 0x00031C, "Member 'UBPC_CharaFollower_C::EffectDeactivate' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, Visible) == 0x00031D, "Member 'UBPC_CharaFollower_C::Visible' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, PrevVisible) == 0x00031E, "Member 'UBPC_CharaFollower_C::PrevVisible' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, PositionLeft) == 0x00031F, "Member 'UBPC_CharaFollower_C::PositionLeft' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, HideReason) == 0x000320, "Member 'UBPC_CharaFollower_C::HideReason' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, IsMermaid) == 0x000324, "Member 'UBPC_CharaFollower_C::IsMermaid' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, IsMoveEffect) == 0x000325, "Member 'UBPC_CharaFollower_C::IsMoveEffect' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NaviParamName) == 0x000328, "Member 'UBPC_CharaFollower_C::NaviParamName' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, MotionComponent) == 0x000330, "Member 'UBPC_CharaFollower_C::MotionComponent' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, StopUntilPlayerMove) == 0x000338, "Member 'UBPC_CharaFollower_C::StopUntilPlayerMove' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, NaviScale) == 0x00033C, "Member 'UBPC_CharaFollower_C::NaviScale' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, RidingCoaster) == 0x000340, "Member 'UBPC_CharaFollower_C::RidingCoaster' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, DebugMenu_GimmickColision) == 0x000341, "Member 'UBPC_CharaFollower_C::DebugMenu_GimmickColision' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, DebugMenu_CameraInside) == 0x000342, "Member 'UBPC_CharaFollower_C::DebugMenu_CameraInside' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, LegIK) == 0x000343, "Member 'UBPC_CharaFollower_C::LegIK' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetCoasterList) == 0x000348, "Member 'UBPC_CharaFollower_C::TargetCoasterList' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, RecordGimmickDistance) == 0x000358, "Member 'UBPC_CharaFollower_C::RecordGimmickDistance' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, RecordGimmickDistanceCounter) == 0x00035C, "Member 'UBPC_CharaFollower_C::RecordGimmickDistanceCounter' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, TargetGimmickList) == 0x000360, "Member 'UBPC_CharaFollower_C::TargetGimmickList' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, FromLoad) == 0x000370, "Member 'UBPC_CharaFollower_C::FromLoad' has a wrong offset!");
static_assert(offsetof(UBPC_CharaFollower_C, IsGimmickEffect) == 0x000371, "Member 'UBPC_CharaFollower_C::IsGimmickEffect' has a wrong offset!");

}

