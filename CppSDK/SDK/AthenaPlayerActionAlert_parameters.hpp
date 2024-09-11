#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayerActionAlert

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.ExecuteUbergraph_AthenaPlayerActionAlert
// 0x0040 (0x0040 - 0x0000)
struct AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaPlayerActionAlert                      K2Node_Event_Alert;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_DetailText;                           // 0x0010(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable3;                                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Event_Animation;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaPlayerActionAlert                      Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert) == 0x000008, "Wrong alignment on AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert");
static_assert(sizeof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert) == 0x000040, "Wrong size on AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, EntryPoint) == 0x000000, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, Temp_int_Variable) == 0x000004, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, Temp_int_Variable2) == 0x000008, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, K2Node_Event_Alert) == 0x00000C, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::K2Node_Event_Alert' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, K2Node_Event_DetailText) == 0x000010, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::K2Node_Event_DetailText' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, Temp_int_Variable3) == 0x00002C, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::Temp_int_Variable3' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, K2Node_Event_Animation) == 0x000030, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, Temp_byte_Variable) == 0x000038, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000039, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert, K2Node_Select_Default) == 0x00003C, "Member 'AthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert::K2Node_Select_Default' has a wrong offset!");

// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct AthenaPlayerActionAlert_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaPlayerActionAlert_C_OnAnimationFinished) == 0x000008, "Wrong alignment on AthenaPlayerActionAlert_C_OnAnimationFinished");
static_assert(sizeof(AthenaPlayerActionAlert_C_OnAnimationFinished) == 0x000008, "Wrong size on AthenaPlayerActionAlert_C_OnAnimationFinished");
static_assert(offsetof(AthenaPlayerActionAlert_C_OnAnimationFinished, Animation) == 0x000000, "Member 'AthenaPlayerActionAlert_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.AlertPlayer
// 0x0020 (0x0020 - 0x0000)
struct AthenaPlayerActionAlert_C_AlertPlayer final
{
public:
	EAthenaPlayerActionAlert                      Alert;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DetailText;                                        // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AthenaPlayerActionAlert_C_AlertPlayer) == 0x000008, "Wrong alignment on AthenaPlayerActionAlert_C_AlertPlayer");
static_assert(sizeof(AthenaPlayerActionAlert_C_AlertPlayer) == 0x000020, "Wrong size on AthenaPlayerActionAlert_C_AlertPlayer");
static_assert(offsetof(AthenaPlayerActionAlert_C_AlertPlayer, Alert) == 0x000000, "Member 'AthenaPlayerActionAlert_C_AlertPlayer::Alert' has a wrong offset!");
static_assert(offsetof(AthenaPlayerActionAlert_C_AlertPlayer, DetailText) == 0x000008, "Member 'AthenaPlayerActionAlert_C_AlertPlayer::DetailText' has a wrong offset!");

}

