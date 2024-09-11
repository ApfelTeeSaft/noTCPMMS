#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrimaryHeroActiveAbilitiesListDetailWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C.ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget
// 0x0178 (0x0178 - 0x0000)
struct PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHomebaseSquad                         CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad; // 0x0028(0x0088)()
	bool                                          CallFunc_TryGetHomebaseSquadData_ReturnValue;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B3[0x5];                                       // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2;   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2; // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHomebaseSquad                         CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad2; // 0x00D8(0x0088)()
	bool                                          CallFunc_TryGetHomebaseSquadData_ReturnValue2;     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_162[0x6];                                      // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHero*                              K2Node_DynamicCast_AsFort_Hero;                    // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget) == 0x000008, "Wrong alignment on PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget");
static_assert(sizeof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget) == 0x000178, "Wrong size on PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, EntryPoint) == 0x000000, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, Temp_byte_Variable) == 0x000010, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId) == 0x000018, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex) == 0x000020, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad) == 0x000028, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_TryGetHomebaseSquadData_ReturnValue) == 0x0000B0, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_TryGetHomebaseSquadData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, Temp_byte_Variable2) == 0x0000B1, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B2, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_GetContext_ReturnValue2) == 0x0000B8, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_BooleanAND_ReturnValue) == 0x0000C0, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2) == 0x0000C8, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2) == 0x0000D0, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, Temp_bool_Variable) == 0x0000D4, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad2) == 0x0000D8, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad2' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_TryGetHomebaseSquadData_ReturnValue2) == 0x000160, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_TryGetHomebaseSquadData_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_EqualEqual_ByteByte_ReturnValue2) == 0x000161, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_EqualEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, K2Node_DynamicCast_AsFort_Hero) == 0x000168, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::K2Node_DynamicCast_AsFort_Hero' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, K2Node_DynamicCast_bSuccess) == 0x000170, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, CallFunc_BooleanOR_ReturnValue) == 0x000171, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget, K2Node_Select_Default) == 0x000172, "Member 'PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget::K2Node_Select_Default' has a wrong offset!");

}

