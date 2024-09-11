#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerChoiceButtonWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature final
{
public:
	class UFortBaseButton*                        Button_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on PlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature");
static_assert(sizeof(PlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature) == 0x000008, "Wrong size on PlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature");
static_assert(offsetof(PlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature, Button_0) == 0x000000, "Member 'PlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature::Button_0' has a wrong offset!");

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ConfigureChoice
// 0x0060 (0x0060 - 0x0000)
struct PlayerChoiceButtonWidget_C_ConfigureChoice final
{
public:
	struct FChoiceDataEntry                       Choice;                                            // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         ChoiceID_0;                                        // 0x0050(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerChoiceWidget_C*                  Owner_0;                                           // 0x0058(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerChoiceButtonWidget_C_ConfigureChoice) == 0x000008, "Wrong alignment on PlayerChoiceButtonWidget_C_ConfigureChoice");
static_assert(sizeof(PlayerChoiceButtonWidget_C_ConfigureChoice) == 0x000060, "Wrong size on PlayerChoiceButtonWidget_C_ConfigureChoice");
static_assert(offsetof(PlayerChoiceButtonWidget_C_ConfigureChoice, Choice) == 0x000000, "Member 'PlayerChoiceButtonWidget_C_ConfigureChoice::Choice' has a wrong offset!");
static_assert(offsetof(PlayerChoiceButtonWidget_C_ConfigureChoice, ChoiceID_0) == 0x000050, "Member 'PlayerChoiceButtonWidget_C_ConfigureChoice::ChoiceID_0' has a wrong offset!");
static_assert(offsetof(PlayerChoiceButtonWidget_C_ConfigureChoice, Owner_0) == 0x000058, "Member 'PlayerChoiceButtonWidget_C_ConfigureChoice::Owner_0' has a wrong offset!");

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ExecuteUbergraph_PlayerChoiceButtonWidget
// 0x0070 (0x0070 - 0x0000)
struct PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FChoiceDataEntry                       K2Node_CustomEvent_Choice;                         // 0x0008(0x0050)()
	int32                                         K2Node_CustomEvent_ChoiceID;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerChoiceWidget_C*                  K2Node_CustomEvent_Owner;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortBaseButton*                        K2Node_ComponentBoundEvent_Button;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget) == 0x000008, "Wrong alignment on PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget");
static_assert(sizeof(PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget) == 0x000070, "Wrong size on PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget");
static_assert(offsetof(PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget, EntryPoint) == 0x000000, "Member 'PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget, K2Node_CustomEvent_Choice) == 0x000008, "Member 'PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget::K2Node_CustomEvent_Choice' has a wrong offset!");
static_assert(offsetof(PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget, K2Node_CustomEvent_ChoiceID) == 0x000058, "Member 'PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget::K2Node_CustomEvent_ChoiceID' has a wrong offset!");
static_assert(offsetof(PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget, K2Node_CustomEvent_Owner) == 0x000060, "Member 'PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget::K2Node_CustomEvent_Owner' has a wrong offset!");
static_assert(offsetof(PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget, K2Node_ComponentBoundEvent_Button) == 0x000068, "Member 'PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

}

