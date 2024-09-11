#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookRewardCardWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C
// 0x0028 (0x02B8 - 0x0290)
class UCollectionBookRewardCardWidget_C final : public UFortCollectionBookRewardCardWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CollectionBookRewardCardWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBookRewardCardWidget_C">();
	}
	static class UCollectionBookRewardCardWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBookRewardCardWidget_C>();
	}
};
static_assert(alignof(UCollectionBookRewardCardWidget_C) == 0x000008, "Wrong alignment on UCollectionBookRewardCardWidget_C");
static_assert(sizeof(UCollectionBookRewardCardWidget_C) == 0x0002B8, "Wrong size on UCollectionBookRewardCardWidget_C");
static_assert(offsetof(UCollectionBookRewardCardWidget_C, UberGraphFrame) == 0x000290, "Member 'UCollectionBookRewardCardWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCollectionBookRewardCardWidget_C, Image_0) == 0x000298, "Member 'UCollectionBookRewardCardWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UCollectionBookRewardCardWidget_C, Image_1) == 0x0002A0, "Member 'UCollectionBookRewardCardWidget_C::Image_1' has a wrong offset!");
static_assert(offsetof(UCollectionBookRewardCardWidget_C, Image_2) == 0x0002A8, "Member 'UCollectionBookRewardCardWidget_C::Image_2' has a wrong offset!");
static_assert(offsetof(UCollectionBookRewardCardWidget_C, Image_7) == 0x0002B0, "Member 'UCollectionBookRewardCardWidget_C::Image_7' has a wrong offset!");

}

