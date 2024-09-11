#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InfoEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function InfoEntry.InfoEntry_C.Entry Selected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct InfoEntry_C_Entry_Selected__DelegateSignature final
{
public:
	class UFortItemDefinition*                    Entry_Item_Definition;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoEntry_C_Entry_Selected__DelegateSignature) == 0x000008, "Wrong alignment on InfoEntry_C_Entry_Selected__DelegateSignature");
static_assert(sizeof(InfoEntry_C_Entry_Selected__DelegateSignature) == 0x000008, "Wrong size on InfoEntry_C_Entry_Selected__DelegateSignature");
static_assert(offsetof(InfoEntry_C_Entry_Selected__DelegateSignature, Entry_Item_Definition) == 0x000000, "Member 'InfoEntry_C_Entry_Selected__DelegateSignature::Entry_Item_Definition' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.ExecuteUbergraph_InfoEntry
// 0x0058 (0x0058 - 0x0000)
struct InfoEntry_C_ExecuteUbergraph_InfoEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UUserWidget* Widget)>    K2Node_Event_Callback;                             // 0x0008(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bExpanded;                            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InIndexInList;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelected;                            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_InData;                               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                        K2Node_Event_OwningList;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    K2Node_DynamicCast_AsFort_Item_Definition;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoEntry_C_ExecuteUbergraph_InfoEntry) == 0x000008, "Wrong alignment on InfoEntry_C_ExecuteUbergraph_InfoEntry");
static_assert(sizeof(InfoEntry_C_ExecuteUbergraph_InfoEntry) == 0x000058, "Wrong size on InfoEntry_C_ExecuteUbergraph_InfoEntry");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, EntryPoint) == 0x000000, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_Event_Callback) == 0x000008, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_Event_Callback' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_Event_bExpanded) == 0x000018, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_Event_bExpanded' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_Event_InIndexInList) == 0x00001C, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_Event_InIndexInList' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_Event_bSelected) == 0x000020, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_Event_bSelected' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_Event_InData) == 0x000028, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_Event_OwningList) == 0x000030, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_Event_OwningList' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_DynamicCast_AsFort_Item_Definition) == 0x000038, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_DynamicCast_AsFort_Item_Definition' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_ComponentBoundEvent_Button2) == 0x000048, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_ExecuteUbergraph_InfoEntry, K2Node_ComponentBoundEvent_Button) == 0x000050, "Member 'InfoEntry_C_ExecuteUbergraph_InfoEntry::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct InfoEntry_C_SetData final
{
public:
	class UObject*                                InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                        OwningList;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoEntry_C_SetData) == 0x000008, "Wrong alignment on InfoEntry_C_SetData");
