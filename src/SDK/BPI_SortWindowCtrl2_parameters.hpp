#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_SortWindowCtrl2

#include "Basic.hpp"

#include "E_SORTWINDOW_SCROLL_OFFSET_PATTERN_structs.hpp"
#include "Project_structs.hpp"
#include "E_SORTWINDOW_ANIM_STATE_structs.hpp"
#include "E_SORTWINDOW_POS_TYPE_structs.hpp"


namespace SDK::Params
{

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_OpenWindow
// 0x0005 (0x0005 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_OpenWindow final
{
public:
	E_SORT_WINDOW_SORT_TYPE                       InSortScene;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SORTWINDOW_POS_TYPE                         InPosType;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkipAnimation;                                   // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAutoSetupCursor;                                 // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAutoSetupDecideSlot;                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_OpenWindow) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_OpenWindow");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_OpenWindow) == 0x000005, "Wrong size on BPI_SortWindowCtrl2_C_BPI_OpenWindow");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_OpenWindow, InSortScene) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_OpenWindow::InSortScene' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_OpenWindow, InPosType) == 0x000001, "Member 'BPI_SortWindowCtrl2_C_BPI_OpenWindow::InPosType' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_OpenWindow, IsSkipAnimation) == 0x000002, "Member 'BPI_SortWindowCtrl2_C_BPI_OpenWindow::IsSkipAnimation' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_OpenWindow, IsAutoSetupCursor) == 0x000003, "Member 'BPI_SortWindowCtrl2_C_BPI_OpenWindow::IsAutoSetupCursor' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_OpenWindow, IsAutoSetupDecideSlot) == 0x000004, "Member 'BPI_SortWindowCtrl2_C_BPI_OpenWindow::IsAutoSetupDecideSlot' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_CloseWindow
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_CloseWindow final
{
public:
	bool                                          IsSkipAnimation;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_CloseWindow) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_CloseWindow");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_CloseWindow) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_CloseWindow");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_CloseWindow, IsSkipAnimation) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_CloseWindow::IsSkipAnimation' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_SetDecideSlot
// 0x0008 (0x0008 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_SetDecideSlot final
{
public:
	int32                                         InListIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSave_SortSetting;                                // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsSave_SortOrder;                                  // 0x0005(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPlaySE;                                          // 0x0006(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_SetDecideSlot) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_SetDecideSlot");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_SetDecideSlot) == 0x000008, "Wrong size on BPI_SortWindowCtrl2_C_BPI_SetDecideSlot");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetDecideSlot, InListIndex) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_SetDecideSlot::InListIndex' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetDecideSlot, IsSave_SortSetting) == 0x000004, "Member 'BPI_SortWindowCtrl2_C_BPI_SetDecideSlot::IsSave_SortSetting' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetDecideSlot, IsSave_SortOrder) == 0x000005, "Member 'BPI_SortWindowCtrl2_C_BPI_SetDecideSlot::IsSave_SortOrder' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetDecideSlot, IsPlaySE) == 0x000006, "Member 'BPI_SortWindowCtrl2_C_BPI_SetDecideSlot::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_GetListNum
// 0x0004 (0x0004 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_GetListNum final
{
public:
	int32                                         ListNum;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_GetListNum) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_GetListNum");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_GetListNum) == 0x000004, "Wrong size on BPI_SortWindowCtrl2_C_BPI_GetListNum");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_GetListNum, ListNum) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_GetListNum::ListNum' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_GetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_GetScrollOffset final
{
public:
	int32                                         ScrollOffset;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_GetScrollOffset) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_GetScrollOffset");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_GetScrollOffset) == 0x000004, "Wrong size on BPI_SortWindowCtrl2_C_BPI_GetScrollOffset");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_GetScrollOffset, ScrollOffset) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_GetScrollOffset::ScrollOffset' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_GetAnimState
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_GetAnimState final
{
public:
	E_SORTWINDOW_ANIM_STATE                       AnimState;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_GetAnimState) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_GetAnimState");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_GetAnimState) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_GetAnimState");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_GetAnimState, AnimState) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_GetAnimState::AnimState' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_GetCursor
