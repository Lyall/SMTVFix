#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventAreaActor

#include "Basic.hpp"

#include "BP_EventAreaActor_classes.hpp"
#include "BP_EventAreaActor_parameters.hpp"


namespace SDK
{

// Function BP_EventAreaActor.BP_EventAreaActor_C.DeactivateBase
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaActor_C::DeactivateBase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "DeactivateBase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.ActivateBase
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaActor_C::ActivateBase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "ActivateBase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.StartMapEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayerVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoStopPrioBGM                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    PlayerCameraEnable                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoStopQuestBGM                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventAreaActor_C::StartMapEvent(bool PlayerVisible, bool NoStopPrioBGM, bool PlayerCameraEnable, bool NoStopQuestBGM, bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "StartMapEvent");

	Params::BP_EventAreaActor_C_StartMapEvent Parms{};

	Parms.PlayerVisible = PlayerVisible;
	Parms.NoStopPrioBGM = NoStopPrioBGM;
	Parms.PlayerCameraEnable = PlayerCameraEnable;
	Parms.NoStopQuestBGM = NoStopQuestBGM;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.EndMapEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventAreaActor_C::EndMapEvent(bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "EndMapEvent");

	Params::BP_EventAreaActor_C_EndMapEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.FadeOutMapEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::FadeOutMapEvent(float* Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "FadeOutMapEvent");

	Params::BP_EventAreaActor_C_FadeOutMapEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Delay != nullptr)
		*Delay = Parms.Delay;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.FadeInMapEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::FadeInMapEvent(float* Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "FadeInMapEvent");

	Params::BP_EventAreaActor_C_FadeInMapEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Delay != nullptr)
		*Delay = Parms.Delay;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.Add3DIconToStaticPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MINIMAP_POI_TYPE                      POIType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DataId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AreaId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::Add3DIconToStaticPOI(E_MINIMAP_POI_TYPE POIType, int32 DataId, int32 AreaId, class AActor* Param_Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "Add3DIconToStaticPOI");

	Params::BP_EventAreaActor_C_Add3DIconToStaticPOI Parms{};

	Parms.POIType = POIType;
	Parms.DataId = DataId;
	Parms.AreaId = AreaId;
	Parms.Param_Owner = Param_Owner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.Delete3DIconFromStaticPOI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaActor_C::Delete3DIconFromStaticPOI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "Delete3DIconFromStaticPOI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.HandShakeStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ShakeClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ShakeScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::HandShakeStart(class UClass* ShakeClass, float ShakeScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "HandShakeStart");

	Params::BP_EventAreaActor_C_HandShakeStart Parms{};

	Parms.ShakeClass = ShakeClass;
	Parms.ShakeScale = ShakeScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.HandShakeStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bImmediately                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventAreaActor_C::HandShakeStop(bool bImmediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "HandShakeStop");

	Params::BP_EventAreaActor_C_HandShakeStop Parms{};

	Parms.bImmediately = bImmediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.HandShakeStartEx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ShakeScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::HandShakeStartEx(float ShakeScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "HandShakeStartEx");

	Params::BP_EventAreaActor_C_HandShakeStartEx Parms{};

	Parms.ShakeScale = ShakeScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.SetEndMapEventParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventAreaActor_C::SetEndMapEventParam(bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "SetEndMapEventParam");

	Params::BP_EventAreaActor_C_SetEndMapEventParam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.AddTokyoLargeMapIconTalk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ActorLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InactiveFlag                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::AddTokyoLargeMapIconTalk(const struct FVector& ActorLocation, class FName InactiveFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "AddTokyoLargeMapIconTalk");

	Params::BP_EventAreaActor_C_AddTokyoLargeMapIconTalk Parms{};

	Parms.ActorLocation = std::move(ActorLocation);
	Parms.InactiveFlag = InactiveFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.DeleteTokyoLargeMapIcon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaActor_C::DeleteTokyoLargeMapIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "DeleteTokyoLargeMapIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.EndMapEventAfterBattle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventAreaActor_C::EndMapEventAfterBattle(bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "EndMapEventAfterBattle");

	Params::BP_EventAreaActor_C_EndMapEventAfterBattle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.AddTokyoLargeMapIconMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ActorLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MissionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::AddTokyoLargeMapIconMission(const struct FVector& ActorLocation, int32 MissionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "AddTokyoLargeMapIconMission");

	Params::BP_EventAreaActor_C_AddTokyoLargeMapIconMission Parms{};

	Parms.ActorLocation = std::move(ActorLocation);
	Parms.MissionId = MissionId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.BPI_Map3DIconGetWorldLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WorldLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::BPI_Map3DIconGetWorldLocation(struct FVector* WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "BPI_Map3DIconGetWorldLocation");

	Params::BP_EventAreaActor_C_BPI_Map3DIconGetWorldLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.BPI_Map3DIconGetShouldBeRendered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldBeRendered                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Unknown                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventAreaActor_C::BPI_Map3DIconGetShouldBeRendered(bool* ShouldBeRendered, bool* Unknown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "BPI_Map3DIconGetShouldBeRendered");

	Params::BP_EventAreaActor_C_BPI_Map3DIconGetShouldBeRendered Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldBeRendered != nullptr)
		*ShouldBeRendered = Parms.ShouldBeRendered;

	if (Unknown != nullptr)
		*Unknown = Parms.Unknown;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.BPI_GetDebugMemo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Memo                                                   (Parm, OutParm)

void ABP_EventAreaActor_C::BPI_GetDebugMemo(class FText* Memo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "BPI_GetDebugMemo");

	Params::BP_EventAreaActor_C_BPI_GetDebugMemo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Memo != nullptr)
		*Memo = std::move(Parms.Memo);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.BPI_GetHitBoxSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Size                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::BPI_GetHitBoxSize(struct FVector* Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "BPI_GetHitBoxSize");

	Params::BP_EventAreaActor_C_BPI_GetHitBoxSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.BPI_GetMapEventId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MapEventID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventAreaActor_C::BPI_GetMapEventId(int32* MapEventID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "BPI_GetMapEventId");

	Params::BP_EventAreaActor_C_BPI_GetMapEventId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MapEventID != nullptr)
		*MapEventID = Parms.MapEventID;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.BPI_CheckMissionEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    MissionEvent                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventAreaActor_C::BPI_CheckMissionEvent(bool* MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "BPI_CheckMissionEvent");

	Params::BP_EventAreaActor_C_BPI_CheckMissionEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MissionEvent != nullptr)
		*MissionEvent = Parms.MissionEvent;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.BPI_CheckMiman
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Miman                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventAreaActor_C::BPI_CheckMiman(bool* Miman)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "BPI_CheckMiman");

	Params::BP_EventAreaActor_C_BPI_CheckMiman Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Miman != nullptr)
		*Miman = Parms.Miman;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.BPI_CheckNaviDevil
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NaviDevil                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventAreaActor_C::BPI_CheckNaviDevil(bool* NaviDevil)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "BPI_CheckNaviDevil");

	Params::BP_EventAreaActor_C_BPI_CheckNaviDevil Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NaviDevil != nullptr)
		*NaviDevil = Parms.NaviDevil;
}


// Function BP_EventAreaActor.BP_EventAreaActor_C.Map3DIconGetWorldLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_EventAreaActor_C::Map3DIconGetWorldLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventAreaActor_C", "Map3DIconGetWorldLocation");

	Params::BP_EventAreaActor_C_Map3DIconGetWorldLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

