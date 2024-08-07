#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampLevelMap

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CampLevelMap.BPI_CampLevelMap_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CampLevelMap_C final : public IInterface
{
public:
	void ChangeCampRoomEvnHidden(bool IsOn, bool* Ret);
	void GetAogamiRoomCamera(class ACameraActor** Camera);
	void GetPartyPlayerSpawnTransform(struct FTransform* Transform);
	void GetPartyCamera(class ACameraActor** Camera);
	void GetCampTopCamera(class ACameraActor** Camera);
	void GetPlayerSpawnTransform(struct FTransform* Transform);
	void GetPartySpawnTransform(struct FTransform* Transform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CampLevelMap_C">();
	}
	static class IBPI_CampLevelMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CampLevelMap_C>();
	}
};
static_assert(alignof(IBPI_CampLevelMap_C) == 0x000008, "Wrong alignment on IBPI_CampLevelMap_C");
static_assert(sizeof(IBPI_CampLevelMap_C) == 0x000028, "Wrong size on IBPI_CampLevelMap_C");

}

