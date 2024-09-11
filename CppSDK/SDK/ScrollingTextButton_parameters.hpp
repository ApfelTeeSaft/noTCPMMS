#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScrollingTextButton

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton
// 0x00E0 (0x00E0 - 0x0000)
struct ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue2;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;                         // 0x0028(0x0090)()
	bool                                          K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction;                   // 0x00C0(0x0010)(NoDestructor)
	float                                         K2Node_Event_HeldPercent;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_SlateBrush_ReturnValue;        // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton) == 0x000008, "Wrong alignment on ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton");
static_assert(sizeof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton) == 0x0000E0, "Wrong size on ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, EntryPoint) == 0x000000, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_GetContext_ReturnValue2) == 0x000018, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_IsUsingGamepad_ReturnValue2) == 0x000020, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_IsUsingGamepad_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Event_TabLabelInfo) == 0x000028, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_ComponentBoundEvent_bUsingGamepad) == 0x0000B8, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_ComponentBoundEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Event_NewTriggeredAction) == 0x0000C0, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Event_NewTriggeredAction' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Event_HeldPercent) == 0x0000D0, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Event_HeldPercent' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, Temp_byte_Variable) == 0x0000D4, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, CallFunc_EqualEqual_SlateBrush_ReturnValue) == 0x0000D5, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::CallFunc_EqualEqual_SlateBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, Temp_byte_Variable2) == 0x0000D6, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, Temp_bool_Variable) == 0x0000D7, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton, K2Node_Select_Default) == 0x0000D8, "Member 'ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton::K2Node_Select_Default' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.OnActionProgress
// 0x0004 (0x0004 - 0x0000)
struct ScrollingTextButton_C_OnActionProgress final
{
public:
	float                                         HeldPercent;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScrollingTextButton_C_OnActionProgress) == 0x000004, "Wrong alignment on ScrollingTextButton_C_OnActionProgress");
