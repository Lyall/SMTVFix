#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventMobBase

#include "Basic.hpp"

#include "CharaBaseLight_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EventMobBase.EventMobBase_C
// 0x0198 (0x05E0 - 0x0448)
class AEventMobBase_C : public ACharaBaseLight_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EventMobBase_C;                     // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Face;                                              // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Hair;                                              // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaLegComponent_C*                   RightLeg;                                          // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaLegComponent_C*                   LeftLeg;                                           // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaHeadComponent_C*                  Head;                                              // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RightHandProp;                                     // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LeftHandProp;                                      // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HeadProp;                                          // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SKProp;                                            // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Body;                                              // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          MasterPoseMesh;                                    // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Face_ID;                                           // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Hair_ID;                                           // 0x04AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Body_ID;                                           // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HeadProp_ID;                                       // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SKProp_ID;                                         // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationSet_ID;                                   // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationIndex;                                    // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleXY;                                           // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         ScaleZ;                                            // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          RandomCreateParts;                                 // 0x04CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          RandomCreateAnimation;                             // 0x04CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          RandomCreateScale;                                 // 0x04CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5D32[0x1];                                     // 0x04CF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 FaceList;                                          // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 HairList;                                          // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 BodyList;                                          // 0x04F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 HeadPropList;                                      // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 SKPropList;                                        // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 AnimationSetList;                                  // 0x0520(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ScaleXY_Min;                                       // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleXY_Max;                                       // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleZ_Min;                                        // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleZ_Max;                                        // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FaceListIndex;                                     // 0x0540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         HairListIndex;                                     // 0x0544(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         BodyListIndex;                                     // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         HeadListIndex;                                     // 0x054C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         AnimationListIndex;                                // 0x0550(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           FaceColor;                                         // 0x0554(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HairColor;                                         // 0x0564(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BodyColor;                                         // 0x0574(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D33[0x4];                                     // 0x0584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   FaceColorList;                                     // 0x0588(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                   HairColorList;                                     // 0x0598(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                   BodyColorList;                                     // 0x05A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               DMI_Face;                                          // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_Hair;                                          // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_Body;                                          // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FaceColorIndex;                                    // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         HairColorIndex;                                    // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         BodyColorIndex;                                    // 0x05D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DisableLightingChannels;                           // 0x05DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_EventMobBase(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void RandomChoice(TArray<int32>& InList, int32* OutID);
	void RandomColor(TArray<struct FLinearColor>& InList, const struct FLinearColor& NowColor, struct FLinearColor* OutColor);
	void DMIRandomColor(class USkeletalMeshComponent* Param_Mesh, TArray<struct FLinearColor>& ColorList, bool RandomColor, const struct FLinearColor& FixColor, class UMaterialInstanceDynamic** OutDMI, struct FLinearColor* OutColor);
	void ApplyLightingChannel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventMobBase_C">();
	}
	static class AEventMobBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEventMobBase_C>();
	}
};
static_assert(alignof(AEventMobBase_C) == 0x000008, "Wrong alignment on AEventMobBase_C");
static_assert(sizeof(AEventMobBase_C) == 0x0005E0, "Wrong size on AEventMobBase_C");
static_assert(offsetof(AEventMobBase_C, UberGraphFrame_EventMobBase_C) == 0x000448, "Member 'AEventMobBase_C::UberGraphFrame_EventMobBase_C' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, Face) == 0x000450, "Member 'AEventMobBase_C::Face' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, Hair) == 0x000458, "Member 'AEventMobBase_C::Hair' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, RightLeg) == 0x000460, "Member 'AEventMobBase_C::RightLeg' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, LeftLeg) == 0x000468, "Member 'AEventMobBase_C::LeftLeg' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, Head) == 0x000470, "Member 'AEventMobBase_C::Head' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, RightHandProp) == 0x000478, "Member 'AEventMobBase_C::RightHandProp' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, LeftHandProp) == 0x000480, "Member 'AEventMobBase_C::LeftHandProp' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, HeadProp) == 0x000488, "Member 'AEventMobBase_C::HeadProp' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, SKProp) == 0x000490, "Member 'AEventMobBase_C::SKProp' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, Body) == 0x000498, "Member 'AEventMobBase_C::Body' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, MasterPoseMesh) == 0x0004A0, "Member 'AEventMobBase_C::MasterPoseMesh' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, Face_ID) == 0x0004A8, "Member 'AEventMobBase_C::Face_ID' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, Hair_ID) == 0x0004AC, "Member 'AEventMobBase_C::Hair_ID' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, Body_ID) == 0x0004B0, "Member 'AEventMobBase_C::Body_ID' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, HeadProp_ID) == 0x0004B4, "Member 'AEventMobBase_C::HeadProp_ID' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, SKProp_ID) == 0x0004B8, "Member 'AEventMobBase_C::SKProp_ID' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, AnimationSet_ID) == 0x0004BC, "Member 'AEventMobBase_C::AnimationSet_ID' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, AnimationIndex) == 0x0004C0, "Member 'AEventMobBase_C::AnimationIndex' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, ScaleXY) == 0x0004C4, "Member 'AEventMobBase_C::ScaleXY' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, ScaleZ) == 0x0004C8, "Member 'AEventMobBase_C::ScaleZ' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, RandomCreateParts) == 0x0004CC, "Member 'AEventMobBase_C::RandomCreateParts' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, RandomCreateAnimation) == 0x0004CD, "Member 'AEventMobBase_C::RandomCreateAnimation' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, RandomCreateScale) == 0x0004CE, "Member 'AEventMobBase_C::RandomCreateScale' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, FaceList) == 0x0004D0, "Member 'AEventMobBase_C::FaceList' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, HairList) == 0x0004E0, "Member 'AEventMobBase_C::HairList' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, BodyList) == 0x0004F0, "Member 'AEventMobBase_C::BodyList' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, HeadPropList) == 0x000500, "Member 'AEventMobBase_C::HeadPropList' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, SKPropList) == 0x000510, "Member 'AEventMobBase_C::SKPropList' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, AnimationSetList) == 0x000520, "Member 'AEventMobBase_C::AnimationSetList' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, ScaleXY_Min) == 0x000530, "Member 'AEventMobBase_C::ScaleXY_Min' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, ScaleXY_Max) == 0x000534, "Member 'AEventMobBase_C::ScaleXY_Max' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, ScaleZ_Min) == 0x000538, "Member 'AEventMobBase_C::ScaleZ_Min' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, ScaleZ_Max) == 0x00053C, "Member 'AEventMobBase_C::ScaleZ_Max' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, FaceListIndex) == 0x000540, "Member 'AEventMobBase_C::FaceListIndex' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, HairListIndex) == 0x000544, "Member 'AEventMobBase_C::HairListIndex' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, BodyListIndex) == 0x000548, "Member 'AEventMobBase_C::BodyListIndex' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, HeadListIndex) == 0x00054C, "Member 'AEventMobBase_C::HeadListIndex' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, AnimationListIndex) == 0x000550, "Member 'AEventMobBase_C::AnimationListIndex' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, FaceColor) == 0x000554, "Member 'AEventMobBase_C::FaceColor' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, HairColor) == 0x000564, "Member 'AEventMobBase_C::HairColor' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, BodyColor) == 0x000574, "Member 'AEventMobBase_C::BodyColor' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, FaceColorList) == 0x000588, "Member 'AEventMobBase_C::FaceColorList' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, HairColorList) == 0x000598, "Member 'AEventMobBase_C::HairColorList' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, BodyColorList) == 0x0005A8, "Member 'AEventMobBase_C::BodyColorList' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, DMI_Face) == 0x0005B8, "Member 'AEventMobBase_C::DMI_Face' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, DMI_Hair) == 0x0005C0, "Member 'AEventMobBase_C::DMI_Hair' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, DMI_Body) == 0x0005C8, "Member 'AEventMobBase_C::DMI_Body' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, FaceColorIndex) == 0x0005D0, "Member 'AEventMobBase_C::FaceColorIndex' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, HairColorIndex) == 0x0005D4, "Member 'AEventMobBase_C::HairColorIndex' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, BodyColorIndex) == 0x0005D8, "Member 'AEventMobBase_C::BodyColorIndex' has a wrong offset!");
static_assert(offsetof(AEventMobBase_C, DisableLightingChannels) == 0x0005DC, "Member 'AEventMobBase_C::DisableLightingChannels' has a wrong offset!");

}

