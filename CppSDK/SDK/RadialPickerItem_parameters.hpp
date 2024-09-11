#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RadialPickerItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function RadialPickerItem.RadialPickerItem_C.ExecuteUbergraph_RadialPickerItem
// 0x0020 (0x0020 - 0x0000)
struct RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem) == 0x000008, "Wrong alignment on RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem");
static_assert(sizeof(RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem) == 0x000020, "Wrong size on RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem");
static_assert(offsetof(RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem, EntryPoint) == 0x000000, "Member 'RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'RadialPickerItem_C_ExecuteUbergraph_RadialPickerItem::CallFunc_GetContext_ReturnValue' has a wrong offset!");

// Function RadialPickerItem.RadialPickerItem_C.SetImageAndLabelContent
// 0x00C0 (0x00C0 - 0x0000)
struct RadialPickerItem_C_SetImageAndLabelContent final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                            Brush;                                             // 0x0018(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Option_Enabled;                                    // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RadialItemIndex;                                   // 0x0094(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_BuildString_Int_ReturnValue;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadialPickerItem_C_SetImageAndLabelContent) == 0x000008, "Wrong alignment on RadialPickerItem_C_SetImageAndLabelContent");
static_assert(sizeof(RadialPickerItem_C_SetImageAndLabelContent) == 0x0000C0, "Wrong size on RadialPickerItem_C_SetImageAndLabelContent");
static_assert(offsetof(RadialPickerItem_C_SetImageAndLabelContent, Text) == 0x000000, "Member 'RadialPickerItem_C_SetImageAndLabelContent::Text' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetImageAndLabelContent, Brush) == 0x000018, "Member 'RadialPickerItem_C_SetImageAndLabelContent::Brush' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetImageAndLabelContent, Option_Enabled) == 0x000090, "Member 'RadialPickerItem_C_SetImageAndLabelContent::Option_Enabled' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetImageAndLabelContent, RadialItemIndex) == 0x000094, "Member 'RadialPickerItem_C_SetImageAndLabelContent::RadialItemIndex' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetImageAndLabelContent, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'RadialPickerItem_C_SetImageAndLabelContent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetImageAndLabelContent, CallFunc_BuildString_Int_ReturnValue) == 0x0000A0, "Member 'RadialPickerItem_C_SetImageAndLabelContent::CallFunc_BuildString_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetImageAndLabelContent, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B0, "Member 'RadialPickerItem_C_SetImageAndLabelContent::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetImageAndLabelContent, CallFunc_MakeLiteralName_ReturnValue) == 0x0000B8, "Member 'RadialPickerItem_C_SetImageAndLabelContent::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");

// Function RadialPickerItem.RadialPickerItem_C.SetSelected
// 0x0078 (0x0078 - 0x0000)
struct RadialPickerItem_C_SetSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor2;                     // 0x0050(0x0028)()
};
static_assert(alignof(RadialPickerItem_C_SetSelected) == 0x000008, "Wrong alignment on RadialPickerItem_C_SetSelected");
static_assert(sizeof(RadialPickerItem_C_SetSelected) == 0x000078, "Wrong size on RadialPickerItem_C_SetSelected");
static_assert(offsetof(RadialPickerItem_C_SetSelected, IsSelected) == 0x000000, "Member 'RadialPickerItem_C_SetSelected::IsSelected' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, Temp_byte_Variable) == 0x000001, "Member 'RadialPickerItem_C_SetSelected::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, Temp_byte_Variable2) == 0x000002, "Member 'RadialPickerItem_C_SetSelected::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'RadialPickerItem_C_SetSelected::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'RadialPickerItem_C_SetSelected::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, CallFunc_GetIsEnabled_ReturnValue) == 0x000009, "Member 'RadialPickerItem_C_SetSelected::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'RadialPickerItem_C_SetSelected::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, Temp_bool_Variable) == 0x000018, "Member 'RadialPickerItem_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'RadialPickerItem_C_SetSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, K2Node_Select_Default) == 0x000048, "Member 'RadialPickerItem_C_SetSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetSelected, K2Node_MakeStruct_SlateColor2) == 0x000050, "Member 'RadialPickerItem_C_SetSelected::K2Node_MakeStruct_SlateColor2' has a wrong offset!");

