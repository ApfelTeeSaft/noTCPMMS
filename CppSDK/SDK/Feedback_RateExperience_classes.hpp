#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Feedback_RateExperience

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Feedback_RateExperience.Feedback_RateExperience_C
// 0x00D0 (0x04B8 - 0x03E8)
class UFeedback_RateExperience_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class ULegacyButtonIconText_C*                OneStar;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*                TwoStar;                                           // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*                ThreeStar;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*                FourStar;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*                FiveStar;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableText*                 BodyEditable;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CancelButton;                                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EntryVbox;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*                HiddenInitialStar;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LStick_Left;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LStick_Right;                                // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      SendButton;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StarCount;                                         // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULegacyButtonIconText_C*>        StarButtons;                                       // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                           TooltipHeaders;                                    // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                           TooltipBodys;                                      // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ULegacyButtonIconText_C*                LastClickedStar;                                   // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   FeedbackTitle;                                     // 0x04A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_Feedback_RateExperience(int32 EntryPoint);
	void Destruct();
	void OnInputMethodChanged(bool bUsingGamepad);
	void OnStarButtonClicked(class UFortBaseButton* Button_Clicked);
	void OnClientPartyStateChanged(EFortPartyState PartyState);
	void BndEvt__1Star_K2Node_ComponentBoundEvent_944_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void BndEvt__2Star_K2Node_ComponentBoundEvent_925_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void BndEvt__3Star_K2Node_ComponentBoundEvent_907_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void BndEvt__4Star_K2Node_ComponentBoundEvent_890_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void BndEvt__5Star_K2Node_ComponentBoundEvent_868_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void OnActivated();
	void BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void SetStarCount(int32 Star_Count);
	void SetupStarButtons();
	void SendAnalyticsEvent(const class FString& FeedbackSentBy);
	void CloseWidget();
	void CreateToolTip(class UWidget* Star_Widget, int32 WidgetIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Feedback_RateExperience_C">();
	}
	static class UFeedback_RateExperience_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFeedback_RateExperience_C>();
	}
};
static_assert(alignof(UFeedback_RateExperience_C) == 0x000008, "Wrong alignment on UFeedback_RateExperience_C");
static_assert(sizeof(UFeedback_RateExperience_C) == 0x0004B8, "Wrong size on UFeedback_RateExperience_C");
static_assert(offsetof(UFeedback_RateExperience_C, UberGraphFrame) == 0x0003F0, "Member 'UFeedback_RateExperience_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, OneStar) == 0x0003F8, "Member 'UFeedback_RateExperience_C::OneStar' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, TwoStar) == 0x000400, "Member 'UFeedback_RateExperience_C::TwoStar' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, ThreeStar) == 0x000408, "Member 'UFeedback_RateExperience_C::ThreeStar' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, FourStar) == 0x000410, "Member 'UFeedback_RateExperience_C::FourStar' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, FiveStar) == 0x000418, "Member 'UFeedback_RateExperience_C::FiveStar' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, BodyEditable) == 0x000420, "Member 'UFeedback_RateExperience_C::BodyEditable' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, CancelButton) == 0x000428, "Member 'UFeedback_RateExperience_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, EntryVbox) == 0x000430, "Member 'UFeedback_RateExperience_C::EntryVbox' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, HiddenInitialStar) == 0x000438, "Member 'UFeedback_RateExperience_C::HiddenInitialStar' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, Image_LStick_Left) == 0x000440, "Member 'UFeedback_RateExperience_C::Image_LStick_Left' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, Image_LStick_Right) == 0x000448, "Member 'UFeedback_RateExperience_C::Image_LStick_Right' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, SendButton) == 0x000450, "Member 'UFeedback_RateExperience_C::SendButton' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, Title) == 0x000458, "Member 'UFeedback_RateExperience_C::Title' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, StarCount) == 0x000460, "Member 'UFeedback_RateExperience_C::StarCount' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, StarButtons) == 0x000468, "Member 'UFeedback_RateExperience_C::StarButtons' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, TooltipHeaders) == 0x000478, "Member 'UFeedback_RateExperience_C::TooltipHeaders' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, TooltipBodys) == 0x000488, "Member 'UFeedback_RateExperience_C::TooltipBodys' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, LastClickedStar) == 0x000498, "Member 'UFeedback_RateExperience_C::LastClickedStar' has a wrong offset!");
static_assert(offsetof(UFeedback_RateExperience_C, FeedbackTitle) == 0x0004A0, "Member 'UFeedback_RateExperience_C::FeedbackTitle' has a wrong offset!");

}

