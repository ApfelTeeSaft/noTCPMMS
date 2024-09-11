#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchStatsGrid

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Float)
// 0x0010 (0x0010 - 0x0000)
struct MatchStatsGrid_C_SetStat__Float_ final
{
public:
	class UCommonNumericTextBlock*                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchStatsGrid_C_SetStat__Float_) == 0x000008, "Wrong alignment on MatchStatsGrid_C_SetStat__Float_");
static_assert(sizeof(MatchStatsGrid_C_SetStat__Float_) == 0x000010, "Wrong size on MatchStatsGrid_C_SetStat__Float_");
static_assert(offsetof(MatchStatsGrid_C_SetStat__Float_, Target) == 0x000000, "Member 'MatchStatsGrid_C_SetStat__Float_::Target' has a wrong offset!");
static_assert(offsetof(MatchStatsGrid_C_SetStat__Float_, Value) == 0x000008, "Member 'MatchStatsGrid_C_SetStat__Float_::Value' has a wrong offset!");

// Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Integer)
// 0x0010 (0x0010 - 0x0000)
struct MatchStatsGrid_C_SetStat__Integer_ final
{
public:
	class UCommonNumericTextBlock*                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchStatsGrid_C_SetStat__Integer_) == 0x000008, "Wrong alignment on MatchStatsGrid_C_SetStat__Integer_");
static_assert(sizeof(MatchStatsGrid_C_SetStat__Integer_) == 0x000010, "Wrong size on MatchStatsGrid_C_SetStat__Integer_");
static_assert(offsetof(MatchStatsGrid_C_SetStat__Integer_, Target) == 0x000000, "Member 'MatchStatsGrid_C_SetStat__Integer_::Target' has a wrong offset!");
static_assert(offsetof(MatchStatsGrid_C_SetStat__Integer_, Value) == 0x000008, "Member 'MatchStatsGrid_C_SetStat__Integer_::Value' has a wrong offset!");
static_assert(offsetof(MatchStatsGrid_C_SetStat__Integer_, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'MatchStatsGrid_C_SetStat__Integer_::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function MatchStatsGrid.MatchStatsGrid_C.SetStats
// 0x0074 (0x0074 - 0x0000)
struct MatchStatsGrid_C_SetStats final
{
public:
	struct FAthenaMatchStats                      AthenaMatchStats;                                  // 0x0000(0x0074)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(MatchStatsGrid_C_SetStats) == 0x000004, "Wrong alignment on MatchStatsGrid_C_SetStats");
static_assert(sizeof(MatchStatsGrid_C_SetStats) == 0x000074, "Wrong size on MatchStatsGrid_C_SetStats");
static_assert(offsetof(MatchStatsGrid_C_SetStats, AthenaMatchStats) == 0x000000, "Member 'MatchStatsGrid_C_SetStats::AthenaMatchStats' has a wrong offset!");

}