static_assert(sizeof(ScrollingTextButton_C_OnActionProgress) == 0x000004, "Wrong size on ScrollingTextButton_C_OnActionProgress");
static_assert(offsetof(ScrollingTextButton_C_OnActionProgress, HeldPercent) == 0x000000, "Member 'ScrollingTextButton_C_OnActionProgress::HeldPercent' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged
// 0x0010 (0x0010 - 0x0000)
struct ScrollingTextButton_C_OnTriggeredInputActionChanged final
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(ScrollingTextButton_C_OnTriggeredInputActionChanged) == 0x000008, "Wrong alignment on ScrollingTextButton_C_OnTriggeredInputActionChanged");
static_assert(sizeof(ScrollingTextButton_C_OnTriggeredInputActionChanged) == 0x000010, "Wrong size on ScrollingTextButton_C_OnTriggeredInputActionChanged");
static_assert(offsetof(ScrollingTextButton_C_OnTriggeredInputActionChanged, NewTriggeredAction) == 0x000000, "Member 'ScrollingTextButton_C_OnTriggeredInputActionChanged::NewTriggeredAction' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong alignment on ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(sizeof(ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong size on ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(offsetof(ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature, bUsingGamepad) == 0x000000, "Member 'ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature::bUsingGamepad' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo
// 0x0090 (0x0090 - 0x0000)
struct ScrollingTextButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;                                      // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ScrollingTextButton_C_SetTabLabelInfo) == 0x000008, "Wrong alignment on ScrollingTextButton_C_SetTabLabelInfo");
static_assert(sizeof(ScrollingTextButton_C_SetTabLabelInfo) == 0x000090, "Wrong size on ScrollingTextButton_C_SetTabLabelInfo");
static_assert(offsetof(ScrollingTextButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'ScrollingTextButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ScrollingTextButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScrollingTextButton_C_PreConstruct) == 0x000001, "Wrong alignment on ScrollingTextButton_C_PreConstruct");
static_assert(sizeof(ScrollingTextButton_C_PreConstruct) == 0x000001, "Wrong size on ScrollingTextButton_C_PreConstruct");
static_assert(offsetof(ScrollingTextButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ScrollingTextButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.Set Text
// 0x0020 (0x0020 - 0x0000)
struct ScrollingTextButton_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScrollingTextButton_C_Set_Text) == 0x000008, "Wrong alignment on ScrollingTextButton_C_Set_Text");
static_assert(sizeof(ScrollingTextButton_C_Set_Text) == 0x000020, "Wrong size on ScrollingTextButton_C_Set_Text");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, ButtonText_0) == 0x000000, "Member 'ScrollingTextButton_C_Set_Text::ButtonText_0' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, Temp_byte_Variable) == 0x000018, "Member 'ScrollingTextButton_C_Set_Text::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, CallFunc_TextIsEmpty_ReturnValue) == 0x000019, "Member 'ScrollingTextButton_C_Set_Text::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, Temp_byte_Variable2) == 0x00001A, "Member 'ScrollingTextButton_C_Set_Text::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, Temp_bool_Variable) == 0x00001B, "Member 'ScrollingTextButton_C_Set_Text::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_Set_Text, K2Node_Select_Default) == 0x00001C, "Member 'ScrollingTextButton_C_Set_Text::K2Node_Select_Default' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.Set Icon
// 0x0078 (0x0078 - 0x0000)
struct ScrollingTextButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;                                       // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ScrollingTextButton_C_Set_Icon) == 0x000008, "Wrong alignment on ScrollingTextButton_C_Set_Icon");
static_assert(sizeof(ScrollingTextButton_C_Set_Icon) == 0x000078, "Wrong size on ScrollingTextButton_C_Set_Icon");
static_assert(offsetof(ScrollingTextButton_C_Set_Icon, IconBrush_0) == 0x000000, "Member 'ScrollingTextButton_C_Set_Icon::IconBrush_0' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.InitializeButton
// 0x0010 (0x0010 - 0x0000)
struct ScrollingTextButton_C_InitializeButton final
{
public:
	class UObject*                                CallFunc_GetBrushResource_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScrollingTextButton_C_InitializeButton) == 0x000008, "Wrong alignment on ScrollingTextButton_C_InitializeButton");
static_assert(sizeof(ScrollingTextButton_C_InitializeButton) == 0x000010, "Wrong size on ScrollingTextButton_C_InitializeButton");
static_assert(offsetof(ScrollingTextButton_C_InitializeButton, CallFunc_GetBrushResource_ReturnValue) == 0x000000, "Member 'ScrollingTextButton_C_InitializeButton::CallFunc_GetBrushResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_InitializeButton, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_InitializeButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle
// 0x0001 (0x0001 - 0x0000)
struct ScrollingTextButton_C_UpdateTextAndStyle final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScrollingTextButton_C_UpdateTextAndStyle) == 0x000001, "Wrong alignment on ScrollingTextButton_C_UpdateTextAndStyle");
static_assert(sizeof(ScrollingTextButton_C_UpdateTextAndStyle) == 0x000001, "Wrong size on ScrollingTextButton_C_UpdateTextAndStyle");
static_assert(offsetof(ScrollingTextButton_C_UpdateTextAndStyle, bUsingGamepad) == 0x000000, "Member 'ScrollingTextButton_C_UpdateTextAndStyle::bUsingGamepad' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle
// 0x0018 (0x0018 - 0x0000)
struct ScrollingTextButton_C_SetControllerStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScrollingTextButton_C_SetControllerStyle) == 0x000008, "Wrong alignment on ScrollingTextButton_C_SetControllerStyle");
static_assert(sizeof(ScrollingTextButton_C_SetControllerStyle) == 0x000018, "Wrong size on ScrollingTextButton_C_SetControllerStyle");
static_assert(offsetof(ScrollingTextButton_C_SetControllerStyle, ControllerInputStyle_0) == 0x000000, "Member 'ScrollingTextButton_C_SetControllerStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetControllerStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_SetControllerStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetControllerStyle, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'ScrollingTextButton_C_SetControllerStyle::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateText
// 0x0040 (0x0040 - 0x0000)
struct ScrollingTextButton_C_UpdateText final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0028(0x0018)()
};
static_assert(alignof(ScrollingTextButton_C_UpdateText) == 0x000008, "Wrong alignment on ScrollingTextButton_C_UpdateText");
static_assert(sizeof(ScrollingTextButton_C_UpdateText) == 0x000040, "Wrong size on ScrollingTextButton_C_UpdateText");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, Temp_bool_Variable) == 0x000000, "Member 'ScrollingTextButton_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, CallFunc_GetDisplayText_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_UpdateText::CallFunc_GetDisplayText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue) == 0x000020, "Member 'ScrollingTextButton_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'ScrollingTextButton_C_UpdateText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateText, K2Node_Select_Default) == 0x000028, "Member 'ScrollingTextButton_C_UpdateText::K2Node_Select_Default' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateStyle
// 0x0001 (0x0001 - 0x0000)
struct ScrollingTextButton_C_UpdateStyle final
{
public:
	bool                                          UsingGamepad;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScrollingTextButton_C_UpdateStyle) == 0x000001, "Wrong alignment on ScrollingTextButton_C_UpdateStyle");
