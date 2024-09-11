#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BluGloRequestHandler

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BluGloRequestHandler.BluGloRequestHandler_C.OnBluGloQueryFinished__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature final
{
public:
	class AActor*                                 ActorToSpawnFrom_0;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationToSpawnFromIfActorInvalid;                 // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEnvQueryStatus                               QueryStatus;                                       // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnvQueryInstanceBlueprintWrapper*      QueryInstance;                                     // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumBluGloToSpawn_0;                                // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature) == 0x000008, "Wrong alignment on BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature");
static_assert(sizeof(BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature) == 0x000028, "Wrong size on BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature");
static_assert(offsetof(BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature, ActorToSpawnFrom_0) == 0x000000, "Member 'BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature::ActorToSpawnFrom_0' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature, LocationToSpawnFromIfActorInvalid) == 0x000008, "Member 'BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature::LocationToSpawnFromIfActorInvalid' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature, QueryStatus) == 0x000014, "Member 'BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature::QueryStatus' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature, QueryInstance) == 0x000018, "Member 'BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature::QueryInstance' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature, NumBluGloToSpawn_0) == 0x000020, "Member 'BluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature::NumBluGloToSpawn_0' has a wrong offset!");

// Function BluGloRequestHandler.BluGloRequestHandler_C.ExecuteUbergraph_BluGloRequestHandler
// 0x0048 (0x0048 - 0x0000)
struct BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnvQueryInstanceBlueprintWrapper*      K2Node_CustomEvent_QueryInstance;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEnvQueryStatus                               K2Node_CustomEvent_QueryStatus;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NumBluGloToSpawn;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_ActorToSpawnFrom;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid; // 0x0038(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler) == 0x000008, "Wrong alignment on BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler");
static_assert(sizeof(BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler) == 0x000048, "Wrong size on BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler");
static_assert(offsetof(BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler, EntryPoint) == 0x000000, "Member 'BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler::EntryPoint' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler, K2Node_CustomEvent_QueryInstance) == 0x000008, "Member 'BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler::K2Node_CustomEvent_QueryInstance' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler, K2Node_CustomEvent_QueryStatus) == 0x000010, "Member 'BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler::K2Node_CustomEvent_QueryStatus' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler, K2Node_CustomEvent_NumBluGloToSpawn) == 0x000028, "Member 'BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler::K2Node_CustomEvent_NumBluGloToSpawn' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler, K2Node_CustomEvent_ActorToSpawnFrom) == 0x000030, "Member 'BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler::K2Node_CustomEvent_ActorToSpawnFrom' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler, K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid) == 0x000038, "Member 'BluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler::K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid' has a wrong offset!");

// Function BluGloRequestHandler.BluGloRequestHandler_C.InitializeBluGloRequestHandler
// 0x0020 (0x0020 - 0x0000)
struct BluGloRequestHandler_C_InitializeBluGloRequestHandler final
{
public:
	int32                                         NumBluGloToSpawn_0;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ActorToSpawnFrom_0;                                // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationToSpawnFromIfActorInvalid;                 // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BluGloRequestHandler_C_InitializeBluGloRequestHandler) == 0x000008, "Wrong alignment on BluGloRequestHandler_C_InitializeBluGloRequestHandler");
static_assert(sizeof(BluGloRequestHandler_C_InitializeBluGloRequestHandler) == 0x000020, "Wrong size on BluGloRequestHandler_C_InitializeBluGloRequestHandler");
static_assert(offsetof(BluGloRequestHandler_C_InitializeBluGloRequestHandler, NumBluGloToSpawn_0) == 0x000000, "Member 'BluGloRequestHandler_C_InitializeBluGloRequestHandler::NumBluGloToSpawn_0' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_InitializeBluGloRequestHandler, ActorToSpawnFrom_0) == 0x000008, "Member 'BluGloRequestHandler_C_InitializeBluGloRequestHandler::ActorToSpawnFrom_0' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_InitializeBluGloRequestHandler, LocationToSpawnFromIfActorInvalid) == 0x000010, "Member 'BluGloRequestHandler_C_InitializeBluGloRequestHandler::LocationToSpawnFromIfActorInvalid' has a wrong offset!");

// Function BluGloRequestHandler.BluGloRequestHandler_C.EQSQueryFinished
// 0x0010 (0x0010 - 0x0000)
struct BluGloRequestHandler_C_EQSQueryFinished final
{
public:
	class UEnvQueryInstanceBlueprintWrapper*      QueryInstance;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEnvQueryStatus                               QueryStatus;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BluGloRequestHandler_C_EQSQueryFinished) == 0x000008, "Wrong alignment on BluGloRequestHandler_C_EQSQueryFinished");
static_assert(sizeof(BluGloRequestHandler_C_EQSQueryFinished) == 0x000010, "Wrong size on BluGloRequestHandler_C_EQSQueryFinished");
static_assert(offsetof(BluGloRequestHandler_C_EQSQueryFinished, QueryInstance) == 0x000000, "Member 'BluGloRequestHandler_C_EQSQueryFinished::QueryInstance' has a wrong offset!");
static_assert(offsetof(BluGloRequestHandler_C_EQSQueryFinished, QueryStatus) == 0x000008, "Member 'BluGloRequestHandler_C_EQSQueryFinished::QueryStatus' has a wrong offset!");

// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsFromQueryLocations
// 0x0010 (0x0010 - 0x0000)
struct BluGloRequestHandler_C_BuildLocationsFromQueryLocations final
{
public:
	TArray<struct FVector>                        QueryResultLocations;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(BluGloRequestHandler_C_BuildLocationsFromQueryLocations) == 0x000008, "Wrong alignment on BluGloRequestHandler_C_BuildLocationsFromQueryLocations");
static_assert(sizeof(BluGloRequestHandler_C_BuildLocationsFromQueryLocations) == 0x000010, "Wrong size on BluGloRequestHandler_C_BuildLocationsFromQueryLocations");
static_assert(offsetof(BluGloRequestHandler_C_BuildLocationsFromQueryLocations, QueryResultLocations) == 0x000000, "Member 'BluGloRequestHandler_C_BuildLocationsFromQueryLocations::QueryResultLocations' has a wrong offset!");

}

