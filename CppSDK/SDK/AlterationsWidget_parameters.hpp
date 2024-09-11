#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
// 0x0080 (0x0080 - 0x0000)
struct AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAlterationWidget_C*                    CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAlterationUnlocked_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIAlteration                      K2Node_Event_AlterationInfo;                       // 0x0028(0x0018)(NoDestructor)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue3;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkDivider_C*                         CallFunc_Create_ReturnValue2;                      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkDivider_C*                         CallFunc_Create_ReturnValue3;                      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue2;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue3;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue4;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget) == 0x000008, "Wrong alignment on AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget");
static_assert(sizeof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget) == 0x000080, "Wrong size on AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, EntryPoint) == 0x000000, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_Create_ReturnValue) == 0x000010, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_IsAlterationUnlocked_ReturnValue) == 0x000018, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_IsAlterationUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000020, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, K2Node_Event_AlterationInfo) == 0x000028, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::K2Node_Event_AlterationInfo' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_GetType_ReturnValue) == 0x000040, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_GetOwningPlayer_ReturnValue2) == 0x000048, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_GetOwningPlayer_ReturnValue3) == 0x000050, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_GetOwningPlayer_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_Create_ReturnValue2) == 0x000058, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_Create_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_Create_ReturnValue3) == 0x000060, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_Create_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_AddChildToVerticalBox_ReturnValue2) == 0x000068, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_AddChildToVerticalBox_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_AddChildToVerticalBox_ReturnValue3) == 0x000070, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_AddChildToVerticalBox_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget, CallFunc_AddChildToVerticalBox_ReturnValue4) == 0x000078, "Member 'AlterationsWidget_C_ExecuteUbergraph_AlterationsWidget::CallFunc_AddChildToVerticalBox_ReturnValue4' has a wrong offset!");

// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
// 0x0018 (0x0018 - 0x0000)
struct AlterationsWidget_C_OnGenerateAlteration final
{
public:
	struct FFortUIAlteration                      AlterationInfo;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(AlterationsWidget_C_OnGenerateAlteration) == 0x000008, "Wrong alignment on AlterationsWidget_C_OnGenerateAlteration");
static_assert(sizeof(AlterationsWidget_C_OnGenerateAlteration) == 0x000018, "Wrong size on AlterationsWidget_C_OnGenerateAlteration");
static_assert(offsetof(AlterationsWidget_C_OnGenerateAlteration, AlterationInfo) == 0x000000, "Member 'AlterationsWidget_C_OnGenerateAlteration::AlterationInfo' has a wrong offset!");

// Function AlterationsWidget.AlterationsWidget_C.UpdatePerksMessage
// 0x00B0 (0x00B0 - 0x0000)
struct AlterationsWidget_C_UpdatePerksMessage final
{
public:
	class FText                                   PerkCount;                                         // 0x0000(0x0018)(Edit, BlueprintVisible)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x0090(0x0018)()
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationsWidget_C_UpdatePerksMessage) == 0x000008, "Wrong alignment on AlterationsWidget_C_UpdatePerksMessage");
static_assert(sizeof(AlterationsWidget_C_UpdatePerksMessage) == 0x0000B0, "Wrong size on AlterationsWidget_C_UpdatePerksMessage");
static_assert(offsetof(AlterationsWidget_C_UpdatePerksMessage, PerkCount) == 0x000000, "Member 'AlterationsWidget_C_UpdatePerksMessage::PerkCount' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_UpdatePerksMessage, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'AlterationsWidget_C_UpdatePerksMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_UpdatePerksMessage, K2Node_MakeArray_Array) == 0x000058, "Member 'AlterationsWidget_C_UpdatePerksMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_UpdatePerksMessage, K2Node_MakeArray_Array2) == 0x000068, "Member 'AlterationsWidget_C_UpdatePerksMessage::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_UpdatePerksMessage, CallFunc_Format_ReturnValue) == 0x000078, "Member 'AlterationsWidget_C_UpdatePerksMessage::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_UpdatePerksMessage, CallFunc_Format_ReturnValue2) == 0x000090, "Member 'AlterationsWidget_C_UpdatePerksMessage::CallFunc_Format_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_UpdatePerksMessage, CallFunc_GetRarity_ReturnValue) == 0x0000A8, "Member 'AlterationsWidget_C_UpdatePerksMessage::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationsWidget_C_UpdatePerksMessage, K2Node_SwitchEnum_CmpSuccess) == 0x0000A9, "Member 'AlterationsWidget_C_UpdatePerksMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
