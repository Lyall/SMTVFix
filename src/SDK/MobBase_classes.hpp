#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MobBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MobBase.MobBase_C
// 0x01A0 (0x03C0 - 0x0220)
class AMobBase_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Capsule;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh_Face;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh_MasterPose;                                   // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh_SKProp;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RightHandProp;                                     // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LeftHandProp;                                      // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh_Hair;                                         // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh_Body;                                         // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HeadProp;                                          // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         _______0___Track_0_99F6A34B449B51A9168273ADD40545BE; // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_99F6A34B449B51A9168273ADD40545BE; // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2614[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          MasterPoseMesh;                                    // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Face_ID;                                           // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Hair_ID;                                           // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Body_ID;                                           // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HeadProp_ID;                                       // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SKProp_ID;                                         // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RandomCreateParts;                                 // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2615[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AnimationSet_ID;                                   // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationIndex;                                    // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RandomCreateAnimation;                             // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2616[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScaleXY;                                           // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleZ;                                            // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2617[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 FaceList;                                          // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 HairList;                                          // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 BodyList;                                          // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 HeadPropList;                                      // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 SKPropList;                                        // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 AnimationSetList;                                  // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ScaleXY_Min;                                       // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleXY_Max;                                       // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleZ_Min;                                        // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleZ_Max;                                        // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RandomCreateScale;                                 // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2618[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpeedModifier;                                     // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   FaceColorList;                                     // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                   HairColorList;                                     // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                   BodyColorList;                                     // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          UseRandomColor;                                    // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2619[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           FaceColor;                                         // 0x036C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HairColor;                                         // 0x037C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BodyColor;                                         // 0x038C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RandomCreateColor;                                 // 0x039C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_261A[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DMI_Face;                                          // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_Hair;                                          // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_Body;                                          // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableLightingChannels;                           // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_MobBase(int32 EntryPoint);
	void TempHidden();
	void ReceiveBeginPlay();
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();
	void UserConstructionScript();
	void RandomChoice(TArray<int32>& InList, int32* OutID);
	void RandomColor(TArray<struct FLinearColor>& InList, struct FLinearColor* OutColor);
	void DMIRandomColor(class USkeletalMeshComponent*& Mesh, TArray<struct FLinearColor>& ColorList, bool RandomColor, const struct FLinearColor& FixColor, class UMaterialInstanceDynamic** OutDMI, struct FLinearColor* OutColor);
	void PrintLog();
	void RandomizeAnimationPosition();
	void ApplyLightingChannel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MobBase_C">();
	}
	static class AMobBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMobBase_C>();
	}
};
static_assert(alignof(AMobBase_C) == 0x000008, "Wrong alignment on AMobBase_C");
static_assert(sizeof(AMobBase_C) == 0x0003C0, "Wrong size on AMobBase_C");
static_assert(offsetof(AMobBase_C, UberGraphFrame) == 0x000220, "Member 'AMobBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Capsule) == 0x000228, "Member 'AMobBase_C::Capsule' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Mesh_Face) == 0x000230, "Member 'AMobBase_C::Mesh_Face' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Mesh_MasterPose) == 0x000238, "Member 'AMobBase_C::Mesh_MasterPose' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Mesh_SKProp) == 0x000240, "Member 'AMobBase_C::Mesh_SKProp' has a wrong offset!");
static_assert(offsetof(AMobBase_C, RightHandProp) == 0x000248, "Member 'AMobBase_C::RightHandProp' has a wrong offset!");
static_assert(offsetof(AMobBase_C, LeftHandProp) == 0x000250, "Member 'AMobBase_C::LeftHandProp' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Mesh_Hair) == 0x000258, "Member 'AMobBase_C::Mesh_Hair' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Mesh_Body) == 0x000260, "Member 'AMobBase_C::Mesh_Body' has a wrong offset!");
static_assert(offsetof(AMobBase_C, HeadProp) == 0x000268, "Member 'AMobBase_C::HeadProp' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Root) == 0x000270, "Member 'AMobBase_C::Root' has a wrong offset!");
static_assert(offsetof(AMobBase_C, _______0___Track_0_99F6A34B449B51A9168273ADD40545BE) == 0x000278, "Member 'AMobBase_C::_______0___Track_0_99F6A34B449B51A9168273ADD40545BE' has a wrong offset!");
static_assert(offsetof(AMobBase_C, _______0__Direction_99F6A34B449B51A9168273ADD40545BE) == 0x00027C, "Member 'AMobBase_C::_______0__Direction_99F6A34B449B51A9168273ADD40545BE' has a wrong offset!");
static_assert(offsetof(AMobBase_C, _______0) == 0x000280, "Member 'AMobBase_C::_______0' has a wrong offset!");
static_assert(offsetof(AMobBase_C, MasterPoseMesh) == 0x000288, "Member 'AMobBase_C::MasterPoseMesh' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Face_ID) == 0x000290, "Member 'AMobBase_C::Face_ID' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Hair_ID) == 0x000294, "Member 'AMobBase_C::Hair_ID' has a wrong offset!");
static_assert(offsetof(AMobBase_C, Body_ID) == 0x000298, "Member 'AMobBase_C::Body_ID' has a wrong offset!");
static_assert(offsetof(AMobBase_C, HeadProp_ID) == 0x00029C, "Member 'AMobBase_C::HeadProp_ID' has a wrong offset!");
static_assert(offsetof(AMobBase_C, SKProp_ID) == 0x0002A0, "Member 'AMobBase_C::SKProp_ID' has a wrong offset!");
static_assert(offsetof(AMobBase_C, RandomCreateParts) == 0x0002A4, "Member 'AMobBase_C::RandomCreateParts' has a wrong offset!");
static_assert(offsetof(AMobBase_C, AnimationSet_ID) == 0x0002A8, "Member 'AMobBase_C::AnimationSet_ID' has a wrong offset!");
static_assert(offsetof(AMobBase_C, AnimationIndex) == 0x0002AC, "Member 'AMobBase_C::AnimationIndex' has a wrong offset!");
static_assert(offsetof(AMobBase_C, RandomCreateAnimation) == 0x0002B0, "Member 'AMobBase_C::RandomCreateAnimation' has a wrong offset!");
static_assert(offsetof(AMobBase_C, ScaleXY) == 0x0002B4, "Member 'AMobBase_C::ScaleXY' has a wrong offset!");
static_assert(offsetof(AMobBase_C, ScaleZ) == 0x0002B8, "Member 'AMobBase_C::ScaleZ' has a wrong offset!");
static_assert(offsetof(AMobBase_C, FaceList) == 0x0002C0, "Member 'AMobBase_C::FaceList' has a wrong offset!");
static_assert(offsetof(AMobBase_C, HairList) == 0x0002D0, "Member 'AMobBase_C::HairList' has a wrong offset!");
static_assert(offsetof(AMobBase_C, BodyList) == 0x0002E0, "Member 'AMobBase_C::BodyList' has a wrong offset!");
static_assert(offsetof(AMobBase_C, HeadPropList) == 0x0002F0, "Member 'AMobBase_C::HeadPropList' has a wrong offset!");
static_assert(offsetof(AMobBase_C, SKPropList) == 0x000300, "Member 'AMobBase_C::SKPropList' has a wrong offset!");
static_assert(offsetof(AMobBase_C, AnimationSetList) == 0x000310, "Member 'AMobBase_C::AnimationSetList' has a wrong offset!");
static_assert(offsetof(AMobBase_C, ScaleXY_Min) == 0x000320, "Member 'AMobBase_C::ScaleXY_Min' has a wrong offset!");
static_assert(offsetof(AMobBase_C, ScaleXY_Max) == 0x000324, "Member 'AMobBase_C::ScaleXY_Max' has a wrong offset!");
static_assert(offsetof(AMobBase_C, ScaleZ_Min) == 0x000328, "Member 'AMobBase_C::ScaleZ_Min' has a wrong offset!");
static_assert(offsetof(AMobBase_C, ScaleZ_Max) == 0x00032C, "Member 'AMobBase_C::ScaleZ_Max' has a wrong offset!");
static_assert(offsetof(AMobBase_C, RandomCreateScale) == 0x000330, "Member 'AMobBase_C::RandomCreateScale' has a wrong offset!");
static_assert(offsetof(AMobBase_C, SpeedModifier) == 0x000334, "Member 'AMobBase_C::SpeedModifier' has a wrong offset!");
static_assert(offsetof(AMobBase_C, FaceColorList) == 0x000338, "Member 'AMobBase_C::FaceColorList' has a wrong offset!");
static_assert(offsetof(AMobBase_C, HairColorList) == 0x000348, "Member 'AMobBase_C::HairColorList' has a wrong offset!");
static_assert(offsetof(AMobBase_C, BodyColorList) == 0x000358, "Member 'AMobBase_C::BodyColorList' has a wrong offset!");
static_assert(offsetof(AMobBase_C, UseRandomColor) == 0x000368, "Member 'AMobBase_C::UseRandomColor' has a wrong offset!");
static_assert(offsetof(AMobBase_C, FaceColor) == 0x00036C, "Member 'AMobBase_C::FaceColor' has a wrong offset!");
static_assert(offsetof(AMobBase_C, HairColor) == 0x00037C, "Member 'AMobBase_C::HairColor' has a wrong offset!");
static_assert(offsetof(AMobBase_C, BodyColor) == 0x00038C, "Member 'AMobBase_C::BodyColor' has a wrong offset!");
static_assert(offsetof(AMobBase_C, RandomCreateColor) == 0x00039C, "Member 'AMobBase_C::RandomCreateColor' has a wrong offset!");
static_assert(offsetof(AMobBase_C, DMI_Face) == 0x0003A0, "Member 'AMobBase_C::DMI_Face' has a wrong offset!");
static_assert(offsetof(AMobBase_C, DMI_Hair) == 0x0003A8, "Member 'AMobBase_C::DMI_Hair' has a wrong offset!");
static_assert(offsetof(AMobBase_C, DMI_Body) == 0x0003B0, "Member 'AMobBase_C::DMI_Body' has a wrong offset!");
static_assert(offsetof(AMobBase_C, DisableLightingChannels) == 0x0003B8, "Member 'AMobBase_C::DisableLightingChannels' has a wrong offset!");

}

