#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestObjectiveEntry

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.ExecuteUbergraph_DailyQuestObjectiveEntry
// 0x0020 (0x0020 - 0x0000)
struct DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*                K2Node_DynamicCast_AsFort_Quest_Objective_Info;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry) == 0x000008, "Wrong alignment on DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry");
static_assert(sizeof(DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry) == 0x000020, "Wrong size on DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry");
static_assert(offsetof(DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry, EntryPoint) == 0x000000, "Member 'DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry, K2Node_Event_InData) == 0x000008, "Member 'DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry, K2Node_DynamicCast_AsFort_Quest_Objective_Info) == 0x000010, "Member 'DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry::K2Node_DynamicCast_AsFort_Quest_Objective_Info' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'DailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct DailyQuestObjectiveEntry_C_SetData final
{
public:
	class UObject*                                InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyQuestObjectiveEntry_C_SetData) == 0x000008, "Wrong alignment on DailyQuestObjectiveEntry_C_SetData");
static_assert(sizeof(DailyQuestObjectiveEntry_C_SetData) == 0x000008, "Wrong size on DailyQuestObjectiveEntry_C_SetData");
static_assert(offsetof(DailyQuestObjectiveEntry_C_SetData, InData) == 0x000000, "Member 'DailyQuestObjectiveEntry_C_SetData::InData' has a wrong offset!");

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateProgress
// 0x0010 (0x0010 - 0x0000)
struct DailyQuestObjectiveEntry_C_UpdateProgress final
{
public:
	class UFortQuestObjectiveInfo*                Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AchievedCount;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyQuestObjectiveEntry_C_UpdateProgress) == 0x000008, "Wrong alignment on DailyQuestObjectiveEntry_C_UpdateProgress");
static_assert(sizeof(DailyQuestObjectiveEntry_C_UpdateProgress) == 0x000010, "Wrong size on DailyQuestObjectiveEntry_C_UpdateProgress");
static_assert(offsetof(DailyQuestObjectiveEntry_C_UpdateProgress, Objective) == 0x000000, "Member 'DailyQuestObjectiveEntry_C_UpdateProgress::Objective' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_UpdateProgress, AchievedCount) == 0x000008, "Member 'DailyQuestObjectiveEntry_C_UpdateProgress::AchievedCount' has a wrong offset!");

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.Update
// 0x00A8 (0x00A8 - 0x0000)
struct DailyQuestObjectiveEntry_C_Update final
{
public:
	class UFortQuestObjectiveInfo*                Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AchievedCount;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestItem*                         CallFunc_GetOwningQuest_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContext_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRewardInfo                        CallFunc_GetRewardInfo_BP_ReturnValue;             // 0x0028(0x0030)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0060(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B[0x5];                                       // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCombinedDescription_OutDescription;    // 0x0088(0x0018)()
	bool                                          CallFunc_GetCombinedDescription_ReturnValue;       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyQuestObjectiveEntry_C_Update) == 0x000008, "Wrong alignment on DailyQuestObjectiveEntry_C_Update");
static_assert(sizeof(DailyQuestObjectiveEntry_C_Update) == 0x0000A8, "Wrong size on DailyQuestObjectiveEntry_C_Update");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, Objective) == 0x000000, "Member 'DailyQuestObjectiveEntry_C_Update::Objective' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, AchievedCount) == 0x000008, "Member 'DailyQuestObjectiveEntry_C_Update::AchievedCount' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, CallFunc_GetOwningQuest_ReturnValue) == 0x000010, "Member 'DailyQuestObjectiveEntry_C_Update::CallFunc_GetOwningQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, CallFunc_GetQuestDefinitionBP_ReturnValue) == 0x000018, "Member 'DailyQuestObjectiveEntry_C_Update::CallFunc_GetQuestDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, CallFunc_SpawnTooltipContext_ReturnValue) == 0x000020, "Member 'DailyQuestObjectiveEntry_C_Update::CallFunc_SpawnTooltipContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, CallFunc_GetRewardInfo_BP_ReturnValue) == 0x000028, "Member 'DailyQuestObjectiveEntry_C_Update::CallFunc_GetRewardInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, Temp_byte_Variable) == 0x000058, "Member 'DailyQuestObjectiveEntry_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, CallFunc_GetText_ReturnValue) == 0x000060, "Member 'DailyQuestObjectiveEntry_C_Update::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, CallFunc_TextIsEmpty_ReturnValue) == 0x000078, "Member 'DailyQuestObjectiveEntry_C_Update::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, Temp_byte_Variable2) == 0x000079, "Member 'DailyQuestObjectiveEntry_C_Update::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, Temp_bool_Variable) == 0x00007A, "Member 'DailyQuestObjectiveEntry_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, CallFunc_GetContext_ReturnValue) == 0x000080, "Member 'DailyQuestObjectiveEntry_C_Update::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, CallFunc_GetCombinedDescription_OutDescription) == 0x000088, "Member 'DailyQuestObjectiveEntry_C_Update::CallFunc_GetCombinedDescription_OutDescription' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, CallFunc_GetCombinedDescription_ReturnValue) == 0x0000A0, "Member 'DailyQuestObjectiveEntry_C_Update::CallFunc_GetCombinedDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestObjectiveEntry_C_Update, K2Node_Select_Default) == 0x0000A1, "Member 'DailyQuestObjectiveEntry_C_Update::K2Node_Select_Default' has a wrong offset!");

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateFromObjectiveInfo
// 0x0110 (0x0110 - 0x0000)
struct DailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo final
{
public:
	struct FFortMcpQuestObjectiveInfo             ObjectiveInfo;                                     // 0x0000(0x0110)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(DailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo) == 0x000008, "Wrong alignment on DailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo");
static_assert(sizeof(DailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo) == 0x000110, "Wrong size on DailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo");
static_assert(offsetof(DailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo, ObjectiveInfo) == 0x000000, "Member 'DailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo::ObjectiveInfo' has a wrong offset!");

}

