#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookPageListWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
// 0x0070 (0x0070 - 0x0000)
struct CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable3;                                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable4;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortCollectionBookCategory*            K2Node_Event_Category;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCollectionBookPage*                K2Node_Event_Page;                                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bExpanded;                            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NumAvailableSlots;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCollectionBookState                      K2Node_Event_State;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCommonButton* Button, bool Selected)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Select2_Default;                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_CustomEvent_ThisButton;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSelected;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget) == 0x000008, "Wrong alignment on CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget");
static_assert(sizeof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget) == 0x000070, "Wrong size on CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, EntryPoint) == 0x000000, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, Temp_bool_Variable) == 0x000004, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, Temp_int_Variable) == 0x000008, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, Temp_int_Variable2) == 0x00000C, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, Temp_bool_Variable2) == 0x000010, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, Temp_int_Variable3) == 0x000014, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::Temp_int_Variable3' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, Temp_int_Variable4) == 0x000018, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::Temp_int_Variable4' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_Event_Category) == 0x000020, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_Event_Category' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_Event_Page) == 0x000028, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_Event_Page' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_Event_bExpanded) == 0x000030, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_Event_bExpanded' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_Select_Default) == 0x000034, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_Event_IsDesignTime) == 0x000038, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_Event_NumAvailableSlots) == 0x00003C, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_Event_NumAvailableSlots' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_Event_State) == 0x000040, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000041, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_Select2_Default) == 0x000058, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_CustomEvent_ThisButton) == 0x000060, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_CustomEvent_ThisButton' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget, K2Node_CustomEvent_bSelected) == 0x000068, "Member 'CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget::K2Node_CustomEvent_bSelected' has a wrong offset!");

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
// 0x0010 (0x0010 - 0x0000)
struct CollectionBookPageListWidget_C_OnSelectionChanged final
{
public:
	class UCommonButton*                          ThisButton;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBookPageListWidget_C_OnSelectionChanged) == 0x000008, "Wrong alignment on CollectionBookPageListWidget_C_OnSelectionChanged");
static_assert(sizeof(CollectionBookPageListWidget_C_OnSelectionChanged) == 0x000010, "Wrong size on CollectionBookPageListWidget_C_OnSelectionChanged");
static_assert(offsetof(CollectionBookPageListWidget_C_OnSelectionChanged, ThisButton) == 0x000000, "Member 'CollectionBookPageListWidget_C_OnSelectionChanged::ThisButton' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_OnSelectionChanged, bSelected) == 0x000008, "Member 'CollectionBookPageListWidget_C_OnSelectionChanged::bSelected' has a wrong offset!");

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
// 0x0008 (0x0008 - 0x0000)
struct CollectionBookPageListWidget_C_OnPageDetailsUpdated final
{
public:
	int32                                         NumAvailableSlots;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCollectionBookState                      State;                                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookPageListWidget_C_OnPageDetailsUpdated) == 0x000004, "Wrong alignment on CollectionBookPageListWidget_C_OnPageDetailsUpdated");
static_assert(sizeof(CollectionBookPageListWidget_C_OnPageDetailsUpdated) == 0x000008, "Wrong size on CollectionBookPageListWidget_C_OnPageDetailsUpdated");
static_assert(offsetof(CollectionBookPageListWidget_C_OnPageDetailsUpdated, NumAvailableSlots) == 0x000000, "Member 'CollectionBookPageListWidget_C_OnPageDetailsUpdated::NumAvailableSlots' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_OnPageDetailsUpdated, State) == 0x000004, "Member 'CollectionBookPageListWidget_C_OnPageDetailsUpdated::State' has a wrong offset!");

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CollectionBookPageListWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBookPageListWidget_C_PreConstruct) == 0x000001, "Wrong alignment on CollectionBookPageListWidget_C_PreConstruct");
static_assert(sizeof(CollectionBookPageListWidget_C_PreConstruct) == 0x000001, "Wrong size on CollectionBookPageListWidget_C_PreConstruct");
static_assert(offsetof(CollectionBookPageListWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CollectionBookPageListWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct CollectionBookPageListWidget_C_OnExpansionChanged final
{
public:
	bool                                          bExpanded;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBookPageListWidget_C_OnExpansionChanged) == 0x000001, "Wrong alignment on CollectionBookPageListWidget_C_OnExpansionChanged");
static_assert(sizeof(CollectionBookPageListWidget_C_OnExpansionChanged) == 0x000001, "Wrong size on CollectionBookPageListWidget_C_OnExpansionChanged");
static_assert(offsetof(CollectionBookPageListWidget_C_OnExpansionChanged, bExpanded) == 0x000000, "Member 'CollectionBookPageListWidget_C_OnExpansionChanged::bExpanded' has a wrong offset!");

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
// 0x0008 (0x0008 - 0x0000)
struct CollectionBookPageListWidget_C_SetupAsPage final
{
public:
	class UFortCollectionBookPage*                Page;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookPageListWidget_C_SetupAsPage) == 0x000008, "Wrong alignment on CollectionBookPageListWidget_C_SetupAsPage");
