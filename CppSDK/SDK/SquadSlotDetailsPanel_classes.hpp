#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotDetailsPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadSlotDetailsPanel.SquadSlotDetailsPanel_C
// 0x0078 (0x02E8 - 0x0270)
class USquadSlotDetailsPanel_C final : public UFortSquadSlotDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           LockedSlotDetailsPanel;                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PreviewEmptySlotTextBlock;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SelectionHintTextBlock;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ShowInSkillTreeButton;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SlottedItemDetailsSwitcher;                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             SlottingRestrictionsBox;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SlottingRestrictionsTextBlock;                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SquadSlotLabelTextBlock;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DisplayName;                                       // 0x02B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ItemType;                                          // 0x02D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_SquadSlotDetailsPanel(int32 EntryPoint);
	void HandleSquadSlotRestrictionFactorsChangedBP();
	void Construct();
	void BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleSquadSlotStateChangedBP();
	void HandleDifferentSquadSlotSetBP();
	void UpdateSkillTreeButtonVisibility();
	void GetRestrictionReasonsAsText(TArray<EFortSquadSlottingRestrictionReason>& Reasons, class FText* Text);
	void Set_Scroll_Box_to_Nav_Scroll_Widget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadSlotDetailsPanel_C">();
	}
	static class USquadSlotDetailsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadSlotDetailsPanel_C>();
	}
};
static_assert(alignof(USquadSlotDetailsPanel_C) == 0x000008, "Wrong alignment on USquadSlotDetailsPanel_C");
static_assert(sizeof(USquadSlotDetailsPanel_C) == 0x0002E8, "Wrong size on USquadSlotDetailsPanel_C");
static_assert(offsetof(USquadSlotDetailsPanel_C, UberGraphFrame) == 0x000270, "Member 'USquadSlotDetailsPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, LockedSlotDetailsPanel) == 0x000278, "Member 'USquadSlotDetailsPanel_C::LockedSlotDetailsPanel' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, PreviewEmptySlotTextBlock) == 0x000280, "Member 'USquadSlotDetailsPanel_C::PreviewEmptySlotTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SelectionHintTextBlock) == 0x000288, "Member 'USquadSlotDetailsPanel_C::SelectionHintTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, ShowInSkillTreeButton) == 0x000290, "Member 'USquadSlotDetailsPanel_C::ShowInSkillTreeButton' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SlottedItemDetailsSwitcher) == 0x000298, "Member 'USquadSlotDetailsPanel_C::SlottedItemDetailsSwitcher' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SlottingRestrictionsBox) == 0x0002A0, "Member 'USquadSlotDetailsPanel_C::SlottingRestrictionsBox' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SlottingRestrictionsTextBlock) == 0x0002A8, "Member 'USquadSlotDetailsPanel_C::SlottingRestrictionsTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SquadSlotLabelTextBlock) == 0x0002B0, "Member 'USquadSlotDetailsPanel_C::SquadSlotLabelTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, DisplayName) == 0x0002B8, "Member 'USquadSlotDetailsPanel_C::DisplayName' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, ItemType) == 0x0002D0, "Member 'USquadSlotDetailsPanel_C::ItemType' has a wrong offset!");

}
