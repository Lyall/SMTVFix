#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_TutorialWindowCtrl2

#include "Basic.hpp"

#include "E_TutorialWindow_WidgetState_structs.hpp"
#include "Project_structs.hpp"
#include "E_AmuletTutorial_MsgType_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_OpenWindow
// 0x0005 (0x0005 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_OpenWindow final
{
public:
	E_WIDGET_PRIO                                 InWidgetPrio;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlaySE;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsSkipAnimation;                                   // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDrawBlackCurtain;                                // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsEscClose;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_OpenWindow) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_OpenWindow");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_OpenWindow) == 0x000005, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_OpenWindow");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_OpenWindow, InWidgetPrio) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_OpenWindow::InWidgetPrio' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_OpenWindow, IsPlaySE) == 0x000001, "Member 'BPI_TutorialWindowCtrl2_C_BPI_OpenWindow::IsPlaySE' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_OpenWindow, IsSkipAnimation) == 0x000002, "Member 'BPI_TutorialWindowCtrl2_C_BPI_OpenWindow::IsSkipAnimation' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_OpenWindow, IsDrawBlackCurtain) == 0x000003, "Member 'BPI_TutorialWindowCtrl2_C_BPI_OpenWindow::IsDrawBlackCurtain' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_OpenWindow, IsEscClose) == 0x000004, "Member 'BPI_TutorialWindowCtrl2_C_BPI_OpenWindow::IsEscClose' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_CloseWindow
// 0x0002 (0x0002 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_CloseWindow final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsSkipAnimation;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_CloseWindow) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_CloseWindow");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_CloseWindow) == 0x000002, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_CloseWindow");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_CloseWindow, IsPlaySE) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_CloseWindow::IsPlaySE' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_CloseWindow, IsSkipAnimation) == 0x000001, "Member 'BPI_TutorialWindowCtrl2_C_BPI_CloseWindow::IsSkipAnimation' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetTextJustification
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetTextJustification final
{
public:
	ETextJustify                                  InJustification;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetTextJustification) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetTextJustification");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetTextJustification) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetTextJustification");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetTextJustification, InJustification) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetTextJustification::InJustification' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_CheckInputAndUpdateScroll
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_CheckInputAndUpdateScroll final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_CheckInputAndUpdateScroll) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_CheckInputAndUpdateScroll");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_CheckInputAndUpdateScroll) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_CheckInputAndUpdateScroll");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_CheckInputAndUpdateScroll, IsPlaySE) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_CheckInputAndUpdateScroll::IsPlaySE' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_GetScrollState
// 0x0008 (0x0008 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_GetScrollState final
{
public:
	bool                                          IsRequiredScroll;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33B2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScrollPosRate;                                     // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_GetScrollState) == 0x000004, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_GetScrollState");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_GetScrollState) == 0x000008, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_GetScrollState");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_GetScrollState, IsRequiredScroll) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_GetScrollState::IsRequiredScroll' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_GetScrollState, ScrollPosRate) == 0x000004, "Member 'BPI_TutorialWindowCtrl2_C_BPI_GetScrollState::ScrollPosRate' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetScrollOffset
// 0x0008 (0x0008 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetScrollOffset final
{
public:
	int32                                         InScrollOffset;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlaySE;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetScrollOffset) == 0x000004, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetScrollOffset");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetScrollOffset) == 0x000008, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetScrollOffset");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetScrollOffset, InScrollOffset) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetScrollOffset::InScrollOffset' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetScrollOffset, IsPlaySE) == 0x000004, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetScrollOffset::IsPlaySE' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_Scroll_Up
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_Scroll_Up final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_Scroll_Up) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_Scroll_Up");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_Scroll_Up) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_Scroll_Up");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_Scroll_Up, IsPlaySE) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_Scroll_Up::IsPlaySE' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_Scroll_Down
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_Scroll_Down final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_Scroll_Down) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_Scroll_Down");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_Scroll_Down) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_Scroll_Down");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_Scroll_Down, IsPlaySE) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_Scroll_Down::IsPlaySE' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_Page_UP
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_Page_UP final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_Page_UP) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_Page_UP");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_Page_UP) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_Page_UP");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_Page_UP, IsPlaySE) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_Page_UP::IsPlaySE' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_Page_Down
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_Page_Down final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_Page_Down) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_Page_Down");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_Page_Down) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_Page_Down");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_Page_Down, IsPlaySE) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_Page_Down::IsPlaySE' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetTitle_byID
// 0x0010 (0x0010 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byID final
{
public:
	const class UScriptMessageAsset*              InMessageAsset;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMessageId;                                       // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byID) == 0x000008, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byID");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byID) == 0x000010, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byID");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byID, InMessageAsset) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byID::InMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byID, InMessageId) == 0x000008, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byID::InMessageId' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetTitle_byLabel
// 0x0010 (0x0010 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byLabel final
{
public:
	const class UScriptMessageAsset*              InMessageAsset;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InMessageLabel;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byLabel) == 0x000008, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byLabel");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byLabel) == 0x000010, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byLabel");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byLabel, InMessageAsset) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byLabel::InMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byLabel, InMessageLabel) == 0x000008, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetTitle_byLabel::InMessageLabel' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetMainText_byID
