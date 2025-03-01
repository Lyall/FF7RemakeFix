#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Loca_Loading

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Loca_Loading.Loca_Loading_C
// 0x0160 (0x0520 - 0x03C0)
class ULoca_Loading_C final : public UEndLoadingScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Menu_In_Chapter;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Menu_In;                                           // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Change_In;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Change_Out;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop_ChocoboLogo;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop3;                                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop2;                                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Bar2;                                              // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Bar3;                                              // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base;                                              // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BaseLight1;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BaseLight2;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BlackBg;                                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Block1;                                            // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Block2;                                            // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Block3;                                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Block4;                                            // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Block5;                                            // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Block6;                                            // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Block7;                                            // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Block8;                                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Btn_L1;                                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Btn_R1;                                            // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_0;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_22;                                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_23;                                       // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_24;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_25;                                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_26;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_27;                                       // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_28;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_29;                                       // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Icon_Quest;                                        // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_BG_Frame;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ImgWaku;                                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light00;                                           // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light01;                                           // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line4;                                             // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListLight;                                         // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListLight2;                                        // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Logo2;                                             // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Shadow;                                            // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Loading;                                       // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Loca_Loading(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Loca_Loading_C">();
	}
	static class ULoca_Loading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoca_Loading_C>();
	}
};
static_assert(alignof(ULoca_Loading_C) == 0x000008, "Wrong alignment on ULoca_Loading_C");
static_assert(sizeof(ULoca_Loading_C) == 0x000520, "Wrong size on ULoca_Loading_C");
static_assert(offsetof(ULoca_Loading_C, UberGraphFrame) == 0x0003C0, "Member 'ULoca_Loading_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Menu_In_Chapter) == 0x0003C8, "Member 'ULoca_Loading_C::Menu_In_Chapter' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Menu_In) == 0x0003D0, "Member 'ULoca_Loading_C::Menu_In' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Change_In) == 0x0003D8, "Member 'ULoca_Loading_C::Change_In' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Change_Out) == 0x0003E0, "Member 'ULoca_Loading_C::Change_Out' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Loop_ChocoboLogo) == 0x0003E8, "Member 'ULoca_Loading_C::Loop_ChocoboLogo' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Loop3) == 0x0003F0, "Member 'ULoca_Loading_C::Loop3' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Loop2) == 0x0003F8, "Member 'ULoca_Loading_C::Loop2' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Bar2) == 0x000400, "Member 'ULoca_Loading_C::Bar2' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Bar3) == 0x000408, "Member 'ULoca_Loading_C::Bar3' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Base) == 0x000410, "Member 'ULoca_Loading_C::Base' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, BaseLight1) == 0x000418, "Member 'ULoca_Loading_C::BaseLight1' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, BaseLight2) == 0x000420, "Member 'ULoca_Loading_C::BaseLight2' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, BlackBg) == 0x000428, "Member 'ULoca_Loading_C::BlackBg' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Block1) == 0x000430, "Member 'ULoca_Loading_C::Block1' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Block2) == 0x000438, "Member 'ULoca_Loading_C::Block2' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Block3) == 0x000440, "Member 'ULoca_Loading_C::Block3' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Block4) == 0x000448, "Member 'ULoca_Loading_C::Block4' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Block5) == 0x000450, "Member 'ULoca_Loading_C::Block5' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Block6) == 0x000458, "Member 'ULoca_Loading_C::Block6' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Block7) == 0x000460, "Member 'ULoca_Loading_C::Block7' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Block8) == 0x000468, "Member 'ULoca_Loading_C::Block8' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Btn_L1) == 0x000470, "Member 'ULoca_Loading_C::Btn_L1' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Btn_R1) == 0x000478, "Member 'ULoca_Loading_C::Btn_R1' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, EndImage_0) == 0x000480, "Member 'ULoca_Loading_C::EndImage_0' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, EndImage_22) == 0x000488, "Member 'ULoca_Loading_C::EndImage_22' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, EndImage_23) == 0x000490, "Member 'ULoca_Loading_C::EndImage_23' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, EndImage_24) == 0x000498, "Member 'ULoca_Loading_C::EndImage_24' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, EndImage_25) == 0x0004A0, "Member 'ULoca_Loading_C::EndImage_25' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, EndImage_26) == 0x0004A8, "Member 'ULoca_Loading_C::EndImage_26' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, EndImage_27) == 0x0004B0, "Member 'ULoca_Loading_C::EndImage_27' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, EndImage_28) == 0x0004B8, "Member 'ULoca_Loading_C::EndImage_28' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, EndImage_29) == 0x0004C0, "Member 'ULoca_Loading_C::EndImage_29' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Icon_Quest) == 0x0004C8, "Member 'ULoca_Loading_C::Icon_Quest' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Img_BG_Frame) == 0x0004D0, "Member 'ULoca_Loading_C::Img_BG_Frame' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, ImgWaku) == 0x0004D8, "Member 'ULoca_Loading_C::ImgWaku' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Light00) == 0x0004E0, "Member 'ULoca_Loading_C::Light00' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Light01) == 0x0004E8, "Member 'ULoca_Loading_C::Light01' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Line4) == 0x0004F0, "Member 'ULoca_Loading_C::Line4' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, ListLight) == 0x0004F8, "Member 'ULoca_Loading_C::ListLight' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, ListLight2) == 0x000500, "Member 'ULoca_Loading_C::ListLight2' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Logo2) == 0x000508, "Member 'ULoca_Loading_C::Logo2' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Shadow) == 0x000510, "Member 'ULoca_Loading_C::Shadow' has a wrong offset!");
static_assert(offsetof(ULoca_Loading_C, Txt_Loading) == 0x000518, "Member 'ULoca_Loading_C::Txt_Loading' has a wrong offset!");

}