static_assert(sizeof(CollectionBookPageListWidget_C_SetupAsPage) == 0x000008, "Wrong size on CollectionBookPageListWidget_C_SetupAsPage");
static_assert(offsetof(CollectionBookPageListWidget_C_SetupAsPage, Page) == 0x000000, "Member 'CollectionBookPageListWidget_C_SetupAsPage::Page' has a wrong offset!");

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
// 0x0008 (0x0008 - 0x0000)
struct CollectionBookPageListWidget_C_SetupAsCategory final
{
public:
	class UFortCollectionBookCategory*            Category;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookPageListWidget_C_SetupAsCategory) == 0x000008, "Wrong alignment on CollectionBookPageListWidget_C_SetupAsCategory");
static_assert(sizeof(CollectionBookPageListWidget_C_SetupAsCategory) == 0x000008, "Wrong size on CollectionBookPageListWidget_C_SetupAsCategory");
static_assert(offsetof(CollectionBookPageListWidget_C_SetupAsCategory, Category) == 0x000000, "Member 'CollectionBookPageListWidget_C_SetupAsCategory::Category' has a wrong offset!");

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
// 0x0038 (0x0038 - 0x0000)
struct CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors final
{
public:
	struct FLinearColor                           ColorToUse;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0020(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors) == 0x000008, "Wrong alignment on CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors");
static_assert(sizeof(CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors) == 0x000038, "Wrong size on CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors");
static_assert(offsetof(CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors, ColorToUse) == 0x000000, "Member 'CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors::ColorToUse' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors, CallFunc_GetSelected_ReturnValue) == 0x000010, "Member 'CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors, Temp_bool_Variable) == 0x000011, "Member 'CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors, K2Node_Select_Default) == 0x000020, "Member 'CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'CollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.Update Available Slots Widget
// 0x000C (0x000C - 0x0000)
struct CollectionBookPageListWidget_C_Update_Available_Slots_Widget final
{
public:
	int32                                         NumAvailableSlots;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookPageListWidget_C_Update_Available_Slots_Widget) == 0x000004, "Wrong alignment on CollectionBookPageListWidget_C_Update_Available_Slots_Widget");
static_assert(sizeof(CollectionBookPageListWidget_C_Update_Available_Slots_Widget) == 0x00000C, "Wrong size on CollectionBookPageListWidget_C_Update_Available_Slots_Widget");
static_assert(offsetof(CollectionBookPageListWidget_C_Update_Available_Slots_Widget, NumAvailableSlots) == 0x000000, "Member 'CollectionBookPageListWidget_C_Update_Available_Slots_Widget::NumAvailableSlots' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_Update_Available_Slots_Widget, Temp_bool_Variable) == 0x000004, "Member 'CollectionBookPageListWidget_C_Update_Available_Slots_Widget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_Update_Available_Slots_Widget, CallFunc_Greater_IntInt_ReturnValue) == 0x000005, "Member 'CollectionBookPageListWidget_C_Update_Available_Slots_Widget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_Update_Available_Slots_Widget, Temp_byte_Variable) == 0x000006, "Member 'CollectionBookPageListWidget_C_Update_Available_Slots_Widget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_Update_Available_Slots_Widget, Temp_byte_Variable2) == 0x000007, "Member 'CollectionBookPageListWidget_C_Update_Available_Slots_Widget::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(CollectionBookPageListWidget_C_Update_Available_Slots_Widget, K2Node_Select_Default) == 0x000008, "Member 'CollectionBookPageListWidget_C_Update_Available_Slots_Widget::K2Node_Select_Default' has a wrong offset!");

}