// 0x0010 (0x0010 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byID final
{
public:
	const class UScriptMessageAsset*              InMessageAsset;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMessageId;                                       // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byID) == 0x000008, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byID");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byID) == 0x000010, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byID");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byID, InMessageAsset) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byID::InMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byID, InMessageId) == 0x000008, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byID::InMessageId' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetMainText_byLabel
// 0x0010 (0x0010 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byLabel final
{
public:
	const class UScriptMessageAsset*              InMessageAsset;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InMessageLabel;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byLabel) == 0x000008, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byLabel");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byLabel) == 0x000010, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byLabel");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byLabel, InMessageAsset) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byLabel::InMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byLabel, InMessageLabel) == 0x000008, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetMainText_byLabel::InMessageLabel' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetText_ReleasedKamui
// 0x0020 (0x0020 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui final
{
public:
	bool                                          IsOpenedByEvent;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33B3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InEventMsgLabel;                                   // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33B4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 InOpenedKamuiID;                                   // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui) == 0x000008, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui) == 0x000020, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui, IsOpenedByEvent) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui::IsOpenedByEvent' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui, InEventMsgLabel) == 0x000004, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui::InEventMsgLabel' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui, InOpenedKamuiID) == 0x000010, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_ReleasedKamui::InOpenedKamuiID' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetText_AmuletMsg
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetText_AmuletMsg final
{
public:
	E_AmuletTutorial_MsgType                      InAmuletType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetText_AmuletMsg) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetText_AmuletMsg");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetText_AmuletMsg) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetText_AmuletMsg");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_AmuletMsg, InAmuletType) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_AmuletMsg::InAmuletType' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetText_ApplyDLC
// 0x0010 (0x0010 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetText_ApplyDLC final
{
public:
	TArray<class FName>                           InContentsMsgLabel;                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetText_ApplyDLC) == 0x000008, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetText_ApplyDLC");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetText_ApplyDLC) == 0x000010, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetText_ApplyDLC");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_ApplyDLC, InContentsMsgLabel) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_ApplyDLC::InContentsMsgLabel' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetText_InvalidDLC
// 0x0010 (0x0010 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetText_InvalidDLC final
{
public:
	TArray<class FName>                           InContentsMsgLabel;                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetText_InvalidDLC) == 0x000008, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetText_InvalidDLC");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetText_InvalidDLC) == 0x000010, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetText_InvalidDLC");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_InvalidDLC, InContentsMsgLabel) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_InvalidDLC::InContentsMsgLabel' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetText_BenefitItem
// 0x0018 (0x0018 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitItem final
{
public:
	class FName                                   InTitleLabel;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBenefitItemMsgDataList                InItemMsgList;                                     // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitItem) == 0x000008, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitItem");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitItem) == 0x000018, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitItem");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitItem, InTitleLabel) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitItem::InTitleLabel' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitItem, InItemMsgList) == 0x000008, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitItem::InItemMsgList' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetText_BenefitDevil
// 0x0018 (0x0018 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitDevil final
{
public:
	class FName                                   InTitleLabel;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBenefitDevilMsgDataList               InDevilMsgList;                                    // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitDevil) == 0x000008, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitDevil");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitDevil) == 0x000018, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitDevil");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitDevil, InTitleLabel) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitDevil::InTitleLabel' has a wrong offset!");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitDevil, InDevilMsgList) == 0x000008, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_BenefitDevil::InDevilMsgList' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_SetText_byEnum
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_SetText_byEnum final
{
public:
	E_TUTORIAL_WINDOW_MESSAGE_TYPE                InEnumPattern;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_SetText_byEnum) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_SetText_byEnum");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_SetText_byEnum) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_SetText_byEnum");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_SetText_byEnum, InEnumPattern) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_SetText_byEnum::InEnumPattern' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_GetAnimState
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_GetAnimState final
{
public:
	E_TutorialWindow_WidgetState                  AnimState;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_GetAnimState) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_GetAnimState");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_GetAnimState) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_GetAnimState");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_GetAnimState, AnimState) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_GetAnimState::AnimState' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_Move_Top
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_Move_Top final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_Move_Top) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_Move_Top");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_Move_Top) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_Move_Top");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_Move_Top, IsPlaySE) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_Move_Top::IsPlaySE' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_Move_Bottom
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_Move_Bottom final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_Move_Bottom) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_Move_Bottom");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_Move_Bottom) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_Move_Bottom");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_Move_Bottom, IsPlaySE) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_Move_Bottom::IsPlaySE' has a wrong offset!");

// Function BPI_TutorialWindowCtrl2.BPI_TutorialWindowCtrl2_C.BPI_IsClickedByMouse
// 0x0001 (0x0001 - 0x0000)
struct BPI_TutorialWindowCtrl2_C_BPI_IsClickedByMouse final
{
public:
	bool                                          IsClicked;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_TutorialWindowCtrl2_C_BPI_IsClickedByMouse) == 0x000001, "Wrong alignment on BPI_TutorialWindowCtrl2_C_BPI_IsClickedByMouse");
static_assert(sizeof(BPI_TutorialWindowCtrl2_C_BPI_IsClickedByMouse) == 0x000001, "Wrong size on BPI_TutorialWindowCtrl2_C_BPI_IsClickedByMouse");
static_assert(offsetof(BPI_TutorialWindowCtrl2_C_BPI_IsClickedByMouse, IsClicked) == 0x000000, "Member 'BPI_TutorialWindowCtrl2_C_BPI_IsClickedByMouse::IsClicked' has a wrong offset!");

}

