#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamScorePanelContent

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TeamScorePanelContent.TeamScorePanelContent_C
// 0x0008 (0x0218 - 0x0210)
class UTeamScorePanelContent_C final : public UCommonUserWidget
{
public:
	class UTeamScoreDetailsContent_C*             TeamScoreDetailsContent;                           // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamScorePanelContent_C">();
	}
	static class UTeamScorePanelContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamScorePanelContent_C>();
	}
};
static_assert(alignof(UTeamScorePanelContent_C) == 0x000008, "Wrong alignment on UTeamScorePanelContent_C");
static_assert(sizeof(UTeamScorePanelContent_C) == 0x000218, "Wrong size on UTeamScorePanelContent_C");
static_assert(offsetof(UTeamScorePanelContent_C, TeamScoreDetailsContent) == 0x000210, "Member 'UTeamScorePanelContent_C::TeamScoreDetailsContent' has a wrong offset!");

}

