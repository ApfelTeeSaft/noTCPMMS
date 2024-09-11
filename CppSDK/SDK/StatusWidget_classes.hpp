#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C
// 0x0028 (0x0238 - 0x0210)
class UStatusWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonLazyImage*                       CommonLazyImage_0;                                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StatusText;                                        // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TitleText;                                         // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_StatusWidget(int32 EntryPoint);
	void SetStatusText(const class FText& Status);
	void SetTitleText(const class FText& TitleText_0);
	class FText UpdateLoginStatusText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusWidget_C">();
	}
	static class UStatusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusWidget_C>();
	}
};
static_assert(alignof(UStatusWidget_C) == 0x000008, "Wrong alignment on UStatusWidget_C");
static_assert(sizeof(UStatusWidget_C) == 0x000238, "Wrong size on UStatusWidget_C");
static_assert(offsetof(UStatusWidget_C, UberGraphFrame) == 0x000210, "Member 'UStatusWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStatusWidget_C, CommonLazyImage_0) == 0x000218, "Member 'UStatusWidget_C::CommonLazyImage_0' has a wrong offset!");
static_assert(offsetof(UStatusWidget_C, Image_0) == 0x000220, "Member 'UStatusWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UStatusWidget_C, StatusText) == 0x000228, "Member 'UStatusWidget_C::StatusText' has a wrong offset!");
static_assert(offsetof(UStatusWidget_C, TitleText) == 0x000230, "Member 'UStatusWidget_C::TitleText' has a wrong offset!");

}