// Function RadialPickerItem.RadialPickerItem_C.SetItemContent
// 0x0050 (0x0050 - 0x0000)
struct RadialPickerItem_C_SetItemContent final
{
public:
	class UFortItem*                              Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Option_Enabled;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Radial_Item_Index;                                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_BuildString_Int_ReturnValue;              // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0018)()
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadialPickerItem_C_SetItemContent) == 0x000008, "Wrong alignment on RadialPickerItem_C_SetItemContent");
static_assert(sizeof(RadialPickerItem_C_SetItemContent) == 0x000050, "Wrong size on RadialPickerItem_C_SetItemContent");
static_assert(offsetof(RadialPickerItem_C_SetItemContent, Item) == 0x000000, "Member 'RadialPickerItem_C_SetItemContent::Item' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetItemContent, Option_Enabled) == 0x000008, "Member 'RadialPickerItem_C_SetItemContent::Option_Enabled' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetItemContent, Radial_Item_Index) == 0x00000C, "Member 'RadialPickerItem_C_SetItemContent::Radial_Item_Index' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetItemContent, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'RadialPickerItem_C_SetItemContent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetItemContent, CallFunc_BuildString_Int_ReturnValue) == 0x000018, "Member 'RadialPickerItem_C_SetItemContent::CallFunc_BuildString_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetItemContent, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'RadialPickerItem_C_SetItemContent::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetItemContent, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'RadialPickerItem_C_SetItemContent::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetItemContent, CallFunc_MakeLiteralName_ReturnValue) == 0x000048, "Member 'RadialPickerItem_C_SetItemContent::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");

// Function RadialPickerItem.RadialPickerItem_C.SetShowImageAndLabel
// 0x0001 (0x0001 - 0x0000)
struct RadialPickerItem_C_SetShowImageAndLabel final
{
public:
	bool                                          ShowImageAndLabel;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RadialPickerItem_C_SetShowImageAndLabel) == 0x000001, "Wrong alignment on RadialPickerItem_C_SetShowImageAndLabel");
static_assert(sizeof(RadialPickerItem_C_SetShowImageAndLabel) == 0x000001, "Wrong size on RadialPickerItem_C_SetShowImageAndLabel");
static_assert(offsetof(RadialPickerItem_C_SetShowImageAndLabel, ShowImageAndLabel) == 0x000000, "Member 'RadialPickerItem_C_SetShowImageAndLabel::ShowImageAndLabel' has a wrong offset!");

// Function RadialPickerItem.RadialPickerItem_C.SetKeybindVisibility
// 0x0018 (0x0018 - 0x0000)
struct RadialPickerItem_C_SetKeybindVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadialPickerItem_C_SetKeybindVisibility) == 0x000008, "Wrong alignment on RadialPickerItem_C_SetKeybindVisibility");
static_assert(sizeof(RadialPickerItem_C_SetKeybindVisibility) == 0x000018, "Wrong size on RadialPickerItem_C_SetKeybindVisibility");
static_assert(offsetof(RadialPickerItem_C_SetKeybindVisibility, Temp_bool_Variable) == 0x000000, "Member 'RadialPickerItem_C_SetKeybindVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetKeybindVisibility, Temp_byte_Variable) == 0x000001, "Member 'RadialPickerItem_C_SetKeybindVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetKeybindVisibility, Temp_byte_Variable2) == 0x000002, "Member 'RadialPickerItem_C_SetKeybindVisibility::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetKeybindVisibility, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'RadialPickerItem_C_SetKeybindVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetKeybindVisibility, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'RadialPickerItem_C_SetKeybindVisibility::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadialPickerItem_C_SetKeybindVisibility, K2Node_Select_Default) == 0x000011, "Member 'RadialPickerItem_C_SetKeybindVisibility::K2Node_Select_Default' has a wrong offset!");

}
