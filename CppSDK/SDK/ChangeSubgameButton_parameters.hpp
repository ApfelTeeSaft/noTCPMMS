#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChangeSubgameButton

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ChangeSubgameButton.ChangeSubgameButton_C.ExecuteUbergraph_ChangeSubgameButton
// 0x0148 (0x0148 - 0x0000)
struct ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDialogResult                             Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumPlayersInLocalParty_ReturnValue;    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0050(0x0018)()
	EFortDialogResult                             K2Node_CustomEvent_Result;                         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_ResultName;                     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bVisible;                             // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x009C(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00D8(0x0070)()
};
static_assert(alignof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton) == 0x000008, "Wrong alignment on ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton");
static_assert(sizeof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton) == 0x000148, "Wrong size on ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, EntryPoint) == 0x000000, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, Temp_name_Variable) == 0x000008, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, Temp_byte_Variable) == 0x000010, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_GetContext_ReturnValue2) == 0x000028, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, Temp_bool_Variable) == 0x000030, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_GetNumPlayersInLocalParty_ReturnValue) == 0x000034, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_GetNumPlayersInLocalParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, Temp_byte_Variable2) == 0x000038, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_Greater_IntInt_ReturnValue) == 0x000039, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, Temp_byte_Variable3) == 0x00003A, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_GetContext_ReturnValue3) == 0x000040, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_ComponentBoundEvent_Button) == 0x000048, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_MakeLiteralText_ReturnValue) == 0x000050, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_CustomEvent_Result) == 0x000068, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_CustomEvent_ResultName) == 0x000070, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_CustomEvent_ResultName' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue) == 0x000078, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_Event_bVisible) == 0x000081, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_Select_Default) == 0x000098, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_Event_MyGeometry) == 0x00009C, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_Event_MouseEvent) == 0x0000D8, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_Event_MouseEvent' has a wrong offset!");

// Function ChangeSubgameButton.ChangeSubgameButton_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct ChangeSubgameButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ChangeSubgameButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on ChangeSubgameButton_C_OnMouseEnter");
static_assert(sizeof(ChangeSubgameButton_C_OnMouseEnter) == 0x0000A8, "Wrong size on ChangeSubgameButton_C_OnMouseEnter");
static_assert(offsetof(ChangeSubgameButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ChangeSubgameButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'ChangeSubgameButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function ChangeSubgameButton.ChangeSubgameButton_C.UpdateButtonState
// 0x0001 (0x0001 - 0x0000)
struct ChangeSubgameButton_C_UpdateButtonState final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeSubgameButton_C_UpdateButtonState) == 0x000001, "Wrong alignment on ChangeSubgameButton_C_UpdateButtonState");
static_assert(sizeof(ChangeSubgameButton_C_UpdateButtonState) == 0x000001, "Wrong size on ChangeSubgameButton_C_UpdateButtonState");
static_assert(offsetof(ChangeSubgameButton_C_UpdateButtonState, bVisible) == 0x000000, "Member 'ChangeSubgameButton_C_UpdateButtonState::bVisible' has a wrong offset!");

// Function ChangeSubgameButton.ChangeSubgameButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ChangeSubgameButton.ChangeSubgameButton_C.DialogResult_3A1F478D47C301F9F1E029927174E059
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059 final
{
public:
	EFortDialogResult                             Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ResultName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059) == 0x000008, "Wrong alignment on ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059");
static_assert(sizeof(ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059) == 0x000010, "Wrong size on ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059");
static_assert(offsetof(ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059, Result) == 0x000000, "Member 'ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059::Result' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059, ResultName) == 0x000008, "Member 'ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059::ResultName' has a wrong offset!");

}
