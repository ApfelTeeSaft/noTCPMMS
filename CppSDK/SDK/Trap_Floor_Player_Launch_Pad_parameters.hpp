#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Player_Launch_Pad

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Launch_Pad
// 0x0640 (0x0640 - 0x0000)
struct Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0004(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x0010(0x0080)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue2;       // 0x0090(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam2;               // 0x00A0(0x0080)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam3;               // 0x0130(0x0080)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01B8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue2;                  // 0x01C4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue3;       // 0x01D0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue4;       // 0x01DC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E8[0x8];                                      // 0x01E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam4;               // 0x01F0(0x0080)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam5;               // 0x0270(0x0080)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam6;               // 0x02F0(0x0080)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam7;               // 0x0370(0x0080)(IsPlainOldData, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x03F8(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_409[0x3];                                      // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x040C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x0418(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue3;         // 0x0424(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43A[0x2];                                      // 0x043A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue4;         // 0x043C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0448(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue5;         // 0x0454(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue2;     // 0x0468(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474[0x4];                                      // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType2;                // 0x0481(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482[0x6];                                      // 0x0482(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters2;               // 0x0488(0x00B8)(ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType;                 // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_542[0x6];                                      // 0x0542(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters;                // 0x0548(0x00B8)(ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x0600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0601(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_602[0x6];                                      // 0x0602(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue3;     // 0x0610(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x061C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0628(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue4;     // 0x062C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_Event_Pawn;                                 // 0x0638(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad) == 0x000010, "Wrong alignment on Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad");
static_assert(sizeof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad) == 0x000640, "Wrong size on Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, EntryPoint) == 0x000000, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000004, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_MakeStruct_ParticleSysParam) == 0x000010, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_Multiply_VectorVector_ReturnValue2) == 0x000090, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_Multiply_VectorVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_MakeStruct_ParticleSysParam2) == 0x0000A0, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_MakeStruct_ParticleSysParam2' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_BreakVector_X) == 0x000120, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_BreakVector_Y) == 0x000124, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_BreakVector_Z) == 0x000128, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_MakeStruct_ParticleSysParam3) == 0x000130, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_MakeStruct_ParticleSysParam3' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0001B0, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x0001B4, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_MakeVector_ReturnValue) == 0x0001B8, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_MakeVector_ReturnValue2) == 0x0001C4, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_MakeVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_Multiply_VectorVector_ReturnValue3) == 0x0001D0, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_Multiply_VectorVector_ReturnValue3' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_Multiply_VectorVector_ReturnValue4) == 0x0001DC, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_Multiply_VectorVector_ReturnValue4' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_MakeStruct_ParticleSysParam4) == 0x0001F0, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_MakeStruct_ParticleSysParam4' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_MakeStruct_ParticleSysParam5) == 0x000270, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_MakeStruct_ParticleSysParam5' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_MakeStruct_ParticleSysParam6) == 0x0002F0, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_MakeStruct_ParticleSysParam6' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_MakeStruct_ParticleSysParam7) == 0x000370, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_MakeStruct_ParticleSysParam7' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, Temp_float_Variable) == 0x0003F0, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_MakeArray_Array) == 0x0003F8, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000408, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00040C, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetActorLocation_ReturnValue2) == 0x000418, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetActorLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetActorLocation_ReturnValue3) == 0x000424, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetActorLocation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000430, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_IsValid_ReturnValue) == 0x000438, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_IsValid_ReturnValue2) == 0x000439, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetActorLocation_ReturnValue4) == 0x00043C, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetActorLocation_ReturnValue4' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000448, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetActorLocation_ReturnValue5) == 0x000454, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetActorLocation_ReturnValue5' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000460, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetComponentLocation_ReturnValue2) == 0x000468, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetComponentLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000478, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_IsDedicatedServer_ReturnValue) == 0x000480, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_GameplayCueEvent_EventType2) == 0x000481, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_GameplayCueEvent_EventType2' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_GameplayCueEvent_Parameters2) == 0x000488, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_GameplayCueEvent_Parameters2' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_SwitchEnum_CmpSuccess) == 0x000540, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_GameplayCueEvent_EventType) == 0x000541, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_GameplayCueEvent_EventType' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_GameplayCueEvent_Parameters) == 0x000548, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_GameplayCueEvent_Parameters' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_SwitchEnum2_CmpSuccess) == 0x000600, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_SwitchEnum2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_IsValid_ReturnValue3) == 0x000601, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000608, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetComponentLocation_ReturnValue3) == 0x000610, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetComponentLocation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00061C, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_VSize_ReturnValue) == 0x000628, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, CallFunc_K2_GetComponentLocation_ReturnValue4) == 0x00062C, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::CallFunc_K2_GetComponentLocation_ReturnValue4' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad, K2Node_Event_Pawn) == 0x000638, "Member 'Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad::K2Node_Event_Pawn' has a wrong offset!");

// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.TriggerLaunchEffects
// 0x0008 (0x0008 - 0x0000)
struct Trap_Floor_Player_Launch_Pad_C_TriggerLaunchEffects final
{
public:
	class AFortPlayerPawnAthena*                  Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trap_Floor_Player_Launch_Pad_C_TriggerLaunchEffects) == 0x000008, "Wrong alignment on Trap_Floor_Player_Launch_Pad_C_TriggerLaunchEffects");
static_assert(sizeof(Trap_Floor_Player_Launch_Pad_C_TriggerLaunchEffects) == 0x000008, "Wrong size on Trap_Floor_Player_Launch_Pad_C_TriggerLaunchEffects");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_TriggerLaunchEffects, Pawn) == 0x000000, "Member 'Trap_Floor_Player_Launch_Pad_C_TriggerLaunchEffects::Pawn' has a wrong offset!");

// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// 0x00C0 (0x00C0 - 0x0000)
struct Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap final
{
public:
	EGameplayCueEvent                             EventType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};
static_assert(alignof(Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap) == 0x000008, "Wrong alignment on Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap");
static_assert(sizeof(Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap) == 0x0000C0, "Wrong size on Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap, EventType) == 0x000000, "Member 'Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap::EventType' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap, Parameters) == 0x000008, "Member 'Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap::Parameters' has a wrong offset!");

// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// 0x00C0 (0x00C0 - 0x0000)
struct Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin final
{
public:
	EGameplayCueEvent                             EventType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};
static_assert(alignof(Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin) == 0x000008, "Wrong alignment on Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin");
static_assert(sizeof(Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin) == 0x0000C0, "Wrong size on Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin, EventType) == 0x000000, "Member 'Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin::EventType' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin, Parameters) == 0x000008, "Member 'Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin::Parameters' has a wrong offset!");

// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.GetFireLocationAndRotation
// 0x0060 (0x0060 - 0x0000)
struct Trap_Floor_Player_Launch_Pad_C_GetFireLocationAndRotation final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(Trap_Floor_Player_Launch_Pad_C_GetFireLocationAndRotation) == 0x000010, "Wrong alignment on Trap_Floor_Player_Launch_Pad_C_GetFireLocationAndRotation");
static_assert(sizeof(Trap_Floor_Player_Launch_Pad_C_GetFireLocationAndRotation) == 0x000060, "Wrong size on Trap_Floor_Player_Launch_Pad_C_GetFireLocationAndRotation");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_GetFireLocationAndRotation, ReturnValue) == 0x000000, "Member 'Trap_Floor_Player_Launch_Pad_C_GetFireLocationAndRotation::ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Floor_Player_Launch_Pad_C_GetFireLocationAndRotation, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'Trap_Floor_Player_Launch_Pad_C_GetFireLocationAndRotation::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

}
