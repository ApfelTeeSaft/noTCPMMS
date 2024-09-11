#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum AnimationCore.ETransformConstraintType
// NumValues: 0x0005
enum class ETransformConstraintType : uint8
{
	Translation                              = 0,
	Rotation                                 = 1,
	Scale                                    = 2,
	Parent                                   = 3,
	ETransformConstraintType_MAX             = 4,
};

// Enum AnimationCore.EConstraintType
// NumValues: 0x0003
enum class EConstraintType : uint8
{
	Transform                                = 0,
	Aim                                      = 1,
	MAX                                      = 2,
};

// ScriptStruct AnimationCore.Axis
// 0x0010 (0x0010 - 0x0000)
struct FAxis final
{
public:
	struct FVector                                Axis;                                              // 0x0000(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInLocalSpace;                                     // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAxis) == 0x000004, "Wrong alignment on FAxis");
static_assert(sizeof(FAxis) == 0x000010, "Wrong size on FAxis");
static_assert(offsetof(FAxis, Axis) == 0x000000, "Member 'FAxis::Axis' has a wrong offset!");
static_assert(offsetof(FAxis, bInLocalSpace) == 0x00000C, "Member 'FAxis::bInLocalSpace' has a wrong offset!");

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003 (0x0003 - 0x0000)
struct FFilterOptionPerAxis final
{
public:
	bool                                          bX;                                                // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bY;                                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bZ;                                                // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFilterOptionPerAxis) == 0x000001, "Wrong alignment on FFilterOptionPerAxis");
static_assert(sizeof(FFilterOptionPerAxis) == 0x000003, "Wrong size on FFilterOptionPerAxis");
static_assert(offsetof(FFilterOptionPerAxis, bX) == 0x000000, "Member 'FFilterOptionPerAxis::bX' has a wrong offset!");
static_assert(offsetof(FFilterOptionPerAxis, bY) == 0x000001, "Member 'FFilterOptionPerAxis::bY' has a wrong offset!");
static_assert(offsetof(FFilterOptionPerAxis, bZ) == 0x000002, "Member 'FFilterOptionPerAxis::bZ' has a wrong offset!");

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FConstraintDescriptionEx
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterOptionPerAxis                   AxesFilterOption;                                  // 0x0008(0x0003)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConstraintDescriptionEx) == 0x000008, "Wrong alignment on FConstraintDescriptionEx");
static_assert(sizeof(FConstraintDescriptionEx) == 0x000010, "Wrong size on FConstraintDescriptionEx");
static_assert(offsetof(FConstraintDescriptionEx, AxesFilterOption) == 0x000008, "Member 'FConstraintDescriptionEx::AxesFilterOption' has a wrong offset!");

// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0028 (0x0038 - 0x0010)
struct FAimConstraintDescription final : public FConstraintDescriptionEx
{
public:
	struct FAxis                                  LookAt_Axis;                                       // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                  LookUp_Axis;                                       // 0x0020(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bUseLookUp;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAimConstraintDescription) == 0x000008, "Wrong alignment on FAimConstraintDescription");
static_assert(sizeof(FAimConstraintDescription) == 0x000038, "Wrong size on FAimConstraintDescription");
static_assert(offsetof(FAimConstraintDescription, LookAt_Axis) == 0x000010, "Member 'FAimConstraintDescription::LookAt_Axis' has a wrong offset!");
static_assert(offsetof(FAimConstraintDescription, LookUp_Axis) == 0x000020, "Member 'FAimConstraintDescription::LookUp_Axis' has a wrong offset!");
static_assert(offsetof(FAimConstraintDescription, bUseLookUp) == 0x000030, "Member 'FAimConstraintDescription::bUseLookUp' has a wrong offset!");

// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FConstraintDescriptor final
{
public:
	EConstraintType                               Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConstraintDescriptor) == 0x000008, "Wrong alignment on FConstraintDescriptor");
static_assert(sizeof(FConstraintDescriptor) == 0x000010, "Wrong size on FConstraintDescriptor");
static_assert(offsetof(FConstraintDescriptor, Type) == 0x000000, "Member 'FConstraintDescriptor::Type' has a wrong offset!");

// ScriptStruct AnimationCore.ConstraintData
// 0x0080 (0x0080 - 0x0000)
struct FConstraintData final
{
public:
	struct FConstraintDescriptor                  Constraint;                                        // 0x0000(0x0010)(NativeAccessSpecifierPublic)
	class FName                                   TargetNode;                                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMaintainOffset;                                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Offset;                                            // 0x0020(0x0030)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             CurrentTransform;                                  // 0x0050(0x0030)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConstraintData) == 0x000010, "Wrong alignment on FConstraintData");
static_assert(sizeof(FConstraintData) == 0x000080, "Wrong size on FConstraintData");
static_assert(offsetof(FConstraintData, Constraint) == 0x000000, "Member 'FConstraintData::Constraint' has a wrong offset!");
static_assert(offsetof(FConstraintData, TargetNode) == 0x000010, "Member 'FConstraintData::TargetNode' has a wrong offset!");
static_assert(offsetof(FConstraintData, Weight) == 0x000018, "Member 'FConstraintData::Weight' has a wrong offset!");
static_assert(offsetof(FConstraintData, bMaintainOffset) == 0x00001C, "Member 'FConstraintData::bMaintainOffset' has a wrong offset!");
static_assert(offsetof(FConstraintData, Offset) == 0x000020, "Member 'FConstraintData::Offset' has a wrong offset!");
static_assert(offsetof(FConstraintData, CurrentTransform) == 0x000050, "Member 'FConstraintData::CurrentTransform' has a wrong offset!");

// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D (0x000D - 0x0000)
struct FConstraintDescription final
{
public:
	bool                                          bTranslation;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRotation;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScale;                                            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bParent;                                           // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   TranslationAxes;                                   // 0x0004(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   RotationAxes;                                      // 0x0007(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   ScaleAxes;                                         // 0x000A(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConstraintDescription) == 0x000001, "Wrong alignment on FConstraintDescription");
static_assert(sizeof(FConstraintDescription) == 0x00000D, "Wrong size on FConstraintDescription");
static_assert(offsetof(FConstraintDescription, bTranslation) == 0x000000, "Member 'FConstraintDescription::bTranslation' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, bRotation) == 0x000001, "Member 'FConstraintDescription::bRotation' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, bScale) == 0x000002, "Member 'FConstraintDescription::bScale' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, bParent) == 0x000003, "Member 'FConstraintDescription::bParent' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, TranslationAxes) == 0x000004, "Member 'FConstraintDescription::TranslationAxes' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, RotationAxes) == 0x000007, "Member 'FConstraintDescription::RotationAxes' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, ScaleAxes) == 0x00000A, "Member 'FConstraintDescription::ScaleAxes' has a wrong offset!");

// ScriptStruct AnimationCore.TransformConstraint
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FTransformConstraint final
{
public:
	struct FConstraintDescription                 Operator;                                          // 0x0000(0x000D)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SourceNode;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TargetNode;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMaintainOffset;                                   // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTransformConstraint) == 0x000008, "Wrong alignment on FTransformConstraint");
static_assert(sizeof(FTransformConstraint) == 0x000028, "Wrong size on FTransformConstraint");
static_assert(offsetof(FTransformConstraint, Operator) == 0x000000, "Member 'FTransformConstraint::Operator' has a wrong offset!");
static_assert(offsetof(FTransformConstraint, SourceNode) == 0x000010, "Member 'FTransformConstraint::SourceNode' has a wrong offset!");
static_assert(offsetof(FTransformConstraint, TargetNode) == 0x000018, "Member 'FTransformConstraint::TargetNode' has a wrong offset!");
static_assert(offsetof(FTransformConstraint, Weight) == 0x000020, "Member 'FTransformConstraint::Weight' has a wrong offset!");
static_assert(offsetof(FTransformConstraint, bMaintainOffset) == 0x000024, "Member 'FTransformConstraint::bMaintainOffset' has a wrong offset!");

// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0008 (0x0018 - 0x0010)
struct FTransformConstraintDescription final : public FConstraintDescriptionEx
{
public:
	ETransformConstraintType                      TransformType;                                     // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTransformConstraintDescription) == 0x000008, "Wrong alignment on FTransformConstraintDescription");
static_assert(sizeof(FTransformConstraintDescription) == 0x000018, "Wrong size on FTransformConstraintDescription");
static_assert(offsetof(FTransformConstraintDescription, TransformType) == 0x000010, "Member 'FTransformConstraintDescription::TransformType' has a wrong offset!");

// ScriptStruct AnimationCore.ConstraintOffset
// 0x0060 (0x0060 - 0x0000)
struct FConstraintOffset final
{
public:
	struct FVector                                Translation;                                       // 0x0000(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  Rotation;                                          // 0x0010(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0020(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Parent;                                            // 0x0030(0x0030)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConstraintOffset) == 0x000010, "Wrong alignment on FConstraintOffset");
static_assert(sizeof(FConstraintOffset) == 0x000060, "Wrong size on FConstraintOffset");
static_assert(offsetof(FConstraintOffset, Translation) == 0x000000, "Member 'FConstraintOffset::Translation' has a wrong offset!");
static_assert(offsetof(FConstraintOffset, Rotation) == 0x000010, "Member 'FConstraintOffset::Rotation' has a wrong offset!");
static_assert(offsetof(FConstraintOffset, Scale) == 0x000020, "Member 'FConstraintOffset::Scale' has a wrong offset!");
static_assert(offsetof(FConstraintOffset, Parent) == 0x000030, "Member 'FConstraintOffset::Parent' has a wrong offset!");

// ScriptStruct AnimationCore.NodeChain
// 0x0010 (0x0010 - 0x0000)
struct FNodeChain final
{
public:
	TArray<class FName>                           Nodes;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNodeChain) == 0x000008, "Wrong alignment on FNodeChain");
static_assert(sizeof(FNodeChain) == 0x000010, "Wrong size on FNodeChain");
static_assert(offsetof(FNodeChain, Nodes) == 0x000000, "Member 'FNodeChain::Nodes' has a wrong offset!");

// ScriptStruct AnimationCore.NodeObject
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FNodeObject final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParentName;                                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNodeObject) == 0x000008, "Wrong alignment on FNodeObject");
static_assert(sizeof(FNodeObject) == 0x000010, "Wrong size on FNodeObject");
static_assert(offsetof(FNodeObject, Name) == 0x000000, "Member 'FNodeObject::Name' has a wrong offset!");
static_assert(offsetof(FNodeObject, ParentName) == 0x000008, "Member 'FNodeObject::ParentName' has a wrong offset!");

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070 (0x0070 - 0x0000)
struct FNodeHierarchyData final
{
public:
	TArray<struct FNodeObject>                    Nodes;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     Transforms;                                        // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                      NodeNameToIndexMapping;                            // 0x0020(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNodeHierarchyData) == 0x000008, "Wrong alignment on FNodeHierarchyData");
static_assert(sizeof(FNodeHierarchyData) == 0x000070, "Wrong size on FNodeHierarchyData");
static_assert(offsetof(FNodeHierarchyData, Nodes) == 0x000000, "Member 'FNodeHierarchyData::Nodes' has a wrong offset!");
static_assert(offsetof(FNodeHierarchyData, Transforms) == 0x000010, "Member 'FNodeHierarchyData::Transforms' has a wrong offset!");
static_assert(offsetof(FNodeHierarchyData, NodeNameToIndexMapping) == 0x000020, "Member 'FNodeHierarchyData::NodeNameToIndexMapping' has a wrong offset!");

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078 (0x0078 - 0x0000)
struct FNodeHierarchyWithUserData final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNodeHierarchyData                     Hierarchy;                                         // 0x0008(0x0070)(Protected, NativeAccessSpecifierProtected)
};
static_assert(alignof(FNodeHierarchyWithUserData) == 0x000008, "Wrong alignment on FNodeHierarchyWithUserData");
static_assert(sizeof(FNodeHierarchyWithUserData) == 0x000078, "Wrong size on FNodeHierarchyWithUserData");
static_assert(offsetof(FNodeHierarchyWithUserData, Hierarchy) == 0x000008, "Member 'FNodeHierarchyWithUserData::Hierarchy' has a wrong offset!");

}

