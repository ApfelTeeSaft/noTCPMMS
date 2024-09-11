#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicRatingWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BasicRatingWidget.BasicRatingWidget_C
// 0x0050 (0x0260 - 0x0210)
class UBasicRatingWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       Plus;                                              // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RatingBorder;                                      // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RatingImage;                                       // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                RatingValue;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 TextStyle;                                         // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BorderStyle;                                       // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BorderVisible;                                     // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x3];                                      // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           RatingImageColor;                                  // 0x024C(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                ImageSize;                                         // 0x025C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowPlus;                                          // 0x025D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BasicRatingWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void GetBorderVisibility(ESlateVisibility* Visibility_0);
	void Update_Power_Rating_Value(int32 Rating);
	void Update_Border_Color(const struct FLinearColor& Color1, const struct FLinearColor& Color2);
	void Get_Current_Rating(float* CurrentNumericValue);
	void Update_Power_Rating_Style(class UClass* InStyle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BasicRatingWidget_C">();
	}
	static class UBasicRatingWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasicRatingWidget_C>();
	}
};
static_assert(alignof(UBasicRatingWidget_C) == 0x000008, "Wrong alignment on UBasicRatingWidget_C");
static_assert(sizeof(UBasicRatingWidget_C) == 0x000260, "Wrong size on UBasicRatingWidget_C");
static_assert(offsetof(UBasicRatingWidget_C, UberGraphFrame) == 0x000210, "Member 'UBasicRatingWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, Plus) == 0x000218, "Member 'UBasicRatingWidget_C::Plus' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, RatingBorder) == 0x000220, "Member 'UBasicRatingWidget_C::RatingBorder' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, RatingImage) == 0x000228, "Member 'UBasicRatingWidget_C::RatingImage' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, RatingValue) == 0x000230, "Member 'UBasicRatingWidget_C::RatingValue' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, TextStyle) == 0x000238, "Member 'UBasicRatingWidget_C::TextStyle' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, BorderStyle) == 0x000240, "Member 'UBasicRatingWidget_C::BorderStyle' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, BorderVisible) == 0x000248, "Member 'UBasicRatingWidget_C::BorderVisible' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, RatingImageColor) == 0x00024C, "Member 'UBasicRatingWidget_C::RatingImageColor' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, ImageSize) == 0x00025C, "Member 'UBasicRatingWidget_C::ImageSize' has a wrong offset!");
static_assert(offsetof(UBasicRatingWidget_C, ShowPlus) == 0x00025D, "Member 'UBasicRatingWidget_C::ShowPlus' has a wrong offset!");

}
