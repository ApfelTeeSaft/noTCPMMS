#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TVPostProcessBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C
// 0x0180 (0x04E8 - 0x0368)
class ATVPostProcessBP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(Transient, DuplicateTransient)
	class UPostProcessComponent*                  FullScreenTVPPMinusStoreFF;                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  FullScreenTVPPMinusOnlyMaterialModified;           // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  FullScreenTVPP;                                    // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd02_A319E55147356F64E8D7AE9C824CC6C2; // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd_A319E55147356F64E8D7AE9C824CC6C2; // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrontEndCameraSwitchFade_PostProcessVisibility_A319E55147356F64E8D7AE9C824CC6C2; // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FrontEndCameraSwitchFade__Direction_A319E55147356F64E8D7AE9C824CC6C2; // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39D[0x3];                                      // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FrontEndCameraSwitchFade;                          // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Jitter_Timeline_use_solid_color_3FCD803A4A5E86474EA128B9EDBED56E; // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Jitter_Timeline_LerpImageAndScreen_3FCD803A4A5E86474EA128B9EDBED56E; // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Jitter_Timeline_Noise_Distortion_Amount_3FCD803A4A5E86474EA128B9EDBED56E; // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Jitter_Timeline_Screen_Modulation_3FCD803A4A5E86474EA128B9EDBED56E; // 0x03B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Jitter_Timeline__Direction_3FCD803A4A5E86474EA128B9EDBED56E; // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B9[0x7];                                      // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Jitter_Timeline;                                   // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Camera_StartTheMonitor_Text_Timeline_SolidBackgroundModulation_8B52FB0849C47C5870E31DBE0A87A563; // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Camera_StartTheMonitor_Text_Timeline_Additive_screen_modulation_8B52FB0849C47C5870E31DBE0A87A563; // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Camera_StartTheMonitor_Text_Timeline_ReplacementAlpha_8B52FB0849C47C5870E31DBE0A87A563; // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Camera_StartTheMonitor_Text_Timeline_Vpos_8B52FB0849C47C5870E31DBE0A87A563; // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Camera_StartTheMonitor_Text_Timeline_Hpos_8B52FB0849C47C5870E31DBE0A87A563; // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Camera_StartTheMonitor_Text_Timeline_Noise_Distortion_Amount_8B52FB0849C47C5870E31DBE0A87A563; // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Camera_StartTheMonitor_Text_Timeline_Screen_Bend_Amount_8B52FB0849C47C5870E31DBE0A87A563; // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Camera_StartTheMonitor_Text_Timeline_Screen_Modulation_8B52FB0849C47C5870E31DBE0A87A563; // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Camera_StartTheMonitor_Text_Timeline__Direction_8B52FB0849C47C5870E31DBE0A87A563; // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Camera_StartTheMonitor_Text_Timeline;              // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOut_blendweight_D40D454F4B32910AAC407D9AB580EA07; // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOut_Fading_D40D454F4B32910AAC407D9AB580EA07;   // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOut_Effect_translucency_D40D454F4B32910AAC407D9AB580EA07; // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOut_Kill_effect_amount_D40D454F4B32910AAC407D9AB580EA07; // 0x0404(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeOut__Direction_D40D454F4B32910AAC407D9AB580EA07; // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409[0x7];                                      // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeOut;                                           // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_between_cameras_use_solid_color_E4FB35CD487A51ED1632BFAD49D21E03; // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_between_cameras_LerpImageAndScreen_E4FB35CD487A51ED1632BFAD49D21E03; // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_between_cameras_Noise_Distortion_Amount_E4FB35CD487A51ED1632BFAD49D21E03; // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_between_cameras_Screen_Modulation_E4FB35CD487A51ED1632BFAD49D21E03; // 0x0424(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Switch_between_cameras__Direction_E4FB35CD487A51ED1632BFAD49D21E03; // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Switch_between_cameras;                            // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_to_static_use_solid_color_010BC5074AA9D38B1E815EB7DA97273B; // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_to_static_ShowScreenStatic_010BC5074AA9D38B1E815EB7DA97273B; // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_to_static_Noise_Distortion_Amount_010BC5074AA9D38B1E815EB7DA97273B; // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_to_static_Screen_Modulation_010BC5074AA9D38B1E815EB7DA97273B; // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Switch_to_static__Direction_010BC5074AA9D38B1E815EB7DA97273B; // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Switch_to_static;                                  // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_to_live_use_solid_color_DFB267304061CE3644C3E1B38972E94E; // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_to_live_LerpImageAndScreen_DFB267304061CE3644C3E1B38972E94E; // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_to_live_Noise_Distortion_Amount_DFB267304061CE3644C3E1B38972E94E; // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Switch_to_live_Screen_Modulation_DFB267304061CE3644C3E1B38972E94E; // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Switch_to_live__Direction_DFB267304061CE3644C3E1B38972E94E; // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_469[0x7];                                      // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Switch_to_live;                                    // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Show_the_troll_HideTroll_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Show_the_troll_use_solid_color_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Show_the_troll_Noise_Distortion_Amount_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Show_the_troll__Direction_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485[0x3];                                      // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Show_the_troll;                                    // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartScreen_Replacement_randomization_676222D64F5268BA3215E5B98CEFBE8A; // 0x0490(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartScreen_ReplacementAlpha_676222D64F5268BA3215E5B98CEFBE8A; // 0x0494(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartScreen_Vpos_676222D64F5268BA3215E5B98CEFBE8A; // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartScreen_Hpos_676222D64F5268BA3215E5B98CEFBE8A; // 0x049C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartScreen_Noise_Distortion_Amount_676222D64F5268BA3215E5B98CEFBE8A; // 0x04A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartScreen_Screen_Bend_Amount_676222D64F5268BA3215E5B98CEFBE8A; // 0x04A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartScreen_Screen_Modulation_676222D64F5268BA3215E5B98CEFBE8A; // 0x04A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            StartScreen__Direction_676222D64F5268BA3215E5B98CEFBE8A; // 0x04AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD[0x3];                                      // 0x04AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     StartScreen;                                       // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GrabNewColorBool;                                  // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Increase_distortion_;                              // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BA[0x2];                                      // 0x04BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AdditionalDistortionAmount;                        // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_troll;                                        // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C1[0x3];                                      // 0x04C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Troll_counter;                                     // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar;                                            // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Camera_hasnt_switched_to_live_yet;                 // 0x04C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA[0x2];                                      // 0x04CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FluctuatingDisplaySceneValue;                      // 0x04CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ideal_Display_scene_min_value;                     // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ideal_display_scene_max_value;                     // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipDos;                                           // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DisableOnStartup;                                  // 0x04D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          FrontEndCameraSwitchMinusInProgress;               // 0x04DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4DB[0x1];                                      // 0x04DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PreviousSceneModulation;                           // 0x04DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FFInProgress;                                      // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          RestartFrontEndCameraSwitch_;                      // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_TVPostProcessBP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void JitterTheScreen();
	void FastForwardPostProcess();
	void ReceiveTick(float DeltaSeconds);
	void Camera_DisableEffects();
	void Camera_InitializePost();
	void SequenceFinished(const class FString& SequenceName);
	void WriteOutLoading();
	void Camera_Sequence_Start_StaticWhoomp();
	void Camera_LoadAndWait();
	void FrontEndCameraSwitch();
	void Camera_ReturningPlayerInitializeWithLiveVideo();
	void Camera_DosTextFinished();
	void Camera_StartTheMonitor_Text();
	void Camera_DebugEvents();
	void Camera_TransitionToLiveVideo();
	void Camera_TurnOffThePostProcess();
	void Camera_TransitionToLiveStatic();
	void Camera_SwitchBetweenLocations();
	void Camera_TriggerTheTroll();
	void StartScreen__UpdateFunc();
	void StartScreen__FinishedFunc();
	void FrontEndCameraSwitchFade__UpdateFunc();
	void FrontEndCameraSwitchFade__FinishedFunc();
	void Jitter_Timeline__Switch_Camera_Position__EventFunc();
	void Jitter_Timeline__UpdateFunc();
	void Jitter_Timeline__FinishedFunc();
	void Camera_StartTheMonitor_Text_Timeline__UpdateFunc();
	void Camera_StartTheMonitor_Text_Timeline__FinishedFunc();
	void Switch_to_static__UpdateFunc();
	void Switch_to_static__FinishedFunc();
	void FadeOut__UpdateFunc();
	void FadeOut__FinishedFunc();
	void Switch_to_live__UpdateFunc();
	void Switch_to_live__FinishedFunc();
	void Switch_between_cameras__Switch_Camera_Position__EventFunc();
	void Switch_between_cameras__UpdateFunc();
	void Switch_between_cameras__FinishedFunc();
	void Show_the_troll__UpdateFunc();
	void Show_the_troll__FinishedFunc();
	void UserConstructionScript();
	void RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TVPostProcessBP_C">();
	}
	static class ATVPostProcessBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATVPostProcessBP_C>();
	}
};
static_assert(alignof(ATVPostProcessBP_C) == 0x000008, "Wrong alignment on ATVPostProcessBP_C");
static_assert(sizeof(ATVPostProcessBP_C) == 0x0004E8, "Wrong size on ATVPostProcessBP_C");
static_assert(offsetof(ATVPostProcessBP_C, UberGraphFrame) == 0x000368, "Member 'ATVPostProcessBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FullScreenTVPPMinusStoreFF) == 0x000370, "Member 'ATVPostProcessBP_C::FullScreenTVPPMinusStoreFF' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Billboard) == 0x000378, "Member 'ATVPostProcessBP_C::Billboard' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FullScreenTVPPMinusOnlyMaterialModified) == 0x000380, "Member 'ATVPostProcessBP_C::FullScreenTVPPMinusOnlyMaterialModified' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FullScreenTVPP) == 0x000388, "Member 'ATVPostProcessBP_C::FullScreenTVPP' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd02_A319E55147356F64E8D7AE9C824CC6C2) == 0x000390, "Member 'ATVPostProcessBP_C::FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd02_A319E55147356F64E8D7AE9C824CC6C2' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd_A319E55147356F64E8D7AE9C824CC6C2) == 0x000394, "Member 'ATVPostProcessBP_C::FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd_A319E55147356F64E8D7AE9C824CC6C2' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FrontEndCameraSwitchFade_PostProcessVisibility_A319E55147356F64E8D7AE9C824CC6C2) == 0x000398, "Member 'ATVPostProcessBP_C::FrontEndCameraSwitchFade_PostProcessVisibility_A319E55147356F64E8D7AE9C824CC6C2' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FrontEndCameraSwitchFade__Direction_A319E55147356F64E8D7AE9C824CC6C2) == 0x00039C, "Member 'ATVPostProcessBP_C::FrontEndCameraSwitchFade__Direction_A319E55147356F64E8D7AE9C824CC6C2' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FrontEndCameraSwitchFade) == 0x0003A0, "Member 'ATVPostProcessBP_C::FrontEndCameraSwitchFade' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Jitter_Timeline_use_solid_color_3FCD803A4A5E86474EA128B9EDBED56E) == 0x0003A8, "Member 'ATVPostProcessBP_C::Jitter_Timeline_use_solid_color_3FCD803A4A5E86474EA128B9EDBED56E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Jitter_Timeline_LerpImageAndScreen_3FCD803A4A5E86474EA128B9EDBED56E) == 0x0003AC, "Member 'ATVPostProcessBP_C::Jitter_Timeline_LerpImageAndScreen_3FCD803A4A5E86474EA128B9EDBED56E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Jitter_Timeline_Noise_Distortion_Amount_3FCD803A4A5E86474EA128B9EDBED56E) == 0x0003B0, "Member 'ATVPostProcessBP_C::Jitter_Timeline_Noise_Distortion_Amount_3FCD803A4A5E86474EA128B9EDBED56E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Jitter_Timeline_Screen_Modulation_3FCD803A4A5E86474EA128B9EDBED56E) == 0x0003B4, "Member 'ATVPostProcessBP_C::Jitter_Timeline_Screen_Modulation_3FCD803A4A5E86474EA128B9EDBED56E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Jitter_Timeline__Direction_3FCD803A4A5E86474EA128B9EDBED56E) == 0x0003B8, "Member 'ATVPostProcessBP_C::Jitter_Timeline__Direction_3FCD803A4A5E86474EA128B9EDBED56E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Jitter_Timeline) == 0x0003C0, "Member 'ATVPostProcessBP_C::Jitter_Timeline' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline_SolidBackgroundModulation_8B52FB0849C47C5870E31DBE0A87A563) == 0x0003C8, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline_SolidBackgroundModulation_8B52FB0849C47C5870E31DBE0A87A563' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline_Additive_screen_modulation_8B52FB0849C47C5870E31DBE0A87A563) == 0x0003CC, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline_Additive_screen_modulation_8B52FB0849C47C5870E31DBE0A87A563' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline_ReplacementAlpha_8B52FB0849C47C5870E31DBE0A87A563) == 0x0003D0, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline_ReplacementAlpha_8B52FB0849C47C5870E31DBE0A87A563' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline_Vpos_8B52FB0849C47C5870E31DBE0A87A563) == 0x0003D4, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline_Vpos_8B52FB0849C47C5870E31DBE0A87A563' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline_Hpos_8B52FB0849C47C5870E31DBE0A87A563) == 0x0003D8, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline_Hpos_8B52FB0849C47C5870E31DBE0A87A563' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline_Noise_Distortion_Amount_8B52FB0849C47C5870E31DBE0A87A563) == 0x0003DC, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline_Noise_Distortion_Amount_8B52FB0849C47C5870E31DBE0A87A563' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline_Screen_Bend_Amount_8B52FB0849C47C5870E31DBE0A87A563) == 0x0003E0, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline_Screen_Bend_Amount_8B52FB0849C47C5870E31DBE0A87A563' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline_Screen_Modulation_8B52FB0849C47C5870E31DBE0A87A563) == 0x0003E4, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline_Screen_Modulation_8B52FB0849C47C5870E31DBE0A87A563' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline__Direction_8B52FB0849C47C5870E31DBE0A87A563) == 0x0003E8, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__Direction_8B52FB0849C47C5870E31DBE0A87A563' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_StartTheMonitor_Text_Timeline) == 0x0003F0, "Member 'ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FadeOut_blendweight_D40D454F4B32910AAC407D9AB580EA07) == 0x0003F8, "Member 'ATVPostProcessBP_C::FadeOut_blendweight_D40D454F4B32910AAC407D9AB580EA07' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FadeOut_Fading_D40D454F4B32910AAC407D9AB580EA07) == 0x0003FC, "Member 'ATVPostProcessBP_C::FadeOut_Fading_D40D454F4B32910AAC407D9AB580EA07' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FadeOut_Effect_translucency_D40D454F4B32910AAC407D9AB580EA07) == 0x000400, "Member 'ATVPostProcessBP_C::FadeOut_Effect_translucency_D40D454F4B32910AAC407D9AB580EA07' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FadeOut_Kill_effect_amount_D40D454F4B32910AAC407D9AB580EA07) == 0x000404, "Member 'ATVPostProcessBP_C::FadeOut_Kill_effect_amount_D40D454F4B32910AAC407D9AB580EA07' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FadeOut__Direction_D40D454F4B32910AAC407D9AB580EA07) == 0x000408, "Member 'ATVPostProcessBP_C::FadeOut__Direction_D40D454F4B32910AAC407D9AB580EA07' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FadeOut) == 0x000410, "Member 'ATVPostProcessBP_C::FadeOut' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_between_cameras_use_solid_color_E4FB35CD487A51ED1632BFAD49D21E03) == 0x000418, "Member 'ATVPostProcessBP_C::Switch_between_cameras_use_solid_color_E4FB35CD487A51ED1632BFAD49D21E03' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_between_cameras_LerpImageAndScreen_E4FB35CD487A51ED1632BFAD49D21E03) == 0x00041C, "Member 'ATVPostProcessBP_C::Switch_between_cameras_LerpImageAndScreen_E4FB35CD487A51ED1632BFAD49D21E03' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_between_cameras_Noise_Distortion_Amount_E4FB35CD487A51ED1632BFAD49D21E03) == 0x000420, "Member 'ATVPostProcessBP_C::Switch_between_cameras_Noise_Distortion_Amount_E4FB35CD487A51ED1632BFAD49D21E03' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_between_cameras_Screen_Modulation_E4FB35CD487A51ED1632BFAD49D21E03) == 0x000424, "Member 'ATVPostProcessBP_C::Switch_between_cameras_Screen_Modulation_E4FB35CD487A51ED1632BFAD49D21E03' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_between_cameras__Direction_E4FB35CD487A51ED1632BFAD49D21E03) == 0x000428, "Member 'ATVPostProcessBP_C::Switch_between_cameras__Direction_E4FB35CD487A51ED1632BFAD49D21E03' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_between_cameras) == 0x000430, "Member 'ATVPostProcessBP_C::Switch_between_cameras' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_static_use_solid_color_010BC5074AA9D38B1E815EB7DA97273B) == 0x000438, "Member 'ATVPostProcessBP_C::Switch_to_static_use_solid_color_010BC5074AA9D38B1E815EB7DA97273B' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_static_ShowScreenStatic_010BC5074AA9D38B1E815EB7DA97273B) == 0x00043C, "Member 'ATVPostProcessBP_C::Switch_to_static_ShowScreenStatic_010BC5074AA9D38B1E815EB7DA97273B' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_static_Noise_Distortion_Amount_010BC5074AA9D38B1E815EB7DA97273B) == 0x000440, "Member 'ATVPostProcessBP_C::Switch_to_static_Noise_Distortion_Amount_010BC5074AA9D38B1E815EB7DA97273B' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_static_Screen_Modulation_010BC5074AA9D38B1E815EB7DA97273B) == 0x000444, "Member 'ATVPostProcessBP_C::Switch_to_static_Screen_Modulation_010BC5074AA9D38B1E815EB7DA97273B' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_static__Direction_010BC5074AA9D38B1E815EB7DA97273B) == 0x000448, "Member 'ATVPostProcessBP_C::Switch_to_static__Direction_010BC5074AA9D38B1E815EB7DA97273B' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_static) == 0x000450, "Member 'ATVPostProcessBP_C::Switch_to_static' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_live_use_solid_color_DFB267304061CE3644C3E1B38972E94E) == 0x000458, "Member 'ATVPostProcessBP_C::Switch_to_live_use_solid_color_DFB267304061CE3644C3E1B38972E94E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_live_LerpImageAndScreen_DFB267304061CE3644C3E1B38972E94E) == 0x00045C, "Member 'ATVPostProcessBP_C::Switch_to_live_LerpImageAndScreen_DFB267304061CE3644C3E1B38972E94E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_live_Noise_Distortion_Amount_DFB267304061CE3644C3E1B38972E94E) == 0x000460, "Member 'ATVPostProcessBP_C::Switch_to_live_Noise_Distortion_Amount_DFB267304061CE3644C3E1B38972E94E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_live_Screen_Modulation_DFB267304061CE3644C3E1B38972E94E) == 0x000464, "Member 'ATVPostProcessBP_C::Switch_to_live_Screen_Modulation_DFB267304061CE3644C3E1B38972E94E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_live__Direction_DFB267304061CE3644C3E1B38972E94E) == 0x000468, "Member 'ATVPostProcessBP_C::Switch_to_live__Direction_DFB267304061CE3644C3E1B38972E94E' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Switch_to_live) == 0x000470, "Member 'ATVPostProcessBP_C::Switch_to_live' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Show_the_troll_HideTroll_060EDD8E4EDBC900E7D2F29D7A26DBF0) == 0x000478, "Member 'ATVPostProcessBP_C::Show_the_troll_HideTroll_060EDD8E4EDBC900E7D2F29D7A26DBF0' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Show_the_troll_use_solid_color_060EDD8E4EDBC900E7D2F29D7A26DBF0) == 0x00047C, "Member 'ATVPostProcessBP_C::Show_the_troll_use_solid_color_060EDD8E4EDBC900E7D2F29D7A26DBF0' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Show_the_troll_Noise_Distortion_Amount_060EDD8E4EDBC900E7D2F29D7A26DBF0) == 0x000480, "Member 'ATVPostProcessBP_C::Show_the_troll_Noise_Distortion_Amount_060EDD8E4EDBC900E7D2F29D7A26DBF0' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Show_the_troll__Direction_060EDD8E4EDBC900E7D2F29D7A26DBF0) == 0x000484, "Member 'ATVPostProcessBP_C::Show_the_troll__Direction_060EDD8E4EDBC900E7D2F29D7A26DBF0' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Show_the_troll) == 0x000488, "Member 'ATVPostProcessBP_C::Show_the_troll' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, StartScreen_Replacement_randomization_676222D64F5268BA3215E5B98CEFBE8A) == 0x000490, "Member 'ATVPostProcessBP_C::StartScreen_Replacement_randomization_676222D64F5268BA3215E5B98CEFBE8A' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, StartScreen_ReplacementAlpha_676222D64F5268BA3215E5B98CEFBE8A) == 0x000494, "Member 'ATVPostProcessBP_C::StartScreen_ReplacementAlpha_676222D64F5268BA3215E5B98CEFBE8A' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, StartScreen_Vpos_676222D64F5268BA3215E5B98CEFBE8A) == 0x000498, "Member 'ATVPostProcessBP_C::StartScreen_Vpos_676222D64F5268BA3215E5B98CEFBE8A' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, StartScreen_Hpos_676222D64F5268BA3215E5B98CEFBE8A) == 0x00049C, "Member 'ATVPostProcessBP_C::StartScreen_Hpos_676222D64F5268BA3215E5B98CEFBE8A' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, StartScreen_Noise_Distortion_Amount_676222D64F5268BA3215E5B98CEFBE8A) == 0x0004A0, "Member 'ATVPostProcessBP_C::StartScreen_Noise_Distortion_Amount_676222D64F5268BA3215E5B98CEFBE8A' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, StartScreen_Screen_Bend_Amount_676222D64F5268BA3215E5B98CEFBE8A) == 0x0004A4, "Member 'ATVPostProcessBP_C::StartScreen_Screen_Bend_Amount_676222D64F5268BA3215E5B98CEFBE8A' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, StartScreen_Screen_Modulation_676222D64F5268BA3215E5B98CEFBE8A) == 0x0004A8, "Member 'ATVPostProcessBP_C::StartScreen_Screen_Modulation_676222D64F5268BA3215E5B98CEFBE8A' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, StartScreen__Direction_676222D64F5268BA3215E5B98CEFBE8A) == 0x0004AC, "Member 'ATVPostProcessBP_C::StartScreen__Direction_676222D64F5268BA3215E5B98CEFBE8A' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, StartScreen) == 0x0004B0, "Member 'ATVPostProcessBP_C::StartScreen' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, GrabNewColorBool) == 0x0004B8, "Member 'ATVPostProcessBP_C::GrabNewColorBool' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Increase_distortion_) == 0x0004B9, "Member 'ATVPostProcessBP_C::Increase_distortion_' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, AdditionalDistortionAmount) == 0x0004BC, "Member 'ATVPostProcessBP_C::AdditionalDistortionAmount' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Show_troll) == 0x0004C0, "Member 'ATVPostProcessBP_C::Show_troll' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Troll_counter) == 0x0004C4, "Member 'ATVPostProcessBP_C::Troll_counter' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, NewVar) == 0x0004C8, "Member 'ATVPostProcessBP_C::NewVar' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Camera_hasnt_switched_to_live_yet) == 0x0004C9, "Member 'ATVPostProcessBP_C::Camera_hasnt_switched_to_live_yet' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FluctuatingDisplaySceneValue) == 0x0004CC, "Member 'ATVPostProcessBP_C::FluctuatingDisplaySceneValue' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Ideal_Display_scene_min_value) == 0x0004D0, "Member 'ATVPostProcessBP_C::Ideal_Display_scene_min_value' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Ideal_display_scene_max_value) == 0x0004D4, "Member 'ATVPostProcessBP_C::Ideal_display_scene_max_value' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, SkipDos) == 0x0004D8, "Member 'ATVPostProcessBP_C::SkipDos' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, DisableOnStartup) == 0x0004D9, "Member 'ATVPostProcessBP_C::DisableOnStartup' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FrontEndCameraSwitchMinusInProgress) == 0x0004DA, "Member 'ATVPostProcessBP_C::FrontEndCameraSwitchMinusInProgress' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, PreviousSceneModulation) == 0x0004DC, "Member 'ATVPostProcessBP_C::PreviousSceneModulation' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, FFInProgress) == 0x0004E0, "Member 'ATVPostProcessBP_C::FFInProgress' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, RestartFrontEndCameraSwitch_) == 0x0004E1, "Member 'ATVPostProcessBP_C::RestartFrontEndCameraSwitch_' has a wrong offset!");

}

