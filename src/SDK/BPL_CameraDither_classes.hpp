#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_CameraDither

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_CameraDither.BPL_CameraDither_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_CameraDither_C final : public UBlueprintFunctionLibrary
{
public:
	static void AddDebugMenuCameraDither(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_CameraDither_C">();
	}
	static class UBPL_CameraDither_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_CameraDither_C>();
	}
};
static_assert(alignof(UBPL_CameraDither_C) == 0x000008, "Wrong alignment on UBPL_CameraDither_C");
static_assert(sizeof(UBPL_CameraDither_C) == 0x000028, "Wrong size on UBPL_CameraDither_C");

}

