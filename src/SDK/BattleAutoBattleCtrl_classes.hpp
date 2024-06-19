#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleAutoBattleCtrl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleAutoBattleCtrl.BattleAutoBattleCtrl_C
// 0x0018 (0x00C8 - 0x00B0)
class UBattleAutoBattleCtrl_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          UpdateEnable;                                      // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F1F[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SpendFrame;                                        // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NormalTempo;                                       // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattleAutoBattleCtrl(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void IsAutoInputValid(bool* RetValue);
	void UpdateAutoState();
	void Initialize();
	void StartSeq();
	void PauseSeq(bool Pause);
	void GetMainInterface(TScriptInterface<class IBPI_MainInterface>* AsBPI_Main_Interface);
	void BeginAutoBattle();
	void EndAutoBattle();
	void UpdateComponent(float Delta, bool* ContinueUpdate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleAutoBattleCtrl_C">();
	}
	static class UBattleAutoBattleCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleAutoBattleCtrl_C>();
	}
};
static_assert(alignof(UBattleAutoBattleCtrl_C) == 0x000008, "Wrong alignment on UBattleAutoBattleCtrl_C");
static_assert(sizeof(UBattleAutoBattleCtrl_C) == 0x0000C8, "Wrong size on UBattleAutoBattleCtrl_C");
static_assert(offsetof(UBattleAutoBattleCtrl_C, UberGraphFrame) == 0x0000B0, "Member 'UBattleAutoBattleCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleAutoBattleCtrl_C, UpdateEnable) == 0x0000B8, "Member 'UBattleAutoBattleCtrl_C::UpdateEnable' has a wrong offset!");
static_assert(offsetof(UBattleAutoBattleCtrl_C, SpendFrame) == 0x0000BC, "Member 'UBattleAutoBattleCtrl_C::SpendFrame' has a wrong offset!");
static_assert(offsetof(UBattleAutoBattleCtrl_C, NormalTempo) == 0x0000C0, "Member 'UBattleAutoBattleCtrl_C::NormalTempo' has a wrong offset!");

}

