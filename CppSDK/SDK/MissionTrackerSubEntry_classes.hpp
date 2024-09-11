#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionTrackerSubEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionTrackerSubEntry.MissionTrackerSubEntry_C
// 0x0170 (0x03B8 - 0x0248)
class UMissionTrackerSubEntry_C final : public UFortMissionTrackerSubEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewObjectiveCreation;                              // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       DrawAttentionAnimation;                            // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CompletionFlashAnimation;                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       QuestionMarkAnimation;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CrossMarkAnimation;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CheckmarkAnimation;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BorderFlash;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BulletImage;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Checkmark;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Crossmark;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             ObjectiveContentSlot;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestionMark;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortObjectiveBase*                     ObjectiveActor;                                    // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   WidgetVisibilityChanged;                           // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateBrush                            DefaultBulletBrush;                                // 0x02C8(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            DefaultNonHUDBulletBrush;                          // 0x0340(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void WidgetVisibilityChanged__DelegateSignature();
	void ExecuteUbergraph_MissionTrackerSubEntry(int32 EntryPoint);
	void OnHiddenByHeightConstraintChanged();
	void OnObjectiveSet();
	void Setup(class AFortObjectiveBase* Objective);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool NewVisibility);
	void HandleUpdate(class AFortMissionState* Objective);
	void HideObjectiveWidget();
	void StartEndingAnimations(class UWidgetAnimation* Animation);
	void CreateObjectiveContentWidget();
	void HanldeObjectiveVisiblityOverrideChanged(class AFortObjectiveBase* Objective, EFortMissionVisibilityOverride New_Visibility_Override);
	void ShowObjectiveWidget();
	void HideObjectiveCompletionIcon();
	void Update();
	void DrawAttention();
	void HandleMissionUIEvent(class AFortMissionState* MissionElement, struct FGameplayTagContainer& EventTags);
	void CreateCompletionAnnouncement();

	float GetHeightEstimate() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionTrackerSubEntry_C">();
	}
	static class UMissionTrackerSubEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionTrackerSubEntry_C>();
	}
};
static_assert(alignof(UMissionTrackerSubEntry_C) == 0x000008, "Wrong alignment on UMissionTrackerSubEntry_C");
static_assert(sizeof(UMissionTrackerSubEntry_C) == 0x0003B8, "Wrong size on UMissionTrackerSubEntry_C");
static_assert(offsetof(UMissionTrackerSubEntry_C, UberGraphFrame) == 0x000248, "Member 'UMissionTrackerSubEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, NewObjectiveCreation) == 0x000250, "Member 'UMissionTrackerSubEntry_C::NewObjectiveCreation' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, DrawAttentionAnimation) == 0x000258, "Member 'UMissionTrackerSubEntry_C::DrawAttentionAnimation' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, CompletionFlashAnimation) == 0x000260, "Member 'UMissionTrackerSubEntry_C::CompletionFlashAnimation' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, QuestionMarkAnimation) == 0x000268, "Member 'UMissionTrackerSubEntry_C::QuestionMarkAnimation' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, CrossMarkAnimation) == 0x000270, "Member 'UMissionTrackerSubEntry_C::CrossMarkAnimation' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, CheckmarkAnimation) == 0x000278, "Member 'UMissionTrackerSubEntry_C::CheckmarkAnimation' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, BorderFlash) == 0x000280, "Member 'UMissionTrackerSubEntry_C::BorderFlash' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, BulletImage) == 0x000288, "Member 'UMissionTrackerSubEntry_C::BulletImage' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, Checkmark) == 0x000290, "Member 'UMissionTrackerSubEntry_C::Checkmark' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, Crossmark) == 0x000298, "Member 'UMissionTrackerSubEntry_C::Crossmark' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, ObjectiveContentSlot) == 0x0002A0, "Member 'UMissionTrackerSubEntry_C::ObjectiveContentSlot' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, QuestionMark) == 0x0002A8, "Member 'UMissionTrackerSubEntry_C::QuestionMark' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, ObjectiveActor) == 0x0002B0, "Member 'UMissionTrackerSubEntry_C::ObjectiveActor' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, WidgetVisibilityChanged) == 0x0002B8, "Member 'UMissionTrackerSubEntry_C::WidgetVisibilityChanged' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, DefaultBulletBrush) == 0x0002C8, "Member 'UMissionTrackerSubEntry_C::DefaultBulletBrush' has a wrong offset!");
static_assert(offsetof(UMissionTrackerSubEntry_C, DefaultNonHUDBulletBrush) == 0x000340, "Member 'UMissionTrackerSubEntry_C::DefaultNonHUDBulletBrush' has a wrong offset!");

}

