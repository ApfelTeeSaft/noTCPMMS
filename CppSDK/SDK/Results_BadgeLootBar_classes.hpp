#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_BadgeLootBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_BadgeLootBar.Results_BadgeLootBar_C
// 0x00B8 (0x02C8 - 0x0210)
class UResults_BadgeLootBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_PostLevelUpIntro;                             // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_LevelUp;                                      // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ConvertBadge;                                 // 0x0228(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Intro;                                        // 0x0230(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressBarNew;                                    // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextLootLevel;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   IntroComplete;                                     // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         InitialPoints;                                     // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentPoints;                                     // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           AddBadgePointsTimer;                               // 0x0260(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         TargetPoints;                                      // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLootLevel;                                  // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   FinishedAddingBadgePoints;                         // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         AddBadgePointsTime;                                // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AddBadgePointsTimeStart;                           // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   LeveledUp;                                         // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         DelayBetweenLevelUpAndPostLevelUp;                 // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayRate;                                          // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkippedToEnd;                                     // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSkippingToEnd;                                    // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A2[0x2];                                      // 0x02A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PointsPerLootLevel;                                // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LevelLootBar;                                      // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             YellowFillUp_Sound;                                // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        YellowBarFillSound_AC;                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MAT_XPBar;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IntroComplete__DelegateSignature();
	void FinishedAddingBadgePoints__DelegateSignature();
	void LeveledUp__DelegateSignature();
	void ExecuteUbergraph_Results_BadgeLootBar(int32 EntryPoint);
	void Construct();
	void On_Leveled_Up();
	void BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Add_Badge_Points_Sequence(class UResults_Badge_C* Badge);
	void BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Intro_Sequence();
	void BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void UpdateAddBadgePoints();
	void Initialize(float PlayRate_0);
	void SetLootLevel(int32 Level);
	void GetBadgePoints(class UResults_Badge_C* Badge, int32* Points);
	void PlayAnimationCommon(class UWidgetAnimation* Animation);
	void SetSkippingToEnd();
	void GetNextLootLevelPoints(int32 LootPoints, int32* NextLootLevelPoints);
	void SkipToFinalState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_BadgeLootBar_C">();
	}
	static class UResults_BadgeLootBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_BadgeLootBar_C>();
	}
};
static_assert(alignof(UResults_BadgeLootBar_C) == 0x000008, "Wrong alignment on UResults_BadgeLootBar_C");
static_assert(sizeof(UResults_BadgeLootBar_C) == 0x0002C8, "Wrong size on UResults_BadgeLootBar_C");
static_assert(offsetof(UResults_BadgeLootBar_C, UberGraphFrame) == 0x000210, "Member 'UResults_BadgeLootBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, Anim_PostLevelUpIntro) == 0x000218, "Member 'UResults_BadgeLootBar_C::Anim_PostLevelUpIntro' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, Anim_LevelUp) == 0x000220, "Member 'UResults_BadgeLootBar_C::Anim_LevelUp' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, Anim_ConvertBadge) == 0x000228, "Member 'UResults_BadgeLootBar_C::Anim_ConvertBadge' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, Anim_Intro) == 0x000230, "Member 'UResults_BadgeLootBar_C::Anim_Intro' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, ProgressBarNew) == 0x000238, "Member 'UResults_BadgeLootBar_C::ProgressBarNew' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, TextLootLevel) == 0x000240, "Member 'UResults_BadgeLootBar_C::TextLootLevel' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, IntroComplete) == 0x000248, "Member 'UResults_BadgeLootBar_C::IntroComplete' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, InitialPoints) == 0x000258, "Member 'UResults_BadgeLootBar_C::InitialPoints' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, CurrentPoints) == 0x00025C, "Member 'UResults_BadgeLootBar_C::CurrentPoints' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, AddBadgePointsTimer) == 0x000260, "Member 'UResults_BadgeLootBar_C::AddBadgePointsTimer' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, TargetPoints) == 0x000268, "Member 'UResults_BadgeLootBar_C::TargetPoints' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, CurrentLootLevel) == 0x00026C, "Member 'UResults_BadgeLootBar_C::CurrentLootLevel' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, FinishedAddingBadgePoints) == 0x000270, "Member 'UResults_BadgeLootBar_C::FinishedAddingBadgePoints' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, AddBadgePointsTime) == 0x000280, "Member 'UResults_BadgeLootBar_C::AddBadgePointsTime' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, AddBadgePointsTimeStart) == 0x000284, "Member 'UResults_BadgeLootBar_C::AddBadgePointsTimeStart' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, LeveledUp) == 0x000288, "Member 'UResults_BadgeLootBar_C::LeveledUp' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, DelayBetweenLevelUpAndPostLevelUp) == 0x000298, "Member 'UResults_BadgeLootBar_C::DelayBetweenLevelUpAndPostLevelUp' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, PlayRate) == 0x00029C, "Member 'UResults_BadgeLootBar_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, bSkippedToEnd) == 0x0002A0, "Member 'UResults_BadgeLootBar_C::bSkippedToEnd' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, bSkippingToEnd) == 0x0002A1, "Member 'UResults_BadgeLootBar_C::bSkippingToEnd' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, PointsPerLootLevel) == 0x0002A4, "Member 'UResults_BadgeLootBar_C::PointsPerLootLevel' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, LevelLootBar) == 0x0002A8, "Member 'UResults_BadgeLootBar_C::LevelLootBar' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, YellowFillUp_Sound) == 0x0002B0, "Member 'UResults_BadgeLootBar_C::YellowFillUp_Sound' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, YellowBarFillSound_AC) == 0x0002B8, "Member 'UResults_BadgeLootBar_C::YellowBarFillSound_AC' has a wrong offset!");
static_assert(offsetof(UResults_BadgeLootBar_C, MAT_XPBar) == 0x0002C0, "Member 'UResults_BadgeLootBar_C::MAT_XPBar' has a wrong offset!");

}
