#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_CommanderXP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_CommanderXP.Results_CommanderXP_C
// 0x00F8 (0x0308 - 0x0210)
class UResults_CommanderXP_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_SkipToFinalState;                             // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SkillPointIncrement2;                         // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ContinueButtonOutro;                          // 0x0228(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ContinueButtonIntro;                          // 0x0230(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Intro;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SkillPointIncrement1;                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SkillPointIncrementBase;                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonContinue;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSkillPointDynamic1;                           // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSkillPointDynamic2;                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSkillPointStatic;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextFortName;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextSkillPointIncrement;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextSkillPoints;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_CommanderXPBar_C*              XpBar;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         PlayRate;                                          // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenIntroAndCount;                          // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_TeamTotalScore_C*              TeamTotalScore;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Finished;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortAccountItemDefinition*             SkillPointsItem;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentSkillPoints;                                // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkippedToEnd;                                     // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSkippingToEnd;                                    // 0x02CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CE[0x2];                                      // 0x02CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeBetweenSkipAndContinue;                        // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FinalSkillPoints;                                  // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanSkipToEnd;                                     // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             XPBarAppear;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             XPBadge;                                           // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             PlayerSkillPoint;                                  // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             XPBadgeIncrement;                                  // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextSkillPointIncrement_0;                         // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Finished__DelegateSignature();
	void ExecuteUbergraph_Results_CommanderXP(int32 EntryPoint);
	void BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Skip();
	void Skip_To_End_Sequence();
	void ResetGateSkillPointAnimation1();
	void ResetGateSkillPointAnimation2();
	void GateSkillPointAnimation2();
	void GateSkillPointAnimation1();
	void BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature();
	void Count_Sequence();
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature();
	void Intro_Sequence();
	void BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature(int32 NewLevel);
	void Initialize(class UFortUIScoreReport* InScoreReport, class UResults_TeamTotalScore_C* TeamTotalScore_0);
	void UpdatePointsForLevel(int32 Level);
	void UpdatePointsText();
	void SkipToFinalState();
	void SetSkippingToEnd();
	void Focus();
	void PlayAnimationCommon(class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_CommanderXP_C">();
	}
	static class UResults_CommanderXP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_CommanderXP_C>();
	}
};
static_assert(alignof(UResults_CommanderXP_C) == 0x000008, "Wrong alignment on UResults_CommanderXP_C");
static_assert(sizeof(UResults_CommanderXP_C) == 0x000308, "Wrong size on UResults_CommanderXP_C");
static_assert(offsetof(UResults_CommanderXP_C, UberGraphFrame) == 0x000210, "Member 'UResults_CommanderXP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, Anim_SkipToFinalState) == 0x000218, "Member 'UResults_CommanderXP_C::Anim_SkipToFinalState' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, Anim_SkillPointIncrement2) == 0x000220, "Member 'UResults_CommanderXP_C::Anim_SkillPointIncrement2' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, Anim_ContinueButtonOutro) == 0x000228, "Member 'UResults_CommanderXP_C::Anim_ContinueButtonOutro' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, Anim_ContinueButtonIntro) == 0x000230, "Member 'UResults_CommanderXP_C::Anim_ContinueButtonIntro' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, Anim_Intro) == 0x000238, "Member 'UResults_CommanderXP_C::Anim_Intro' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, Anim_SkillPointIncrement1) == 0x000240, "Member 'UResults_CommanderXP_C::Anim_SkillPointIncrement1' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, Anim_SkillPointIncrementBase) == 0x000248, "Member 'UResults_CommanderXP_C::Anim_SkillPointIncrementBase' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, ButtonContinue) == 0x000250, "Member 'UResults_CommanderXP_C::ButtonContinue' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, ImageSkillPointDynamic1) == 0x000258, "Member 'UResults_CommanderXP_C::ImageSkillPointDynamic1' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, ImageSkillPointDynamic2) == 0x000260, "Member 'UResults_CommanderXP_C::ImageSkillPointDynamic2' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, ImageSkillPointStatic) == 0x000268, "Member 'UResults_CommanderXP_C::ImageSkillPointStatic' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, PlayerBanner) == 0x000270, "Member 'UResults_CommanderXP_C::PlayerBanner' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, SafeZone_0) == 0x000278, "Member 'UResults_CommanderXP_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, TextFortName) == 0x000280, "Member 'UResults_CommanderXP_C::TextFortName' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, TextSkillPointIncrement) == 0x000288, "Member 'UResults_CommanderXP_C::TextSkillPointIncrement' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, TextSkillPoints) == 0x000290, "Member 'UResults_CommanderXP_C::TextSkillPoints' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, XpBar) == 0x000298, "Member 'UResults_CommanderXP_C::XpBar' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, PlayRate) == 0x0002A0, "Member 'UResults_CommanderXP_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, TimeBetweenIntroAndCount) == 0x0002A4, "Member 'UResults_CommanderXP_C::TimeBetweenIntroAndCount' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, TeamTotalScore) == 0x0002A8, "Member 'UResults_CommanderXP_C::TeamTotalScore' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, Finished) == 0x0002B0, "Member 'UResults_CommanderXP_C::Finished' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, SkillPointsItem) == 0x0002C0, "Member 'UResults_CommanderXP_C::SkillPointsItem' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, CurrentSkillPoints) == 0x0002C8, "Member 'UResults_CommanderXP_C::CurrentSkillPoints' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, bSkippedToEnd) == 0x0002CC, "Member 'UResults_CommanderXP_C::bSkippedToEnd' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, bSkippingToEnd) == 0x0002CD, "Member 'UResults_CommanderXP_C::bSkippingToEnd' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, TimeBetweenSkipAndContinue) == 0x0002D0, "Member 'UResults_CommanderXP_C::TimeBetweenSkipAndContinue' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, FinalSkillPoints) == 0x0002D4, "Member 'UResults_CommanderXP_C::FinalSkillPoints' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, bCanSkipToEnd) == 0x0002D8, "Member 'UResults_CommanderXP_C::bCanSkipToEnd' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, XPBarAppear) == 0x0002E0, "Member 'UResults_CommanderXP_C::XPBarAppear' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, XPBadge) == 0x0002E8, "Member 'UResults_CommanderXP_C::XPBadge' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, PlayerSkillPoint) == 0x0002F0, "Member 'UResults_CommanderXP_C::PlayerSkillPoint' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, XPBadgeIncrement) == 0x0002F8, "Member 'UResults_CommanderXP_C::XPBadgeIncrement' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXP_C, TextSkillPointIncrement_0) == 0x000300, "Member 'UResults_CommanderXP_C::TextSkillPointIncrement_0' has a wrong offset!");

}
