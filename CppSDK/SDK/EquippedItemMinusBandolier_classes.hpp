#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquippedItemMinusBandolier

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquippedItem-Bandolier.EquippedItem-Bandolier_C
// 0x0018 (0x0228 - 0x0210)
class UEquippedItemMinusBandolier_C final : public UCommonUserWidget
{
public:
	class UImage*                                 _Image__Current;                                   // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Max;                                       // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MaxDisplayCapacity;                                // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateCurrent(int32 Current, class UFortAmmoItemDefinition* AmmoData);
	void UpdateCapacity(int32 Capacity, class UFortAmmoItemDefinition* AmmoData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquippedItem-Bandolier_C">();
	}
	static class UEquippedItemMinusBandolier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquippedItemMinusBandolier_C>();
	}
};
static_assert(alignof(UEquippedItemMinusBandolier_C) == 0x000008, "Wrong alignment on UEquippedItemMinusBandolier_C");
static_assert(sizeof(UEquippedItemMinusBandolier_C) == 0x000228, "Wrong size on UEquippedItemMinusBandolier_C");
static_assert(offsetof(UEquippedItemMinusBandolier_C, _Image__Current) == 0x000210, "Member 'UEquippedItemMinusBandolier_C::_Image__Current' has a wrong offset!");
static_assert(offsetof(UEquippedItemMinusBandolier_C, _Image__Max) == 0x000218, "Member 'UEquippedItemMinusBandolier_C::_Image__Max' has a wrong offset!");
static_assert(offsetof(UEquippedItemMinusBandolier_C, MaxDisplayCapacity) == 0x000220, "Member 'UEquippedItemMinusBandolier_C::MaxDisplayCapacity' has a wrong offset!");

}

