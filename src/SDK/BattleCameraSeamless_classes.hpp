#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleCameraSeamless

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BattleCamera_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleCameraSeamless.BattleCameraSeamless_C
// 0x01A0 (0x0B00 - 0x0960)
class ABattleCameraSeamless_C final : public ABattleCamera_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BattleCameraSeamless_C;             // 0x0960(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                RootShakeOffset;                                   // 0x0968(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootShakeSpeed;                                    // 0x0974(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LookAtShakeOffset;                                 // 0x0980(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LookAtShakeSpeed;                                  // 0x098C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootShakeDegree;                                   // 0x0998(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LookAtShakeDegree;                                 // 0x09A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LookAtDistance;                                    // 0x09B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootShakeDistance;                                 // 0x09B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LookAtShakeDistance;                               // 0x09C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationDiff;                                      // 0x09CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RotationDiff;                                      // 0x09D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                BeforeLocation;                                    // 0x09E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BeforeRotation;                                    // 0x09F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                ShakeCaprisiousness;                               // 0x09FC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CaprisiousnessDegree;                              // 0x0A08(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationInatia;                                    // 0x0A14(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RotationInatia;                                    // 0x0A20(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60A5[0x4];                                     // 0x0A2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            InatiaPropagationRate_Dynamic;                     // 0x0A30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverrunDistance;                                   // 0x0A38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocationDiffNorm;                                  // 0x0A3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationDiffNorm;                                  // 0x0A40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverrunDegree;                                     // 0x0A44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationInatiaDelta;                               // 0x0A48(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RotationInatiaDelta;                               // 0x0A54(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         OverrunDistanceMinusRate;                          // 0x0A60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverrunDdegreeMinusRate;                           // 0x0A64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverrunDistanceMinus;                              // 0x0A68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverrunDegreeMinus;                                // 0x0A6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BeforeLocationDiff;                                // 0x0A70(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BeforeRotationDiff;                                // 0x0A7C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UCurveFloat*                            InatiaPropagationRate_Static;                      // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoveShakeAmplifier;                                // 0x0A90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A6[0x4];                                     // 0x0A94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            MoveShakeAmpliferMax;                              // 0x0A98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            MoveShakeAmpliferRate;                             // 0x0AA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RootRole;                                          // 0x0AA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RootRoleSpeed;                                     // 0x0AAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RootRoleDegree;                                    // 0x0AB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RootRoleMaxDegree;                                 // 0x0AB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShakeCaprisiousnessMax;                            // 0x0AB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MassLocation;                                      // 0x0ABC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForcusRate;                                        // 0x0AC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               MassRotation;                                      // 0x0ACC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                RootShakeSign;                                     // 0x0AD8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LookAtShakeSign;                                   // 0x0AE4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsDoShake;                                       // 0x0AF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60A7[0x3];                                     // 0x0AF1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MasterVolume;                                      // 0x0AF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocationInatiaDeltaRate;                           // 0x0AF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationInatiaDeltaRate;                           // 0x0AFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattleCameraSeamless(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void SetMainCamera(float BlendTime);
	void OnInterpFinished(float CurrentBlendSpeed);
	void CurrentForce(float BlendTime);
	void ReceiveBeginPlay();
	void UpDateShakeOffset(float Delta);
	void CheckDegreeOvered(struct FVector& Degree);
	void InitDiff();
	void CalcCapriciousness(float Delta);
	void DebugPrint();
	void CalcInatia(float Delta);
	void SubRotator(const struct FRotator& A, const struct FRotator& B, struct FRotator* Ret);
	void ResetOverrunDistanceRate();
	void ResetOverrunDegreeRate();
	void UpdateMoveShakeAmplifier();
	void CheckDegreeOvered_Float(float& Degree);
	void VecCosDeg(struct FVector& Vec, struct FVector* CosDeg);
	void VecSinDeg(struct FVector& Vec, struct FVector* CosDeg);
	void InatiaCancel();
	void InitShakeDegree();
	void ShakePause();
	void ShakeResume();
	void ShakeStart();
	void ShakeStop();
	void IsShaking(bool* Shaking);
	void MasterVolumeUp(float DeltaTime);
	void UpdateComponent(float Delta, bool* ContinueUpdate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleCameraSeamless_C">();
	}
	static class ABattleCameraSeamless_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleCameraSeamless_C>();
	}
};
static_assert(alignof(ABattleCameraSeamless_C) == 0x000010, "Wrong alignment on ABattleCameraSeamless_C");
static_assert(sizeof(ABattleCameraSeamless_C) == 0x000B00, "Wrong size on ABattleCameraSeamless_C");
static_assert(offsetof(ABattleCameraSeamless_C, UberGraphFrame_BattleCameraSeamless_C) == 0x000960, "Member 'ABattleCameraSeamless_C::UberGraphFrame_BattleCameraSeamless_C' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RootShakeOffset) == 0x000968, "Member 'ABattleCameraSeamless_C::RootShakeOffset' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RootShakeSpeed) == 0x000974, "Member 'ABattleCameraSeamless_C::RootShakeSpeed' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LookAtShakeOffset) == 0x000980, "Member 'ABattleCameraSeamless_C::LookAtShakeOffset' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LookAtShakeSpeed) == 0x00098C, "Member 'ABattleCameraSeamless_C::LookAtShakeSpeed' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RootShakeDegree) == 0x000998, "Member 'ABattleCameraSeamless_C::RootShakeDegree' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LookAtShakeDegree) == 0x0009A4, "Member 'ABattleCameraSeamless_C::LookAtShakeDegree' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LookAtDistance) == 0x0009B0, "Member 'ABattleCameraSeamless_C::LookAtDistance' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RootShakeDistance) == 0x0009B4, "Member 'ABattleCameraSeamless_C::RootShakeDistance' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LookAtShakeDistance) == 0x0009C0, "Member 'ABattleCameraSeamless_C::LookAtShakeDistance' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LocationDiff) == 0x0009CC, "Member 'ABattleCameraSeamless_C::LocationDiff' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RotationDiff) == 0x0009D8, "Member 'ABattleCameraSeamless_C::RotationDiff' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, BeforeLocation) == 0x0009E4, "Member 'ABattleCameraSeamless_C::BeforeLocation' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, BeforeRotation) == 0x0009F0, "Member 'ABattleCameraSeamless_C::BeforeRotation' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, ShakeCaprisiousness) == 0x0009FC, "Member 'ABattleCameraSeamless_C::ShakeCaprisiousness' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, CaprisiousnessDegree) == 0x000A08, "Member 'ABattleCameraSeamless_C::CaprisiousnessDegree' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LocationInatia) == 0x000A14, "Member 'ABattleCameraSeamless_C::LocationInatia' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RotationInatia) == 0x000A20, "Member 'ABattleCameraSeamless_C::RotationInatia' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, InatiaPropagationRate_Dynamic) == 0x000A30, "Member 'ABattleCameraSeamless_C::InatiaPropagationRate_Dynamic' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, OverrunDistance) == 0x000A38, "Member 'ABattleCameraSeamless_C::OverrunDistance' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LocationDiffNorm) == 0x000A3C, "Member 'ABattleCameraSeamless_C::LocationDiffNorm' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RotationDiffNorm) == 0x000A40, "Member 'ABattleCameraSeamless_C::RotationDiffNorm' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, OverrunDegree) == 0x000A44, "Member 'ABattleCameraSeamless_C::OverrunDegree' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LocationInatiaDelta) == 0x000A48, "Member 'ABattleCameraSeamless_C::LocationInatiaDelta' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RotationInatiaDelta) == 0x000A54, "Member 'ABattleCameraSeamless_C::RotationInatiaDelta' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, OverrunDistanceMinusRate) == 0x000A60, "Member 'ABattleCameraSeamless_C::OverrunDistanceMinusRate' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, OverrunDdegreeMinusRate) == 0x000A64, "Member 'ABattleCameraSeamless_C::OverrunDdegreeMinusRate' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, OverrunDistanceMinus) == 0x000A68, "Member 'ABattleCameraSeamless_C::OverrunDistanceMinus' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, OverrunDegreeMinus) == 0x000A6C, "Member 'ABattleCameraSeamless_C::OverrunDegreeMinus' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, BeforeLocationDiff) == 0x000A70, "Member 'ABattleCameraSeamless_C::BeforeLocationDiff' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, BeforeRotationDiff) == 0x000A7C, "Member 'ABattleCameraSeamless_C::BeforeRotationDiff' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, InatiaPropagationRate_Static) == 0x000A88, "Member 'ABattleCameraSeamless_C::InatiaPropagationRate_Static' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, MoveShakeAmplifier) == 0x000A90, "Member 'ABattleCameraSeamless_C::MoveShakeAmplifier' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, MoveShakeAmpliferMax) == 0x000A98, "Member 'ABattleCameraSeamless_C::MoveShakeAmpliferMax' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, MoveShakeAmpliferRate) == 0x000AA0, "Member 'ABattleCameraSeamless_C::MoveShakeAmpliferRate' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RootRole) == 0x000AA8, "Member 'ABattleCameraSeamless_C::RootRole' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RootRoleSpeed) == 0x000AAC, "Member 'ABattleCameraSeamless_C::RootRoleSpeed' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RootRoleDegree) == 0x000AB0, "Member 'ABattleCameraSeamless_C::RootRoleDegree' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RootRoleMaxDegree) == 0x000AB4, "Member 'ABattleCameraSeamless_C::RootRoleMaxDegree' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, ShakeCaprisiousnessMax) == 0x000AB8, "Member 'ABattleCameraSeamless_C::ShakeCaprisiousnessMax' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, MassLocation) == 0x000ABC, "Member 'ABattleCameraSeamless_C::MassLocation' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, ForcusRate) == 0x000AC8, "Member 'ABattleCameraSeamless_C::ForcusRate' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, MassRotation) == 0x000ACC, "Member 'ABattleCameraSeamless_C::MassRotation' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RootShakeSign) == 0x000AD8, "Member 'ABattleCameraSeamless_C::RootShakeSign' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LookAtShakeSign) == 0x000AE4, "Member 'ABattleCameraSeamless_C::LookAtShakeSign' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, M_IsDoShake) == 0x000AF0, "Member 'ABattleCameraSeamless_C::M_IsDoShake' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, MasterVolume) == 0x000AF4, "Member 'ABattleCameraSeamless_C::MasterVolume' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, LocationInatiaDeltaRate) == 0x000AF8, "Member 'ABattleCameraSeamless_C::LocationInatiaDeltaRate' has a wrong offset!");
static_assert(offsetof(ABattleCameraSeamless_C, RotationInatiaDeltaRate) == 0x000AFC, "Member 'ABattleCameraSeamless_C::RotationInatiaDeltaRate' has a wrong offset!");

}

