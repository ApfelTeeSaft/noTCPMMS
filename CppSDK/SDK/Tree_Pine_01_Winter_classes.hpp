#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tree_Pine_01_Winter

#include "Basic.hpp"

#include "Parent_Tree_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tree_Pine_01_Winter.Tree_Pine_01_Winter_C
// 0x0000 (0x0E78 - 0x0E78)
class ATree_Pine_01_Winter_C final : public AParent_Tree_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tree_Pine_01_Winter_C">();
	}
	static class ATree_Pine_01_Winter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATree_Pine_01_Winter_C>();
	}
};
static_assert(alignof(ATree_Pine_01_Winter_C) == 0x000008, "Wrong alignment on ATree_Pine_01_Winter_C");
static_assert(sizeof(ATree_Pine_01_Winter_C) == 0x000E78, "Wrong size on ATree_Pine_01_Winter_C");

}
