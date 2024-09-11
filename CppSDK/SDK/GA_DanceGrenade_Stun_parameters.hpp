#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DanceGrenade_Stun

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.ExecuteUbergraph_GA_DanceGrenade_Stun
// 0x0138 (0x0138 - 0x0000)
struct GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEffectRemovalInfo             K2Node_CustomEvent_GameplayEffectRemovalInfo;      // 0x0018(0x0020)(ConstParm)
	struct FGameplayEffectRemovalInfo             Temp_struct_Variable;                              // 0x0038(0x0020)()
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0058(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x00C8(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00E8(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectRemovalInfo             K2Node_CustomEvent_GameplayEffectRemovalInfo2;     // 0x0100(0x0020)(ConstParm)
	TDelegate<void(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun) == 0x000008, "Wrong alignment on GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun");
static_assert(sizeof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun) == 0x000138, "Wrong size on GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, EntryPoint) == 0x000000, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, K2Node_CustomEvent_GameplayEffectRemovalInfo) == 0x000018, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::K2Node_CustomEvent_GameplayEffectRemovalInfo' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, Temp_struct_Variable) == 0x000038, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, CallFunc_GetActorInfo_ReturnValue) == 0x000058, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000098, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, CallFunc_PlayAnimMontage_ReturnValue) == 0x0000A4, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000A8, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x0000B0, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, CallFunc_WaitForGameplayEffectRemoved_ReturnValue) == 0x0000B8, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::CallFunc_WaitForGameplayEffectRemoved_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0000C8, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000E8, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000F8, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, K2Node_CustomEvent_GameplayEffectRemovalInfo2) == 0x000100, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::K2Node_CustomEvent_GameplayEffectRemovalInfo2' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, K2Node_CreateDelegate_OutputDelegate2) == 0x000120, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun, K2Node_Event_bWasCancelled) == 0x000130, "Member 'GA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun::K2Node_Event_bWasCancelled' has a wrong offset!");

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_DanceGrenade_Stun_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_DanceGrenade_Stun_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_DanceGrenade_Stun_C_K2_OnEndAbility");
static_assert(sizeof(GA_DanceGrenade_Stun_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_DanceGrenade_Stun_C_K2_OnEndAbility");
static_assert(offsetof(GA_DanceGrenade_Stun_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_DanceGrenade_Stun_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.InvalidHandle_93D7E1854196ECDA2F2306926AC3D608
// 0x0020 (0x0020 - 0x0000)
struct GA_DanceGrenade_Stun_C_InvalidHandle_93D7E1854196ECDA2F2306926AC3D608 final
{
public:
	struct FGameplayEffectRemovalInfo             GameplayEffectRemovalInfo;                         // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_DanceGrenade_Stun_C_InvalidHandle_93D7E1854196ECDA2F2306926AC3D608) == 0x000008, "Wrong alignment on GA_DanceGrenade_Stun_C_InvalidHandle_93D7E1854196ECDA2F2306926AC3D608");
static_assert(sizeof(GA_DanceGrenade_Stun_C_InvalidHandle_93D7E1854196ECDA2F2306926AC3D608) == 0x000020, "Wrong size on GA_DanceGrenade_Stun_C_InvalidHandle_93D7E1854196ECDA2F2306926AC3D608");
static_assert(offsetof(GA_DanceGrenade_Stun_C_InvalidHandle_93D7E1854196ECDA2F2306926AC3D608, GameplayEffectRemovalInfo) == 0x000000, "Member 'GA_DanceGrenade_Stun_C_InvalidHandle_93D7E1854196ECDA2F2306926AC3D608::GameplayEffectRemovalInfo' has a wrong offset!");

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.OnRemoved_93D7E1854196ECDA2F2306926AC3D608
// 0x0020 (0x0020 - 0x0000)
struct GA_DanceGrenade_Stun_C_OnRemoved_93D7E1854196ECDA2F2306926AC3D608 final
{
public:
	struct FGameplayEffectRemovalInfo             GameplayEffectRemovalInfo;                         // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_DanceGrenade_Stun_C_OnRemoved_93D7E1854196ECDA2F2306926AC3D608) == 0x000008, "Wrong alignment on GA_DanceGrenade_Stun_C_OnRemoved_93D7E1854196ECDA2F2306926AC3D608");
static_assert(sizeof(GA_DanceGrenade_Stun_C_OnRemoved_93D7E1854196ECDA2F2306926AC3D608) == 0x000020, "Wrong size on GA_DanceGrenade_Stun_C_OnRemoved_93D7E1854196ECDA2F2306926AC3D608");
static_assert(offsetof(GA_DanceGrenade_Stun_C_OnRemoved_93D7E1854196ECDA2F2306926AC3D608, GameplayEffectRemovalInfo) == 0x000000, "Member 'GA_DanceGrenade_Stun_C_OnRemoved_93D7E1854196ECDA2F2306926AC3D608::GameplayEffectRemovalInfo' has a wrong offset!");

}
