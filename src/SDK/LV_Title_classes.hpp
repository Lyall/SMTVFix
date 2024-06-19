#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_Title

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_TitleEndType_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LV_Title.LV_Title_C
// 0x0048 (0x0270 - 0x0228)
class ALV_Title_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 M_TitleCtrl;                                       // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsEndTitle;                                      // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_679A[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 M_Camera;                                          // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Step;                                            // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_679B[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 M_TitleCtrlClass;                                  // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 M_TitleMovieCtrlClass;                             // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_TitleMovieCtrl;                                  // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstMovie;                                      // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnLoaded_03A7333C43CF190F0D4B2C83044B0812(TSubclassOf<class UObject> Loaded);
	void OnLoaded_B900F7EC42B31C10D32184ACA35720DC(TSubclassOf<class UObject> Loaded);
	void OnLoaded_5236544940E14F91489ECF8F304A2133(TSubclassOf<class UObject> Loaded);
	void Private_NewGameStart();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_LV_Title(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LV_Title_C">();
	}
	static class ALV_Title_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALV_Title_C>();
	}
};
static_assert(alignof(ALV_Title_C) == 0x000008, "Wrong alignment on ALV_Title_C");
static_assert(sizeof(ALV_Title_C) == 0x000270, "Wrong size on ALV_Title_C");
static_assert(offsetof(ALV_Title_C, UberGraphFrame) == 0x000228, "Member 'ALV_Title_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALV_Title_C, M_TitleCtrl) == 0x000230, "Member 'ALV_Title_C::M_TitleCtrl' has a wrong offset!");
static_assert(offsetof(ALV_Title_C, M_IsEndTitle) == 0x000238, "Member 'ALV_Title_C::M_IsEndTitle' has a wrong offset!");
static_assert(offsetof(ALV_Title_C, M_Camera) == 0x000240, "Member 'ALV_Title_C::M_Camera' has a wrong offset!");
static_assert(offsetof(ALV_Title_C, M_Step) == 0x000248, "Member 'ALV_Title_C::M_Step' has a wrong offset!");
static_assert(offsetof(ALV_Title_C, M_TitleCtrlClass) == 0x000250, "Member 'ALV_Title_C::M_TitleCtrlClass' has a wrong offset!");
static_assert(offsetof(ALV_Title_C, M_TitleMovieCtrlClass) == 0x000258, "Member 'ALV_Title_C::M_TitleMovieCtrlClass' has a wrong offset!");
static_assert(offsetof(ALV_Title_C, M_TitleMovieCtrl) == 0x000260, "Member 'ALV_Title_C::M_TitleMovieCtrl' has a wrong offset!");
static_assert(offsetof(ALV_Title_C, IsFirstMovie) == 0x000268, "Member 'ALV_Title_C::IsFirstMovie' has a wrong offset!");

}

