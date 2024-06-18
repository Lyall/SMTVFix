#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventMissionBaseCommon

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "BP_EventAreaActor_classes.hpp"
#include "E_EVENT_TOILETMARK_TYPE_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventMissionBaseCommon.BP_EventMissionBaseCommon_C
// 0x0040 (0x02B8 - 0x0278)
class ABP_EventMissionBaseCommon_C : public ABP_EventAreaActor_C
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ActorList;                                         // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          UseLookAt;                                         // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UsePlayerRotation;                                 // 0x0291(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseRefresh;                                        // 0x0292(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BA6[0x5];                                     // 0x0293(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_Message_C*                          MessageWidget;                                     // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBgmScene                                     PrevBGMScene;                                      // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA7[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MissionDataId;                                     // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EventEncountId;                                    // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA8[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 EventEncountPoint;                                 // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Character(class UClass* Param_Class, float PosX, float PosY, float PosZ, float RotZ, class FName Tag);
	void SetLookAt(bool LookAt);
	void GetActive(bool* Param_IsActive);
	void ToiletMark(E_EVENT_TOILETMARK_TYPE Type, class FName Tag, class AStaticMeshActor** SpawnedActor);
	void AddCharacter(class AActor* Character, class FName Tag);
	void QuestExecute();
	void CreateMessageWindow(EBgmScene Scene);
	void DeleteMessageWindow();
	void IsPlayerLooking(bool* IsLooking);
	void RegisterMissionIcon(class AActor* ThreeDCharacter);
	void StartMapEvent(bool PlayerVisible, bool NoStopPrioBGM, bool PlayerCameraEnable, bool NoStopQuestBGM, bool* Dummy);
	void EndMapEvent(bool* Dummy);
	void StartMapEventEx(bool PlayerVisible, class USoundAtomCue* BGMCue, bool NoStopPrioBGM, bool PlayerCameraEnable, bool* Dummy);
	void EndMapEventEx(EBgmScene BGMScene, bool* Dummy);
	void BPI_CheckMissionEvent(bool* MissionEvent);
	void EndMapEventRyuketsu(int32 RyuketsuIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventMissionBaseCommon_C">();
	}
	static class ABP_EventMissionBaseCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventMissionBaseCommon_C>();
	}
};
static_assert(alignof(ABP_EventMissionBaseCommon_C) == 0x000008, "Wrong alignment on ABP_EventMissionBaseCommon_C");
static_assert(sizeof(ABP_EventMissionBaseCommon_C) == 0x0002B8, "Wrong size on ABP_EventMissionBaseCommon_C");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, Arrow) == 0x000278, "Member 'ABP_EventMissionBaseCommon_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, ActorList) == 0x000280, "Member 'ABP_EventMissionBaseCommon_C::ActorList' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, UseLookAt) == 0x000290, "Member 'ABP_EventMissionBaseCommon_C::UseLookAt' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, UsePlayerRotation) == 0x000291, "Member 'ABP_EventMissionBaseCommon_C::UsePlayerRotation' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, UseRefresh) == 0x000292, "Member 'ABP_EventMissionBaseCommon_C::UseRefresh' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, MessageWidget) == 0x000298, "Member 'ABP_EventMissionBaseCommon_C::MessageWidget' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, PrevBGMScene) == 0x0002A0, "Member 'ABP_EventMissionBaseCommon_C::PrevBGMScene' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, MissionDataId) == 0x0002A4, "Member 'ABP_EventMissionBaseCommon_C::MissionDataId' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, EventEncountId) == 0x0002A8, "Member 'ABP_EventMissionBaseCommon_C::EventEncountId' has a wrong offset!");
static_assert(offsetof(ABP_EventMissionBaseCommon_C, EventEncountPoint) == 0x0002B0, "Member 'ABP_EventMissionBaseCommon_C::EventEncountPoint' has a wrong offset!");

}

