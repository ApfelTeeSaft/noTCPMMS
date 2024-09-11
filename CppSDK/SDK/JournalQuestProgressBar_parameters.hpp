#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JournalQuestProgressBar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function JournalQuestProgressBar.JournalQuestProgressBar_C.ExecuteUbergraph_JournalQuestProgressBar
// 0x0208 (0x0208 - 0x0000)
struct JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContext_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCombinedDescription_OutDescription;    // 0x0018(0x0018)()
	bool                                          CallFunc_GetCombinedDescription_ReturnValue;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContext_ReturnValue2;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsVisibleToUser_ReturnValue;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProgressBarStyle                      K2Node_MakeStruct_ProgressBarStyle;                // 0x0060(0x0170)()
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue3;                  // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTooltipNumericValue_Value;             // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTooltipNumericValue_ReturnValue;       // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E5[0x3];                                      // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTooltipTextFromToken_OutText;          // 0x01E8(0x0018)()
	bool                                          CallFunc_GetTooltipTextFromToken_ReturnValue;      // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar) == 0x000008, "Wrong alignment on JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar");
static_assert(sizeof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar) == 0x000208, "Wrong size on JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, EntryPoint) == 0x000000, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_SpawnTooltipContext_ReturnValue) == 0x000010, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_SpawnTooltipContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetCombinedDescription_OutDescription) == 0x000018, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetCombinedDescription_OutDescription' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetCombinedDescription_ReturnValue) == 0x000030, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetCombinedDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_SpawnTooltipContext_ReturnValue2) == 0x000038, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_SpawnTooltipContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_IsVisibleToUser_ReturnValue) == 0x000050, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_IsVisibleToUser_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetContext_ReturnValue2) == 0x000058, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, K2Node_MakeStruct_ProgressBarStyle) == 0x000060, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::K2Node_MakeStruct_ProgressBarStyle' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetQuestManager_ReturnValue) == 0x0001D0, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetContext_ReturnValue3) == 0x0001D8, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetTooltipNumericValue_Value) == 0x0001E0, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetTooltipNumericValue_Value' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetTooltipNumericValue_ReturnValue) == 0x0001E4, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetTooltipNumericValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetTooltipTextFromToken_OutText) == 0x0001E8, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetTooltipTextFromToken_OutText' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GetTooltipTextFromToken_ReturnValue) == 0x000200, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GetTooltipTextFromToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000201, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar, CallFunc_IsValid_ReturnValue) == 0x000202, "Member 'JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
