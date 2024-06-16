#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerDevilBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerDevilBase.PlayerDevilBase_C
// 0x0020 (0x09F0 - 0x09D0)
class APlayerDevilBase_C : public APlayerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_PlayerDevilBase_C;                  // 0x09D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             Evt_CallTraport;                                   // 0x09D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_EventHoveringGrass_C*               HoveringGrassCtrl;                                 // 0x09E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Evt_CallTraport__DelegateSignature();
	void ExecuteUbergraph_PlayerDevilBase(int32 EntryPoint);
	void ReceivePossessed(class AController* NewController);
	void BI_UpdateParam();
	void ActPadEvt_Map_Traport_K2Node_ActionPadEvent_0(const struct FKey& Key);
	void Start();
	void End();
	void HoveringGrass(bool IsHover);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerDevilBase_C">();
	}
	static class APlayerDevilBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerDevilBase_C>();
	}
};
static_assert(alignof(APlayerDevilBase_C) == 0x000008, "Wrong alignment on APlayerDevilBase_C");
static_assert(sizeof(APlayerDevilBase_C) == 0x0009F0, "Wrong size on APlayerDevilBase_C");
static_assert(offsetof(APlayerDevilBase_C, UberGraphFrame_PlayerDevilBase_C) == 0x0009D0, "Member 'APlayerDevilBase_C::UberGraphFrame_PlayerDevilBase_C' has a wrong offset!");
static_assert(offsetof(APlayerDevilBase_C, Evt_CallTraport) == 0x0009D8, "Member 'APlayerDevilBase_C::Evt_CallTraport' has a wrong offset!");
static_assert(offsetof(APlayerDevilBase_C, HoveringGrassCtrl) == 0x0009E8, "Member 'APlayerDevilBase_C::HoveringGrassCtrl' has a wrong offset!");

}
