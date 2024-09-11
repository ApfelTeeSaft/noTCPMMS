#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_GoinCommandoWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ExecuteUbergraph_B_GoinCommandoWeapon
// 0x0C50 (0x0C50 - 0x0000)
struct B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortCosmeticModification              K2Node_Event_CosmeticMod;                          // 0x0008(0x0B20)()
	class UMaterialInstanceDynamic*               K2Node_Event_DynamicMaterialInstance;              // 0x0B28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0B30(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0B34(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0B35(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0B36(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B37[0x9];                                      // 0x0B37(0x0009)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0B40(0x0030)(IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_AddComponent_ReturnValue;                 // 0x0B70(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0B78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Commando_C*                 K2Node_DynamicCast_AsPlayer_Pawn_Commando;         // 0x0B80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0B88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0B89(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B8A[0x6];                                      // 0x0B8A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x0B90(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x0BA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA1[0x7];                                      // 0x0BA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0BA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bPersistentFire;                      // 0x0BB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSecondaryFire;                       // 0x0BB1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BB2[0x6];                                      // 0x0BB2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0BB8(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EPhysicalSurface                              K2Node_Event_ImpactPhysicalSurface;                // 0x0C38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C39[0x7];                                      // 0x0C39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               K2Node_Event_SpawnedPSC;                           // 0x0C40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon) == 0x000010, "Wrong alignment on B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon");
static_assert(sizeof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon) == 0x000C50, "Wrong size on B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, EntryPoint) == 0x000000, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_Event_CosmeticMod) == 0x000008, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_Event_CosmeticMod' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_Event_DynamicMaterialInstance) == 0x000B28, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_Event_DynamicMaterialInstance' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, CallFunc_RandomFloatInRange_ReturnValue) == 0x000B30, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000B34, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_SwitchEnum_CmpSuccess) == 0x000B35, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, CallFunc_IsDedicatedServer_ReturnValue) == 0x000B36, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, Temp_struct_Variable) == 0x000B40, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, CallFunc_AddComponent_ReturnValue) == 0x000B70, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, CallFunc_GetInstigator_ReturnValue) == 0x000B78, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_DynamicCast_AsPlayer_Pawn_Commando) == 0x000B80, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_DynamicCast_AsPlayer_Pawn_Commando' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_DynamicCast_bSuccess) == 0x000B88, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, CallFunc_IsValid_ReturnValue) == 0x000B89, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000B90, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000BA0, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, CallFunc_GetOwner_ReturnValue) == 0x000BA8, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_Event_bPersistentFire) == 0x000BB0, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_Event_bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_Event_bSecondaryFire) == 0x000BB1, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_Event_bSecondaryFire' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_Event_HitResult) == 0x000BB8, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_Event_ImpactPhysicalSurface) == 0x000C38, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_Event_ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon, K2Node_Event_SpawnedPSC) == 0x000C40, "Member 'B_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon::K2Node_Event_SpawnedPSC' has a wrong offset!");

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnInitCosmeticAlterations
// 0x0B28 (0x0B28 - 0x0000)
struct B_GoinCommandoWeapon_C_OnInitCosmeticAlterations final
{
public:
	struct FFortCosmeticModification              CosmeticMod;                                       // 0x0000(0x0B20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic*               DynamicMaterialInstance;                           // 0x0B20(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GoinCommandoWeapon_C_OnInitCosmeticAlterations) == 0x000008, "Wrong alignment on B_GoinCommandoWeapon_C_OnInitCosmeticAlterations");
static_assert(sizeof(B_GoinCommandoWeapon_C_OnInitCosmeticAlterations) == 0x000B28, "Wrong size on B_GoinCommandoWeapon_C_OnInitCosmeticAlterations");
static_assert(offsetof(B_GoinCommandoWeapon_C_OnInitCosmeticAlterations, CosmeticMod) == 0x000000, "Member 'B_GoinCommandoWeapon_C_OnInitCosmeticAlterations::CosmeticMod' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_OnInitCosmeticAlterations, DynamicMaterialInstance) == 0x000B20, "Member 'B_GoinCommandoWeapon_C_OnInitCosmeticAlterations::DynamicMaterialInstance' has a wrong offset!");

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayImpactFX
// 0x0090 (0x0090 - 0x0000)
struct B_GoinCommandoWeapon_C_OnPlayImpactFX final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x0080)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EPhysicalSurface                              ImpactPhysicalSurface;                             // 0x0080(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               SpawnedPSC;                                        // 0x0088(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GoinCommandoWeapon_C_OnPlayImpactFX) == 0x000008, "Wrong alignment on B_GoinCommandoWeapon_C_OnPlayImpactFX");
static_assert(sizeof(B_GoinCommandoWeapon_C_OnPlayImpactFX) == 0x000090, "Wrong size on B_GoinCommandoWeapon_C_OnPlayImpactFX");
static_assert(offsetof(B_GoinCommandoWeapon_C_OnPlayImpactFX, HitResult) == 0x000000, "Member 'B_GoinCommandoWeapon_C_OnPlayImpactFX::HitResult' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_OnPlayImpactFX, ImpactPhysicalSurface) == 0x000080, "Member 'B_GoinCommandoWeapon_C_OnPlayImpactFX::ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_OnPlayImpactFX, SpawnedPSC) == 0x000088, "Member 'B_GoinCommandoWeapon_C_OnPlayImpactFX::SpawnedPSC' has a wrong offset!");

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayWeaponFireFX
// 0x0002 (0x0002 - 0x0000)
struct B_GoinCommandoWeapon_C_OnPlayWeaponFireFX final
{
public:
	bool                                          bPersistentFire;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSecondaryFire;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_GoinCommandoWeapon_C_OnPlayWeaponFireFX) == 0x000001, "Wrong alignment on B_GoinCommandoWeapon_C_OnPlayWeaponFireFX");
static_assert(sizeof(B_GoinCommandoWeapon_C_OnPlayWeaponFireFX) == 0x000002, "Wrong size on B_GoinCommandoWeapon_C_OnPlayWeaponFireFX");
static_assert(offsetof(B_GoinCommandoWeapon_C_OnPlayWeaponFireFX, bPersistentFire) == 0x000000, "Member 'B_GoinCommandoWeapon_C_OnPlayWeaponFireFX::bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_GoinCommandoWeapon_C_OnPlayWeaponFireFX, bSecondaryFire) == 0x000001, "Member 'B_GoinCommandoWeapon_C_OnPlayWeaponFireFX::bSecondaryFire' has a wrong offset!");

}
