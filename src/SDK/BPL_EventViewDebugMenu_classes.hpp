#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_EventViewDebugMenu

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_EventViewDebugMenu.BPL_EventViewDebugMenu_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_EventViewDebugMenu_C final : public UBlueprintFunctionLibrary
{
public:
	static void AddDebugMenu_EventView(class UObject* __WorldContext);
	static void AddDebugMenuSp_EventView(class UObject* __WorldContext);
	static void AddDebugMenu_SaveData(const class FString& PC_PathName, const class FString& Game_PathName, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_EventViewDebugMenu_C">();
	}
	static class UBPL_EventViewDebugMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_EventViewDebugMenu_C>();
	}
};
static_assert(alignof(UBPL_EventViewDebugMenu_C) == 0x000008, "Wrong alignment on UBPL_EventViewDebugMenu_C");
static_assert(sizeof(UBPL_EventViewDebugMenu_C) == 0x000028, "Wrong size on UBPL_EventViewDebugMenu_C");

}

