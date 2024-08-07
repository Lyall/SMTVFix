#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_EncountScene

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_EncountScene.WB_EncountScene_C
// 0x0028 (0x0288 - 0x0260)
class UWB_EncountScene_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Blur;                                              // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CaptureImage;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI;                                               // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Danger;                                            // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WB_EncountScene(int32 EntryPoint);
	void SetAlpha(float Alpha);
	void UpdateBlur(float Stride, float Amount, float CenterX, float CenterY);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_EncountScene_C">();
	}
	static class UWB_EncountScene_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_EncountScene_C>();
	}
};
static_assert(alignof(UWB_EncountScene_C) == 0x000008, "Wrong alignment on UWB_EncountScene_C");
static_assert(sizeof(UWB_EncountScene_C) == 0x000288, "Wrong size on UWB_EncountScene_C");
static_assert(offsetof(UWB_EncountScene_C, UberGraphFrame) == 0x000260, "Member 'UWB_EncountScene_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_EncountScene_C, Blur) == 0x000268, "Member 'UWB_EncountScene_C::Blur' has a wrong offset!");
static_assert(offsetof(UWB_EncountScene_C, CaptureImage) == 0x000270, "Member 'UWB_EncountScene_C::CaptureImage' has a wrong offset!");
static_assert(offsetof(UWB_EncountScene_C, DMI) == 0x000278, "Member 'UWB_EncountScene_C::DMI' has a wrong offset!");
static_assert(offsetof(UWB_EncountScene_C, Danger) == 0x000280, "Member 'UWB_EncountScene_C::Danger' has a wrong offset!");

}

