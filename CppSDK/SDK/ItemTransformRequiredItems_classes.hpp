#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformRequiredItems

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemTransformRequiredItems.ItemTransformRequiredItems_C
// 0x0040 (0x0250 - 0x0210)
class UItemTransformRequiredItems_C final : public UCommonUserWidget
{
public:
	class UImage*                                 CheckMarkIcon;                                     // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CheckMarkSwitcher;                                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FailMarkIcon;                                      // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ItemCountSwitcher;                                 // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                RequiredResourceCost;                              // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          RequiredResourceIcon;                              // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                RequiredResourceItemCount;                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDisplayNameText*               RequiredResourceNameText;                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UpdateItems(class UFortItem* TransformKey, int32 SacrificePoints);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemTransformRequiredItems_C">();
	}
	static class UItemTransformRequiredItems_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemTransformRequiredItems_C>();
	}
};
static_assert(alignof(UItemTransformRequiredItems_C) == 0x000008, "Wrong alignment on UItemTransformRequiredItems_C");
static_assert(sizeof(UItemTransformRequiredItems_C) == 0x000250, "Wrong size on UItemTransformRequiredItems_C");
static_assert(offsetof(UItemTransformRequiredItems_C, CheckMarkIcon) == 0x000210, "Member 'UItemTransformRequiredItems_C::CheckMarkIcon' has a wrong offset!");
static_assert(offsetof(UItemTransformRequiredItems_C, CheckMarkSwitcher) == 0x000218, "Member 'UItemTransformRequiredItems_C::CheckMarkSwitcher' has a wrong offset!");
static_assert(offsetof(UItemTransformRequiredItems_C, FailMarkIcon) == 0x000220, "Member 'UItemTransformRequiredItems_C::FailMarkIcon' has a wrong offset!");
static_assert(offsetof(UItemTransformRequiredItems_C, ItemCountSwitcher) == 0x000228, "Member 'UItemTransformRequiredItems_C::ItemCountSwitcher' has a wrong offset!");
static_assert(offsetof(UItemTransformRequiredItems_C, RequiredResourceCost) == 0x000230, "Member 'UItemTransformRequiredItems_C::RequiredResourceCost' has a wrong offset!");
static_assert(offsetof(UItemTransformRequiredItems_C, RequiredResourceIcon) == 0x000238, "Member 'UItemTransformRequiredItems_C::RequiredResourceIcon' has a wrong offset!");
static_assert(offsetof(UItemTransformRequiredItems_C, RequiredResourceItemCount) == 0x000240, "Member 'UItemTransformRequiredItems_C::RequiredResourceItemCount' has a wrong offset!");
static_assert(offsetof(UItemTransformRequiredItems_C, RequiredResourceNameText) == 0x000248, "Member 'UItemTransformRequiredItems_C::RequiredResourceNameText' has a wrong offset!");

}

