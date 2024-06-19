#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPlaceInField

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"
#include "E_PLAYER_MANAGER_TYPE_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPlaceInField.PlayerPlaceInField_C
// 0x0120 (0x0210 - 0x00F0)
class UPlayerPlaceInField_C final : public UBattlePlaceInFieldComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APlayerBase_C*                          M_Player;                                          // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                M_ChipArray;                                       // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FBattleUnitPlaceOne>            M_UnitArray;                                       // 0x0110(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 M_NkmArray;                                        // 0x0120(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 M_PostArray;                                       // 0x0130(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, struct FTransform>                M_TransformMap;                                    // 0x0140(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ACharaBase_C*>                   M_CharaArray;                                      // 0x0190(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTransform                             M_OriginTranform;                                  // 0x01A0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                M_PlayerNewLocation;                               // 0x01D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_ReplaceFinished;                                 // 0x01DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4505[0x3];                                     // 0x01DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_Delay;                                           // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_Jump;                                            // 0x01E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4506[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        M_WorldChipLocation;                               // 0x01E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                               M_WorldChipRotation;                               // 0x01F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerPlaceInField(int32 EntryPoint);
	void Evt_ReplaceFinished();
	void ReplacePlayer(const TArray<int32>& InDevilList);
	void SpawnPlayer(const TArray<struct FVector>& ChipLocation, const struct FRotator& ChipRotation, bool IsJump);
	void Evt_LoadFinished(class ACharaBase_C* RetValue);
	void Evt_BackStep();
	void Evt_NkmSpawn();
	void RetrieveDevilPostData(int32 DevilAssetID, struct FST_DevilPostData* DevilPostData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPlaceInField_C">();
	}
	static class UPlayerPlaceInField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerPlaceInField_C>();
	}
};
static_assert(alignof(UPlayerPlaceInField_C) == 0x000010, "Wrong alignment on UPlayerPlaceInField_C");
static_assert(sizeof(UPlayerPlaceInField_C) == 0x000210, "Wrong size on UPlayerPlaceInField_C");
static_assert(offsetof(UPlayerPlaceInField_C, UberGraphFrame) == 0x0000F0, "Member 'UPlayerPlaceInField_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_Player) == 0x0000F8, "Member 'UPlayerPlaceInField_C::M_Player' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_ChipArray) == 0x000100, "Member 'UPlayerPlaceInField_C::M_ChipArray' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_UnitArray) == 0x000110, "Member 'UPlayerPlaceInField_C::M_UnitArray' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_NkmArray) == 0x000120, "Member 'UPlayerPlaceInField_C::M_NkmArray' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_PostArray) == 0x000130, "Member 'UPlayerPlaceInField_C::M_PostArray' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_TransformMap) == 0x000140, "Member 'UPlayerPlaceInField_C::M_TransformMap' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_CharaArray) == 0x000190, "Member 'UPlayerPlaceInField_C::M_CharaArray' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_OriginTranform) == 0x0001A0, "Member 'UPlayerPlaceInField_C::M_OriginTranform' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_PlayerNewLocation) == 0x0001D0, "Member 'UPlayerPlaceInField_C::M_PlayerNewLocation' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_ReplaceFinished) == 0x0001DC, "Member 'UPlayerPlaceInField_C::M_ReplaceFinished' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_Delay) == 0x0001E0, "Member 'UPlayerPlaceInField_C::M_Delay' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_Jump) == 0x0001E4, "Member 'UPlayerPlaceInField_C::M_Jump' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_WorldChipLocation) == 0x0001E8, "Member 'UPlayerPlaceInField_C::M_WorldChipLocation' has a wrong offset!");
static_assert(offsetof(UPlayerPlaceInField_C, M_WorldChipRotation) == 0x0001F8, "Member 'UPlayerPlaceInField_C::M_WorldChipRotation' has a wrong offset!");

}

