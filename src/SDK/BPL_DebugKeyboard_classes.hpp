#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DebugKeyboard

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_DebugKeyboard.BPL_DebugKeyboard_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_DebugKeyboard_C final : public UBlueprintFunctionLibrary
{
public:
	static void AddDebugMenuKeyboardDebug(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_DebugKeyboard_C">();
	}
	static class UBPL_DebugKeyboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_DebugKeyboard_C>();
	}
};
static_assert(alignof(UBPL_DebugKeyboard_C) == 0x000008, "Wrong alignment on UBPL_DebugKeyboard_C");
static_assert(sizeof(UBPL_DebugKeyboard_C) == 0x000028, "Wrong size on UBPL_DebugKeyboard_C");

}

