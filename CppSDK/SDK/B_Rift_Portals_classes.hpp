#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Rift_Portals

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C
// 0x01F0 (0x0968 - 0x0778)
class AB_Rift_Portals_C final : public ABuildingRift
{
public:
	uint8                                         Pad_778[0x8];                                      // 0x0778(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Wind_Vector_Explosion;                             // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WindVectorVortex;                                  // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Storm_Small_Vortex_Cue;                            // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Rift_RandomLightning_01;                         // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RiftVortex;                                        // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                  FortMiniMap;                                       // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Rift_Active;                                     // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio1;                                            // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleLightOnOff_LERP_9100A5CB43D5BF71190A45AB7C00C2B9; // 0x07D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScaleLightOnOff__Direction_9100A5CB43D5BF71190A45AB7C00C2B9; // 0x07D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D5[0x3];                                      // 0x07D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScaleLightOnOff;                                   // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoostLight_LERP_B8E171DC42A8E999600BC085D7EDCE3D;  // 0x07E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            BoostLight__Direction_B8E171DC42A8E999600BC085D7EDCE3D; // 0x07E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E5[0x3];                                      // 0x07E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     BoostLight;                                        // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SpawnCloud;                                        // 0x07F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SwipeMaterial;                                     // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Plasma_Particles;                                  // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Lightning_Strike_Particles;                        // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Decal_Material;                                    // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactLocation;                                    // 0x0818(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_824[0x4];                                      // 0x0824(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        Decal;                                             // 0x0828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVectorFieldComponent*                  Impact_Vector_Field;                               // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                 Wind_Impulse;                                      // 0x0838(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Wind_Impulse_Default_Strength;                     // 0x083C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Wind_location;                                     // 0x0840(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wind_Radius;                                       // 0x084C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Overlapping_Actors;                                // 0x0850(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACar_Copper_C*>                  ArrayOfNearbyCars;                                 // 0x0860(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                           Light_Color_Idle;                                  // 0x0870(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Light_Color_Active;                                // 0x0880(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_Intensity_Idle;                              // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_Intensity_Active;                            // 0x0894(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_Radius_Idle;                                 // 0x0898(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_Radius_Active;                               // 0x089C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ParticlesBaseMID;                                  // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LightEnabled;                                      // 0x08A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A9[0x3];                                      // 0x08A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Light_Fade_In_Time;                                // 0x08AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Light_Fade_Out_Time;                               // 0x08B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SpawnImpactParticles;                              // 0x08B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B5[0x3];                                      // 0x08B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ManualDeactivateDelayBeforeDestory;                // 0x08B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RiftLightningDuration;                             // 0x08BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VortexSize;                                        // 0x08C0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VortexSizeMin;                                     // 0x08CC(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VortexSizeMax;                                     // 0x08D8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Twist_Amount_Min;                                  // 0x08E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Twist_Amount_Max;                                  // 0x08E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wiggle_Strength_Min;                               // 0x08EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wiggle_Strength_Max;                               // 0x08F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F4[0x4];                                      // 0x08F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               RiftVortexMID;                                     // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Twist_Amount;                                      // 0x0900(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wiggle_Strength;                                   // 0x0904(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WPO_Strength;                                      // 0x0908(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Model_Height;                                      // 0x090C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              UV_Tile_Multiplier_Min;                            // 0x0910(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              UV_Tile_Multiplier_Max;                            // 0x0918(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wiggle_Frequency_Min;                              // 0x0920(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wiggle_Frequency_Max;                              // 0x0924(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Wiggle_Speed_Min;                                  // 0x0928(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Wiggle_Speed_Max;                                  // 0x0930(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lightning_Spawn_Loc;                               // 0x0938(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lightning_Bloat;                                   // 0x0944(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RiftVortexFadeInTime;                              // 0x0948(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RiftVortexFadeOutTime;                             // 0x094C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Water_Scene_Capture_Activated;                     // 0x0950(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_951[0x7];                                      // 0x0951(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Wind_Vortex_MID;                                   // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Explosion_Wind_Vector_Mesh_MID;                    // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Rift_Portals(int32 EntryPoint);
	void ResetGate();
	void OnDeactivated();
	void PatrolEnemySuckIn(float Delay, float RiftLightningDuration_0, bool SpawnImpactParticles_0);
	void ManuallyDeactivateRift();
	void ManuallyActivateRift();
	void FadeLightOut();
	void FadeLightIn();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnActivated();
	void Lightning_Impact_Event();
	void OnSpawnAI();
	void OnRemoved();
	void OnPlaced();
	void ScaleLightOnOff__UpdateFunc();
	void ScaleLightOnOff__FinishedFunc();
	void BoostLight__UpdateFunc();
	void BoostLight__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Rift_Portals_C">();
	}
	static class AB_Rift_Portals_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Rift_Portals_C>();
	}
};
static_assert(alignof(AB_Rift_Portals_C) == 0x000008, "Wrong alignment on AB_Rift_Portals_C");
static_assert(sizeof(AB_Rift_Portals_C) == 0x000968, "Wrong size on AB_Rift_Portals_C");
static_assert(offsetof(AB_Rift_Portals_C, UberGraphFrame) == 0x000780, "Member 'AB_Rift_Portals_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wind_Vector_Explosion) == 0x000788, "Member 'AB_Rift_Portals_C::Wind_Vector_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, WindVectorVortex) == 0x000790, "Member 'AB_Rift_Portals_C::WindVectorVortex' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Storm_Small_Vortex_Cue) == 0x000798, "Member 'AB_Rift_Portals_C::Storm_Small_Vortex_Cue' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, P_Rift_RandomLightning_01) == 0x0007A0, "Member 'AB_Rift_Portals_C::P_Rift_RandomLightning_01' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, RiftVortex) == 0x0007A8, "Member 'AB_Rift_Portals_C::RiftVortex' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, FortMiniMap) == 0x0007B0, "Member 'AB_Rift_Portals_C::FortMiniMap' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, P_Rift_Active) == 0x0007B8, "Member 'AB_Rift_Portals_C::P_Rift_Active' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, PointLight) == 0x0007C0, "Member 'AB_Rift_Portals_C::PointLight' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Audio1) == 0x0007C8, "Member 'AB_Rift_Portals_C::Audio1' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, ScaleLightOnOff_LERP_9100A5CB43D5BF71190A45AB7C00C2B9) == 0x0007D0, "Member 'AB_Rift_Portals_C::ScaleLightOnOff_LERP_9100A5CB43D5BF71190A45AB7C00C2B9' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, ScaleLightOnOff__Direction_9100A5CB43D5BF71190A45AB7C00C2B9) == 0x0007D4, "Member 'AB_Rift_Portals_C::ScaleLightOnOff__Direction_9100A5CB43D5BF71190A45AB7C00C2B9' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, ScaleLightOnOff) == 0x0007D8, "Member 'AB_Rift_Portals_C::ScaleLightOnOff' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, BoostLight_LERP_B8E171DC42A8E999600BC085D7EDCE3D) == 0x0007E0, "Member 'AB_Rift_Portals_C::BoostLight_LERP_B8E171DC42A8E999600BC085D7EDCE3D' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, BoostLight__Direction_B8E171DC42A8E999600BC085D7EDCE3D) == 0x0007E4, "Member 'AB_Rift_Portals_C::BoostLight__Direction_B8E171DC42A8E999600BC085D7EDCE3D' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, BoostLight) == 0x0007E8, "Member 'AB_Rift_Portals_C::BoostLight' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, SpawnCloud) == 0x0007F0, "Member 'AB_Rift_Portals_C::SpawnCloud' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, SwipeMaterial) == 0x0007F8, "Member 'AB_Rift_Portals_C::SwipeMaterial' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Plasma_Particles) == 0x000800, "Member 'AB_Rift_Portals_C::Plasma_Particles' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Lightning_Strike_Particles) == 0x000808, "Member 'AB_Rift_Portals_C::Lightning_Strike_Particles' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Decal_Material) == 0x000810, "Member 'AB_Rift_Portals_C::Decal_Material' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, ImpactLocation) == 0x000818, "Member 'AB_Rift_Portals_C::ImpactLocation' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Decal) == 0x000828, "Member 'AB_Rift_Portals_C::Decal' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Impact_Vector_Field) == 0x000830, "Member 'AB_Rift_Portals_C::Impact_Vector_Field' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wind_Impulse) == 0x000838, "Member 'AB_Rift_Portals_C::Wind_Impulse' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wind_Impulse_Default_Strength) == 0x00083C, "Member 'AB_Rift_Portals_C::Wind_Impulse_Default_Strength' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wind_location) == 0x000840, "Member 'AB_Rift_Portals_C::Wind_location' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wind_Radius) == 0x00084C, "Member 'AB_Rift_Portals_C::Wind_Radius' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Overlapping_Actors) == 0x000850, "Member 'AB_Rift_Portals_C::Overlapping_Actors' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, ArrayOfNearbyCars) == 0x000860, "Member 'AB_Rift_Portals_C::ArrayOfNearbyCars' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Light_Color_Idle) == 0x000870, "Member 'AB_Rift_Portals_C::Light_Color_Idle' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Light_Color_Active) == 0x000880, "Member 'AB_Rift_Portals_C::Light_Color_Active' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Light_Intensity_Idle) == 0x000890, "Member 'AB_Rift_Portals_C::Light_Intensity_Idle' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Light_Intensity_Active) == 0x000894, "Member 'AB_Rift_Portals_C::Light_Intensity_Active' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Light_Radius_Idle) == 0x000898, "Member 'AB_Rift_Portals_C::Light_Radius_Idle' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Light_Radius_Active) == 0x00089C, "Member 'AB_Rift_Portals_C::Light_Radius_Active' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, ParticlesBaseMID) == 0x0008A0, "Member 'AB_Rift_Portals_C::ParticlesBaseMID' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, LightEnabled) == 0x0008A8, "Member 'AB_Rift_Portals_C::LightEnabled' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Light_Fade_In_Time) == 0x0008AC, "Member 'AB_Rift_Portals_C::Light_Fade_In_Time' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Light_Fade_Out_Time) == 0x0008B0, "Member 'AB_Rift_Portals_C::Light_Fade_Out_Time' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, SpawnImpactParticles) == 0x0008B4, "Member 'AB_Rift_Portals_C::SpawnImpactParticles' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, ManualDeactivateDelayBeforeDestory) == 0x0008B8, "Member 'AB_Rift_Portals_C::ManualDeactivateDelayBeforeDestory' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, RiftLightningDuration) == 0x0008BC, "Member 'AB_Rift_Portals_C::RiftLightningDuration' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, VortexSize) == 0x0008C0, "Member 'AB_Rift_Portals_C::VortexSize' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, VortexSizeMin) == 0x0008CC, "Member 'AB_Rift_Portals_C::VortexSizeMin' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, VortexSizeMax) == 0x0008D8, "Member 'AB_Rift_Portals_C::VortexSizeMax' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Twist_Amount_Min) == 0x0008E4, "Member 'AB_Rift_Portals_C::Twist_Amount_Min' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Twist_Amount_Max) == 0x0008E8, "Member 'AB_Rift_Portals_C::Twist_Amount_Max' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wiggle_Strength_Min) == 0x0008EC, "Member 'AB_Rift_Portals_C::Wiggle_Strength_Min' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wiggle_Strength_Max) == 0x0008F0, "Member 'AB_Rift_Portals_C::Wiggle_Strength_Max' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, RiftVortexMID) == 0x0008F8, "Member 'AB_Rift_Portals_C::RiftVortexMID' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Twist_Amount) == 0x000900, "Member 'AB_Rift_Portals_C::Twist_Amount' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wiggle_Strength) == 0x000904, "Member 'AB_Rift_Portals_C::Wiggle_Strength' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, WPO_Strength) == 0x000908, "Member 'AB_Rift_Portals_C::WPO_Strength' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Model_Height) == 0x00090C, "Member 'AB_Rift_Portals_C::Model_Height' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, UV_Tile_Multiplier_Min) == 0x000910, "Member 'AB_Rift_Portals_C::UV_Tile_Multiplier_Min' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, UV_Tile_Multiplier_Max) == 0x000918, "Member 'AB_Rift_Portals_C::UV_Tile_Multiplier_Max' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wiggle_Frequency_Min) == 0x000920, "Member 'AB_Rift_Portals_C::Wiggle_Frequency_Min' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wiggle_Frequency_Max) == 0x000924, "Member 'AB_Rift_Portals_C::Wiggle_Frequency_Max' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wiggle_Speed_Min) == 0x000928, "Member 'AB_Rift_Portals_C::Wiggle_Speed_Min' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wiggle_Speed_Max) == 0x000930, "Member 'AB_Rift_Portals_C::Wiggle_Speed_Max' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Lightning_Spawn_Loc) == 0x000938, "Member 'AB_Rift_Portals_C::Lightning_Spawn_Loc' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Lightning_Bloat) == 0x000944, "Member 'AB_Rift_Portals_C::Lightning_Bloat' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, RiftVortexFadeInTime) == 0x000948, "Member 'AB_Rift_Portals_C::RiftVortexFadeInTime' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, RiftVortexFadeOutTime) == 0x00094C, "Member 'AB_Rift_Portals_C::RiftVortexFadeOutTime' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Water_Scene_Capture_Activated) == 0x000950, "Member 'AB_Rift_Portals_C::Water_Scene_Capture_Activated' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Wind_Vortex_MID) == 0x000958, "Member 'AB_Rift_Portals_C::Wind_Vortex_MID' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Explosion_Wind_Vector_Mesh_MID) == 0x000960, "Member 'AB_Rift_Portals_C::Explosion_Wind_Vector_Mesh_MID' has a wrong offset!");

}

