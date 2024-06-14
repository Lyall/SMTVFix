#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_LightParam

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_LightParam.ST_LightParam
// 0x0318 (0x0318 - 0x0000)
struct FST_LightParam final
{
public:
	float                                         DL_Intensity_3_5AB97435453CE2EF380B0FBF235627CC;   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SKY_Intensity_114_CE03336B4EBFC64A7FDCADB7E9CBF572; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PP_ExposureCompensation_117_ED797A3A4245972D4D8681A99BF037B3; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PP_Exposure_MinBrightness_136_B832CF8E4B49DB302B52A194F40704C3; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PP_Exposure_MaxBrightness_137_9B31C0DA4A884AA248112A825D3EF9D9; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DL_Color_47_33452A314EB6701538CDF58450DDFD73;      // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SKY_Color_83_8DDE42204FA0641BFBE3A5ACF8216A7E;     // 0x0024(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           AtomFog_Color_84_B871A12A4E2B63E53779A5BC2766686F; // 0x0034(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_PP_Screen_Color_103_4E29487B40BA55A47B0326BED42B8C04; // 0x0044(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_PP_Screen_ShadowColor_104_FFD6B38C4656CACDE90065A2F1057CEB; // 0x0054(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_PP_Top_Color_105_AAAB8D7F4CF1A8C90D3014BD86EFA5F1; // 0x0064(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Celestial_Screen_Color_106_D7231DCF413BB0F6E33DED9A0AFA1BEA; // 0x0074(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Celestial_Screen_ShadowColor_107_D655D01744560097E657C2B781D7FDC5; // 0x0084(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_Sand_Multi_Color_108_3AD606AF4E2A59F6D60F6FAE7AA88710; // 0x0094(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Object_Sand_Color_109_1ED63223457EEE984AA1D284BE37299E; // 0x00A4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Smoke_Color_110_9322221E4A8A390BBF0DA0A5B926E499; // 0x00B4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_Celestial_Central_Fade_Distance_138_FF56F1A04C9DA0C5F5A27183A27C9329; // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_Celestial_Central_Fade_Border_139_7F977B3041265F6E45BE75B2A31259F9; // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_Celestial_Top_Fade_Distance_140_3C2653414FB11D848CFFB1B66CB67FA0; // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_Celestial_Top_Fade_Border_141_5AC7D5E04172EFABDD3D98AD78F712D8; // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_LS_Sand_Far_Position_196_89AEA924443BC0DECE6E57BB6B8E456D; // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_LS_Sand_Far_Gradation_197_4A1D2E7549EBCB8869837F84519600DF; // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_Height_Color_198_DB2A72D44E54B6D275F381BCBB3BB98B; // 0x00DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_UnderMask_Color_199_D6B1A52B45D2CF901F90A5BDB7B82E2F; // 0x00EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_DepthBlack_Far_Color_200_840F7A2B42E40DC7FE8047AE7529E2FE; // 0x00FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_Rock_Color_201_7774A13B4C039A25AE7A83924AA39DE5; // 0x010C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_Rock_Far_Color_202_4741C0F34CD5D336DEF18F876D16C68C; // 0x011C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_Sand_Stardust_Color_203_734738C14DDD8C96C1301AB070E8EE5A; // 0x012C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_Sand_Far_Color_204_5A9CE0D8487403030FD796A69C6BF206; // 0x013C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Object_Rock_Color_205_E57783644FFC4747A1D285B9BD950028; // 0x014C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Moon_Color_206_DA801F2E47A89D93671F93B44CC5AA86; // 0x015C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Tree_Color_207_70541DAB4DBE61EF920FEC8C7A590568; // 0x016C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Tree_EmissiveColor_224_8B5EA29B4B88820647E428A83C221ABA; // 0x017C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Grass_Top_Color_225_7E211D82426D4E6EA4E2C9BA80EAE824; // 0x018C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Grass_Under_Color_226_44A8897D4DBEE3F3F4B065BC86DE5EE0; // 0x019C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Window_fSpec_Color_229_076C0EA84D0C4CFFCD6B4FA41366062A; // 0x01AC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_LS_Sand_Fresnel_Intensity_243_414AF29F48ED638A5BFF53953A3554C3; // 0x01BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_LS_Sand_FResnel_Range_244_69CB41E6460D7B530DFFB6AFF283A6D6; // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_Plant_Far_Core_Color_245_66395EC74A4CBAA5B0E9E281132D7FF8; // 0x01C4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_LS_Plant_Far_Edge_Color_246_20DDBAE84C336BB8E19458806C5D9476; // 0x01D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Grass2_Root_Color_247_2E0214574B8A49A2616DE2B36676CCFE; // 0x01E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_Grass2_Tip_Color_248_D2D4DF08432970694275C391C9105D7D; // 0x01F4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_Fairy_Effect_253_46319F924C43120BFC65A4B427C812A8; // 0x0204(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_Desaturation_254_931D390E4FD88051A5EB5988BAEF31BA; // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EFF_RangeMax_142_0814C48E4578D4DC73C433ADAE9222CA; // 0x020C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EFF_RangeMin_143_239AA849410300A9058DBEAB92EB7EA9; // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EFF_Near_Max_54_32C573264404C40041A595809DFFD604;  // 0x0214(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EFF_Color_148_2C46BB9942282F75EA236EB06A490E08;    // 0x0218(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EFF_ShadowColor_149_B50D765145043BCC77D492BD65B50583; // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EFF_Water_Color_259_A4D34D19423D39449F2A70A54E0EC37F; // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EFF_Water_ShadowColor_260_7C27D20742809A653D0AF6A3B8B0111F; // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EFF_Foliage_Color_265_8B473BE34698FE4C5783B5B79338BBFE; // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EFF_Foliage_ShadowColor_266_409690B6409DBBB58B6173961BD632AD; // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EFF_Dust_Color_269_4A2917184B7A284E8A155893BEA0EFF5; // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MG_Chromatic_Intensity_217_8906C8044DC780D9AB7F4ABAD42A5E67; // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MG_Chromatic_StartOffset_216_2C0EE95742F5873423EFA98F467BC737; // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MG_ColorGrading_MiscColor_215_81E3E74D48D638648A4E88A32E790314; // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Daath_MobColor_272_F3D441944AB13DF1C7DE1183C3C49351; // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_PP_GC_Global_Saturation_281_3FCC60F64279D5475CBC13B4D95FA972; // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_PP_GC_Global_Contrast_282_D147492945B216DD33D2A49BF56774DE; // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_PP_GC_Global_Gamma_283_125EE23A4F0C55DCC394E1BC98B1FC80; // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_PP_GC_Global_Gain_284_2411AC96408A950F9A191080BCE14D43; // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MPC_PP_GC_Global_Offset_288_E86C8C62466627C95A6E2CB6AF025359; // 0x02F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_AO_Intensity_301_F2AEABD7418BDF14FBF13D9C00B74F46; // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_AO_Power_302_286B0A4B499CA7D9289E518C23DA4D7D; // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MPC_AO_Bias_300_E970FB5049C563CBAC51569A8D123C48;  // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_GI_Color_297_1D665CDC44CFD05066DAEBB15C34A6A4; // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_LightParam) == 0x000004, "Wrong alignment on FST_LightParam");
static_assert(sizeof(FST_LightParam) == 0x000318, "Wrong size on FST_LightParam");
static_assert(offsetof(FST_LightParam, DL_Intensity_3_5AB97435453CE2EF380B0FBF235627CC) == 0x000000, "Member 'FST_LightParam::DL_Intensity_3_5AB97435453CE2EF380B0FBF235627CC' has a wrong offset!");
static_assert(offsetof(FST_LightParam, SKY_Intensity_114_CE03336B4EBFC64A7FDCADB7E9CBF572) == 0x000004, "Member 'FST_LightParam::SKY_Intensity_114_CE03336B4EBFC64A7FDCADB7E9CBF572' has a wrong offset!");
static_assert(offsetof(FST_LightParam, PP_ExposureCompensation_117_ED797A3A4245972D4D8681A99BF037B3) == 0x000008, "Member 'FST_LightParam::PP_ExposureCompensation_117_ED797A3A4245972D4D8681A99BF037B3' has a wrong offset!");
static_assert(offsetof(FST_LightParam, PP_Exposure_MinBrightness_136_B832CF8E4B49DB302B52A194F40704C3) == 0x00000C, "Member 'FST_LightParam::PP_Exposure_MinBrightness_136_B832CF8E4B49DB302B52A194F40704C3' has a wrong offset!");
static_assert(offsetof(FST_LightParam, PP_Exposure_MaxBrightness_137_9B31C0DA4A884AA248112A825D3EF9D9) == 0x000010, "Member 'FST_LightParam::PP_Exposure_MaxBrightness_137_9B31C0DA4A884AA248112A825D3EF9D9' has a wrong offset!");
static_assert(offsetof(FST_LightParam, DL_Color_47_33452A314EB6701538CDF58450DDFD73) == 0x000014, "Member 'FST_LightParam::DL_Color_47_33452A314EB6701538CDF58450DDFD73' has a wrong offset!");
static_assert(offsetof(FST_LightParam, SKY_Color_83_8DDE42204FA0641BFBE3A5ACF8216A7E) == 0x000024, "Member 'FST_LightParam::SKY_Color_83_8DDE42204FA0641BFBE3A5ACF8216A7E' has a wrong offset!");
static_assert(offsetof(FST_LightParam, AtomFog_Color_84_B871A12A4E2B63E53779A5BC2766686F) == 0x000034, "Member 'FST_LightParam::AtomFog_Color_84_B871A12A4E2B63E53779A5BC2766686F' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_PP_Screen_Color_103_4E29487B40BA55A47B0326BED42B8C04) == 0x000044, "Member 'FST_LightParam::MPC_PP_Screen_Color_103_4E29487B40BA55A47B0326BED42B8C04' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_PP_Screen_ShadowColor_104_FFD6B38C4656CACDE90065A2F1057CEB) == 0x000054, "Member 'FST_LightParam::MPC_PP_Screen_ShadowColor_104_FFD6B38C4656CACDE90065A2F1057CEB' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_PP_Top_Color_105_AAAB8D7F4CF1A8C90D3014BD86EFA5F1) == 0x000064, "Member 'FST_LightParam::MPC_PP_Top_Color_105_AAAB8D7F4CF1A8C90D3014BD86EFA5F1' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Celestial_Screen_Color_106_D7231DCF413BB0F6E33DED9A0AFA1BEA) == 0x000074, "Member 'FST_LightParam::MPC_Celestial_Screen_Color_106_D7231DCF413BB0F6E33DED9A0AFA1BEA' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Celestial_Screen_ShadowColor_107_D655D01744560097E657C2B781D7FDC5) == 0x000084, "Member 'FST_LightParam::MPC_Celestial_Screen_ShadowColor_107_D655D01744560097E657C2B781D7FDC5' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Sand_Multi_Color_108_3AD606AF4E2A59F6D60F6FAE7AA88710) == 0x000094, "Member 'FST_LightParam::MPC_LS_Sand_Multi_Color_108_3AD606AF4E2A59F6D60F6FAE7AA88710' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Object_Sand_Color_109_1ED63223457EEE984AA1D284BE37299E) == 0x0000A4, "Member 'FST_LightParam::MPC_Object_Sand_Color_109_1ED63223457EEE984AA1D284BE37299E' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Smoke_Color_110_9322221E4A8A390BBF0DA0A5B926E499) == 0x0000B4, "Member 'FST_LightParam::MPC_Smoke_Color_110_9322221E4A8A390BBF0DA0A5B926E499' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Celestial_Central_Fade_Distance_138_FF56F1A04C9DA0C5F5A27183A27C9329) == 0x0000C4, "Member 'FST_LightParam::MPC_Celestial_Central_Fade_Distance_138_FF56F1A04C9DA0C5F5A27183A27C9329' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Celestial_Central_Fade_Border_139_7F977B3041265F6E45BE75B2A31259F9) == 0x0000C8, "Member 'FST_LightParam::MPC_Celestial_Central_Fade_Border_139_7F977B3041265F6E45BE75B2A31259F9' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Celestial_Top_Fade_Distance_140_3C2653414FB11D848CFFB1B66CB67FA0) == 0x0000CC, "Member 'FST_LightParam::MPC_Celestial_Top_Fade_Distance_140_3C2653414FB11D848CFFB1B66CB67FA0' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Celestial_Top_Fade_Border_141_5AC7D5E04172EFABDD3D98AD78F712D8) == 0x0000D0, "Member 'FST_LightParam::MPC_Celestial_Top_Fade_Border_141_5AC7D5E04172EFABDD3D98AD78F712D8' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Sand_Far_Position_196_89AEA924443BC0DECE6E57BB6B8E456D) == 0x0000D4, "Member 'FST_LightParam::MPC_LS_Sand_Far_Position_196_89AEA924443BC0DECE6E57BB6B8E456D' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Sand_Far_Gradation_197_4A1D2E7549EBCB8869837F84519600DF) == 0x0000D8, "Member 'FST_LightParam::MPC_LS_Sand_Far_Gradation_197_4A1D2E7549EBCB8869837F84519600DF' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Height_Color_198_DB2A72D44E54B6D275F381BCBB3BB98B) == 0x0000DC, "Member 'FST_LightParam::MPC_LS_Height_Color_198_DB2A72D44E54B6D275F381BCBB3BB98B' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_UnderMask_Color_199_D6B1A52B45D2CF901F90A5BDB7B82E2F) == 0x0000EC, "Member 'FST_LightParam::MPC_LS_UnderMask_Color_199_D6B1A52B45D2CF901F90A5BDB7B82E2F' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_DepthBlack_Far_Color_200_840F7A2B42E40DC7FE8047AE7529E2FE) == 0x0000FC, "Member 'FST_LightParam::MPC_LS_DepthBlack_Far_Color_200_840F7A2B42E40DC7FE8047AE7529E2FE' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Rock_Color_201_7774A13B4C039A25AE7A83924AA39DE5) == 0x00010C, "Member 'FST_LightParam::MPC_LS_Rock_Color_201_7774A13B4C039A25AE7A83924AA39DE5' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Rock_Far_Color_202_4741C0F34CD5D336DEF18F876D16C68C) == 0x00011C, "Member 'FST_LightParam::MPC_LS_Rock_Far_Color_202_4741C0F34CD5D336DEF18F876D16C68C' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Sand_Stardust_Color_203_734738C14DDD8C96C1301AB070E8EE5A) == 0x00012C, "Member 'FST_LightParam::MPC_LS_Sand_Stardust_Color_203_734738C14DDD8C96C1301AB070E8EE5A' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Sand_Far_Color_204_5A9CE0D8487403030FD796A69C6BF206) == 0x00013C, "Member 'FST_LightParam::MPC_LS_Sand_Far_Color_204_5A9CE0D8487403030FD796A69C6BF206' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Object_Rock_Color_205_E57783644FFC4747A1D285B9BD950028) == 0x00014C, "Member 'FST_LightParam::MPC_Object_Rock_Color_205_E57783644FFC4747A1D285B9BD950028' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Moon_Color_206_DA801F2E47A89D93671F93B44CC5AA86) == 0x00015C, "Member 'FST_LightParam::MPC_Moon_Color_206_DA801F2E47A89D93671F93B44CC5AA86' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Tree_Color_207_70541DAB4DBE61EF920FEC8C7A590568) == 0x00016C, "Member 'FST_LightParam::MPC_Tree_Color_207_70541DAB4DBE61EF920FEC8C7A590568' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Tree_EmissiveColor_224_8B5EA29B4B88820647E428A83C221ABA) == 0x00017C, "Member 'FST_LightParam::MPC_Tree_EmissiveColor_224_8B5EA29B4B88820647E428A83C221ABA' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Grass_Top_Color_225_7E211D82426D4E6EA4E2C9BA80EAE824) == 0x00018C, "Member 'FST_LightParam::MPC_Grass_Top_Color_225_7E211D82426D4E6EA4E2C9BA80EAE824' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Grass_Under_Color_226_44A8897D4DBEE3F3F4B065BC86DE5EE0) == 0x00019C, "Member 'FST_LightParam::MPC_Grass_Under_Color_226_44A8897D4DBEE3F3F4B065BC86DE5EE0' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Window_fSpec_Color_229_076C0EA84D0C4CFFCD6B4FA41366062A) == 0x0001AC, "Member 'FST_LightParam::MPC_Window_fSpec_Color_229_076C0EA84D0C4CFFCD6B4FA41366062A' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Sand_Fresnel_Intensity_243_414AF29F48ED638A5BFF53953A3554C3) == 0x0001BC, "Member 'FST_LightParam::MPC_LS_Sand_Fresnel_Intensity_243_414AF29F48ED638A5BFF53953A3554C3' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Sand_FResnel_Range_244_69CB41E6460D7B530DFFB6AFF283A6D6) == 0x0001C0, "Member 'FST_LightParam::MPC_LS_Sand_FResnel_Range_244_69CB41E6460D7B530DFFB6AFF283A6D6' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Plant_Far_Core_Color_245_66395EC74A4CBAA5B0E9E281132D7FF8) == 0x0001C4, "Member 'FST_LightParam::MPC_LS_Plant_Far_Core_Color_245_66395EC74A4CBAA5B0E9E281132D7FF8' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_LS_Plant_Far_Edge_Color_246_20DDBAE84C336BB8E19458806C5D9476) == 0x0001D4, "Member 'FST_LightParam::MPC_LS_Plant_Far_Edge_Color_246_20DDBAE84C336BB8E19458806C5D9476' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Grass2_Root_Color_247_2E0214574B8A49A2616DE2B36676CCFE) == 0x0001E4, "Member 'FST_LightParam::MPC_Grass2_Root_Color_247_2E0214574B8A49A2616DE2B36676CCFE' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Grass2_Tip_Color_248_D2D4DF08432970694275C391C9105D7D) == 0x0001F4, "Member 'FST_LightParam::MPC_Grass2_Tip_Color_248_D2D4DF08432970694275C391C9105D7D' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Fairy_Effect_253_46319F924C43120BFC65A4B427C812A8) == 0x000204, "Member 'FST_LightParam::MPC_Fairy_Effect_253_46319F924C43120BFC65A4B427C812A8' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_Desaturation_254_931D390E4FD88051A5EB5988BAEF31BA) == 0x000208, "Member 'FST_LightParam::MPC_Desaturation_254_931D390E4FD88051A5EB5988BAEF31BA' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_RangeMax_142_0814C48E4578D4DC73C433ADAE9222CA) == 0x00020C, "Member 'FST_LightParam::EFF_RangeMax_142_0814C48E4578D4DC73C433ADAE9222CA' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_RangeMin_143_239AA849410300A9058DBEAB92EB7EA9) == 0x000210, "Member 'FST_LightParam::EFF_RangeMin_143_239AA849410300A9058DBEAB92EB7EA9' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_Near_Max_54_32C573264404C40041A595809DFFD604) == 0x000214, "Member 'FST_LightParam::EFF_Near_Max_54_32C573264404C40041A595809DFFD604' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_Color_148_2C46BB9942282F75EA236EB06A490E08) == 0x000218, "Member 'FST_LightParam::EFF_Color_148_2C46BB9942282F75EA236EB06A490E08' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_ShadowColor_149_B50D765145043BCC77D492BD65B50583) == 0x000228, "Member 'FST_LightParam::EFF_ShadowColor_149_B50D765145043BCC77D492BD65B50583' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_Water_Color_259_A4D34D19423D39449F2A70A54E0EC37F) == 0x000238, "Member 'FST_LightParam::EFF_Water_Color_259_A4D34D19423D39449F2A70A54E0EC37F' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_Water_ShadowColor_260_7C27D20742809A653D0AF6A3B8B0111F) == 0x000248, "Member 'FST_LightParam::EFF_Water_ShadowColor_260_7C27D20742809A653D0AF6A3B8B0111F' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_Foliage_Color_265_8B473BE34698FE4C5783B5B79338BBFE) == 0x000258, "Member 'FST_LightParam::EFF_Foliage_Color_265_8B473BE34698FE4C5783B5B79338BBFE' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_Foliage_ShadowColor_266_409690B6409DBBB58B6173961BD632AD) == 0x000268, "Member 'FST_LightParam::EFF_Foliage_ShadowColor_266_409690B6409DBBB58B6173961BD632AD' has a wrong offset!");
static_assert(offsetof(FST_LightParam, EFF_Dust_Color_269_4A2917184B7A284E8A155893BEA0EFF5) == 0x000278, "Member 'FST_LightParam::EFF_Dust_Color_269_4A2917184B7A284E8A155893BEA0EFF5' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MG_Chromatic_Intensity_217_8906C8044DC780D9AB7F4ABAD42A5E67) == 0x000288, "Member 'FST_LightParam::MG_Chromatic_Intensity_217_8906C8044DC780D9AB7F4ABAD42A5E67' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MG_Chromatic_StartOffset_216_2C0EE95742F5873423EFA98F467BC737) == 0x00028C, "Member 'FST_LightParam::MG_Chromatic_StartOffset_216_2C0EE95742F5873423EFA98F467BC737' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MG_ColorGrading_MiscColor_215_81E3E74D48D638648A4E88A32E790314) == 0x000290, "Member 'FST_LightParam::MG_ColorGrading_MiscColor_215_81E3E74D48D638648A4E88A32E790314' has a wrong offset!");
static_assert(offsetof(FST_LightParam, Daath_MobColor_272_F3D441944AB13DF1C7DE1183C3C49351) == 0x0002A0, "Member 'FST_LightParam::Daath_MobColor_272_F3D441944AB13DF1C7DE1183C3C49351' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_PP_GC_Global_Saturation_281_3FCC60F64279D5475CBC13B4D95FA972) == 0x0002B0, "Member 'FST_LightParam::MPC_PP_GC_Global_Saturation_281_3FCC60F64279D5475CBC13B4D95FA972' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_PP_GC_Global_Contrast_282_D147492945B216DD33D2A49BF56774DE) == 0x0002C0, "Member 'FST_LightParam::MPC_PP_GC_Global_Contrast_282_D147492945B216DD33D2A49BF56774DE' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_PP_GC_Global_Gamma_283_125EE23A4F0C55DCC394E1BC98B1FC80) == 0x0002D0, "Member 'FST_LightParam::MPC_PP_GC_Global_Gamma_283_125EE23A4F0C55DCC394E1BC98B1FC80' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_PP_GC_Global_Gain_284_2411AC96408A950F9A191080BCE14D43) == 0x0002E0, "Member 'FST_LightParam::MPC_PP_GC_Global_Gain_284_2411AC96408A950F9A191080BCE14D43' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_PP_GC_Global_Offset_288_E86C8C62466627C95A6E2CB6AF025359) == 0x0002F0, "Member 'FST_LightParam::MPC_PP_GC_Global_Offset_288_E86C8C62466627C95A6E2CB6AF025359' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_AO_Intensity_301_F2AEABD7418BDF14FBF13D9C00B74F46) == 0x0002FC, "Member 'FST_LightParam::MPC_AO_Intensity_301_F2AEABD7418BDF14FBF13D9C00B74F46' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_AO_Power_302_286B0A4B499CA7D9289E518C23DA4D7D) == 0x000300, "Member 'FST_LightParam::MPC_AO_Power_302_286B0A4B499CA7D9289E518C23DA4D7D' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_AO_Bias_300_E970FB5049C563CBAC51569A8D123C48) == 0x000304, "Member 'FST_LightParam::MPC_AO_Bias_300_E970FB5049C563CBAC51569A8D123C48' has a wrong offset!");
static_assert(offsetof(FST_LightParam, MPC_GI_Color_297_1D665CDC44CFD05066DAEBB15C34A6A4) == 0x000308, "Member 'FST_LightParam::MPC_GI_Color_297_1D665CDC44CFD05066DAEBB15C34A6A4' has a wrong offset!");

}

