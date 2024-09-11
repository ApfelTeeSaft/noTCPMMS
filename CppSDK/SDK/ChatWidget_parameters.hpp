#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget
// 0x0038 (0x0038 - 0x0000)
struct ChatWidget_C_ExecuteUbergraph_ChatWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bEnteringChat;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bOpen;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bUsingGamepad;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_ExecuteUbergraph_ChatWidget) == 0x000008, "Wrong alignment on ChatWidget_C_ExecuteUbergraph_ChatWidget");
static_assert(sizeof(ChatWidget_C_ExecuteUbergraph_ChatWidget) == 0x000038, "Wrong size on ChatWidget_C_ExecuteUbergraph_ChatWidget");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, EntryPoint) == 0x000000, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, Temp_bool_Variable) == 0x000004, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, Temp_byte_Variable) == 0x000005, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, Temp_byte_Variable2) == 0x000006, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_ComponentBoundEvent_bEnteringChat) == 0x000018, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_ComponentBoundEvent_bEnteringChat' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_ComponentBoundEvent_bOpen) == 0x000019, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_ComponentBoundEvent_bOpen' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_CustomEvent_bUsingGamepad) == 0x00001A, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_CustomEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_Select_Default) == 0x000030, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_Select_Default' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_HandleInputMethodChanged final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on ChatWidget_C_HandleInputMethodChanged");
static_assert(sizeof(ChatWidget_C_HandleInputMethodChanged) == 0x000001, "Wrong size on ChatWidget_C_HandleInputMethodChanged");
static_assert(offsetof(ChatWidget_C_HandleInputMethodChanged, bUsingGamepad) == 0x000000, "Member 'ChatWidget_C_HandleInputMethodChanged::bUsingGamepad' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature final
{
public:
	bool                                          bOpen;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature) == 0x000001, "Wrong alignment on ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature");
static_assert(sizeof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature) == 0x000001, "Wrong size on ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature");
static_assert(offsetof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature, bOpen) == 0x000000, "Member 'ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature::bOpen' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature final
{
public:
	bool                                          bEnteringChat_0;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature) == 0x000001, "Wrong alignment on ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature");
static_assert(sizeof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature) == 0x000001, "Wrong size on ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature");
static_assert(offsetof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature, bEnteringChat_0) == 0x000000, "Member 'ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature::bEnteringChat_0' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.Set Chat Visibility
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_Set_Chat_Visibility final
{
public:
	ESlateVisibility                              New_Visibility;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_Set_Chat_Visibility) == 0x000001, "Wrong alignment on ChatWidget_C_Set_Chat_Visibility");
static_assert(sizeof(ChatWidget_C_Set_Chat_Visibility) == 0x000001, "Wrong size on ChatWidget_C_Set_Chat_Visibility");
static_assert(offsetof(ChatWidget_C_Set_Chat_Visibility, New_Visibility) == 0x000000, "Member 'ChatWidget_C_Set_Chat_Visibility::New_Visibility' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.Set Chat Shortcut Visibility
// 0x0004 (0x0004 - 0x0000)
struct ChatWidget_C_Set_Chat_Shortcut_Visibility final
{
public:
	ESlateVisibility                              New_Visibility;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_Set_Chat_Shortcut_Visibility) == 0x000001, "Wrong alignment on ChatWidget_C_Set_Chat_Shortcut_Visibility");
