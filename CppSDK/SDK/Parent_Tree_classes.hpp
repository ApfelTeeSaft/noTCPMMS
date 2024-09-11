#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parent_Tree

#include "Basic.hpp"

#include "En_LeafTypes_01_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
// 0x0110 (0x0E78 - 0x0D68)
class AParent_Tree_C : public ABuildingProp
{
public:
	uint8                                         Pad_D68[0x8];                                      // 0x0D68(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D70(0x0008)(Transient, DuplicateTransient)
	struct FVector                                Wind_Direction;                                    // 0x0D78(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          EmitLeaves_;                                       // 0x0D84(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          DebugMode_;                                        // 0x0D85(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          DebugStorms_;                                      // 0x0D86(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	En_LeafTypes_01                               LeafTypes;                                         // 0x0D87(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                           LeafEmitterNamesSpherical;                         // 0x0D88(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           LeafEmitterNamesCylindrical;                       // 0x0D98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>       LeafEmitterComponents;                             // 0x0DA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                EmitterSize;                                       // 0x0DB8(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lifetime_Idle_;                                    // 0x0DC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lifetime_Storm_;                                   // 0x0DC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpawnRate_Idle_;                                   // 0x0DCC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpawnRate_Storm_;                                  // 0x0DD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         WindIntensity_Idle_;                               // 0x0DD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         WindIntensity_Storm_;                              // 0x0DD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_DDC[0x4];                                      // 0x0DDC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MediumLeafMaterialMasked;                          // 0x0DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     SmallLeafMaterialMasked;                           // 0x0DE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     LargeLeafMaterialMasked;                           // 0x0DF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     PineLeafMaterialMasked;                            // 0x0DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               LeafEmitterSetup;                                  // 0x0E00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterMaxDrawDistance;                            // 0x0E08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxEmitterCount;                                   // 0x0E0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentEmitterCount;                               // 0x0E10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StormActive_;                                      // 0x0E14(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E15[0x3];                                      // 0x0E15(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MediumLeafMaterialTranslucent;                     // 0x0E18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     SmallLeafMaterialTranslucent;                      // 0x0E20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DistanceFieldsEnabled_;                            // 0x0E28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E29[0x7];                                      // 0x0E29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     LargeLeafMaterialTranslucent;                      // 0x0E30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     PineLeafMaterialTranslucent;                       // 0x0E38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Leaf_Emitter_Setup_Template;                       // 0x0E40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Leaf_Material_Setup;                               // 0x0E48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                 WindHandle;                                        // 0x0E50(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          DebugWind;                                         // 0x0E54(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E55[0x3];                                      // 0x0E55(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Debug_Wind_Intensity;                              // 0x0E58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E5C[0x4];                                      // 0x0E5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Debug_TempMaterial;                                // 0x0E60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugWindYaw;                                      // 0x0E68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E6C[0x4];                                      // 0x0E6C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   Wind_Intensity_Debug_Mesh;                         // 0x0E70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Parent_Tree(int32 EntryPoint);
	void ChangeWindIntensity(float Intensity, float Time_It_Takes_To_Reach_New_Intensity);
	void ReceiveDestroyed();
	void UserConstructionScript();
	void FX_UpdateEmitterStates();
	void FX_UpdateEmitterParameters();
	void AddTestWind(float BlendTime, float Magnitude);
	void RemoveTestWind(float BlendTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Parent_Tree_C">();
	}
	static class AParent_Tree_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParent_Tree_C>();
	}
};
static_assert(alignof(AParent_Tree_C) == 0x000008, "Wrong alignment on AParent_Tree_C");
static_assert(sizeof(AParent_Tree_C) == 0x000E78, "Wrong size on AParent_Tree_C");
static_assert(offsetof(AParent_Tree_C, UberGraphFrame) == 0x000D70, "Member 'AParent_Tree_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Wind_Direction) == 0x000D78, "Member 'AParent_Tree_C::Wind_Direction' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, EmitLeaves_) == 0x000D84, "Member 'AParent_Tree_C::EmitLeaves_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DebugMode_) == 0x000D85, "Member 'AParent_Tree_C::DebugMode_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DebugStorms_) == 0x000D86, "Member 'AParent_Tree_C::DebugStorms_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafTypes) == 0x000D87, "Member 'AParent_Tree_C::LeafTypes' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafEmitterNamesSpherical) == 0x000D88, "Member 'AParent_Tree_C::LeafEmitterNamesSpherical' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafEmitterNamesCylindrical) == 0x000D98, "Member 'AParent_Tree_C::LeafEmitterNamesCylindrical' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafEmitterComponents) == 0x000DA8, "Member 'AParent_Tree_C::LeafEmitterComponents' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, EmitterSize) == 0x000DB8, "Member 'AParent_Tree_C::EmitterSize' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Lifetime_Idle_) == 0x000DC4, "Member 'AParent_Tree_C::Lifetime_Idle_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Lifetime_Storm_) == 0x000DC8, "Member 'AParent_Tree_C::Lifetime_Storm_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SpawnRate_Idle_) == 0x000DCC, "Member 'AParent_Tree_C::SpawnRate_Idle_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SpawnRate_Storm_) == 0x000DD0, "Member 'AParent_Tree_C::SpawnRate_Storm_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, WindIntensity_Idle_) == 0x000DD4, "Member 'AParent_Tree_C::WindIntensity_Idle_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, WindIntensity_Storm_) == 0x000DD8, "Member 'AParent_Tree_C::WindIntensity_Storm_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, MediumLeafMaterialMasked) == 0x000DE0, "Member 'AParent_Tree_C::MediumLeafMaterialMasked' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SmallLeafMaterialMasked) == 0x000DE8, "Member 'AParent_Tree_C::SmallLeafMaterialMasked' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LargeLeafMaterialMasked) == 0x000DF0, "Member 'AParent_Tree_C::LargeLeafMaterialMasked' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, PineLeafMaterialMasked) == 0x000DF8, "Member 'AParent_Tree_C::PineLeafMaterialMasked' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafEmitterSetup) == 0x000E00, "Member 'AParent_Tree_C::LeafEmitterSetup' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, EmitterMaxDrawDistance) == 0x000E08, "Member 'AParent_Tree_C::EmitterMaxDrawDistance' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, MaxEmitterCount) == 0x000E0C, "Member 'AParent_Tree_C::MaxEmitterCount' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, CurrentEmitterCount) == 0x000E10, "Member 'AParent_Tree_C::CurrentEmitterCount' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, StormActive_) == 0x000E14, "Member 'AParent_Tree_C::StormActive_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, MediumLeafMaterialTranslucent) == 0x000E18, "Member 'AParent_Tree_C::MediumLeafMaterialTranslucent' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SmallLeafMaterialTranslucent) == 0x000E20, "Member 'AParent_Tree_C::SmallLeafMaterialTranslucent' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DistanceFieldsEnabled_) == 0x000E28, "Member 'AParent_Tree_C::DistanceFieldsEnabled_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LargeLeafMaterialTranslucent) == 0x000E30, "Member 'AParent_Tree_C::LargeLeafMaterialTranslucent' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, PineLeafMaterialTranslucent) == 0x000E38, "Member 'AParent_Tree_C::PineLeafMaterialTranslucent' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Leaf_Emitter_Setup_Template) == 0x000E40, "Member 'AParent_Tree_C::Leaf_Emitter_Setup_Template' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Leaf_Material_Setup) == 0x000E48, "Member 'AParent_Tree_C::Leaf_Material_Setup' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, WindHandle) == 0x000E50, "Member 'AParent_Tree_C::WindHandle' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DebugWind) == 0x000E54, "Member 'AParent_Tree_C::DebugWind' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Debug_Wind_Intensity) == 0x000E58, "Member 'AParent_Tree_C::Debug_Wind_Intensity' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Debug_TempMaterial) == 0x000E60, "Member 'AParent_Tree_C::Debug_TempMaterial' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DebugWindYaw) == 0x000E68, "Member 'AParent_Tree_C::DebugWindYaw' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Wind_Intensity_Debug_Mesh) == 0x000E70, "Member 'AParent_Tree_C::Wind_Intensity_Debug_Mesh' has a wrong offset!");

}
