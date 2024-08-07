#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnemyPlaceInField

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnemyPlaceInField.EnemyPlaceInField_C
// 0x0088 (0x0138 - 0x00B0)
class UEnemyPlaceInField_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ACharaBase_C*>                   M_Unit;                                            // 0x00B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int32>                                 M_EnemyIDList;                                     // 0x00C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                     M_PosArray;                                        // 0x00D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 M_PosIndexArray;                                   // 0x00E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACharaBase_C*                           M_SymbolActor;                                     // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharaBase_C*>                   M_AroundDevilArray;                                // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACharaBase_C*>                   M_UseDevilArray;                                   // 0x0110(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AMapDevilSpawnerCtrl_C*                 M_SpawnCtrl;                                       // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                M_UpVector;                                        // 0x0128(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsSpawningEnemy;                                 // 0x0134(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsRenzokuEncount;                                // 0x0135(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_NaviEncount;                                     // 0x0136(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_EnemyPlaceInField(int32 EntryPoint);
	void OutPutSetting();
	void LoadFinish();
	void LoadDevil();
	void SettingEnd();
	void ReceiveBeginPlay();
	void SpawnEnemy(TArray<int32>& EnemyIdList, TArray<class USceneComponent*>& PostArray, class ACharaBase_C* SymbolActor, TArray<class ACharaBase_C*>& AroundDevil, TArray<int32>& RawEnemyIDList, bool IsRenzokuEncount);
	void EndBlankPosArray();
	void ApplyAroundDevil();
	void GetNearPosIndexDistance(class AActor* TargetActor, float* Distance, int32* PosIndex);
	void SetCharaPos(const struct FVector& InVec, const struct FRotator& NewRotation, class ACharaBase_C* TargetActor, bool IsMoveTo);
	void IsSpawningEnemy(bool* IsSpawning);
	void ApplyRandomLeader();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnemyPlaceInField_C">();
	}
	static class UEnemyPlaceInField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnemyPlaceInField_C>();
	}
};
static_assert(alignof(UEnemyPlaceInField_C) == 0x000008, "Wrong alignment on UEnemyPlaceInField_C");
static_assert(sizeof(UEnemyPlaceInField_C) == 0x000138, "Wrong size on UEnemyPlaceInField_C");
static_assert(offsetof(UEnemyPlaceInField_C, UberGraphFrame) == 0x0000B0, "Member 'UEnemyPlaceInField_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_Unit) == 0x0000B8, "Member 'UEnemyPlaceInField_C::M_Unit' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_EnemyIDList) == 0x0000C8, "Member 'UEnemyPlaceInField_C::M_EnemyIDList' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_PosArray) == 0x0000D8, "Member 'UEnemyPlaceInField_C::M_PosArray' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_PosIndexArray) == 0x0000E8, "Member 'UEnemyPlaceInField_C::M_PosIndexArray' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_SymbolActor) == 0x0000F8, "Member 'UEnemyPlaceInField_C::M_SymbolActor' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_AroundDevilArray) == 0x000100, "Member 'UEnemyPlaceInField_C::M_AroundDevilArray' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_UseDevilArray) == 0x000110, "Member 'UEnemyPlaceInField_C::M_UseDevilArray' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_SpawnCtrl) == 0x000120, "Member 'UEnemyPlaceInField_C::M_SpawnCtrl' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_UpVector) == 0x000128, "Member 'UEnemyPlaceInField_C::M_UpVector' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_IsSpawningEnemy) == 0x000134, "Member 'UEnemyPlaceInField_C::M_IsSpawningEnemy' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_IsRenzokuEncount) == 0x000135, "Member 'UEnemyPlaceInField_C::M_IsRenzokuEncount' has a wrong offset!");
static_assert(offsetof(UEnemyPlaceInField_C, M_NaviEncount) == 0x000136, "Member 'UEnemyPlaceInField_C::M_NaviEncount' has a wrong offset!");

}

