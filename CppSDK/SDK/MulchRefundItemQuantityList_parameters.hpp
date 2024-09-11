#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MulchRefundItemQuantityList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.AddListEntry
// 0x0008 (0x0008 - 0x0000)
struct MulchRefundItemQuantityList_C_AddListEntry final
{
public:
	class UFortItemQuantityListEntryBase*         ListEntry;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MulchRefundItemQuantityList_C_AddListEntry) == 0x000008, "Wrong alignment on MulchRefundItemQuantityList_C_AddListEntry");
static_assert(sizeof(MulchRefundItemQuantityList_C_AddListEntry) == 0x000008, "Wrong size on MulchRefundItemQuantityList_C_AddListEntry");
static_assert(offsetof(MulchRefundItemQuantityList_C_AddListEntry, ListEntry) == 0x000000, "Member 'MulchRefundItemQuantityList_C_AddListEntry::ListEntry' has a wrong offset!");

// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.ExecuteUbergraph_MulchRefundItemQuantityList
// 0x0028 (0x0028 - 0x0000)
struct MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemQuantityListEntryBase*         K2Node_Event_ListEntry;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList) == 0x000008, "Wrong alignment on MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList");
static_assert(sizeof(MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList) == 0x000028, "Wrong size on MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList");
static_assert(offsetof(MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList, EntryPoint) == 0x000000, "Member 'MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList::EntryPoint' has a wrong offset!");
static_assert(offsetof(MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList, K2Node_MakeStruct_Margin) == 0x000004, "Member 'MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList, K2Node_Event_ListEntry) == 0x000018, "Member 'MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList::K2Node_Event_ListEntry' has a wrong offset!");
static_assert(offsetof(MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000020, "Member 'MulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

}

