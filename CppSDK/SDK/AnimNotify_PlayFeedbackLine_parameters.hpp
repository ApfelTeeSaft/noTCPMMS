#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayFeedbackLine

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C.Received_Notify
// 0x0030 (0x0030 - 0x0000)
struct AnimNotify_PlayFeedbackLine_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_PlayFeedbackLine_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_PlayFeedbackLine_C_Received_Notify");
static_assert(sizeof(AnimNotify_PlayFeedbackLine_C_Received_Notify) == 0x000030, "Wrong size on AnimNotify_PlayFeedbackLine_C_Received_Notify");
static_assert(offsetof(AnimNotify_PlayFeedbackLine_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_PlayFeedbackLine_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFeedbackLine_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_PlayFeedbackLine_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFeedbackLine_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_PlayFeedbackLine_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFeedbackLine_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotify_PlayFeedbackLine_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFeedbackLine_C_Received_Notify, K2Node_DynamicCast_AsFort_Pawn) == 0x000020, "Member 'AnimNotify_PlayFeedbackLine_C_Received_Notify::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFeedbackLine_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AnimNotify_PlayFeedbackLine_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

