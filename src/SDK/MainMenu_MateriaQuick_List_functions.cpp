#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_MateriaQuick_List

#include "Basic.hpp"

#include "MainMenu_MateriaQuick_List_classes.hpp"
#include "MainMenu_MateriaQuick_List_parameters.hpp"


namespace SDK
{

// Function MainMenu_MateriaQuick_List.MainMenu_MateriaQuick_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenu_MateriaQuick_List_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_MateriaQuick_List_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainMenu_MateriaQuick_List.MainMenu_MateriaQuick_List_C.ExecuteUbergraph_MainMenu_MateriaQuick_List
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_MateriaQuick_List_C::ExecuteUbergraph_MainMenu_MateriaQuick_List(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_MateriaQuick_List_C", "ExecuteUbergraph_MainMenu_MateriaQuick_List");

	Params::MainMenu_MateriaQuick_List_C_ExecuteUbergraph_MainMenu_MateriaQuick_List Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

