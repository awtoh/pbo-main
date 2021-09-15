/*
	This template is used for creating loadout scripts.
	Using your text editor of choice, please replace the following words with your entries.

	! Do not replace here, find and replace in the code below !
	Replace 'UNIT_NAME_HERE' with your faction name e.g. B_SG_SIR*
	Replace '//_REPLACE_UNIT_CODE_HERE' with loadout codes for each role.
	
	*The naming convention for units is: 
		B / O / I for BLUFOR, OPFOR or INDEPENDENT
		Two Letter A2 Country Code (e.g. SG for Singapore)
		3-4 Letter Abbreviation for your faction e.g. SIR for Singapore Infantry Regiment

	Please remember to remove all // after pasting code!
*/

if (!local player) exitWith {}; 

params ["_type", "_unit"];
if (chosenSide != (side group player)) then {
	[] call TFB_fnc_switchfaction;
};

switch (_type) do
{
	case "B_officer_F" : { _unit setUnitLoadout
	
[["CUP_arifle_AK74M_GL_railed_desert","CUP_muzzle_TGPA_desert","CUP_acc_ANPEQ_15_Flashlight_Tan_L","optic_ERCO_snd_F",["CUP_30Rnd_545x39_AK74M_desert_M",30],[],""],[],["hgun_Rook40_F","","","",["16Rnd_9x21_Mag",17],[],""],["CUP_U_CRYE_MCAM_RUS2_Full",[["ACE_elasticBandage",20],["ACE_CableTie",3],["ACE_morphine",5],["ACE_epinephrine",5],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["Chemlight_green",1,1]]],["CFP_V_RUS_6B45_MCam_3",[["CUP_HandGrenade_RGD5",2,1],["ACE_M84",2,1],["SmokeShell",2,1],["CUP_30Rnd_545x39_AK74M_desert_M",10,30]]],["TFAR_mr3000_multicam",[["CUP_30Rnd_545x39_AK74M_desert_M",2,30],["CUP_1Rnd_HE_GP25_M",20,1],["CUP_1Rnd_SMOKE_GP25_M",5,1],["CUP_1Rnd_SmokeRed_GP25_M",3,1],["CUP_1Rnd_SmokeGreen_GP25_M",3,1],["SmokeShellRed",2,1],["SmokeShellBlue",1,1]]],"CUP_H_OpsCore_Covered_MTP_SF","CUP_G_RUS_Balaclava_Ratnik_v2",["Laserdesignator","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4"]]

	};
	
	case "B_Soldier_SL_F" : { _unit setUnitLoadout
	
[["CUP_arifle_AK74M_GL_railed_desert","CUP_muzzle_TGPA_desert","CUP_acc_ANPEQ_15_Flashlight_Tan_L","optic_ERCO_snd_F",["CUP_30Rnd_545x39_AK74M_desert_M",30],[],""],[],["hgun_Rook40_F","","","",["16Rnd_9x21_Mag",17],[],""],["CUP_U_CRYE_MCAM_RUS2_Full",[["ACE_elasticBandage",20],["ACE_CableTie",3],["ACE_morphine",5],["ACE_epinephrine",5],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["Chemlight_green",1,1]]],["CFP_V_RUS_6B45_MCam_3",[["CUP_HandGrenade_RGD5",2,1],["ACE_M84",2,1],["SmokeShell",2,1],["CUP_30Rnd_545x39_AK74M_desert_M",10,30]]],["CFP_Carryall_Multicam",[["CUP_30Rnd_545x39_AK74M_desert_M",2,30],["CUP_1Rnd_HE_GP25_M",20,1],["CUP_1Rnd_SMOKE_GP25_M",5,1],["CUP_1Rnd_SmokeRed_GP25_M",3,1],["CUP_1Rnd_SmokeGreen_GP25_M",3,1],["SmokeShellRed",2,1],["SmokeShellBlue",1,1],["SmokeShellPurple",1,1],["CUP_60Rnd_545x39_AK74M_M",5,60]]],"CUP_H_OpsCore_Covered_MTP_SF","CUP_G_RUS_Balaclava_Ratnik_v2",["Laserdesignator","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4"]]

	};
	
	case "B_soldier_AR_F" : { _unit setUnitLoadout
	
[["CUP_arifle_RPK74M_railed","CUP_muzzle_PBS4","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_1P87_RIS",["CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",45],[],""],[],[],["CUP_U_CRYE_MCAM_RUS2_Full",[["ACE_elasticBandage",20],["ACE_CableTie",3],["ACE_morphine",5],["ACE_epinephrine",5],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["Chemlight_green",1,1]]],["CFP_V_RUS_6B45_MCam_3",[["CUP_HandGrenade_RGD5",2,1],["ACE_M84",2,1],["SmokeShell",2,1],["CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",8,45]]],["B_Kitbag_mcamo",[["ACE_DefusalKit",1],["ACE_wirecutter",1],["CUP_60Rnd_545x39_AK74M_M",15,60]]],"CUP_H_OpsCore_Covered_MTP_SF","CUP_G_RUS_Balaclava_Ratnik_v2",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4"]]

	};
	
	case "B_soldier_LAT_F" : { _unit setUnitLoadout
	
[["CUP_arifle_AK74M_railed_desert","CUP_muzzle_TGPA_desert","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F","CUP_optic_1P87_RIS_desert",["CUP_30Rnd_545x39_AK74M_desert_M",30],[],""],["launch_RPG32_F","","","",["RPG32_F",1],[],""],[],["CUP_U_CRYE_MCAM_RUS2_Full",[["ACE_elasticBandage",20],["ACE_CableTie",3],["ACE_morphine",5],["ACE_epinephrine",5],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["Chemlight_green",1,1]]],["CFP_V_RUS_6B45_MCam_3",[["CUP_HandGrenade_RGD5",2,1],["ACE_M84",2,1],["SmokeShell",2,1],["CUP_30Rnd_545x39_AK74M_desert_M",10,30]]],["CFP_AssaultPack_Multicam",[["RPG32_F",2,1],["RPG32_HE_F",1,1]]],"CUP_H_OpsCore_Covered_MTP_SF","CUP_G_RUS_Balaclava_Ratnik_v2",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4"]]

	};

	case "B_Soldier_GL_F" : { _unit setUnitLoadout
	[["CUP_arifle_AK74M_GL_railed_desert","CUP_muzzle_TGPA_desert","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F","CUP_optic_1P87_RIS_desert",["CUP_30Rnd_545x39_AK74M_desert_M",30],[],""],[],[],["CUP_U_CRYE_MCAM_RUS2_Full",[["ACE_elasticBandage",20],["ACE_CableTie",3],["ACE_morphine",5],["ACE_epinephrine",5],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["Chemlight_green",1,1]]],["CFP_V_RUS_6B45_MCam_3",[["CUP_HandGrenade_RGD5",2,1],["ACE_M84",2,1],["SmokeShell",2,1],["CUP_30Rnd_545x39_AK74M_desert_M",10,30]]],["B_FieldPack_khk",[["CUP_1Rnd_HE_GP25_M",20,1],["CUP_60Rnd_545x39_AK74M_M",2,60],["RPG32_F",1,1],["CUP_30Rnd_545x39_AK74M_desert_M",3,30]]],"CUP_H_OpsCore_Covered_MTP_SF","CUP_G_RUS_Balaclava_Ratnik_v2",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4"]]

	};
	
	case "B_medic_F" : { _unit setUnitLoadout
	
	[["CUP_arifle_AK105_railed","CUP_muzzle_PBS4","CUP_acc_ANPEQ_15_Flashlight_Black_L","rhs_acc_rakursPM",["CUP_30Rnd_545x39_AK74M_M",30],[],""],[],[],["CUP_U_CRYE_MCAM_RUS2_Full",[["ACE_elasticBandage",20],["ACE_CableTie",3],["ACE_morphine",5],["ACE_epinephrine",5],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["Chemlight_green",1,1]]],["CFP_V_RUS_6B45_MCam_3",[["CUP_HandGrenade_RGD5",2,1],["ACE_M84",2,1],["SmokeShell",2,1],["CUP_30Rnd_545x39_AK74M_M",10,30]]],["B_Kitbag_mcamo",[["ACE_elasticBandage",50],["ACE_salineIV",10],["ACE_salineIV_500",10],["ACE_tourniquet",20],["ACE_morphine",20],["ACE_epinephrine",20]]],"CUP_H_OpsCore_Covered_MTP_SF","CUP_G_RUS_Balaclava_Ratnik_v2",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4"]]

	};
	
	case "B_soldier_repair_F" : { _unit setUnitLoadout
	
	[["CUP_arifle_AK105_railed","","","rhs_acc_rakursPM",["CUP_30Rnd_545x39_AK74M_M",30],[],""],[],[],["CUP_U_CRYE_MCAM_RUS2_Full",[["ACE_elasticBandage",20],["ACE_CableTie",3],["ACE_morphine",5],["ACE_epinephrine",5],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["Chemlight_green",1,1]]],["CFP_V_RUS_6B45_MCam_1",[["ACE_NVG_Gen4",1],["CUP_muzzle_TGPA",1],["CUP_HandGrenade_RGD5",2,1],["ACE_M84",2,1],["SmokeShell",2,1],["CUP_30Rnd_545x39_AK74M_M",6,30]]],["B_AssaultPack_mcamo",[["ToolKit",1]]],"SP_CVCHelmet_Tan","CUP_G_RUS_Balaclava_Ratnik_v2",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]]

	};

	default {hint "Script failed while switching to O_RU_SPZA"};
};

if (_unit == player) then {[] call TFB_fnc_armskote};

if true exitwith {};