#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCalledOutAttributesDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C
// 0x0028 (0x0280 - 0x0258)
class UItemCalledOutAttributesDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class UFortItemCategoryIndicator*             AmmoTypeIndicator;                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               ContainerWrapBox;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UStatsListItemWIdget_C*>         StatWidgets;                                       // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ItemCalledOutAttributesDetailWidget(int32 EntryPoint);
	void HandleItemToDetailChangedBP();
	void HandlePostDifferentItemToDetailSet();
	void GetDisplayAttributesToCallOut(TArray<struct FFortDisplayAttribute>* Attributes);
	void UpdateStats();
	void Clear_Stats();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCalledOutAttributesDetailWidget_C">();
	}
	static class UItemCalledOutAttributesDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCalledOutAttributesDetailWidget_C>();
	}
};
static_assert(alignof(UItemCalledOutAttributesDetailWidget_C) == 0x000008, "Wrong alignment on UItemCalledOutAttributesDetailWidget_C");
static_assert(sizeof(UItemCalledOutAttributesDetailWidget_C) == 0x000280, "Wrong size on UItemCalledOutAttributesDetailWidget_C");
static_assert(offsetof(UItemCalledOutAttributesDetailWidget_C, UberGraphFrame) == 0x000258, "Member 'UItemCalledOutAttributesDetailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemCalledOutAttributesDetailWidget_C, AmmoTypeIndicator) == 0x000260, "Member 'UItemCalledOutAttributesDetailWidget_C::AmmoTypeIndicator' has a wrong offset!");
static_assert(offsetof(UItemCalledOutAttributesDetailWidget_C, ContainerWrapBox) == 0x000268, "Member 'UItemCalledOutAttributesDetailWidget_C::ContainerWrapBox' has a wrong offset!");
static_assert(offsetof(UItemCalledOutAttributesDetailWidget_C, StatWidgets) == 0x000270, "Member 'UItemCalledOutAttributesDetailWidget_C::StatWidgets' has a wrong offset!");

}

