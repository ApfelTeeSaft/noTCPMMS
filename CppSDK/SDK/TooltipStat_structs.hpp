#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipStat

#include "Basic.hpp"

#include "WeaponTooltipStatType_structs.hpp"


namespace SDK
{

// UserDefinedStruct TooltipStat.TooltipStat
// 0x0038 (0x0038 - 0x0000)
struct FTooltipStat final
{
public:
	class FText                                   Label_2_C7826979463D342B4FA77287F6F27668;          // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   Value_5_A69E21C0475825796408CA9813F2A8B8;          // 0x0018(0x0018)(Edit, BlueprintVisible)
	EWeaponTooltipStatType                        Type_10_56B7498643DBED962C2AB6876B3FA6DC;          // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FTooltipStat) == 0x000008, "Wrong alignment on FTooltipStat");
static_assert(sizeof(FTooltipStat) == 0x000038, "Wrong size on FTooltipStat");
static_assert(offsetof(FTooltipStat, Label_2_C7826979463D342B4FA77287F6F27668) == 0x000000, "Member 'FTooltipStat::Label_2_C7826979463D342B4FA77287F6F27668' has a wrong offset!");
static_assert(offsetof(FTooltipStat, Value_5_A69E21C0475825796408CA9813F2A8B8) == 0x000018, "Member 'FTooltipStat::Value_5_A69E21C0475825796408CA9813F2A8B8' has a wrong offset!");
static_assert(offsetof(FTooltipStat, Type_10_56B7498643DBED962C2AB6876B3FA6DC) == 0x000030, "Member 'FTooltipStat::Type_10_56B7498643DBED962C2AB6876B3FA6DC' has a wrong offset!");

}

