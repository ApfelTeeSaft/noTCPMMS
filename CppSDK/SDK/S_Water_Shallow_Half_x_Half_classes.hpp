#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Water_Shallow_Half_x_Half

#include "Basic.hpp"

#include "_WaterMeshBlueprintMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass S_Water_Shallow_Half_x_Half.S_Water_Shallow_Half_x_Half_C
// 0x0000 (0x0430 - 0x0430)
class AS_Water_Shallow_Half_x_Half_C final : public A_WaterMeshBlueprintMaster_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"S_Water_Shallow_Half_x_Half_C">();
	}
	static class AS_Water_Shallow_Half_x_Half_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AS_Water_Shallow_Half_x_Half_C>();
	}
};
static_assert(alignof(AS_Water_Shallow_Half_x_Half_C) == 0x000008, "Wrong alignment on AS_Water_Shallow_Half_x_Half_C");
static_assert(sizeof(AS_Water_Shallow_Half_x_Half_C) == 0x000430, "Wrong size on AS_Water_Shallow_Half_x_Half_C");

}

