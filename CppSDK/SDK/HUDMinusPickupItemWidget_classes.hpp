#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDMinusPickupItemWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD-PickupItemWidget.HUD-PickupItemWidget_C
// 0x0038 (0x0248 - 0x0210)
class UHUDMinusPickupItemWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 ImageBackpack;                                     // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeader_C*                   ItemDetailsHeader;                                 // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxInteractionFailure;                         // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextInteractionFailure;                            // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortPickup*                            Pickup;                                            // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFortItem*                              PickupItem;                                        // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HUDMinusPickupItemWidget(int32 EntryPoint);
	void Construct();
	void InitializeItemData();
	void InitializeInteractionFailureText();
	void SetPickup(class AFortPickup* NewPickup);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD-PickupItemWidget_C">();
	}
	static class UHUDMinusPickupItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUDMinusPickupItemWidget_C>();
	}
};
static_assert(alignof(UHUDMinusPickupItemWidget_C) == 0x000008, "Wrong alignment on UHUDMinusPickupItemWidget_C");
static_assert(sizeof(UHUDMinusPickupItemWidget_C) == 0x000248, "Wrong size on UHUDMinusPickupItemWidget_C");
static_assert(offsetof(UHUDMinusPickupItemWidget_C, UberGraphFrame) == 0x000210, "Member 'UHUDMinusPickupItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUDMinusPickupItemWidget_C, ImageBackpack) == 0x000218, "Member 'UHUDMinusPickupItemWidget_C::ImageBackpack' has a wrong offset!");
static_assert(offsetof(UHUDMinusPickupItemWidget_C, ItemDetailsHeader) == 0x000220, "Member 'UHUDMinusPickupItemWidget_C::ItemDetailsHeader' has a wrong offset!");
static_assert(offsetof(UHUDMinusPickupItemWidget_C, SizeBoxInteractionFailure) == 0x000228, "Member 'UHUDMinusPickupItemWidget_C::SizeBoxInteractionFailure' has a wrong offset!");
static_assert(offsetof(UHUDMinusPickupItemWidget_C, TextInteractionFailure) == 0x000230, "Member 'UHUDMinusPickupItemWidget_C::TextInteractionFailure' has a wrong offset!");
static_assert(offsetof(UHUDMinusPickupItemWidget_C, Pickup) == 0x000238, "Member 'UHUDMinusPickupItemWidget_C::Pickup' has a wrong offset!");
static_assert(offsetof(UHUDMinusPickupItemWidget_C, PickupItem) == 0x000240, "Member 'UHUDMinusPickupItemWidget_C::PickupItem' has a wrong offset!");

}
