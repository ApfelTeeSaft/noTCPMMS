#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemRatingIndicator

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ItemRatingIndicator.ItemRatingIndicator_C.ExecuteUbergraph_ItemRatingIndicator
// 0x0088 (0x0088 - 0x0000)
struct ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x0008(0x0078)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator) == 0x000008, "Wrong alignment on ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator");
static_assert(sizeof(ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator) == 0x000088, "Wrong size on ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator");
static_assert(offsetof(ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator, EntryPoint) == 0x000000, "Member 'ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator, CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue) == 0x000008, "Member 'ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator::CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000080, "Member 'ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

}

