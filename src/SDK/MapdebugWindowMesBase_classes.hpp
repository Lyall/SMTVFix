#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapdebugWindowMesBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapdebugWindowMesBase.MapdebugWindowMesBase_C
// 0x0030 (0x0290 - 0x0260)
class UMapdebugWindowMesBase_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_315;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Title;                                             // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8528[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0278(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	class FText GetText_0();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_MapdebugWindowMesBase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapdebugWindowMesBase_C">();
	}
	static class UMapdebugWindowMesBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapdebugWindowMesBase_C>();
	}
};
static_assert(alignof(UMapdebugWindowMesBase_C) == 0x000008, "Wrong alignment on UMapdebugWindowMesBase_C");
static_assert(sizeof(UMapdebugWindowMesBase_C) == 0x000290, "Wrong size on UMapdebugWindowMesBase_C");
static_assert(offsetof(UMapdebugWindowMesBase_C, UberGraphFrame) == 0x000260, "Member 'UMapdebugWindowMesBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapdebugWindowMesBase_C, TextBlock_315) == 0x000268, "Member 'UMapdebugWindowMesBase_C::TextBlock_315' has a wrong offset!");
static_assert(offsetof(UMapdebugWindowMesBase_C, Title) == 0x000270, "Member 'UMapdebugWindowMesBase_C::Title' has a wrong offset!");
static_assert(offsetof(UMapdebugWindowMesBase_C, Text) == 0x000278, "Member 'UMapdebugWindowMesBase_C::Text' has a wrong offset!");

}