static_assert(sizeof(ChatWidget_C_Set_Chat_Shortcut_Visibility) == 0x000004, "Wrong size on ChatWidget_C_Set_Chat_Shortcut_Visibility");
static_assert(offsetof(ChatWidget_C_Set_Chat_Shortcut_Visibility, New_Visibility) == 0x000000, "Member 'ChatWidget_C_Set_Chat_Shortcut_Visibility::New_Visibility' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_Set_Chat_Shortcut_Visibility, Temp_bool_Variable) == 0x000001, "Member 'ChatWidget_C_Set_Chat_Shortcut_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_Set_Chat_Shortcut_Visibility, Temp_byte_Variable) == 0x000002, "Member 'ChatWidget_C_Set_Chat_Shortcut_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_Set_Chat_Shortcut_Visibility, K2Node_Select_Default) == 0x000003, "Member 'ChatWidget_C_Set_Chat_Shortcut_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.UpdateChatUserListIcon
// 0x00A8 (0x00A8 - 0x0000)
struct ChatWidget_C_UpdateChatUserListIcon final
{
public:
	bool                                          Open;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_Select_Default;                             // 0x0020(0x0010)(NoDestructor)
	struct FSlateBrush                            CallFunc_GetInputActionButtonIcon_ReturnValue;     // 0x0030(0x0078)()
};
static_assert(alignof(ChatWidget_C_UpdateChatUserListIcon) == 0x000008, "Wrong alignment on ChatWidget_C_UpdateChatUserListIcon");
static_assert(sizeof(ChatWidget_C_UpdateChatUserListIcon) == 0x0000A8, "Wrong size on ChatWidget_C_UpdateChatUserListIcon");
static_assert(offsetof(ChatWidget_C_UpdateChatUserListIcon, Open) == 0x000000, "Member 'ChatWidget_C_UpdateChatUserListIcon::Open' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_UpdateChatUserListIcon, Temp_bool_Variable) == 0x000001, "Member 'ChatWidget_C_UpdateChatUserListIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_UpdateChatUserListIcon, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ChatWidget_C_UpdateChatUserListIcon::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_UpdateChatUserListIcon, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'ChatWidget_C_UpdateChatUserListIcon::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_UpdateChatUserListIcon, CallFunc_GetContext_ReturnValue2) == 0x000018, "Member 'ChatWidget_C_UpdateChatUserListIcon::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_UpdateChatUserListIcon, K2Node_Select_Default) == 0x000020, "Member 'ChatWidget_C_UpdateChatUserListIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_UpdateChatUserListIcon, CallFunc_GetInputActionButtonIcon_ReturnValue) == 0x000030, "Member 'ChatWidget_C_UpdateChatUserListIcon::CallFunc_GetInputActionButtonIcon_ReturnValue' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandeChatEnteredEvent
// 0x0058 (0x0058 - 0x0000)
struct ChatWidget_C_HandeChatEnteredEvent final
{
public:
	bool                                          bEnteringChat_0;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NewLocalVar_0;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue3;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue2;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputManager*                    CallFunc_GetInputManager_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue4;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputManager*                    CallFunc_GetInputManager_ReturnValue2;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_HandeChatEnteredEvent) == 0x000008, "Wrong alignment on ChatWidget_C_HandeChatEnteredEvent");
static_assert(sizeof(ChatWidget_C_HandeChatEnteredEvent) == 0x000058, "Wrong size on ChatWidget_C_HandeChatEnteredEvent");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, bEnteringChat_0) == 0x000000, "Member 'ChatWidget_C_HandeChatEnteredEvent::bEnteringChat_0' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, NewLocalVar_0) == 0x000001, "Member 'ChatWidget_C_HandeChatEnteredEvent::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, Temp_byte_Variable) == 0x000002, "Member 'ChatWidget_C_HandeChatEnteredEvent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ChatWidget_C_HandeChatEnteredEvent::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'ChatWidget_C_HandeChatEnteredEvent::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, Temp_bool_Variable) == 0x000011, "Member 'ChatWidget_C_HandeChatEnteredEvent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, Temp_byte_Variable2) == 0x000012, "Member 'ChatWidget_C_HandeChatEnteredEvent::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, Temp_byte_Variable3) == 0x000013, "Member 'ChatWidget_C_HandeChatEnteredEvent::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, CallFunc_GetContext_ReturnValue2) == 0x000018, "Member 'ChatWidget_C_HandeChatEnteredEvent::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, CallFunc_GetContext_ReturnValue3) == 0x000020, "Member 'ChatWidget_C_HandeChatEnteredEvent::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, CallFunc_IsUsingGamepad_ReturnValue2) == 0x000028, "Member 'ChatWidget_C_HandeChatEnteredEvent::CallFunc_IsUsingGamepad_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, CallFunc_GetInputManager_ReturnValue) == 0x000030, "Member 'ChatWidget_C_HandeChatEnteredEvent::CallFunc_GetInputManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, CallFunc_GetContext_ReturnValue4) == 0x000038, "Member 'ChatWidget_C_HandeChatEnteredEvent::CallFunc_GetContext_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, K2Node_Select_Default) == 0x000040, "Member 'ChatWidget_C_HandeChatEnteredEvent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, CallFunc_GetInputManager_ReturnValue2) == 0x000048, "Member 'ChatWidget_C_HandeChatEnteredEvent::CallFunc_GetInputManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, Temp_byte_Variable4) == 0x000050, "Member 'ChatWidget_C_HandeChatEnteredEvent::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, Temp_bool_Variable2) == 0x000051, "Member 'ChatWidget_C_HandeChatEnteredEvent::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, K2Node_Select2_Default) == 0x000052, "Member 'ChatWidget_C_HandeChatEnteredEvent::K2Node_Select2_Default' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleShowChatWindow
// 0x000A (0x000A - 0x0000)
struct ChatWidget_C_HandleShowChatWindow final
{
public:
	EFortUIFeature                                Feature;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           FeatureState;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureStateReason                     FeatureStateReason;                                // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable5;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_HandleShowChatWindow) == 0x000001, "Wrong alignment on ChatWidget_C_HandleShowChatWindow");
static_assert(sizeof(ChatWidget_C_HandleShowChatWindow) == 0x00000A, "Wrong size on ChatWidget_C_HandleShowChatWindow");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, Feature) == 0x000000, "Member 'ChatWidget_C_HandleShowChatWindow::Feature' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, FeatureState) == 0x000001, "Member 'ChatWidget_C_HandleShowChatWindow::FeatureState' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, FeatureStateReason) == 0x000002, "Member 'ChatWidget_C_HandleShowChatWindow::FeatureStateReason' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, Temp_byte_Variable) == 0x000003, "Member 'ChatWidget_C_HandleShowChatWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'ChatWidget_C_HandleShowChatWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, Temp_byte_Variable2) == 0x000005, "Member 'ChatWidget_C_HandleShowChatWindow::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, Temp_byte_Variable3) == 0x000006, "Member 'ChatWidget_C_HandleShowChatWindow::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, Temp_byte_Variable4) == 0x000007, "Member 'ChatWidget_C_HandleShowChatWindow::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, Temp_byte_Variable5) == 0x000008, "Member 'ChatWidget_C_HandleShowChatWindow::Temp_byte_Variable5' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, K2Node_Select_Default) == 0x000009, "Member 'ChatWidget_C_HandleShowChatWindow::K2Node_Select_Default' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleCursorModeChanged
// 0x0028 (0x0028 - 0x0000)
struct ChatWidget_C_HandleCursorModeChanged final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ActionName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_HandleCursorModeChanged) == 0x000008, "Wrong alignment on ChatWidget_C_HandleCursorModeChanged");
static_assert(sizeof(ChatWidget_C_HandleCursorModeChanged) == 0x000028, "Wrong size on ChatWidget_C_HandleCursorModeChanged");
static_assert(offsetof(ChatWidget_C_HandleCursorModeChanged, bEnabled) == 0x000000, "Member 'ChatWidget_C_HandleCursorModeChanged::bEnabled' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleCursorModeChanged, ActionName) == 0x000008, "Member 'ChatWidget_C_HandleCursorModeChanged::ActionName' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleCursorModeChanged, Widget) == 0x000010, "Member 'ChatWidget_C_HandleCursorModeChanged::Widget' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleCursorModeChanged, Temp_bool_Variable) == 0x000018, "Member 'ChatWidget_C_HandleCursorModeChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleCursorModeChanged, K2Node_Select_Default) == 0x000020, "Member 'ChatWidget_C_HandleCursorModeChanged::K2Node_Select_Default' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.BindDelegates
// 0x0048 (0x0048 - 0x0000)
struct ChatWidget_C_BindDelegates final
{
public:
	TDelegate<void(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue3;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_BindDelegates) == 0x000008, "Wrong alignment on ChatWidget_C_BindDelegates");