static_assert(sizeof(InfoEntry_C_SetData) == 0x000010, "Wrong size on InfoEntry_C_SetData");
static_assert(offsetof(InfoEntry_C_SetData, InData) == 0x000000, "Member 'InfoEntry_C_SetData::InData' has a wrong offset!");
static_assert(offsetof(InfoEntry_C_SetData, OwningList) == 0x000008, "Member 'InfoEntry_C_SetData::OwningList' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct InfoEntry_C_SetSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InfoEntry_C_SetSelected) == 0x000001, "Wrong alignment on InfoEntry_C_SetSelected");
static_assert(sizeof(InfoEntry_C_SetSelected) == 0x000001, "Wrong size on InfoEntry_C_SetSelected");
static_assert(offsetof(InfoEntry_C_SetSelected, bSelected) == 0x000000, "Member 'InfoEntry_C_SetSelected::bSelected' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.SetIndexInList
// 0x0004 (0x0004 - 0x0000)
struct InfoEntry_C_SetIndexInList final
{
public:
	int32                                         InIndexInList;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoEntry_C_SetIndexInList) == 0x000004, "Wrong alignment on InfoEntry_C_SetIndexInList");
static_assert(sizeof(InfoEntry_C_SetIndexInList) == 0x000004, "Wrong size on InfoEntry_C_SetIndexInList");
static_assert(offsetof(InfoEntry_C_SetIndexInList, InIndexInList) == 0x000000, "Member 'InfoEntry_C_SetIndexInList::InIndexInList' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.SetExpanded
// 0x0001 (0x0001 - 0x0000)
struct InfoEntry_C_SetExpanded final
{
public:
	bool                                          bExpanded;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InfoEntry_C_SetExpanded) == 0x000001, "Wrong alignment on InfoEntry_C_SetExpanded");
static_assert(sizeof(InfoEntry_C_SetExpanded) == 0x000001, "Wrong size on InfoEntry_C_SetExpanded");
static_assert(offsetof(InfoEntry_C_SetExpanded, bExpanded) == 0x000000, "Member 'InfoEntry_C_SetExpanded::bExpanded' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.RegisterOnClicked
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) InfoEntry_C_RegisterOnClicked final
{
public:
	TDelegate<void(class UUserWidget* Widget)>    Callback;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};
static_assert(alignof(InfoEntry_C_RegisterOnClicked) == 0x000008, "Wrong alignment on InfoEntry_C_RegisterOnClicked");
static_assert(sizeof(InfoEntry_C_RegisterOnClicked) == 0x000010, "Wrong size on InfoEntry_C_RegisterOnClicked");
static_assert(offsetof(InfoEntry_C_RegisterOnClicked, Callback) == 0x000000, "Member 'InfoEntry_C_RegisterOnClicked::Callback' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.GetData
// 0x0008 (0x0008 - 0x0000)
struct InfoEntry_C_GetData final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoEntry_C_GetData) == 0x000008, "Wrong alignment on InfoEntry_C_GetData");
static_assert(sizeof(InfoEntry_C_GetData) == 0x000008, "Wrong size on InfoEntry_C_GetData");
static_assert(offsetof(InfoEntry_C_GetData, ReturnValue) == 0x000000, "Member 'InfoEntry_C_GetData::ReturnValue' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.IsItemExpanded
// 0x0001 (0x0001 - 0x0000)
struct InfoEntry_C_IsItemExpanded final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InfoEntry_C_IsItemExpanded) == 0x000001, "Wrong alignment on InfoEntry_C_IsItemExpanded");
static_assert(sizeof(InfoEntry_C_IsItemExpanded) == 0x000001, "Wrong size on InfoEntry_C_IsItemExpanded");
static_assert(offsetof(InfoEntry_C_IsItemExpanded, ReturnValue) == 0x000000, "Member 'InfoEntry_C_IsItemExpanded::ReturnValue' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.DoesItemHaveChildren
// 0x0004 (0x0004 - 0x0000)
struct InfoEntry_C_DoesItemHaveChildren final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoEntry_C_DoesItemHaveChildren) == 0x000004, "Wrong alignment on InfoEntry_C_DoesItemHaveChildren");
static_assert(sizeof(InfoEntry_C_DoesItemHaveChildren) == 0x000004, "Wrong size on InfoEntry_C_DoesItemHaveChildren");
static_assert(offsetof(InfoEntry_C_DoesItemHaveChildren, ReturnValue) == 0x000000, "Member 'InfoEntry_C_DoesItemHaveChildren::ReturnValue' has a wrong offset!");

// Function InfoEntry.InfoEntry_C.GetIndentLevel
// 0x0004 (0x0004 - 0x0000)
struct InfoEntry_C_GetIndentLevel final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InfoEntry_C_GetIndentLevel) == 0x000004, "Wrong alignment on InfoEntry_C_GetIndentLevel");
static_assert(sizeof(InfoEntry_C_GetIndentLevel) == 0x000004, "Wrong size on InfoEntry_C_GetIndentLevel");
static_assert(offsetof(InfoEntry_C_GetIndentLevel, ReturnValue) == 0x000000, "Member 'InfoEntry_C_GetIndentLevel::ReturnValue' has a wrong offset!");

}

