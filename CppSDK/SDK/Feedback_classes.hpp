#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Feedback

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Feedback.Feedback_C
// 0x00E8 (0x0568 - 0x0480)
class UFeedback_C final : public UFortGameFeedbackBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      BugButton;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CancelButton;                                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CommentButton;                                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        EntryProgressSwitcher;                             // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EntryVbox;                                         // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_AutofillPlayerNameContainer;                    // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           InteractableVBox;                                  // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainIcon;                                          // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PlayerButton;                                      // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PopulateName_Killer_Button;                        // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PopulateName_Spectator_Button;                     // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ProgressSizeBox;                                   // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ProgressVBox;                                      // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RootBorder;                                        // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RootOverlay;                                       // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      SendButton;                                        // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   NewVar_0;                                          // 0x0520(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   KillersName;                                       // 0x0538(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SpectatingName;                                    // 0x0550(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Feedback(int32 EntryPoint);
	void Construct();
	void OnInitiateDebugInfoForFeedbackComplete();
	void BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void ForceSelect_PopulateName_Spectator_Button();
	void ForceSelect_PopulateName_Killer_Button();
	void OnActivated();
	void HandleTextChanged(const class FText& Text);
	void BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnBeginIntro();
	void BindDelegates();
	void AddButtonFeedbackTypes();
	bool IsAllTextNotEmpty();
	void InitializeFeedback();
	void Setup_For_Reporting_Player(const class FText& PlayerName);
	void SetupAutoFillPlayerFields(const class FText& KillersName_0, const class FText& SpectatingName_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Feedback_C">();
	}
	static class UFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFeedback_C>();
	}
};
static_assert(alignof(UFeedback_C) == 0x000008, "Wrong alignment on UFeedback_C");
static_assert(sizeof(UFeedback_C) == 0x000568, "Wrong size on UFeedback_C");
static_assert(offsetof(UFeedback_C, UberGraphFrame) == 0x000480, "Member 'UFeedback_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFeedback_C, BugButton) == 0x000488, "Member 'UFeedback_C::BugButton' has a wrong offset!");
static_assert(offsetof(UFeedback_C, CancelButton) == 0x000490, "Member 'UFeedback_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UFeedback_C, CommentButton) == 0x000498, "Member 'UFeedback_C::CommentButton' has a wrong offset!");
static_assert(offsetof(UFeedback_C, EntryProgressSwitcher) == 0x0004A0, "Member 'UFeedback_C::EntryProgressSwitcher' has a wrong offset!");
static_assert(offsetof(UFeedback_C, EntryVbox) == 0x0004A8, "Member 'UFeedback_C::EntryVbox' has a wrong offset!");
static_assert(offsetof(UFeedback_C, HB_AutofillPlayerNameContainer) == 0x0004B0, "Member 'UFeedback_C::HB_AutofillPlayerNameContainer' has a wrong offset!");
static_assert(offsetof(UFeedback_C, Image_0) == 0x0004B8, "Member 'UFeedback_C::Image_0' has a wrong offset!");
static_assert(offsetof(UFeedback_C, InteractableVBox) == 0x0004C0, "Member 'UFeedback_C::InteractableVBox' has a wrong offset!");
static_assert(offsetof(UFeedback_C, Lightbox) == 0x0004C8, "Member 'UFeedback_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UFeedback_C, MainIcon) == 0x0004D0, "Member 'UFeedback_C::MainIcon' has a wrong offset!");
static_assert(offsetof(UFeedback_C, PlayerButton) == 0x0004D8, "Member 'UFeedback_C::PlayerButton' has a wrong offset!");
static_assert(offsetof(UFeedback_C, PopulateName_Killer_Button) == 0x0004E0, "Member 'UFeedback_C::PopulateName_Killer_Button' has a wrong offset!");
static_assert(offsetof(UFeedback_C, PopulateName_Spectator_Button) == 0x0004E8, "Member 'UFeedback_C::PopulateName_Spectator_Button' has a wrong offset!");
static_assert(offsetof(UFeedback_C, ProgressSizeBox) == 0x0004F0, "Member 'UFeedback_C::ProgressSizeBox' has a wrong offset!");
static_assert(offsetof(UFeedback_C, ProgressVBox) == 0x0004F8, "Member 'UFeedback_C::ProgressVBox' has a wrong offset!");
static_assert(offsetof(UFeedback_C, RootBorder) == 0x000500, "Member 'UFeedback_C::RootBorder' has a wrong offset!");
static_assert(offsetof(UFeedback_C, RootOverlay) == 0x000508, "Member 'UFeedback_C::RootOverlay' has a wrong offset!");
static_assert(offsetof(UFeedback_C, SendButton) == 0x000510, "Member 'UFeedback_C::SendButton' has a wrong offset!");
static_assert(offsetof(UFeedback_C, Title) == 0x000518, "Member 'UFeedback_C::Title' has a wrong offset!");
static_assert(offsetof(UFeedback_C, NewVar_0) == 0x000520, "Member 'UFeedback_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UFeedback_C, KillersName) == 0x000538, "Member 'UFeedback_C::KillersName' has a wrong offset!");
static_assert(offsetof(UFeedback_C, SpectatingName) == 0x000550, "Member 'UFeedback_C::SpectatingName' has a wrong offset!");

}
