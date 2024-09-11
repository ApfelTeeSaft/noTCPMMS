#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Shields

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Shields.GA_Athena_Shields_C
// 0x0090 (0x0B40 - 0x0AB0)
class UGA_Athena_Shields_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	struct FFortGameplayAbilityMontageInfo        AnimMontageInfo;                                   // 0x0AB8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                               SpawnHeading;                                      // 0x0B18(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B24[0x4];                                      // 0x0B24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Projectile;                                        // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShieldingAmount;                                   // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerDuration;                                   // 0x0B3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Shields(int32 EntryPoint);
	void K2_ActivateAbility();
	void Triggered_8143D5814CB74D956510E191077DBB83(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_8143D5814CB74D956510E191077DBB83(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_8143D5814CB74D956510E191077DBB83(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Shields_C">();
	}
	static class UGA_Athena_Shields_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Shields_C>();
	}
};
static_assert(alignof(UGA_Athena_Shields_C) == 0x000008, "Wrong alignment on UGA_Athena_Shields_C");
static_assert(sizeof(UGA_Athena_Shields_C) == 0x000B40, "Wrong size on UGA_Athena_Shields_C");
static_assert(offsetof(UGA_Athena_Shields_C, UberGraphFrame) == 0x000AB0, "Member 'UGA_Athena_Shields_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Shields_C, AnimMontageInfo) == 0x000AB8, "Member 'UGA_Athena_Shields_C::AnimMontageInfo' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Shields_C, SpawnHeading) == 0x000B18, "Member 'UGA_Athena_Shields_C::SpawnHeading' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Shields_C, PlayerPawn) == 0x000B28, "Member 'UGA_Athena_Shields_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Shields_C, Projectile) == 0x000B30, "Member 'UGA_Athena_Shields_C::Projectile' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Shields_C, ShieldingAmount) == 0x000B38, "Member 'UGA_Athena_Shields_C::ShieldingAmount' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Shields_C, TriggerDuration) == 0x000B3C, "Member 'UGA_Athena_Shields_C::TriggerDuration' has a wrong offset!");

}

