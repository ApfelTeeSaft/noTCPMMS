#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Trap_WallElectric

#include "Basic.hpp"

#include "GET_DirectLightningDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Trap_WallElectric.GE_Trap_WallElectric_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Trap_WallElectric_C final : public UGET_DirectLightningDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Trap_WallElectric_C">();
	}
	static class UGE_Trap_WallElectric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Trap_WallElectric_C>();
	}
};
static_assert(alignof(UGE_Trap_WallElectric_C) == 0x000010, "Wrong alignment on UGE_Trap_WallElectric_C");
static_assert(sizeof(UGE_Trap_WallElectric_C) == 0x000670, "Wrong size on UGE_Trap_WallElectric_C");

}
