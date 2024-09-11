#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpecialEventsCamera_Blueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C
// 0x0010 (0x08F0 - 0x08E0)
class ASpecialEventsCamera_Blueprint_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08E0(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32 EntryPoint);
	void OnActivated();
	void OnDeactivated();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpecialEventsCamera_Blueprint_C">();
	}
	static class ASpecialEventsCamera_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpecialEventsCamera_Blueprint_C>();
	}
};
static_assert(alignof(ASpecialEventsCamera_Blueprint_C) == 0x000010, "Wrong alignment on ASpecialEventsCamera_Blueprint_C");
static_assert(sizeof(ASpecialEventsCamera_Blueprint_C) == 0x0008F0, "Wrong size on ASpecialEventsCamera_Blueprint_C");
static_assert(offsetof(ASpecialEventsCamera_Blueprint_C, UberGraphFrame) == 0x0008E0, "Member 'ASpecialEventsCamera_Blueprint_C::UberGraphFrame' has a wrong offset!");

}
