#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PresentXmas6

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PresentXmas6.PresentXmas6_C
// 0x0008 (0x0E78 - 0x0E70)
class APresentXmas6_C final : public ABuildingContainer
{
public:
	uint8                                         Pad_E6C[0x4];                                      // 0x0E6C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E70(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_PresentXmas6(int32 EntryPoint);
	void OnBeginSearch();
	void OnLootRepeat();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PresentXmas6_C">();
	}
	static class APresentXmas6_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APresentXmas6_C>();
	}
};
static_assert(alignof(APresentXmas6_C) == 0x000008, "Wrong alignment on APresentXmas6_C");
static_assert(sizeof(APresentXmas6_C) == 0x000E78, "Wrong size on APresentXmas6_C");
static_assert(offsetof(APresentXmas6_C, UberGraphFrame) == 0x000E70, "Member 'APresentXmas6_C::UberGraphFrame' has a wrong offset!");

}