static_assert(sizeof(ScrollingTextButton_C_UpdateStyle) == 0x000001, "Wrong size on ScrollingTextButton_C_UpdateStyle");
static_assert(offsetof(ScrollingTextButton_C_UpdateStyle, UsingGamepad) == 0x000000, "Member 'ScrollingTextButton_C_UpdateStyle::UsingGamepad' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle
// 0x0018 (0x0018 - 0x0000)
struct ScrollingTextButton_C_SetMouseKeyboardStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScrollingTextButton_C_SetMouseKeyboardStyle) == 0x000008, "Wrong alignment on ScrollingTextButton_C_SetMouseKeyboardStyle");
static_assert(sizeof(ScrollingTextButton_C_SetMouseKeyboardStyle) == 0x000018, "Wrong size on ScrollingTextButton_C_SetMouseKeyboardStyle");
static_assert(offsetof(ScrollingTextButton_C_SetMouseKeyboardStyle, ControllerInputStyle_0) == 0x000000, "Member 'ScrollingTextButton_C_SetMouseKeyboardStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetMouseKeyboardStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ScrollingTextButton_C_SetMouseKeyboardStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_SetMouseKeyboardStyle, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'ScrollingTextButton_C_SetMouseKeyboardStyle::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment
// 0x0018 (0x0018 - 0x0000)
struct ScrollingTextButton_C_UpdateContentAlignment final
{
public:
	class UPanelSlot*                             CallFunc_GetContentSlot_ReturnValue;               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBorderSlot*                            K2Node_DynamicCast_AsBorder_Slot;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScrollingTextButton_C_UpdateContentAlignment) == 0x000008, "Wrong alignment on ScrollingTextButton_C_UpdateContentAlignment");
static_assert(sizeof(ScrollingTextButton_C_UpdateContentAlignment) == 0x000018, "Wrong size on ScrollingTextButton_C_UpdateContentAlignment");
static_assert(offsetof(ScrollingTextButton_C_UpdateContentAlignment, CallFunc_GetContentSlot_ReturnValue) == 0x000000, "Member 'ScrollingTextButton_C_UpdateContentAlignment::CallFunc_GetContentSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateContentAlignment, K2Node_DynamicCast_AsBorder_Slot) == 0x000008, "Member 'ScrollingTextButton_C_UpdateContentAlignment::K2Node_DynamicCast_AsBorder_Slot' has a wrong offset!");
static_assert(offsetof(ScrollingTextButton_C_UpdateContentAlignment, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ScrollingTextButton_C_UpdateContentAlignment::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment
// 0x0001 (0x0001 - 0x0000)
struct ScrollingTextButton_C_SetContentAlignment final
{
public:
	EHorizontalAlignment                          ContentAlignment_0;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScrollingTextButton_C_SetContentAlignment) == 0x000001, "Wrong alignment on ScrollingTextButton_C_SetContentAlignment");
static_assert(sizeof(ScrollingTextButton_C_SetContentAlignment) == 0x000001, "Wrong size on ScrollingTextButton_C_SetContentAlignment");
static_assert(offsetof(ScrollingTextButton_C_SetContentAlignment, ContentAlignment_0) == 0x000000, "Member 'ScrollingTextButton_C_SetContentAlignment::ContentAlignment_0' has a wrong offset!");

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle
// 0x0008 (0x0008 - 0x0000)
struct ScrollingTextButton_C_UpdateTextStyle final
{
public:
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScrollingTextButton_C_UpdateTextStyle) == 0x000008, "Wrong alignment on ScrollingTextButton_C_UpdateTextStyle");
static_assert(sizeof(ScrollingTextButton_C_UpdateTextStyle) == 0x000008, "Wrong size on ScrollingTextButton_C_UpdateTextStyle");
static_assert(offsetof(ScrollingTextButton_C_UpdateTextStyle, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000000, "Member 'ScrollingTextButton_C_UpdateTextStyle::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");

}

