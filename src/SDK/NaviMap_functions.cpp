#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NaviMap

#include "Basic.hpp"

#include "NaviMap_classes.hpp"
#include "NaviMap_parameters.hpp"


namespace SDK
{

// Function NaviMap.NaviMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNaviMap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NaviMap_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NaviMap.NaviMap_C.ExecuteUbergraph_NaviMap
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNaviMap_C::ExecuteUbergraph_NaviMap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NaviMap_C", "ExecuteUbergraph_NaviMap");

	Params::NaviMap_C_ExecuteUbergraph_NaviMap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

