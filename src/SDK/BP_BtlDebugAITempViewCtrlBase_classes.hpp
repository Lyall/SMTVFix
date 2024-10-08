#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlDebugAITempViewCtrlBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlDebugAITempViewCtrlBase.BP_BtlDebugAITempViewCtrlBase_C
// 0x0010 (0x0230 - 0x0220)
class ABP_BtlDebugAITempViewCtrlBase_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase(int32 EntryPoint);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void Init(bool* RetValue);
	void BPI_ChangeViewUI(bool IsOn, bool* RetValue);
	void BPI_RegisterDebugFlagData(int32 Param_Index, const class FString& DispName, const class FString& Comment, bool* RetValue);
	void BPI_RegisterDebugValueData(int32 Param_Index, const class FString& DispName, const class FString& Comment, bool* RetValue);
	void BPI_ChangeCommentView(bool IsOn, bool* RetValue);
	void BPI_ChangeViewType_RegisterOnly(bool IsOn, bool* RetValue);
	void BPI_SetUIPosition(int32 PosX, int32 PosY, bool* RetValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlDebugAITempViewCtrlBase_C">();
	}
	static class ABP_BtlDebugAITempViewCtrlBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlDebugAITempViewCtrlBase_C>();
	}
};
static_assert(alignof(ABP_BtlDebugAITempViewCtrlBase_C) == 0x000008, "Wrong alignment on ABP_BtlDebugAITempViewCtrlBase_C");
static_assert(sizeof(ABP_BtlDebugAITempViewCtrlBase_C) == 0x000230, "Wrong size on ABP_BtlDebugAITempViewCtrlBase_C");
static_assert(offsetof(ABP_BtlDebugAITempViewCtrlBase_C, UberGraphFrame) == 0x000220, "Member 'ABP_BtlDebugAITempViewCtrlBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlDebugAITempViewCtrlBase_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_BtlDebugAITempViewCtrlBase_C::DefaultSceneRoot' has a wrong offset!");

}

