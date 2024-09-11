#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotItemPickerTileButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C
// 0x0048 (0x0810 - 0x07C8)
class USquadSlotItemPickerTileButton_C final : public UFortSquadSlotItemPickerTileButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C8(0x0008)(Transient, DuplicateTransient)
	class UBorder*                                CurrentlySlottedIndicatorLayer;                    // 0x07D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NullItemBorder;                                    // 0x07D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        OverlayTypeSwitcher;                               // 0x07E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RootWidgetSwitcher;                                // 0x07E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USquadIcon_C*                           SlottedSquadIcon;                                  // 0x07F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlottingRestrictedIndicator;                       // 0x07F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SlottingRestrictedIndicatorLayer;                  // 0x0800(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSlottedSomewhere;                                // 0x0808(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SquadSlotItemPickerTileButton(int32 EntryPoint);
	void HandleSlottingRestrictionReasonsChanged();
	void HandleItemSlottedToDifferentSquad(const struct FHomebaseSquadSlotId& SquadSlotId);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void UpdateOverlays();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadSlotItemPickerTileButton_C">();
	}
	static class USquadSlotItemPickerTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadSlotItemPickerTileButton_C>();
	}
};
static_assert(alignof(USquadSlotItemPickerTileButton_C) == 0x000008, "Wrong alignment on USquadSlotItemPickerTileButton_C");
static_assert(sizeof(USquadSlotItemPickerTileButton_C) == 0x000810, "Wrong size on USquadSlotItemPickerTileButton_C");
static_assert(offsetof(USquadSlotItemPickerTileButton_C, UberGraphFrame) == 0x0007C8, "Member 'USquadSlotItemPickerTileButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USquadSlotItemPickerTileButton_C, CurrentlySlottedIndicatorLayer) == 0x0007D0, "Member 'USquadSlotItemPickerTileButton_C::CurrentlySlottedIndicatorLayer' has a wrong offset!");
static_assert(offsetof(USquadSlotItemPickerTileButton_C, NullItemBorder) == 0x0007D8, "Member 'USquadSlotItemPickerTileButton_C::NullItemBorder' has a wrong offset!");
static_assert(offsetof(USquadSlotItemPickerTileButton_C, OverlayTypeSwitcher) == 0x0007E0, "Member 'USquadSlotItemPickerTileButton_C::OverlayTypeSwitcher' has a wrong offset!");
static_assert(offsetof(USquadSlotItemPickerTileButton_C, RootWidgetSwitcher) == 0x0007E8, "Member 'USquadSlotItemPickerTileButton_C::RootWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(USquadSlotItemPickerTileButton_C, SlottedSquadIcon) == 0x0007F0, "Member 'USquadSlotItemPickerTileButton_C::SlottedSquadIcon' has a wrong offset!");
static_assert(offsetof(USquadSlotItemPickerTileButton_C, SlottingRestrictedIndicator) == 0x0007F8, "Member 'USquadSlotItemPickerTileButton_C::SlottingRestrictedIndicator' has a wrong offset!");
static_assert(offsetof(USquadSlotItemPickerTileButton_C, SlottingRestrictedIndicatorLayer) == 0x000800, "Member 'USquadSlotItemPickerTileButton_C::SlottingRestrictedIndicatorLayer' has a wrong offset!");
static_assert(offsetof(USquadSlotItemPickerTileButton_C, IsSlottedSomewhere) == 0x000808, "Member 'USquadSlotItemPickerTileButton_C::IsSlottedSomewhere' has a wrong offset!");

}
