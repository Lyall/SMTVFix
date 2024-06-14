#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DebugEvent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_DebugEvent.BPL_DebugEvent_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_DebugEvent_C final : public UBlueprintFunctionLibrary
{
public:
	static void AddDebugMenuEvent(class UObject* __WorldContext);
	static void IsDebugEventCutSkip(class UObject* __WorldContext, bool* IsUse);
	static void IsDebugVoiceTiming(class UObject* __WorldContext, bool* IsUse);
	static void IsDebugTextAlpha0(class UObject* __WorldContext, bool* IsUse);
	static void GetDebugEventMaxFPS(class UObject* __WorldContext, int32* MaxFPS);
	static void IsDebugNewRoute(class UObject* __WorldContext, bool* IsUse);
	static void IsDebugPrintAperture(class UObject* __WorldContext, bool* NewParam);
	static void GetDebugAperture(class UObject* __WorldContext, int32* Val);
	static void IsDebugCutName(class UObject* __WorldContext, bool* NewParam);
	static void IsDebugEventCameraBlend(class UObject* __WorldContext, bool* IsCheck);
	static void IsDebugStaffRoll2(class UObject* __WorldContext, bool* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_DebugEvent_C">();
	}
	static class UBPL_DebugEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_DebugEvent_C>();
	}
};
static_assert(alignof(UBPL_DebugEvent_C) == 0x000008, "Wrong alignment on UBPL_DebugEvent_C");
static_assert(sizeof(UBPL_DebugEvent_C) == 0x000028, "Wrong size on UBPL_DebugEvent_C");

}

