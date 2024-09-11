#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchStatsScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchStatsScreen.AthenaMatchStatsScreen_C
// 0x0018 (0x0400 - 0x03E8)
class UAthenaMatchStatsScreen_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UAthenaMatchStatsPartial_C*             AthenaMatchStatsPartial;                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaMatchStatsScreen(int32 EntryPoint);
	void Construct();
	void OnActivated();
	void RegisterBack();
	void HandleBack(bool* Passthrough);
	void InputRefresh();
	void InputSetup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchStatsScreen_C">();
	}
	static class UAthenaMatchStatsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchStatsScreen_C>();
	}
};
static_assert(alignof(UAthenaMatchStatsScreen_C) == 0x000008, "Wrong alignment on UAthenaMatchStatsScreen_C");
static_assert(sizeof(UAthenaMatchStatsScreen_C) == 0x000400, "Wrong size on UAthenaMatchStatsScreen_C");
static_assert(offsetof(UAthenaMatchStatsScreen_C, UberGraphFrame) == 0x0003F0, "Member 'UAthenaMatchStatsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMatchStatsScreen_C, AthenaMatchStatsPartial) == 0x0003F8, "Member 'UAthenaMatchStatsScreen_C::AthenaMatchStatsPartial' has a wrong offset!");

}

