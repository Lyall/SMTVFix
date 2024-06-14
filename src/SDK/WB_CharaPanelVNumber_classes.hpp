#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharaPanelVNumber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CharaPanelVNumber.WB_CharaPanelVNumber_C
// 0x0060 (0x02C0 - 0x0260)
class UWB_CharaPanelVNumber_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanelMain;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_VariousNumber_C*                    WB_VariousNumber1;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_VariousNumber_C*                    WB_VariousNumber2;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_VariousNumber_C*                    WB_VariousNumber3;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_VariousNumber_C*                    WB_VariousNumber4;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_VariousNumber_C*                    WB_VariousNumber5;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_VariousNumber_C*                    WB_VariousNumber6;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_VariousNumber_C*                    WB_VariousNumber7;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_VariousNumber_C*                    WB_VariousNumberPM;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_VariousType_C*                      WB_VariousType;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Animerate;                                         // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_CharaPanelVNumber(int32 EntryPoint);
	void Construct();
	void SetVNumberFadeIn(int32 InIndex, int32 InDataType, int32 InNumber, float InRate);
	void GetVNumberData(int32 InIndex, class UWB_VariousNumber_C** OutWidget);
	void SetPosition(const struct FVector2D& InPosition);
	void SetCenterPosition(const struct FVector2D& InPosition);
	void SetSignPosition(const struct FVector2D& InPosition);
	void SetMovePosition(float InYPosition);
	void SetVNumberFadeOut(int32 InIndex, int32 InDataType);
	void IsAnimationEnd(bool* OutFinished);
	void CalcAnimeRate(float InRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CharaPanelVNumber_C">();
	}
	static class UWB_CharaPanelVNumber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CharaPanelVNumber_C>();
	}
};
static_assert(alignof(UWB_CharaPanelVNumber_C) == 0x000008, "Wrong alignment on UWB_CharaPanelVNumber_C");
static_assert(sizeof(UWB_CharaPanelVNumber_C) == 0x0002C0, "Wrong size on UWB_CharaPanelVNumber_C");
static_assert(offsetof(UWB_CharaPanelVNumber_C, UberGraphFrame) == 0x000260, "Member 'UWB_CharaPanelVNumber_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, CanvasPanelMain) == 0x000268, "Member 'UWB_CharaPanelVNumber_C::CanvasPanelMain' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, WB_VariousNumber1) == 0x000270, "Member 'UWB_CharaPanelVNumber_C::WB_VariousNumber1' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, WB_VariousNumber2) == 0x000278, "Member 'UWB_CharaPanelVNumber_C::WB_VariousNumber2' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, WB_VariousNumber3) == 0x000280, "Member 'UWB_CharaPanelVNumber_C::WB_VariousNumber3' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, WB_VariousNumber4) == 0x000288, "Member 'UWB_CharaPanelVNumber_C::WB_VariousNumber4' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, WB_VariousNumber5) == 0x000290, "Member 'UWB_CharaPanelVNumber_C::WB_VariousNumber5' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, WB_VariousNumber6) == 0x000298, "Member 'UWB_CharaPanelVNumber_C::WB_VariousNumber6' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, WB_VariousNumber7) == 0x0002A0, "Member 'UWB_CharaPanelVNumber_C::WB_VariousNumber7' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, WB_VariousNumberPM) == 0x0002A8, "Member 'UWB_CharaPanelVNumber_C::WB_VariousNumberPM' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, WB_VariousType) == 0x0002B0, "Member 'UWB_CharaPanelVNumber_C::WB_VariousType' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanelVNumber_C, Animerate) == 0x0002B8, "Member 'UWB_CharaPanelVNumber_C::Animerate' has a wrong offset!");

}

