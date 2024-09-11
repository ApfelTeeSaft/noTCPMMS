#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObjectivesPage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ObjectivesPage.ObjectivesPage_C
// 0x0080 (0x0440 - 0x03C0)
class UObjectivesPage_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(Transient, DuplicateTransient)
	class UActiveModifiersPanelContent_C*         ActiveModifiersPanelContent;                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      BadgesButton;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBadgesEarnedPanelContent_C*            BadgesEarnedPanelContent_0;                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ContentPanelScrollBox;                             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ContentPanelSwitcher;                              // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      MissionButton;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionPanelContent_C*                 MissionPanelContent_0;                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ModifiersButton;                                   // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ObjectivesButton;                                  // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObjectivesPanelContent_C*              ObjectivesPanelContent_0;                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Scorebutton;                                       // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamScorePanelContent_C*               TeamScorePanelContent_0;                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UZoneDetails_C*                         ZoneDetails;                                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonGroup*                     ButtonGroup;                                       // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ObjectivesPage(int32 EntryPoint);
	void OnActiveGameplayModifiersChanged_Event_0(const TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers);
	void Destruct();
	void OnActivated();
	void Construct();
	void HandleBack(bool* Passthrough);
	void HandleSelectedButtonChanged(class UCommonButton* InButton, int32 InButtonIndex);
	void HandleInventory(bool* Passthrough);
	void ConfigureModifiersView(bool ShowModifiers);
	void MissionHasModifiers(bool* MissionHasModifiers_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ObjectivesPage_C">();
	}
	static class UObjectivesPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectivesPage_C>();
	}
};
static_assert(alignof(UObjectivesPage_C) == 0x000008, "Wrong alignment on UObjectivesPage_C");
static_assert(sizeof(UObjectivesPage_C) == 0x000440, "Wrong size on UObjectivesPage_C");
static_assert(offsetof(UObjectivesPage_C, UberGraphFrame) == 0x0003C0, "Member 'UObjectivesPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, ActiveModifiersPanelContent) == 0x0003C8, "Member 'UObjectivesPage_C::ActiveModifiersPanelContent' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, BadgesButton) == 0x0003D0, "Member 'UObjectivesPage_C::BadgesButton' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, BadgesEarnedPanelContent_0) == 0x0003D8, "Member 'UObjectivesPage_C::BadgesEarnedPanelContent_0' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, ContentPanelScrollBox) == 0x0003E0, "Member 'UObjectivesPage_C::ContentPanelScrollBox' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, ContentPanelSwitcher) == 0x0003E8, "Member 'UObjectivesPage_C::ContentPanelSwitcher' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, MissionButton) == 0x0003F0, "Member 'UObjectivesPage_C::MissionButton' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, MissionPanelContent_0) == 0x0003F8, "Member 'UObjectivesPage_C::MissionPanelContent_0' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, ModifiersButton) == 0x000400, "Member 'UObjectivesPage_C::ModifiersButton' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, ObjectivesButton) == 0x000408, "Member 'UObjectivesPage_C::ObjectivesButton' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, ObjectivesPanelContent_0) == 0x000410, "Member 'UObjectivesPage_C::ObjectivesPanelContent_0' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, SafeZone_0) == 0x000418, "Member 'UObjectivesPage_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, Scorebutton) == 0x000420, "Member 'UObjectivesPage_C::Scorebutton' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, TeamScorePanelContent_0) == 0x000428, "Member 'UObjectivesPage_C::TeamScorePanelContent_0' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, ZoneDetails) == 0x000430, "Member 'UObjectivesPage_C::ZoneDetails' has a wrong offset!");
static_assert(offsetof(UObjectivesPage_C, ButtonGroup) == 0x000438, "Member 'UObjectivesPage_C::ButtonGroup' has a wrong offset!");

}
