#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CoasterSpline

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_CoasterSplineBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CoasterSpline.BP_CoasterSpline_C
// 0x0238 (0x04B0 - 0x0278)
class ABP_CoasterSpline_C final : public ABP_CoasterSplineBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CoasterSpline_C;                 // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       Spline;                                            // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TimeLine_RideCamera_Alpha_E3F263DE477BDFFF0536178B77161765; // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TimeLine_RideCamera__Direction_E3F263DE477BDFFF0536178B77161765; // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9631[0x3];                                     // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TimeLine_RideCamera;                               // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _______1_Alpha_188B3F4B4B81BC054869B9A7679899EB;   // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______1__Direction_188B3F4B4B81BC054869B9A7679899EB; // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9632[0x3];                                     // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______1;                                          // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _______0_Alpha_E54607C54664E69A749B22929C57E2D6;   // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_E54607C54664E69A749B22929C57E2D6; // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9633[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_ShowSpline_Alpha_1A996BE741CFE5F1F259A089DF6EA59E; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_ShowSpline__Direction_1A996BE741CFE5F1F259A089DF6EA59E; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9634[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_ShowSpline;                               // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_ActiveSpline_Alpha_762B6AED45E3C13D50AE188610A9D1CA; // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_ActiveSpline__Direction_762B6AED45E3C13D50AE188610A9D1CA; // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9635[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_ActiveSpline;                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoasterGimmickBase_C*               StartGimmick;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoasterGimmickBase_C*               EndGimmick;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FromStartGimmick;                                  // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9636[0x3];                                     // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SplinePos;                                         // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineReverse;                                     // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StartingSplineIsStartGimmick;                      // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9637[0x6];                                     // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerMovementComponent*               PlayerMovementComp;                                // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPC_CharaSplineMover_C*                SplineMover;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoasterGimmickBase_C*               CurrentGimmick;                                    // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>           SplineMeshs;                                       // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>       DMIs;                                              // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                StartDir;                                          // 0x0330(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetZ;                                           // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PrevPlayerRotate;                                  // 0x0340(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               PrevCameraRot;                                     // 0x034C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         MovePerSec;                                        // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9638[0x4];                                     // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 SplineRollList;                                    // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AddSplinePointEnd;                                 // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9639[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineComponent*                       Spline_ForPlayerPos;                               // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSaveID;                                       // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaveID_Start;                                      // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Calc_SaveID;                                       // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_963A[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                RidingForward;                                     // 0x038C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RidingUpVec;                                       // 0x0398(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerStartLocation1;                              // 0x03A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerStartLocation2;                              // 0x03B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PlayerStartRotate1;                                // 0x03BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               PlayerStartRotate2;                                // 0x03C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_963B[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraComponent*                       SubCamera;                                         // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoasterCamera_C*                    CoasterCameraActor;                                // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerCameraLocation;                              // 0x03E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PlayerCameraRotate;                                // 0x03F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         PlayerCameraFOV;                                   // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_963C[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBoxComponent*                          FloorCollision;                                    // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Slope;                                             // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SplineForward;                                     // 0x0414(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetCameraLocation;                              // 0x0420(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TargetCameraRotate;                                // 0x042C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         PlayerCameraDistance;                              // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetCameraDistance;                              // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PlayerCameraDir;                                   // 0x0440(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetCameraDir;                                   // 0x044C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                PlayerCameraLook;                                  // 0x0458(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetCameraLook;                                  // 0x0464(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   StartFlag;                                         // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CoasterSpline_C*>            ChainOpenCoasters;                                 // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UDataBP_MapCoaster_C*                   DataAsset;                                         // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          BGM;                                               // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NowSkip;                                           // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Skip_WhenFadeOut;                                  // 0x0499(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_963D[0x6];                                     // 0x049A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAtomComponent*                         CoasterMoveSE;                                     // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreCameraCollision;                             // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UsedSkip;                                          // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStartGimmickOpen;                                // 0x04AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEndGimmickOpen;                                  // 0x04AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayerEventTriggerMove;                            // 0x04AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PlayerEventTriggerMoved;                           // 0x04AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_CoasterSpline(int32 EntryPoint);
	void OnEndFadeOut_ForSkip();
	void MovePlayerEventTrigger();
	void ProcSkip();
	void BPI_UpdateCoasterFlag();
	void OnEvtDis_MapStart();
	void ReceiveBeginPlay();
	void Stop_PlayerStartPositionSetting();
	void PlayerStartPositionSetting();
	void _EndActiveSpline_OUT();
	void EvtDis_EndActiveSpline_IN();
	void EvtDis_Stop_(class UBPC_CharaSplineMover_C* ThisComponent);
	void OnArriveSplineEnd(class UBPC_CharaSplineMover_C* ThisComponent);
	void TimeLine_RideCamera__UpdateFunc();
	void TimeLine_RideCamera__FinishedFunc();
	void _______1__UpdateFunc();
	void _______1__FinishedFunc();
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();
	void Timeline_ShowSpline__UpdateFunc();
	void Timeline_ShowSpline__FinishedFunc();
	void Timeline_ActiveSpline__UpdateFunc();
	void Timeline_ActiveSpline__FinishedFunc();
	void UserConstructionScript();
	void GetSplineMeshs(TArray<class USplineMeshComponent*>* Param_SplineMeshs);
	void GetSplineUpVec(float Distance, struct FVector* UpVec);
	void GetSplineForward(float Distance, bool Reverse, struct FVector* Forward);
	void CalcPlayerCameraRot(const struct FRotator& Param_PrevCameraRot, const struct FRotator& PrevPlayerRot, const struct FRotator& NextPlayerRot, struct FRotator* NextPlayerCameraRot);
	void MakeDMI();
	void CalcAddSplinePoint();
	void CalcSplineForMove();
	void GetSpline(class USplineComponent** Param_Spline);
	void CalcSaveID();
	void GetGlobalSaveID(int32* SaveId);
	void CalcCoasterCameraPos(struct FVector* Location, struct FRotator* Rotate, float* FOV);
	void DebugOpen(bool Open);
	void GetNaviComponent(bool* Valid, class UActorComponent** Comp);
	void TraseGround(const struct FVector& Pos, struct FVector* OutPos);
	void BPI_GetGlobalSaveID(int32* SaveId);
	void BPI_GetIsOpen(bool* StartGimmickOpen, bool* EndGimmickOpen);
	void ShowSpline(bool Show, bool Anim);
	void ActiveSplineAnim(bool Active, bool Anim);
	void MoveSpline(bool Param_FromStartGimmick);
	void SetOpen(bool Open, bool Param_StartGimmick, bool Param_EndGimmick, bool UpdateIcon, bool UpdateNaviDeactive, bool UpdateChain);
	void GetStartGimmick(class AActor** Actor);
	void GetEndGimmick(class AActor** Actor);
	void CalcOpen();
	void ChainOpen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CoasterSpline_C">();
	}
	static class ABP_CoasterSpline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CoasterSpline_C>();
	}
};
static_assert(alignof(ABP_CoasterSpline_C) == 0x000008, "Wrong alignment on ABP_CoasterSpline_C");
static_assert(sizeof(ABP_CoasterSpline_C) == 0x0004B0, "Wrong size on ABP_CoasterSpline_C");
static_assert(offsetof(ABP_CoasterSpline_C, UberGraphFrame_BP_CoasterSpline_C) == 0x000278, "Member 'ABP_CoasterSpline_C::UberGraphFrame_BP_CoasterSpline_C' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Spline) == 0x000280, "Member 'ABP_CoasterSpline_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, TimeLine_RideCamera_Alpha_E3F263DE477BDFFF0536178B77161765) == 0x000288, "Member 'ABP_CoasterSpline_C::TimeLine_RideCamera_Alpha_E3F263DE477BDFFF0536178B77161765' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, TimeLine_RideCamera__Direction_E3F263DE477BDFFF0536178B77161765) == 0x00028C, "Member 'ABP_CoasterSpline_C::TimeLine_RideCamera__Direction_E3F263DE477BDFFF0536178B77161765' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, TimeLine_RideCamera) == 0x000290, "Member 'ABP_CoasterSpline_C::TimeLine_RideCamera' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, _______1_Alpha_188B3F4B4B81BC054869B9A7679899EB) == 0x000298, "Member 'ABP_CoasterSpline_C::_______1_Alpha_188B3F4B4B81BC054869B9A7679899EB' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, _______1__Direction_188B3F4B4B81BC054869B9A7679899EB) == 0x00029C, "Member 'ABP_CoasterSpline_C::_______1__Direction_188B3F4B4B81BC054869B9A7679899EB' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, _______1) == 0x0002A0, "Member 'ABP_CoasterSpline_C::_______1' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, _______0_Alpha_E54607C54664E69A749B22929C57E2D6) == 0x0002A8, "Member 'ABP_CoasterSpline_C::_______0_Alpha_E54607C54664E69A749B22929C57E2D6' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, _______0__Direction_E54607C54664E69A749B22929C57E2D6) == 0x0002AC, "Member 'ABP_CoasterSpline_C::_______0__Direction_E54607C54664E69A749B22929C57E2D6' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, _______0) == 0x0002B0, "Member 'ABP_CoasterSpline_C::_______0' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Timeline_ShowSpline_Alpha_1A996BE741CFE5F1F259A089DF6EA59E) == 0x0002B8, "Member 'ABP_CoasterSpline_C::Timeline_ShowSpline_Alpha_1A996BE741CFE5F1F259A089DF6EA59E' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Timeline_ShowSpline__Direction_1A996BE741CFE5F1F259A089DF6EA59E) == 0x0002BC, "Member 'ABP_CoasterSpline_C::Timeline_ShowSpline__Direction_1A996BE741CFE5F1F259A089DF6EA59E' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Timeline_ShowSpline) == 0x0002C0, "Member 'ABP_CoasterSpline_C::Timeline_ShowSpline' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Timeline_ActiveSpline_Alpha_762B6AED45E3C13D50AE188610A9D1CA) == 0x0002C8, "Member 'ABP_CoasterSpline_C::Timeline_ActiveSpline_Alpha_762B6AED45E3C13D50AE188610A9D1CA' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Timeline_ActiveSpline__Direction_762B6AED45E3C13D50AE188610A9D1CA) == 0x0002CC, "Member 'ABP_CoasterSpline_C::Timeline_ActiveSpline__Direction_762B6AED45E3C13D50AE188610A9D1CA' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Timeline_ActiveSpline) == 0x0002D0, "Member 'ABP_CoasterSpline_C::Timeline_ActiveSpline' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, StartGimmick) == 0x0002D8, "Member 'ABP_CoasterSpline_C::StartGimmick' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, EndGimmick) == 0x0002E0, "Member 'ABP_CoasterSpline_C::EndGimmick' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, FromStartGimmick) == 0x0002E8, "Member 'ABP_CoasterSpline_C::FromStartGimmick' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, SplinePos) == 0x0002EC, "Member 'ABP_CoasterSpline_C::SplinePos' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, SplineReverse) == 0x0002F0, "Member 'ABP_CoasterSpline_C::SplineReverse' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, StartingSplineIsStartGimmick) == 0x0002F1, "Member 'ABP_CoasterSpline_C::StartingSplineIsStartGimmick' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerMovementComp) == 0x0002F8, "Member 'ABP_CoasterSpline_C::PlayerMovementComp' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, SplineMover) == 0x000300, "Member 'ABP_CoasterSpline_C::SplineMover' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, CurrentGimmick) == 0x000308, "Member 'ABP_CoasterSpline_C::CurrentGimmick' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, SplineMeshs) == 0x000310, "Member 'ABP_CoasterSpline_C::SplineMeshs' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, DMIs) == 0x000320, "Member 'ABP_CoasterSpline_C::DMIs' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, StartDir) == 0x000330, "Member 'ABP_CoasterSpline_C::StartDir' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, OffsetZ) == 0x00033C, "Member 'ABP_CoasterSpline_C::OffsetZ' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PrevPlayerRotate) == 0x000340, "Member 'ABP_CoasterSpline_C::PrevPlayerRotate' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PrevCameraRot) == 0x00034C, "Member 'ABP_CoasterSpline_C::PrevCameraRot' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, MovePerSec) == 0x000358, "Member 'ABP_CoasterSpline_C::MovePerSec' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, SplineRollList) == 0x000360, "Member 'ABP_CoasterSpline_C::SplineRollList' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, AddSplinePointEnd) == 0x000370, "Member 'ABP_CoasterSpline_C::AddSplinePointEnd' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Spline_ForPlayerPos) == 0x000378, "Member 'ABP_CoasterSpline_C::Spline_ForPlayerPos' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, LocalSaveID) == 0x000380, "Member 'ABP_CoasterSpline_C::LocalSaveID' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, SaveID_Start) == 0x000384, "Member 'ABP_CoasterSpline_C::SaveID_Start' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Calc_SaveID) == 0x000388, "Member 'ABP_CoasterSpline_C::Calc_SaveID' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, RidingForward) == 0x00038C, "Member 'ABP_CoasterSpline_C::RidingForward' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, RidingUpVec) == 0x000398, "Member 'ABP_CoasterSpline_C::RidingUpVec' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerStartLocation1) == 0x0003A4, "Member 'ABP_CoasterSpline_C::PlayerStartLocation1' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerStartLocation2) == 0x0003B0, "Member 'ABP_CoasterSpline_C::PlayerStartLocation2' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerStartRotate1) == 0x0003BC, "Member 'ABP_CoasterSpline_C::PlayerStartRotate1' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerStartRotate2) == 0x0003C8, "Member 'ABP_CoasterSpline_C::PlayerStartRotate2' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, SubCamera) == 0x0003D8, "Member 'ABP_CoasterSpline_C::SubCamera' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, CoasterCameraActor) == 0x0003E0, "Member 'ABP_CoasterSpline_C::CoasterCameraActor' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerCameraLocation) == 0x0003E8, "Member 'ABP_CoasterSpline_C::PlayerCameraLocation' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerCameraRotate) == 0x0003F4, "Member 'ABP_CoasterSpline_C::PlayerCameraRotate' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerCameraFOV) == 0x000400, "Member 'ABP_CoasterSpline_C::PlayerCameraFOV' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, FloorCollision) == 0x000408, "Member 'ABP_CoasterSpline_C::FloorCollision' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Slope) == 0x000410, "Member 'ABP_CoasterSpline_C::Slope' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, SplineForward) == 0x000414, "Member 'ABP_CoasterSpline_C::SplineForward' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, TargetCameraLocation) == 0x000420, "Member 'ABP_CoasterSpline_C::TargetCameraLocation' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, TargetCameraRotate) == 0x00042C, "Member 'ABP_CoasterSpline_C::TargetCameraRotate' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerCameraDistance) == 0x000438, "Member 'ABP_CoasterSpline_C::PlayerCameraDistance' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, TargetCameraDistance) == 0x00043C, "Member 'ABP_CoasterSpline_C::TargetCameraDistance' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerCameraDir) == 0x000440, "Member 'ABP_CoasterSpline_C::PlayerCameraDir' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, TargetCameraDir) == 0x00044C, "Member 'ABP_CoasterSpline_C::TargetCameraDir' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerCameraLook) == 0x000458, "Member 'ABP_CoasterSpline_C::PlayerCameraLook' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, TargetCameraLook) == 0x000464, "Member 'ABP_CoasterSpline_C::TargetCameraLook' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, StartFlag) == 0x000470, "Member 'ABP_CoasterSpline_C::StartFlag' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, ChainOpenCoasters) == 0x000478, "Member 'ABP_CoasterSpline_C::ChainOpenCoasters' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, DataAsset) == 0x000488, "Member 'ABP_CoasterSpline_C::DataAsset' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, BGM) == 0x000490, "Member 'ABP_CoasterSpline_C::BGM' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, NowSkip) == 0x000498, "Member 'ABP_CoasterSpline_C::NowSkip' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, Skip_WhenFadeOut) == 0x000499, "Member 'ABP_CoasterSpline_C::Skip_WhenFadeOut' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, CoasterMoveSE) == 0x0004A0, "Member 'ABP_CoasterSpline_C::CoasterMoveSE' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, IgnoreCameraCollision) == 0x0004A8, "Member 'ABP_CoasterSpline_C::IgnoreCameraCollision' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, UsedSkip) == 0x0004A9, "Member 'ABP_CoasterSpline_C::UsedSkip' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, IsStartGimmickOpen) == 0x0004AA, "Member 'ABP_CoasterSpline_C::IsStartGimmickOpen' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, IsEndGimmickOpen) == 0x0004AB, "Member 'ABP_CoasterSpline_C::IsEndGimmickOpen' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerEventTriggerMove) == 0x0004AC, "Member 'ABP_CoasterSpline_C::PlayerEventTriggerMove' has a wrong offset!");
static_assert(offsetof(ABP_CoasterSpline_C, PlayerEventTriggerMoved) == 0x0004AD, "Member 'ABP_CoasterSpline_C::PlayerEventTriggerMoved' has a wrong offset!");

}
