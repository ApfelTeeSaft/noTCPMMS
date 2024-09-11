#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuickbarSecondary

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.ExecuteUbergraph_AthenaQuickbarSecondary
// 0x0090 (0x0090 - 0x0000)
struct AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bUsingGamepad;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor)
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class UQuickbarSlot_C*>                K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	EFortQuickBars                                K2Node_CustomEvent_QuickbarIndex;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Slot;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EFortQuickBars QuickbarIndex, int32 Slot)> K2Node_CreateDelegate_OutputDelegate4;             // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue3;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuickBars                                K2Node_Event_QuickbarIndex;                        // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary) == 0x000008, "Wrong alignment on AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary");
static_assert(sizeof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary) == 0x000090, "Wrong size on AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, EntryPoint) == 0x000000, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, K2Node_CustomEvent_bUsingGamepad) == 0x000004, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::K2Node_CustomEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, K2Node_CreateDelegate_OutputDelegate3) == 0x000030, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, K2Node_MakeArray_Array) == 0x000040, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, K2Node_CustomEvent_QuickbarIndex) == 0x000050, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::K2Node_CustomEvent_QuickbarIndex' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, K2Node_CustomEvent_Slot) == 0x000054, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000058, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, K2Node_CreateDelegate_OutputDelegate4) == 0x000060, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, CallFunc_GetContext_ReturnValue) == 0x000070, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, CallFunc_GetContext_ReturnValue2) == 0x000078, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, CallFunc_GetContext_ReturnValue3) == 0x000080, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary, K2Node_Event_QuickbarIndex) == 0x000088, "Member 'AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary::K2Node_Event_QuickbarIndex' has a wrong offset!");

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickbarContentsChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaQuickbarSecondary_C_OnQuickbarContentsChanged final
{
public:
	EFortQuickBars                                QuickbarIndex;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaQuickbarSecondary_C_OnQuickbarContentsChanged) == 0x000001, "Wrong alignment on AthenaQuickbarSecondary_C_OnQuickbarContentsChanged");
static_assert(sizeof(AthenaQuickbarSecondary_C_OnQuickbarContentsChanged) == 0x000001, "Wrong size on AthenaQuickbarSecondary_C_OnQuickbarContentsChanged");
static_assert(offsetof(AthenaQuickbarSecondary_C_OnQuickbarContentsChanged, QuickbarIndex) == 0x000000, "Member 'AthenaQuickbarSecondary_C_OnQuickbarContentsChanged::QuickbarIndex' has a wrong offset!");

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickBarSlotFocusChanged_Bind
// 0x0008 (0x0008 - 0x0000)
struct AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind final
{
public:
	EFortQuickBars                                QuickbarIndex;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Slot_0;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind) == 0x000004, "Wrong alignment on AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind");
