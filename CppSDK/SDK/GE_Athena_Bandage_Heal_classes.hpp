#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Athena_Bandage_Heal

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Athena_Bandage_Heal.GE_Athena_Bandage_Heal_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Athena_Bandage_Heal_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Athena_Bandage_Heal_C">();
	}
	static class UGE_Athena_Bandage_Heal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Athena_Bandage_Heal_C>();
	}
};
static_assert(alignof(UGE_Athena_Bandage_Heal_C) == 0x000010, "Wrong alignment on UGE_Athena_Bandage_Heal_C");
static_assert(sizeof(UGE_Athena_Bandage_Heal_C) == 0x000670, "Wrong size on UGE_Athena_Bandage_Heal_C");

}

