#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DebugEventTextTiming

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct DebugEventTextTiming.DebugEventTextTiming
// 0x0018 (0x0018 - 0x0000)
struct FDebugEventTextTiming final
{
public:
	float                                         PlayTime_2_ABC3352F42B6B9FBFA918482D9032416;       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TextLabel_5_C754F05A4A8BB084BE3763BE5B1D3C49;      // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FDebugEventTextTiming) == 0x000008, "Wrong alignment on FDebugEventTextTiming");
static_assert(sizeof(FDebugEventTextTiming) == 0x000018, "Wrong size on FDebugEventTextTiming");
static_assert(offsetof(FDebugEventTextTiming, PlayTime_2_ABC3352F42B6B9FBFA918482D9032416) == 0x000000, "Member 'FDebugEventTextTiming::PlayTime_2_ABC3352F42B6B9FBFA918482D9032416' has a wrong offset!");
static_assert(offsetof(FDebugEventTextTiming, TextLabel_5_C754F05A4A8BB084BE3763BE5B1D3C49) == 0x000008, "Member 'FDebugEventTextTiming::TextLabel_5_C754F05A4A8BB084BE3763BE5B1D3C49' has a wrong offset!");

}