static_assert(sizeof(AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind) == 0x000008, "Wrong size on AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind");
static_assert(offsetof(AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind, QuickbarIndex) == 0x000000, "Member 'AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind::QuickbarIndex' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind, Slot_0) == 0x000004, "Member 'AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind::Slot_0' has a wrong offset!");

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleInputMethodChanged_Bind
// 0x0001 (0x0001 - 0x0000)
struct AthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind) == 0x000001, "Wrong alignment on AthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind");
static_assert(sizeof(AthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind) == 0x000001, "Wrong size on AthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind, bUsingGamepad) == 0x000000, "Member 'AthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind::bUsingGamepad' has a wrong offset!");

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Show Secondary Quickbar Rail
// 0x0005 (0x0005 - 0x0000)
struct AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail) == 0x000001, "Wrong alignment on AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail");
static_assert(sizeof(AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail) == 0x000005, "Wrong size on AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail");
static_assert(offsetof(AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail, Show) == 0x000000, "Member 'AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail::Show' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail, Temp_bool_Variable) == 0x000001, "Member 'AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail, Temp_byte_Variable) == 0x000002, "Member 'AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail, Temp_byte_Variable2) == 0x000003, "Member 'AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail, K2Node_Select_Default) == 0x000004, "Member 'AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail::K2Node_Select_Default' has a wrong offset!");

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeyBindsChange
// 0x0020 (0x0020 - 0x0000)
struct AthenaQuickbarSecondary_C_HandleKeyBindsChange final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuickbarSlot_C*                        CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaQuickbarSecondary_C_HandleKeyBindsChange) == 0x000008, "Wrong alignment on AthenaQuickbarSecondary_C_HandleKeyBindsChange");
static_assert(sizeof(AthenaQuickbarSecondary_C_HandleKeyBindsChange) == 0x000020, "Wrong size on AthenaQuickbarSecondary_C_HandleKeyBindsChange");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleKeyBindsChange, Temp_int_Array_Index_Variable) == 0x000000, "Member 'AthenaQuickbarSecondary_C_HandleKeyBindsChange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleKeyBindsChange, CallFunc_Array_Get_Item) == 0x000008, "Member 'AthenaQuickbarSecondary_C_HandleKeyBindsChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleKeyBindsChange, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'AthenaQuickbarSecondary_C_HandleKeyBindsChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleKeyBindsChange, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'AthenaQuickbarSecondary_C_HandleKeyBindsChange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleKeyBindsChange, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'AthenaQuickbarSecondary_C_HandleKeyBindsChange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleKeyBindsChange, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'AthenaQuickbarSecondary_C_HandleKeyBindsChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMinimizeHiding
// 0x0098 (0x0098 - 0x0000)
struct AthenaQuickbarSecondary_C_HandleMinimizeHiding final
{
public:
	class FString                                 ConfigE;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ConfigF;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsConfigE;                                         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsConfigF;                                         // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentInputPresetName_ReturnValue;    // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentInputPresetName_ReturnValue2;   // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UQuickbarSlot_C*                        CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue2;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarSecondary_C_HandleMinimizeHiding) == 0x000008, "Wrong alignment on AthenaQuickbarSecondary_C_HandleMinimizeHiding");
static_assert(sizeof(AthenaQuickbarSecondary_C_HandleMinimizeHiding) == 0x000098, "Wrong size on AthenaQuickbarSecondary_C_HandleMinimizeHiding");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, ConfigE) == 0x000000, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::ConfigE' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, ConfigF) == 0x000010, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::ConfigF' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, IsConfigE) == 0x000020, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::IsConfigE' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, IsConfigF) == 0x000021, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::IsConfigF' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, Temp_int_Array_Index_Variable) == 0x000024, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_BooleanOR_ReturnValue) == 0x000028, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_GetContext_ReturnValue2) == 0x000038, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_IsUsingGamepad_ReturnValue) == 0x000040, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_GetCurrentInputPresetName_ReturnValue) == 0x000048, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_GetCurrentInputPresetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000058, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_GetContext_ReturnValue3) == 0x000068, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_GetCurrentInputPresetName_ReturnValue2) == 0x000070, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_GetCurrentInputPresetName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_Array_Get_Item) == 0x000080, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_EqualEqual_StrStr_ReturnValue2) == 0x000088, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_EqualEqual_StrStr_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMinimizeHiding, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'AthenaQuickbarSecondary_C_HandleMinimizeHiding::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleShowHideRail
// 0x0010 (0x0010 - 0x0000)
struct AthenaQuickbarSecondary_C_HandleShowHideRail final
{
public:
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarSecondary_C_HandleShowHideRail) == 0x000008, "Wrong alignment on AthenaQuickbarSecondary_C_HandleShowHideRail");
static_assert(sizeof(AthenaQuickbarSecondary_C_HandleShowHideRail) == 0x000010, "Wrong size on AthenaQuickbarSecondary_C_HandleShowHideRail");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleShowHideRail, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'AthenaQuickbarSecondary_C_HandleShowHideRail::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleShowHideRail, CallFunc_IsUsingGamepad_ReturnValue) == 0x000008, "Member 'AthenaQuickbarSecondary_C_HandleShowHideRail::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMaximizeShowing
// 0x0098 (0x0098 - 0x0000)
struct AthenaQuickbarSecondary_C_HandleMaximizeShowing final
{
public:
	class FString                                 ConfigF;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ConfigE;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsConfigE;                                         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsConfigF;                                         // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentInputPresetName_ReturnValue;    // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentInputPresetName_ReturnValue2;   // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UQuickbarSlot_C*                        CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue2;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarSecondary_C_HandleMaximizeShowing) == 0x000008, "Wrong alignment on AthenaQuickbarSecondary_C_HandleMaximizeShowing");
static_assert(sizeof(AthenaQuickbarSecondary_C_HandleMaximizeShowing) == 0x000098, "Wrong size on AthenaQuickbarSecondary_C_HandleMaximizeShowing");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, ConfigF) == 0x000000, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::ConfigF' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, ConfigE) == 0x000010, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::ConfigE' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, IsConfigE) == 0x000020, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::IsConfigE' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, IsConfigF) == 0x000021, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::IsConfigF' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, Temp_int_Array_Index_Variable) == 0x000024, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_BooleanOR_ReturnValue) == 0x000028, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_GetContext_ReturnValue2) == 0x000038, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_IsUsingGamepad_ReturnValue) == 0x000040, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_GetCurrentInputPresetName_ReturnValue) == 0x000048, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_GetCurrentInputPresetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000058, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_GetContext_ReturnValue3) == 0x000068, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_GetCurrentInputPresetName_ReturnValue2) == 0x000070, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_GetCurrentInputPresetName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_Array_Get_Item) == 0x000080, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_EqualEqual_StrStr_ReturnValue2) == 0x000088, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_EqualEqual_StrStr_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarSecondary_C_HandleMaximizeShowing, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'AthenaQuickbarSecondary_C_HandleMaximizeShowing::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

