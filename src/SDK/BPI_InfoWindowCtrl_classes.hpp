#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_InfoWindowCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "UMG_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_InfoWindowCtrl_C final : public IInterface
{
public:
	void IInfoWindowCreate(E_WIDGET_PRIO InPrio);
	void IInfoWindowOpen();
	void IIsFinishedInfoWindowOpen(bool* OutFinished);
	void IInfoWindowClose();
	void IIsFinishedInfoWindowClose(bool* OutFinished);
	void IInfoWindowDelete();
	void IInfoWindowSetMessage(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, bool InExecutionText, int32 InFrame);
	void IInfoWindowSetMessageByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, bool InExecutionText, int32 InFrame);
	void IInfoWindowClearMessage();
	void IInfoWindowExecutionOpen();
	void IInfoWindowExecutionClose();
	void IInfoWindowSetVisibility(ESlateVisibility InVisibility);
	void IInfoWindowGetVisibility(ESlateVisibility* Visibility);
	void IInfoWindowSetRichTextProgramValue(int32 InIndex, const class FString& InString);
	void IInfoWindowSetRichTextValueParam(int32 InIndex, int32 InValueParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_InfoWindowCtrl_C">();
	}
	static class IBPI_InfoWindowCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_InfoWindowCtrl_C>();
	}
};
static_assert(alignof(IBPI_InfoWindowCtrl_C) == 0x000008, "Wrong alignment on IBPI_InfoWindowCtrl_C");
static_assert(sizeof(IBPI_InfoWindowCtrl_C) == 0x000028, "Wrong size on IBPI_InfoWindowCtrl_C");

}

