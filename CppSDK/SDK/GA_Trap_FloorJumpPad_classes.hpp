#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_FloorJumpPad

#include "Basic.hpp"

#include "GA_TrapGeneric_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C
// 0x0068 (0x0B48 - 0x0AE0)
class UGA_Trap_FloorJumpPad_C final : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Trap_FloorJumpPad_C;             // 0x0AE0(0x0008)(Transient, DuplicateTransient)
	float                                         LaunchStrength;                                    // 0x0AE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AEC[0x4];                                      // 0x0AEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UForceFeedbackEffect*                   LaunchForceFeedback;                               // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerJumping;                                     // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_PlayerLaunched;                                 // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TC_LaunchTag;                                      // 0x0B08(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         OverlappingTargets;                                // 0x0B10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                 GE_TrapImmunity;                                   // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0B28(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Trap_FloorJumpPad(int32 EntryPoint);
	void Cancelled_E91C59AB43D826926CE5CEAA22E84570(const struct FGameplayAbilityTargetDataHandle& TargetData_0, const struct FGameplayTag& ApplicationTag);
	void PlayPlayerFX(class AFortPlayerPawn* Player);
	void Targeted_E91C59AB43D826926CE5CEAA22E84570(const struct FGameplayAbilityTargetDataHandle& TargetData_0, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Trap_FloorJumpPad_C">();
	}
	static class UGA_Trap_FloorJumpPad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Trap_FloorJumpPad_C>();
	}
};
static_assert(alignof(UGA_Trap_FloorJumpPad_C) == 0x000008, "Wrong alignment on UGA_Trap_FloorJumpPad_C");
static_assert(sizeof(UGA_Trap_FloorJumpPad_C) == 0x000B48, "Wrong size on UGA_Trap_FloorJumpPad_C");
static_assert(offsetof(UGA_Trap_FloorJumpPad_C, UberGraphFrame_GA_Trap_FloorJumpPad_C) == 0x000AE0, "Member 'UGA_Trap_FloorJumpPad_C::UberGraphFrame_GA_Trap_FloorJumpPad_C' has a wrong offset!");
static_assert(offsetof(UGA_Trap_FloorJumpPad_C, LaunchStrength) == 0x000AE8, "Member 'UGA_Trap_FloorJumpPad_C::LaunchStrength' has a wrong offset!");
static_assert(offsetof(UGA_Trap_FloorJumpPad_C, LaunchForceFeedback) == 0x000AF0, "Member 'UGA_Trap_FloorJumpPad_C::LaunchForceFeedback' has a wrong offset!");
static_assert(offsetof(UGA_Trap_FloorJumpPad_C, PlayerJumping) == 0x000AF8, "Member 'UGA_Trap_FloorJumpPad_C::PlayerJumping' has a wrong offset!");
static_assert(offsetof(UGA_Trap_FloorJumpPad_C, GE_PlayerLaunched) == 0x000B00, "Member 'UGA_Trap_FloorJumpPad_C::GE_PlayerLaunched' has a wrong offset!");
static_assert(offsetof(UGA_Trap_FloorJumpPad_C, TC_LaunchTag) == 0x000B08, "Member 'UGA_Trap_FloorJumpPad_C::TC_LaunchTag' has a wrong offset!");
static_assert(offsetof(UGA_Trap_FloorJumpPad_C, OverlappingTargets) == 0x000B10, "Member 'UGA_Trap_FloorJumpPad_C::OverlappingTargets' has a wrong offset!");
static_assert(offsetof(UGA_Trap_FloorJumpPad_C, GE_TrapImmunity) == 0x000B20, "Member 'UGA_Trap_FloorJumpPad_C::GE_TrapImmunity' has a wrong offset!");
static_assert(offsetof(UGA_Trap_FloorJumpPad_C, TargetData) == 0x000B28, "Member 'UGA_Trap_FloorJumpPad_C::TargetData' has a wrong offset!");

}

