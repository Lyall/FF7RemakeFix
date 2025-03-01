#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndGameBaseBP

#include "Basic.hpp"

#include "EndGameBaseBP_classes.hpp"
#include "EndGameBaseBP_parameters.hpp"


namespace SDK
{

// Function EndGameBaseBP.EndGameBaseBP_C.ExecuteUbergraph_EndGameBaseBP
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEndGameBaseBP_C::ExecuteUbergraph_EndGameBaseBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameBaseBP_C", "ExecuteUbergraph_EndGameBaseBP");

	Params::EndGameBaseBP_C_ExecuteUbergraph_EndGameBaseBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameBaseBP.EndGameBaseBP_C.BeginBootStart
// (BlueprintCallable, BlueprintEvent)

void AEndGameBaseBP_C::BeginBootStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameBaseBP_C", "BeginBootStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndGameBaseBP.EndGameBaseBP_C.JumpDebugMenu
// (BlueprintCallable, BlueprintEvent)

void AEndGameBaseBP_C::JumpDebugMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameBaseBP_C", "JumpDebugMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndGameBaseBP.EndGameBaseBP_C.JumpLocation
// (BlueprintCallable, BlueprintEvent)

void AEndGameBaseBP_C::JumpLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameBaseBP_C", "JumpLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndGameBaseBP.EndGameBaseBP_C.JumpTitle
// (BlueprintCallable, BlueprintEvent)

void AEndGameBaseBP_C::JumpTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameBaseBP_C", "JumpTitle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndGameBaseBP.EndGameBaseBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEndGameBaseBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameBaseBP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

