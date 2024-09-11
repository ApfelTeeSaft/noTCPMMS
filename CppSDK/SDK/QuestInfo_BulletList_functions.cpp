#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestInfo_BulletList

#include "Basic.hpp"

#include "QuestInfo_BulletList_classes.hpp"
#include "QuestInfo_BulletList_parameters.hpp"


namespace SDK
{

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.ExecuteUbergraph_QuestInfo_BulletList
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestInfo_BulletList_C::ExecuteUbergraph_QuestInfo_BulletList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "ExecuteUbergraph_QuestInfo_BulletList");

	Params::QuestInfo_BulletList_C_ExecuteUbergraph_QuestInfo_BulletList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestInfo_BulletList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestInfo_BulletList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "PreConstruct");

	Params::QuestInfo_BulletList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             EntryText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestInfo_BulletList_C::AddEntry(const class FText& EntryText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "AddEntry");

	Params::QuestInfo_BulletList_C_AddEntry Parms{};

	Parms.EntryText = std::move(EntryText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.InitDesignView
// (Private, BlueprintCallable, BlueprintEvent)

void UQuestInfo_BulletList_C::InitDesignView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "InitDesignView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntryWithBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             EntryText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                      EntryIconBrush                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestInfo_BulletList_C::AddEntryWithBrush(const class FText& EntryText, const struct FSlateBrush& EntryIconBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "AddEntryWithBrush");

	Params::QuestInfo_BulletList_C_AddEntryWithBrush Parms{};

	Parms.EntryText = std::move(EntryText);
	Parms.EntryIconBrush = std::move(EntryIconBrush);

	UObject::ProcessEvent(Func, &Parms);
}

}
