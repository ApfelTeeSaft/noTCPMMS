#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function ErrorEntry.ErrorEntry_C.ExecuteUbergraph_ErrorEntry
// 0x0028 (0x0028 - 0x0000)
struct ErrorEntry_C_ExecuteUbergraph_ErrorEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetButtonVisibility_NewParam;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry) == 0x000008, "Wrong alignment on ErrorEntry_C_ExecuteUbergraph_ErrorEntry");
static_assert(sizeof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry) == 0x000028, "Wrong size on ErrorEntry_C_ExecuteUbergraph_ErrorEntry");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, EntryPoint) == 0x000000, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, CallFunc_GetButtonVisibility_NewParam) == 0x000010, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::CallFunc_GetButtonVisibility_NewParam' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function ErrorEntry.ErrorEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ErrorEntry.ErrorEntry_C.GetButtonVisibility
// 0x0001 (0x0001 - 0x0000)
struct ErrorEntry_C_GetButtonVisibility final
{
public:
	ESlateVisibility                              NewParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ErrorEntry_C_GetButtonVisibility) == 0x000001, "Wrong alignment on ErrorEntry_C_GetButtonVisibility");
static_assert(sizeof(ErrorEntry_C_GetButtonVisibility) == 0x000001, "Wrong size on ErrorEntry_C_GetButtonVisibility");
static_assert(offsetof(ErrorEntry_C_GetButtonVisibility, NewParam) == 0x000000, "Member 'ErrorEntry_C_GetButtonVisibility::NewParam' has a wrong offset!");

// Function ErrorEntry.ErrorEntry_C.SetErrorInfo
// 0x0080 (0x0080 - 0x0000)
struct ErrorEntry_C_SetErrorInfo final
{
public:
	struct FFortErrorInfo                         ErrorInfo_0;                                       // 0x0000(0x0080)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ErrorEntry_C_SetErrorInfo) == 0x000010, "Wrong alignment on ErrorEntry_C_SetErrorInfo");
static_assert(sizeof(ErrorEntry_C_SetErrorInfo) == 0x000080, "Wrong size on ErrorEntry_C_SetErrorInfo");
static_assert(offsetof(ErrorEntry_C_SetErrorInfo, ErrorInfo_0) == 0x000000, "Member 'ErrorEntry_C_SetErrorInfo::ErrorInfo_0' has a wrong offset!");

// Function ErrorEntry.ErrorEntry_C.Center on Widget
// 0x0018 (0x0018 - 0x0000)
struct ErrorEntry_C_Center_on_Widget final
{
public:
	bool                                          Did_Center;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ErrorEntry_C_Center_on_Widget) == 0x000008, "Wrong alignment on ErrorEntry_C_Center_on_Widget");
static_assert(sizeof(ErrorEntry_C_Center_on_Widget) == 0x000018, "Wrong size on ErrorEntry_C_Center_on_Widget");
static_assert(offsetof(ErrorEntry_C_Center_on_Widget, Did_Center) == 0x000000, "Member 'ErrorEntry_C_Center_on_Widget::Did_Center' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_Center_on_Widget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000008, "Member 'ErrorEntry_C_Center_on_Widget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_Center_on_Widget, CallFunc_Len_ReturnValue) == 0x000010, "Member 'ErrorEntry_C_Center_on_Widget::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_Center_on_Widget, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'ErrorEntry_C_Center_on_Widget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

