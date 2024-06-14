#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleField

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"
#include "BattleFieldCheckerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleField.BattleField_C
// 0x0080 (0x0560 - 0x04E0)
class ABattleField_C final : public ABattleFieldCheckerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BattleField_C;                      // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        CommandBox;                                        // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerPlaceInField_C*                  PlayerPlaceInField;                                // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEnemyPlaceInField_C*                   EnemyPlaceInField;                                 // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                M_PosArray;                                        // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AEnemyFieldBase_C*                      M_EnemyFieldBase;                                  // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerFieldBase_C*                     M_PlayerFieldBase;                                 // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Evt_EnemyIsReady;                                  // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_PlayerIsReady;                                 // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class USceneComponent*>                M_AddPosArray;                                     // 0x0540(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<int32>                                 M_EnemyIDList;                                     // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Evt_EnemyIsReady__DelegateSignature(TArray<class ACharaBase_C*>& EnemyUnitArray, TArray<struct FTransform>& EnemyPos);
	void Evt_PlayerIsReady__DelegateSignature(TArray<class ACharaBase_C*>& PlayerUnitArray);
	void ExecuteUbergraph_BattleField(int32 EntryPoint);
	void PrepareRenzokuBattle(int32 EncountID, bool IsEvent, const TArray<int32>& EnemyIds, bool OnlyApplyEncountPostData);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ApplyEncount();
	void MakeEnemySide(class ACharaBase_C* SymbolActor, TArray<class ACharaBase_C*>& AroundDevil, TArray<int32>& SpawnIDList, bool IsRenzokuEncount);
	void MakePlayerSide(bool IsJump);
	void GetAddPost(int32 Param_Index, class USceneComponent** Output);
	void MakeEnemySideNoLoad(TArray<class ACharaBase_C*>& EnemyList);
	void GetCommandBoxTransform(struct FTransform* RetValue);
	void SetFieldCollisionEnable(bool Sw);
	void BI_GetAddPost(int32 Param_Index, class USceneComponent** Output);
	void BI_GetPlayerReplaceResult(TMap<int32, struct FTransform>* TransformMap);
	void BI_IsReplaceFinished(bool* IsFinished);
	void BI_ReplacePlayer(const TArray<int32>& InDevilList, bool* NoUse);
	void BI_GetCommandBoxTransform(struct FTransform* Trans);
	void GetRenzokuBattleEnemy(TArray<class ACharaBase_C*>* Enemy, int32* EncountID);
	void IsEndPrepareRenzokuBattle(bool* IsDone);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleField_C">();
	}
	static class ABattleField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleField_C>();
	}
};
static_assert(alignof(ABattleField_C) == 0x000008, "Wrong alignment on ABattleField_C");
static_assert(sizeof(ABattleField_C) == 0x000560, "Wrong size on ABattleField_C");
static_assert(offsetof(ABattleField_C, UberGraphFrame_BattleField_C) == 0x0004E0, "Member 'ABattleField_C::UberGraphFrame_BattleField_C' has a wrong offset!");
static_assert(offsetof(ABattleField_C, CommandBox) == 0x0004E8, "Member 'ABattleField_C::CommandBox' has a wrong offset!");
static_assert(offsetof(ABattleField_C, PlayerPlaceInField) == 0x0004F0, "Member 'ABattleField_C::PlayerPlaceInField' has a wrong offset!");
static_assert(offsetof(ABattleField_C, EnemyPlaceInField) == 0x0004F8, "Member 'ABattleField_C::EnemyPlaceInField' has a wrong offset!");
static_assert(offsetof(ABattleField_C, M_PosArray) == 0x000500, "Member 'ABattleField_C::M_PosArray' has a wrong offset!");
static_assert(offsetof(ABattleField_C, M_EnemyFieldBase) == 0x000510, "Member 'ABattleField_C::M_EnemyFieldBase' has a wrong offset!");
static_assert(offsetof(ABattleField_C, M_PlayerFieldBase) == 0x000518, "Member 'ABattleField_C::M_PlayerFieldBase' has a wrong offset!");
static_assert(offsetof(ABattleField_C, Evt_EnemyIsReady) == 0x000520, "Member 'ABattleField_C::Evt_EnemyIsReady' has a wrong offset!");
static_assert(offsetof(ABattleField_C, Evt_PlayerIsReady) == 0x000530, "Member 'ABattleField_C::Evt_PlayerIsReady' has a wrong offset!");
static_assert(offsetof(ABattleField_C, M_AddPosArray) == 0x000540, "Member 'ABattleField_C::M_AddPosArray' has a wrong offset!");
static_assert(offsetof(ABattleField_C, M_EnemyIDList) == 0x000550, "Member 'ABattleField_C::M_EnemyIDList' has a wrong offset!");

}

