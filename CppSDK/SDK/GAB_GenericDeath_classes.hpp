#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericDeath

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C
// 0x0188 (0x0C38 - 0x0AB0)
class UGAB_GenericDeath_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	class UAnimMontage*                           DeathMontage;                                      // 0x0AB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DeathMontageSectionName;                           // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DeathHitDirection;                                 // 0x0AC8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD4[0x4];                                      // 0x0AD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             DeathHitResult;                                    // 0x0AD8(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0B58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  SpawnDroneTags;                                    // 0x0B78(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                           Front;                                             // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Left;                                              // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Right;                                             // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Back;                                              // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Head_Front;                                        // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Head_Left;                                         // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Head_Right;                                        // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Head_Back;                                         // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FrontSectionNameCount;                             // 0x0BD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LeftSectionNameCount;                              // 0x0BDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RightSectionNameCount;                             // 0x0BE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BackSectionNameCount;                              // 0x0BE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Head_FrontSectionNameCount;                        // 0x0BE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Head_LeftSectionNameCount;                         // 0x0BEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Head_RightSectionNameCount;                        // 0x0BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Head_BackSectionNameCount;                         // 0x0BF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FrontMontageSectionPrefix;                         // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BackMontageSectionPrefix;                          // 0x0C00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LeftMontageSectionPrefix;                          // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightMontageSectionPrefix;                         // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HeadFrontMontageSectionPrefix;                     // 0x0C18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HeadBackMontageSectionPrefix;                      // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HeadLeftMontageSectionPrefix;                      // 0x0C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HeadRightMontageSectionPrefix;                     // 0x0C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_GenericDeath(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void PickDeathMontageSection();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4();
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData);
	void GetRandomSectionName(int32 MaxNumberOfSections, class FName OriginalSectionName, class FName* SectionName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericDeath_C">();
	}
	static class UGAB_GenericDeath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericDeath_C>();
	}
};
static_assert(alignof(UGAB_GenericDeath_C) == 0x000008, "Wrong alignment on UGAB_GenericDeath_C");
static_assert(sizeof(UGAB_GenericDeath_C) == 0x000C38, "Wrong size on UGAB_GenericDeath_C");
static_assert(offsetof(UGAB_GenericDeath_C, UberGraphFrame) == 0x000AB0, "Member 'UGAB_GenericDeath_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DeathMontage) == 0x000AB8, "Member 'UGAB_GenericDeath_C::DeathMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DeathMontageSectionName) == 0x000AC0, "Member 'UGAB_GenericDeath_C::DeathMontageSectionName' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DeathHitDirection) == 0x000AC8, "Member 'UGAB_GenericDeath_C::DeathHitDirection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DeathHitResult) == 0x000AD8, "Member 'UGAB_GenericDeath_C::DeathHitResult' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, DamageTags) == 0x000B58, "Member 'UGAB_GenericDeath_C::DamageTags' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, SpawnDroneTags) == 0x000B78, "Member 'UGAB_GenericDeath_C::SpawnDroneTags' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Front) == 0x000B98, "Member 'UGAB_GenericDeath_C::Front' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Left) == 0x000BA0, "Member 'UGAB_GenericDeath_C::Left' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Right) == 0x000BA8, "Member 'UGAB_GenericDeath_C::Right' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Back) == 0x000BB0, "Member 'UGAB_GenericDeath_C::Back' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_Front) == 0x000BB8, "Member 'UGAB_GenericDeath_C::Head_Front' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_Left) == 0x000BC0, "Member 'UGAB_GenericDeath_C::Head_Left' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_Right) == 0x000BC8, "Member 'UGAB_GenericDeath_C::Head_Right' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_Back) == 0x000BD0, "Member 'UGAB_GenericDeath_C::Head_Back' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, FrontSectionNameCount) == 0x000BD8, "Member 'UGAB_GenericDeath_C::FrontSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, LeftSectionNameCount) == 0x000BDC, "Member 'UGAB_GenericDeath_C::LeftSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, RightSectionNameCount) == 0x000BE0, "Member 'UGAB_GenericDeath_C::RightSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, BackSectionNameCount) == 0x000BE4, "Member 'UGAB_GenericDeath_C::BackSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_FrontSectionNameCount) == 0x000BE8, "Member 'UGAB_GenericDeath_C::Head_FrontSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_LeftSectionNameCount) == 0x000BEC, "Member 'UGAB_GenericDeath_C::Head_LeftSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_RightSectionNameCount) == 0x000BF0, "Member 'UGAB_GenericDeath_C::Head_RightSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, Head_BackSectionNameCount) == 0x000BF4, "Member 'UGAB_GenericDeath_C::Head_BackSectionNameCount' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, FrontMontageSectionPrefix) == 0x000BF8, "Member 'UGAB_GenericDeath_C::FrontMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, BackMontageSectionPrefix) == 0x000C00, "Member 'UGAB_GenericDeath_C::BackMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, LeftMontageSectionPrefix) == 0x000C08, "Member 'UGAB_GenericDeath_C::LeftMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, RightMontageSectionPrefix) == 0x000C10, "Member 'UGAB_GenericDeath_C::RightMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, HeadFrontMontageSectionPrefix) == 0x000C18, "Member 'UGAB_GenericDeath_C::HeadFrontMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, HeadBackMontageSectionPrefix) == 0x000C20, "Member 'UGAB_GenericDeath_C::HeadBackMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, HeadLeftMontageSectionPrefix) == 0x000C28, "Member 'UGAB_GenericDeath_C::HeadLeftMontageSectionPrefix' has a wrong offset!");
static_assert(offsetof(UGAB_GenericDeath_C, HeadRightMontageSectionPrefix) == 0x000C30, "Member 'UGAB_GenericDeath_C::HeadRightMontageSectionPrefix' has a wrong offset!");

}

