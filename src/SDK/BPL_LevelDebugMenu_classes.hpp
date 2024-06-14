#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_LevelDebugMenu

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_LevelDebugMenu.BPL_LevelDebugMenu_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_LevelDebugMenu_C final : public UBlueprintFunctionLibrary
{
public:
	static void AddDebugMenuLevelDebug(class UObject* __WorldContext);
	static void AddDebugMenuLevelDebugLoad(class UObject* __WorldContext);
	static void AddDebugMenuLevelDebugSp(class UObject* WorldContext, class UObject* __WorldContext);
	static void AddDebugMenuLevelDebugVolumetricLightmap(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_LevelDebugMenu_C">();
	}
	static class UBPL_LevelDebugMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_LevelDebugMenu_C>();
	}
};
static_assert(alignof(UBPL_LevelDebugMenu_C) == 0x000008, "Wrong alignment on UBPL_LevelDebugMenu_C");
static_assert(sizeof(UBPL_LevelDebugMenu_C) == 0x000028, "Wrong size on UBPL_LevelDebugMenu_C");

}