// 0x0004 (0x0004 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_GetCursor final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_GetCursor) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_GetCursor");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_GetCursor) == 0x000004, "Wrong size on BPI_SortWindowCtrl2_C_BPI_GetCursor");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_GetCursor, ListIndex) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_GetCursor::ListIndex' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_SetCursorAndOffsetIdx
// 0x000C (0x000C - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx final
{
public:
	int32                                         InListIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InScrollOffset;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitSetting;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPlaySE;                                          // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx) == 0x00000C, "Wrong size on BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx, InListIndex) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx::InListIndex' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx, InScrollOffset) == 0x000004, "Member 'BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx::InScrollOffset' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx, IsInitSetting) == 0x000008, "Member 'BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx::IsInitSetting' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx, IsPlaySE) == 0x000009, "Member 'BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetIdx::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_SetCursorAndOffsetPattern
// 0x0008 (0x0008 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern final
{
public:
	int32                                         InListIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SORTWINDOW_SCROLL_OFFSET_PATTERN            InScrollOffsetPattern;                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitSetting;                                     // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPlaySE;                                          // 0x0006(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern) == 0x000008, "Wrong size on BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern, InListIndex) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern::InListIndex' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern, InScrollOffsetPattern) == 0x000004, "Member 'BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern::InScrollOffsetPattern' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern, IsInitSetting) == 0x000005, "Member 'BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern::IsInitSetting' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern, IsPlaySE) == 0x000006, "Member 'BPI_SortWindowCtrl2_C_BPI_SetCursorAndOffsetPattern::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_MoveCursor_Up
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_MoveCursor_Up final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Up) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_MoveCursor_Up");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Up) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_MoveCursor_Up");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Up, IsPlaySE) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_MoveCursor_Up::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_MoveCursor_Down
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_MoveCursor_Down final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Down) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_MoveCursor_Down");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Down) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_MoveCursor_Down");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Down, IsPlaySE) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_MoveCursor_Down::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_Page_UP
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_Page_UP final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_Page_UP) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_Page_UP");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_Page_UP) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_Page_UP");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_Page_UP, IsPlaySE) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_Page_UP::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_Page_Down
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_Page_Down final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_Page_Down) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_Page_Down");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_Page_Down) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_Page_Down");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_Page_Down, IsPlaySE) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_Page_Down::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_MoveCursor_Top
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_MoveCursor_Top final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Top) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_MoveCursor_Top");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Top) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_MoveCursor_Top");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Top, IsPlaySE) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_MoveCursor_Top::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_MoveCursor_Bottom
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_MoveCursor_Bottom final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Bottom) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_MoveCursor_Bottom");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Bottom) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_MoveCursor_Bottom");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_MoveCursor_Bottom, IsPlaySE) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_MoveCursor_Bottom::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_GetDecideSlot
// 0x0004 (0x0004 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_GetDecideSlot final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_GetDecideSlot) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_GetDecideSlot");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_GetDecideSlot) == 0x000004, "Wrong size on BPI_SortWindowCtrl2_C_BPI_GetDecideSlot");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_GetDecideSlot, ListIndex) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_GetDecideSlot::ListIndex' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_GetAppliedSetting
// 0x000C (0x000C - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting final
{
public:
	E_SORT_WINDOW_SORT_TYPE                       InSortScene;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AppliedSetting;                                    // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SORT_WINDOW_SORT_ORDER                      AppliedOrder;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting) == 0x00000C, "Wrong size on BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting, InSortScene) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting::InSortScene' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting, AppliedSetting) == 0x000004, "Member 'BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting::AppliedSetting' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting, AppliedOrder) == 0x000008, "Member 'BPI_SortWindowCtrl2_C_BPI_GetAppliedSetting::AppliedOrder' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_SetScrollOffsetPattern
// 0x0008 (0x0008 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_SetScrollOffsetPattern final
{
public:
	E_SORTWINDOW_SCROLL_OFFSET_PATTERN            InOffssetPattern;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ScrollOffset;                                      // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_SetScrollOffsetPattern) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_SetScrollOffsetPattern");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_SetScrollOffsetPattern) == 0x000008, "Wrong size on BPI_SortWindowCtrl2_C_BPI_SetScrollOffsetPattern");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetScrollOffsetPattern, InOffssetPattern) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_SetScrollOffsetPattern::InOffssetPattern' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetScrollOffsetPattern, ScrollOffset) == 0x000004, "Member 'BPI_SortWindowCtrl2_C_BPI_SetScrollOffsetPattern::ScrollOffset' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_CheckMouseWheel
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_CheckMouseWheel final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_CheckMouseWheel) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_CheckMouseWheel");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_CheckMouseWheel) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_CheckMouseWheel");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_CheckMouseWheel, IsPlaySE) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_CheckMouseWheel::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_IsEnableMouseWheel
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_IsEnableMouseWheel final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_IsEnableMouseWheel) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_IsEnableMouseWheel");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_IsEnableMouseWheel) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_IsEnableMouseWheel");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_IsEnableMouseWheel, IsEnable) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_IsEnableMouseWheel::IsEnable' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_ScrollList
// 0x0008 (0x0008 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_ScrollList final
{
public:
	int32                                         InScrollNum;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlaySE;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_ScrollList) == 0x000004, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_ScrollList");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_ScrollList) == 0x000008, "Wrong size on BPI_SortWindowCtrl2_C_BPI_ScrollList");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_ScrollList, InScrollNum) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_ScrollList::InScrollNum' has a wrong offset!");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_ScrollList, IsPlaySE) == 0x000004, "Member 'BPI_SortWindowCtrl2_C_BPI_ScrollList::IsPlaySE' has a wrong offset!");

// Function BPI_SortWindowCtrl2.BPI_SortWindowCtrl2_C.BPI_SetMouseHitVisibility
// 0x0001 (0x0001 - 0x0000)
struct BPI_SortWindowCtrl2_C_BPI_SetMouseHitVisibility final
{
public:
	bool                                          EnableMouseHit;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SortWindowCtrl2_C_BPI_SetMouseHitVisibility) == 0x000001, "Wrong alignment on BPI_SortWindowCtrl2_C_BPI_SetMouseHitVisibility");
static_assert(sizeof(BPI_SortWindowCtrl2_C_BPI_SetMouseHitVisibility) == 0x000001, "Wrong size on BPI_SortWindowCtrl2_C_BPI_SetMouseHitVisibility");
static_assert(offsetof(BPI_SortWindowCtrl2_C_BPI_SetMouseHitVisibility, EnableMouseHit) == 0x000000, "Member 'BPI_SortWindowCtrl2_C_BPI_SetMouseHitVisibility::EnableMouseHit' has a wrong offset!");

}

