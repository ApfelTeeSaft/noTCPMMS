#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuSlider_Light

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsMenuSlider_Light.OptionsMenuSlider_Light_C
// 0x0070 (0x0278 - 0x0208)
class UOptionsMenuSlider_Light_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                          MenuSlider;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SliderBackground;                                  // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SliderText;                                        // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SliderValue;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   SliderChanged;                                     // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Total_Width;                                       // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Slider_Texture;                                    // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       Tab_Tooltip_Text;                                  // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Hover_Text;                                        // 0x0260(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SliderChanged__DelegateSignature(float Slider_Value);
	void ExecuteUbergraph_OptionsMenuSlider_Light(int32 EntryPoint);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature();
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Construct();
	void Update_Slider(const class FText& Slider_Text, float Slider_Value, const class FText& Hover_Text_0, class UCommonTextBlock* Tooltip_Text_Block);
	void Center_on_Widget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsMenuSlider_Light_C">();
	}
	static class UOptionsMenuSlider_Light_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsMenuSlider_Light_C>();
	}
};
static_assert(alignof(UOptionsMenuSlider_Light_C) == 0x000008, "Wrong alignment on UOptionsMenuSlider_Light_C");
static_assert(sizeof(UOptionsMenuSlider_Light_C) == 0x000278, "Wrong size on UOptionsMenuSlider_Light_C");
static_assert(offsetof(UOptionsMenuSlider_Light_C, UberGraphFrame) == 0x000208, "Member 'UOptionsMenuSlider_Light_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, Button_0) == 0x000210, "Member 'UOptionsMenuSlider_Light_C::Button_0' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, MenuSlider) == 0x000218, "Member 'UOptionsMenuSlider_Light_C::MenuSlider' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, SliderBackground) == 0x000220, "Member 'UOptionsMenuSlider_Light_C::SliderBackground' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, SliderText) == 0x000228, "Member 'UOptionsMenuSlider_Light_C::SliderText' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, SliderValue) == 0x000230, "Member 'UOptionsMenuSlider_Light_C::SliderValue' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, SliderChanged) == 0x000238, "Member 'UOptionsMenuSlider_Light_C::SliderChanged' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, Total_Width) == 0x000248, "Member 'UOptionsMenuSlider_Light_C::Total_Width' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, Slider_Texture) == 0x000250, "Member 'UOptionsMenuSlider_Light_C::Slider_Texture' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, Tab_Tooltip_Text) == 0x000258, "Member 'UOptionsMenuSlider_Light_C::Tab_Tooltip_Text' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_Light_C, Hover_Text) == 0x000260, "Member 'UOptionsMenuSlider_Light_C::Hover_Text' has a wrong offset!");

}
