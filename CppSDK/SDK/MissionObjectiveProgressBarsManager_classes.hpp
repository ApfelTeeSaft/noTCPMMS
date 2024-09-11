#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionObjectiveProgressBarsManager

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C
// 0x0018 (0x0228 - 0x0210)
class UMissionObjectiveProgressBarsManager_C final : public UCommonUserWidget
{
public:
	class UVerticalBox*                           ProgressBarBox;                                    // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortObjectiveBase*                     TrackedObjective;                                  // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bConfigureAsHUD;                                   // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UpdateObjectiveProgressBars();
	void Setup(class AFortObjectiveBase* TrackedObjective_0, bool bInConfigureAsHUD);
	void CreateProgressBarWidget(int32 Index_0);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus New_Status);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool New_Visibility);
	void HandleUpdate(class AFortMissionState* Objective);
	void GetHeightEstimate(float* Height);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionObjectiveProgressBarsManager_C">();
	}
	static class UMissionObjectiveProgressBarsManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionObjectiveProgressBarsManager_C>();
	}
};
static_assert(alignof(UMissionObjectiveProgressBarsManager_C) == 0x000008, "Wrong alignment on UMissionObjectiveProgressBarsManager_C");
static_assert(sizeof(UMissionObjectiveProgressBarsManager_C) == 0x000228, "Wrong size on UMissionObjectiveProgressBarsManager_C");
static_assert(offsetof(UMissionObjectiveProgressBarsManager_C, ProgressBarBox) == 0x000210, "Member 'UMissionObjectiveProgressBarsManager_C::ProgressBarBox' has a wrong offset!");
static_assert(offsetof(UMissionObjectiveProgressBarsManager_C, TrackedObjective) == 0x000218, "Member 'UMissionObjectiveProgressBarsManager_C::TrackedObjective' has a wrong offset!");
static_assert(offsetof(UMissionObjectiveProgressBarsManager_C, bConfigureAsHUD) == 0x000220, "Member 'UMissionObjectiveProgressBarsManager_C::bConfigureAsHUD' has a wrong offset!");

}

