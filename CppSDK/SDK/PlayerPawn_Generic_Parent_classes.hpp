#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Generic_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// 0x00C0 (0x1700 - 0x1640)
class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1640(0x0008)(Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;                          // 0x1648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;                             // 0x1658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;                                  // 0x1668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;                                 // 0x1678(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;                                 // 0x1688(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;                                // 0x1698(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;                                 // 0x16A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnLegsMaterials;                                 // 0x16B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnTorsoMaterials;                                // 0x16C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                  PlayerPostProcessFX;                               // 0x16D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;                                    // 0x16E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;                                 // 0x16F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint);
	void GameplayCue_Teleport_In(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void GameplayCue_Teleport_Out(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();
	void Teleport(const struct FGameplayCueParameters& GameplayCueParameters, bool TeleportOut_, float Default_PlayLength);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Generic_Parent_C">();
	}
	static class APlayerPawn_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Generic_Parent_C>();
	}
};
static_assert(alignof(APlayerPawn_Generic_Parent_C) == 0x000010, "Wrong alignment on APlayerPawn_Generic_Parent_C");
static_assert(sizeof(APlayerPawn_Generic_Parent_C) == 0x001700, "Wrong size on APlayerPawn_Generic_Parent_C");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, UberGraphFrame) == 0x001640, "Member 'APlayerPawn_Generic_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, Default_Weapon_Materials) == 0x001648, "Member 'APlayerPawn_Generic_Parent_C::Default_Weapon_Materials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnBackpackMaterials) == 0x001658, "Member 'APlayerPawn_Generic_Parent_C::PawnBackpackMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnHatMaterials) == 0x001668, "Member 'APlayerPawn_Generic_Parent_C::PawnHatMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnHeadMaterials) == 0x001678, "Member 'APlayerPawn_Generic_Parent_C::PawnHeadMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnBodyMaterials) == 0x001688, "Member 'APlayerPawn_Generic_Parent_C::PawnBodyMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnCharmMaterials) == 0x001698, "Member 'APlayerPawn_Generic_Parent_C::PawnCharmMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnFaceMaterials) == 0x0016A8, "Member 'APlayerPawn_Generic_Parent_C::PawnFaceMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnLegsMaterials) == 0x0016B8, "Member 'APlayerPawn_Generic_Parent_C::PawnLegsMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnTorsoMaterials) == 0x0016C8, "Member 'APlayerPawn_Generic_Parent_C::PawnTorsoMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PlayerPostProcessFX) == 0x0016D8, "Member 'APlayerPawn_Generic_Parent_C::PlayerPostProcessFX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, SkeletalMeshes) == 0x0016E0, "Member 'APlayerPawn_Generic_Parent_C::SkeletalMeshes' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnMaterials_ALL) == 0x0016F0, "Member 'APlayerPawn_Generic_Parent_C::PawnMaterials_ALL' has a wrong offset!");

}
