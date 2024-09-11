#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchStatsGrid

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MatchStatsGrid.MatchStatsGrid_C
// 0x0060 (0x0268 - 0x0208)
class UMatchStatsGrid_C final : public UUserWidget
{
public:
	class UCommonNumericTextBlock*                AccuracyStat;                                      // 0x0208(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                AssistsStat;                                       // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                DamageReceivedStat;                                // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                DamageToPlayersStat;                               // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                DistanceStat;                                      // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                HeadshotsStat;                                     // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                HitsStat;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                KillsStat;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                MaterialsGatheredStat;                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                MaterialsUsedStat;                                 // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                RevivesStat;                                       // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                StructuralDamageStat;                              // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetStat__Float_(class UCommonNumericTextBlock* Target, float Value);
	void SetStat__Integer_(class UCommonNumericTextBlock* Target, int32 Value);
	void SetStats(struct FAthenaMatchStats& AthenaMatchStats);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchStatsGrid_C">();
	}
	static class UMatchStatsGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchStatsGrid_C>();
	}
};
static_assert(alignof(UMatchStatsGrid_C) == 0x000008, "Wrong alignment on UMatchStatsGrid_C");
static_assert(sizeof(UMatchStatsGrid_C) == 0x000268, "Wrong size on UMatchStatsGrid_C");
static_assert(offsetof(UMatchStatsGrid_C, AccuracyStat) == 0x000208, "Member 'UMatchStatsGrid_C::AccuracyStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, AssistsStat) == 0x000210, "Member 'UMatchStatsGrid_C::AssistsStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, DamageReceivedStat) == 0x000218, "Member 'UMatchStatsGrid_C::DamageReceivedStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, DamageToPlayersStat) == 0x000220, "Member 'UMatchStatsGrid_C::DamageToPlayersStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, DistanceStat) == 0x000228, "Member 'UMatchStatsGrid_C::DistanceStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, HeadshotsStat) == 0x000230, "Member 'UMatchStatsGrid_C::HeadshotsStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, HitsStat) == 0x000238, "Member 'UMatchStatsGrid_C::HitsStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, KillsStat) == 0x000240, "Member 'UMatchStatsGrid_C::KillsStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, MaterialsGatheredStat) == 0x000248, "Member 'UMatchStatsGrid_C::MaterialsGatheredStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, MaterialsUsedStat) == 0x000250, "Member 'UMatchStatsGrid_C::MaterialsUsedStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, RevivesStat) == 0x000258, "Member 'UMatchStatsGrid_C::RevivesStat' has a wrong offset!");
static_assert(offsetof(UMatchStatsGrid_C, StructuralDamageStat) == 0x000260, "Member 'UMatchStatsGrid_C::StructuralDamageStat' has a wrong offset!");

}
