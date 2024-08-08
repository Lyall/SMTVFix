#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CategoryWindowCtrl

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.OpenCategoryWindow
// 0x000C (0x000C - 0x0000)
struct BPI_CategoryWindowCtrl_C_OpenCategoryWindow final
{
public:
	E_WIDGET_PRIO                                 WidgetPrio;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CATEGORY_PATTERN                            CategoryPattern;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CATEGORY_FRAMEIN_TYPE                       FrameInPattern;                                    // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DefaultCursorIdx;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkipAnim;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnVal;                                         // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_OpenCategoryWindow) == 0x000004, "Wrong alignment on BPI_CategoryWindowCtrl_C_OpenCategoryWindow");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_OpenCategoryWindow) == 0x00000C, "Wrong size on BPI_CategoryWindowCtrl_C_OpenCategoryWindow");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_OpenCategoryWindow, WidgetPrio) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_OpenCategoryWindow::WidgetPrio' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_OpenCategoryWindow, CategoryPattern) == 0x000001, "Member 'BPI_CategoryWindowCtrl_C_OpenCategoryWindow::CategoryPattern' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_OpenCategoryWindow, FrameInPattern) == 0x000002, "Member 'BPI_CategoryWindowCtrl_C_OpenCategoryWindow::FrameInPattern' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_OpenCategoryWindow, DefaultCursorIdx) == 0x000004, "Member 'BPI_CategoryWindowCtrl_C_OpenCategoryWindow::DefaultCursorIdx' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_OpenCategoryWindow, IsSkipAnim) == 0x000008, "Member 'BPI_CategoryWindowCtrl_C_OpenCategoryWindow::IsSkipAnim' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_OpenCategoryWindow, ReturnVal) == 0x000009, "Member 'BPI_CategoryWindowCtrl_C_OpenCategoryWindow::ReturnVal' has a wrong offset!");

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.CloseCategoryWindow
// 0x0002 (0x0002 - 0x0000)
struct BPI_CategoryWindowCtrl_C_CloseCategoryWindow final
{
public:
	bool                                          IsSkipAnim;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnVal;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_CloseCategoryWindow) == 0x000001, "Wrong alignment on BPI_CategoryWindowCtrl_C_CloseCategoryWindow");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_CloseCategoryWindow) == 0x000002, "Wrong size on BPI_CategoryWindowCtrl_C_CloseCategoryWindow");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_CloseCategoryWindow, IsSkipAnim) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_CloseCategoryWindow::IsSkipAnim' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_CloseCategoryWindow, ReturnVal) == 0x000001, "Member 'BPI_CategoryWindowCtrl_C_CloseCategoryWindow::ReturnVal' has a wrong offset!");

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.GetCategoryWindowState
// 0x0001 (0x0001 - 0x0000)
struct BPI_CategoryWindowCtrl_C_GetCategoryWindowState final
{
public:
	E_CATEGORY_UI_STATE                           State;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_GetCategoryWindowState) == 0x000001, "Wrong alignment on BPI_CategoryWindowCtrl_C_GetCategoryWindowState");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_GetCategoryWindowState) == 0x000001, "Wrong size on BPI_CategoryWindowCtrl_C_GetCategoryWindowState");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_GetCategoryWindowState, State) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_GetCategoryWindowState::State' has a wrong offset!");

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.MoveCategoryCursor
// 0x0002 (0x0002 - 0x0000)
struct BPI_CategoryWindowCtrl_C_MoveCategoryCursor final
{
public:
	E_CATEGORY_CURSOR_MOVE_DIRECTION              MoveDirection;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnVal;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_MoveCategoryCursor) == 0x000001, "Wrong alignment on BPI_CategoryWindowCtrl_C_MoveCategoryCursor");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_MoveCategoryCursor) == 0x000002, "Wrong size on BPI_CategoryWindowCtrl_C_MoveCategoryCursor");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_MoveCategoryCursor, MoveDirection) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_MoveCategoryCursor::MoveDirection' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_MoveCategoryCursor, ReturnVal) == 0x000001, "Member 'BPI_CategoryWindowCtrl_C_MoveCategoryCursor::ReturnVal' has a wrong offset!");

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.SetPosition
// 0x000C (0x000C - 0x0000)
struct BPI_CategoryWindowCtrl_C_SetPosition final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnVal;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_SetPosition) == 0x000004, "Wrong alignment on BPI_CategoryWindowCtrl_C_SetPosition");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_SetPosition) == 0x00000C, "Wrong size on BPI_CategoryWindowCtrl_C_SetPosition");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_SetPosition, Position) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_SetPosition::Position' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_SetPosition, ReturnVal) == 0x000008, "Member 'BPI_CategoryWindowCtrl_C_SetPosition::ReturnVal' has a wrong offset!");

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.SetCursorIndex
// 0x0008 (0x0008 - 0x0000)
struct BPI_CategoryWindowCtrl_C_SetCursorIndex final
{
public:
	int32                                         CursorIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnVal;                                         // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_SetCursorIndex) == 0x000004, "Wrong alignment on BPI_CategoryWindowCtrl_C_SetCursorIndex");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_SetCursorIndex) == 0x000008, "Wrong size on BPI_CategoryWindowCtrl_C_SetCursorIndex");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_SetCursorIndex, CursorIndex) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_SetCursorIndex::CursorIndex' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_SetCursorIndex, ReturnVal) == 0x000004, "Member 'BPI_CategoryWindowCtrl_C_SetCursorIndex::ReturnVal' has a wrong offset!");

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.GetCursorIndex
// 0x0004 (0x0004 - 0x0000)
struct BPI_CategoryWindowCtrl_C_GetCursorIndex final
{
public:
	int32                                         CursorIndex;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_GetCursorIndex) == 0x000004, "Wrong alignment on BPI_CategoryWindowCtrl_C_GetCursorIndex");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_GetCursorIndex) == 0x000004, "Wrong size on BPI_CategoryWindowCtrl_C_GetCursorIndex");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_GetCursorIndex, CursorIndex) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_GetCursorIndex::CursorIndex' has a wrong offset!");

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.SetNewIconVisibility
// 0x0008 (0x0008 - 0x0000)
struct BPI_CategoryWindowCtrl_C_SetNewIconVisibility final
{
public:
	int32                                         CursorIdx;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisible;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnVal;                                         // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_SetNewIconVisibility) == 0x000004, "Wrong alignment on BPI_CategoryWindowCtrl_C_SetNewIconVisibility");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_SetNewIconVisibility) == 0x000008, "Wrong size on BPI_CategoryWindowCtrl_C_SetNewIconVisibility");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_SetNewIconVisibility, CursorIdx) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_SetNewIconVisibility::CursorIdx' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_SetNewIconVisibility, IsVisible) == 0x000004, "Member 'BPI_CategoryWindowCtrl_C_SetNewIconVisibility::IsVisible' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_SetNewIconVisibility, ReturnVal) == 0x000005, "Member 'BPI_CategoryWindowCtrl_C_SetNewIconVisibility::ReturnVal' has a wrong offset!");

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.AlignNewIconAnim
// 0x0008 (0x0008 - 0x0000)
struct BPI_CategoryWindowCtrl_C_AlignNewIconAnim final
{
public:
	float                                         Frame;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnVal;                                         // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_AlignNewIconAnim) == 0x000004, "Wrong alignment on BPI_CategoryWindowCtrl_C_AlignNewIconAnim");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_AlignNewIconAnim) == 0x000008, "Wrong size on BPI_CategoryWindowCtrl_C_AlignNewIconAnim");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_AlignNewIconAnim, Frame) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_AlignNewIconAnim::Frame' has a wrong offset!");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_AlignNewIconAnim, ReturnVal) == 0x000004, "Member 'BPI_CategoryWindowCtrl_C_AlignNewIconAnim::ReturnVal' has a wrong offset!");

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.GetNewIconAnimFrame
// 0x0004 (0x0004 - 0x0000)
struct BPI_CategoryWindowCtrl_C_GetNewIconAnimFrame final
{
public:
	float                                         Frame;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CategoryWindowCtrl_C_GetNewIconAnimFrame) == 0x000004, "Wrong alignment on BPI_CategoryWindowCtrl_C_GetNewIconAnimFrame");
static_assert(sizeof(BPI_CategoryWindowCtrl_C_GetNewIconAnimFrame) == 0x000004, "Wrong size on BPI_CategoryWindowCtrl_C_GetNewIconAnimFrame");
static_assert(offsetof(BPI_CategoryWindowCtrl_C_GetNewIconAnimFrame, Frame) == 0x000000, "Member 'BPI_CategoryWindowCtrl_C_GetNewIconAnimFrame::Frame' has a wrong offset!");

}

