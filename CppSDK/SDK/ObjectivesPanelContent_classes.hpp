#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObjectivesPanelContent

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ObjectivesPanelContent.ObjectivesPanelContent_C
// 0x0018 (0x0228 - 0x0210)
class UObjectivesPanelContent_C final : public UCommonUserWidget
{
public:
	class UMissionTrackerList_C*                  MissionTrackerList;                                // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestTrackerMainQuestList_C*           QuestTrackerMainQuestList;                         // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestTrackerTrackedQuestsList_C*       QuestTrackerTrackedQuestsList;                     // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ObjectivesPanelContent_C">();
	}
	static class UObjectivesPanelContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectivesPanelContent_C>();
	}
};
static_assert(alignof(UObjectivesPanelContent_C) == 0x000008, "Wrong alignment on UObjectivesPanelContent_C");
static_assert(sizeof(UObjectivesPanelContent_C) == 0x000228, "Wrong size on UObjectivesPanelContent_C");
static_assert(offsetof(UObjectivesPanelContent_C, MissionTrackerList) == 0x000210, "Member 'UObjectivesPanelContent_C::MissionTrackerList' has a wrong offset!");
static_assert(offsetof(UObjectivesPanelContent_C, QuestTrackerMainQuestList) == 0x000218, "Member 'UObjectivesPanelContent_C::QuestTrackerMainQuestList' has a wrong offset!");
static_assert(offsetof(UObjectivesPanelContent_C, QuestTrackerTrackedQuestsList) == 0x000220, "Member 'UObjectivesPanelContent_C::QuestTrackerTrackedQuestsList' has a wrong offset!");

}
