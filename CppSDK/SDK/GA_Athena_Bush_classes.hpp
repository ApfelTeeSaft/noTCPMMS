#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Bush

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Bush.GA_Athena_Bush_C
// 0x0078 (0x0B28 - 0x0AB0)
class UGA_Athena_Bush_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	struct FFortGameplayAbilityMontageInfo        AnimMontageInfo;                                   // 0x0AB8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerDuration;                                   // 0x0B20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Bush(int32 EntryPoint);
	void K2_ActivateAbility();
	void Triggered_6FA77BEE4AD5C961BBDC6682C81BD718(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6FA77BEE4AD5C961BBDC6682C81BD718(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_6FA77BEE4AD5C961BBDC6682C81BD718(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Bush_C">();
	}
	static class UGA_Athena_Bush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Bush_C>();
	}
};
static_assert(alignof(UGA_Athena_Bush_C) == 0x000008, "Wrong alignment on UGA_Athena_Bush_C");
static_assert(sizeof(UGA_Athena_Bush_C) == 0x000B28, "Wrong size on UGA_Athena_Bush_C");
static_assert(offsetof(UGA_Athena_Bush_C, UberGraphFrame) == 0x000AB0, "Member 'UGA_Athena_Bush_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Bush_C, AnimMontageInfo) == 0x000AB8, "Member 'UGA_Athena_Bush_C::AnimMontageInfo' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Bush_C, PlayerPawn) == 0x000B18, "Member 'UGA_Athena_Bush_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Bush_C, TriggerDuration) == 0x000B20, "Member 'UGA_Athena_Bush_C::TriggerDuration' has a wrong offset!");

}
