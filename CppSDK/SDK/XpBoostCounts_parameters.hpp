#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostCounts

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function XpBoostCounts.XpBoostCounts_C.ExecuteUbergraph_XpBoostCounts
// 0x0068 (0x0068 - 0x0000)
struct XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFortPublicAccountInfo& NewInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 BoostAmount)>            K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                 K2Node_CustomEvent_NewInfo;                        // 0x0030(0x0034)(NoDestructor)
	int32                                         K2Node_CustomEvent_BoostAmount;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts) == 0x000008, "Wrong alignment on XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts");
static_assert(sizeof(XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts) == 0x000068, "Wrong size on XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts");
static_assert(offsetof(XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts, EntryPoint) == 0x000000, "Member 'XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts::EntryPoint' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts, K2Node_CustomEvent_NewInfo) == 0x000030, "Member 'XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts::K2Node_CustomEvent_NewInfo' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts, K2Node_CustomEvent_BoostAmount) == 0x000064, "Member 'XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts::K2Node_CustomEvent_BoostAmount' has a wrong offset!");

// Function XpBoostCounts.XpBoostCounts_C.Xp Boost Changed
// 0x0004 (0x0004 - 0x0000)
struct XpBoostCounts_C_Xp_Boost_Changed final
{
public:
	int32                                         BoostAmount;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpBoostCounts_C_Xp_Boost_Changed) == 0x000004, "Wrong alignment on XpBoostCounts_C_Xp_Boost_Changed");
static_assert(sizeof(XpBoostCounts_C_Xp_Boost_Changed) == 0x000004, "Wrong size on XpBoostCounts_C_Xp_Boost_Changed");
static_assert(offsetof(XpBoostCounts_C_Xp_Boost_Changed, BoostAmount) == 0x000000, "Member 'XpBoostCounts_C_Xp_Boost_Changed::BoostAmount' has a wrong offset!");

// Function XpBoostCounts.XpBoostCounts_C.HandleAccountUpdate
// 0x0034 (0x0034 - 0x0000)
struct XpBoostCounts_C_HandleAccountUpdate final
{
public:
	struct FFortPublicAccountInfo                 NewInfo;                                           // 0x0000(0x0034)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(XpBoostCounts_C_HandleAccountUpdate) == 0x000004, "Wrong alignment on XpBoostCounts_C_HandleAccountUpdate");
static_assert(sizeof(XpBoostCounts_C_HandleAccountUpdate) == 0x000034, "Wrong size on XpBoostCounts_C_HandleAccountUpdate");
static_assert(offsetof(XpBoostCounts_C_HandleAccountUpdate, NewInfo) == 0x000000, "Member 'XpBoostCounts_C_HandleAccountUpdate::NewInfo' has a wrong offset!");

// Function XpBoostCounts.XpBoostCounts_C.Update Available Boosts
// 0x00B0 (0x00B0 - 0x0000)
struct XpBoostCounts_C_Update_Available_Boosts final
{
public:
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0000(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue2;             // 0x0018(0x0018)()
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                       CallFunc_GetAccountItemWithDefinition_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                       CallFunc_GetAccountItemWithDefinition_ReturnValue2; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0068(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue2;              // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue2;              // 0x0098(0x0018)()
};
static_assert(alignof(XpBoostCounts_C_Update_Available_Boosts) == 0x000008, "Wrong alignment on XpBoostCounts_C_Update_Available_Boosts");
static_assert(sizeof(XpBoostCounts_C_Update_Available_Boosts) == 0x0000B0, "Wrong size on XpBoostCounts_C_Update_Available_Boosts");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_MakeLiteralText_ReturnValue) == 0x000000, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_MakeLiteralText_ReturnValue2) == 0x000018, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_MakeLiteralText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_GetAccountItemWithDefinition_ReturnValue) == 0x000038, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_GetAccountItemWithDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_GetAccountItemWithDefinition_ReturnValue2) == 0x000040, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_GetAccountItemWithDefinition_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_IsValid_ReturnValue2) == 0x000049, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_GetDisplayName_ReturnValue) == 0x000050, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_Conv_IntToText_ReturnValue) == 0x000068, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_GetDisplayName_ReturnValue2) == 0x000080, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_GetDisplayName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostCounts_C_Update_Available_Boosts, CallFunc_Conv_IntToText_ReturnValue2) == 0x000098, "Member 'XpBoostCounts_C_Update_Available_Boosts::CallFunc_Conv_IntToText_ReturnValue2' has a wrong offset!");

}