static_assert(sizeof(ChatWidget_C_BindDelegates) == 0x000048, "Wrong size on ChatWidget_C_BindDelegates");
static_assert(offsetof(ChatWidget_C_BindDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'ChatWidget_C_BindDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_BindDelegates, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'ChatWidget_C_BindDelegates::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_BindDelegates, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'ChatWidget_C_BindDelegates::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_BindDelegates, CallFunc_GetContext_ReturnValue2) == 0x000028, "Member 'ChatWidget_C_BindDelegates::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_BindDelegates, K2Node_CreateDelegate_OutputDelegate3) == 0x000030, "Member 'ChatWidget_C_BindDelegates::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_BindDelegates, CallFunc_GetContext_ReturnValue3) == 0x000040, "Member 'ChatWidget_C_BindDelegates::CallFunc_GetContext_ReturnValue3' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.InitializeChat
// 0x0030 (0x0030 - 0x0000)
struct ChatWidget_C_InitializeChat final
{
public:
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInCursorMode_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select2_Default;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_InitializeChat) == 0x000008, "Wrong alignment on ChatWidget_C_InitializeChat");
static_assert(sizeof(ChatWidget_C_InitializeChat) == 0x000030, "Wrong size on ChatWidget_C_InitializeChat");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'ChatWidget_C_InitializeChat::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_GetContext_ReturnValue2) == 0x000008, "Member 'ChatWidget_C_InitializeChat::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_IsInCursorMode_ReturnValue) == 0x000010, "Member 'ChatWidget_C_InitializeChat::CallFunc_IsInCursorMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_IsUsingGamepad_ReturnValue) == 0x000011, "Member 'ChatWidget_C_InitializeChat::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'ChatWidget_C_InitializeChat::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, Temp_bool_Variable) == 0x000013, "Member 'ChatWidget_C_InitializeChat::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, Temp_byte_Variable) == 0x000014, "Member 'ChatWidget_C_InitializeChat::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, Temp_byte_Variable2) == 0x000015, "Member 'ChatWidget_C_InitializeChat::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, Temp_bool_Variable2) == 0x000016, "Member 'ChatWidget_C_InitializeChat::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, K2Node_Select_Default) == 0x000017, "Member 'ChatWidget_C_InitializeChat::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_GetContext_ReturnValue3) == 0x000018, "Member 'ChatWidget_C_InitializeChat::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_IsInZone_ReturnValue) == 0x000020, "Member 'ChatWidget_C_InitializeChat::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'ChatWidget_C_InitializeChat::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, K2Node_Select2_Default) == 0x000028, "Member 'ChatWidget_C_InitializeChat::K2Node_Select2_Default' has a wrong offset!");

}
