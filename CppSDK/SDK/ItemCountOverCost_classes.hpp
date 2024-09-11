#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCountOverCost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemCountOverCost.ItemCountOverCost_C
// 0x0058 (0x0268 - 0x0210)
class UItemCountOverCost_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                CountText;                                         // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DisplayName;                                       // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          IconLeft;                                          // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          IconRight;                                         // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                RequiredCount;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeperatorText;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDefinition*                    ItemDefinition;                                    // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 TextStyle;                                         // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Required;                                          // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DisplayIconLeftSide;                               // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ItemCountOverCost(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	struct FLinearColor Get_Meets_Criteria_Color();
	void Update();
	void Calculate_Total_Item_Def_in_Inventory(class UFortItemDefinition* ItemDefinition_0, int32* Count_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCountOverCost_C">();
	}
	static class UItemCountOverCost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCountOverCost_C>();
	}
};
static_assert(alignof(UItemCountOverCost_C) == 0x000008, "Wrong alignment on UItemCountOverCost_C");
static_assert(sizeof(UItemCountOverCost_C) == 0x000268, "Wrong size on UItemCountOverCost_C");
static_assert(offsetof(UItemCountOverCost_C, UberGraphFrame) == 0x000210, "Member 'UItemCountOverCost_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, CountText) == 0x000218, "Member 'UItemCountOverCost_C::CountText' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, DisplayName) == 0x000220, "Member 'UItemCountOverCost_C::DisplayName' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, IconLeft) == 0x000228, "Member 'UItemCountOverCost_C::IconLeft' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, IconRight) == 0x000230, "Member 'UItemCountOverCost_C::IconRight' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, RequiredCount) == 0x000238, "Member 'UItemCountOverCost_C::RequiredCount' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, SeperatorText) == 0x000240, "Member 'UItemCountOverCost_C::SeperatorText' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, ItemDefinition) == 0x000248, "Member 'UItemCountOverCost_C::ItemDefinition' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, TextStyle) == 0x000250, "Member 'UItemCountOverCost_C::TextStyle' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, Count) == 0x000258, "Member 'UItemCountOverCost_C::Count' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, Required) == 0x00025C, "Member 'UItemCountOverCost_C::Required' has a wrong offset!");
static_assert(offsetof(UItemCountOverCost_C, DisplayIconLeftSide) == 0x000260, "Member 'UItemCountOverCost_C::DisplayIconLeftSide' has a wrong offset!");

}
