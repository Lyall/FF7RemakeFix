#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Magic_Top2

#include "Basic.hpp"

#include "MainMenu_Magic_Top2_classes.hpp"
#include "MainMenu_Magic_Top2_parameters.hpp"


namespace SDK
{

// Function MainMenu_Magic_Top2.MainMenu_Magic_Top2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenu_Magic_Top2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_Magic_Top2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainMenu_Magic_Top2.MainMenu_Magic_Top2_C.ExecuteUbergraph_MainMenu_Magic_Top2
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_Magic_Top2_C::ExecuteUbergraph_MainMenu_Magic_Top2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_Magic_Top2_C", "ExecuteUbergraph_MainMenu_Magic_Top2");

	Params::MainMenu_Magic_Top2_C_ExecuteUbergraph_MainMenu_Magic_Top2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

