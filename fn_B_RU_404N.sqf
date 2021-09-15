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
	
	[["ffaa_armas_ump","muzzle_snds_L","cup_acc_anpeq_15_black","cup_optic_eotech553_black",["ffaa_9x19_ump",30],[],""],[],["ptv_usp45t","","","",["ptv_12Rnd_45ACP_USP",12],[],""],["ake_acs_MCBK",[["ACE_elasticBandage",15],["ACE_morphine",3],["ACE_epinephrine",2]]],["milgp_v_mmac_teamleader_belt_rgr",[["ACE_CableTie",2],["ffaa_9x19_ump",10,30],["HandGrenade",2,1],["ptv_12Rnd_45ACP_USP",2,12]]],["TFAR_rt1523g_bwmod",[["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellOrange",2,1],["Chemlight_blue",3,1],["ACE_Chemlight_IR",3,1],["Chemlight_yellow",3,1],["B_IR_Grenade",1,1]]],"H_HelmetSpecB_blk","ake_mfr_bk_bk_fleeceblcv_bk",["Rangefinder","","","",[],[],""],["ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"]]

	};
	
	case "B_Soldier_SL_F" : { _unit setUnitLoadout
	
	[["CUP_arifle_HK416_CQB_Black","cup_muzzle_snds_m16","cup_acc_anpeq_15_black","cup_optic_eotech553_black",["CUP_30Rnd_556x45_PMAG_QP",30],[],""],[],["ptv_hk69","","","",["1Rnd_HE_Grenade_shell",1],[],""],["ake_acs_MCBK",[["ACE_elasticBandage",15],["ACE_morphine",3],["ACE_epinephrine",2]]],["milgp_v_mmac_grenadier_belt_rgr",[["ACE_CableTie",2],["CUP_30Rnd_556x45_PMAG_QP",9,30],["HandGrenade",2,1],["SmokeShell",2,1],["1Rnd_HE_Grenade_shell",6,1]]],["B_TacticalPack_blk",[["ACE_DefusalKit",1],["1Rnd_HE_Grenade_shell",3,1],["1Rnd_HE_Grenade_shell",12,1],["1Rnd_SmokeRed_Grenade_shell",1,1],["1Rnd_Smoke_Grenade_shell",3,1],["DemoCharge_Remote_Mag",2,1],["200Rnd_65x39_cased_Box",2,200]]],"CUP_H_OpsCore_Black_SF","ake_fleeceblcv_bk",["Rangefinder","","","",[],[],""],["ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"]]

	};
	
	case "B_soldier_AR_F" : { _unit setUnitLoadout
	
	[["LMG_Mk200_F","muzzle_snds_H","CUP_acc_ANPEQ_15_Black","CUP_optic_CompM2_low",["200Rnd_65x39_cased_Box",200],[],"CUP_bipod_Harris_1A2_L_BLK"],[],["ptv_usp45t","","","",["ptv_12Rnd_45ACP_USP",12],[],""],["ake_acs_MCBK",[["ACE_elasticBandage",15],["ACE_morphine",3],["ACE_epinephrine",2]]],["milgp_v_mmac_hgunner_belt_rgr",[["ACE_CableTie",2],["200Rnd_65x39_cased_Box",3,200],["ptv_12Rnd_45ACP_USP",1,12],["HandGrenade",2,1]]],["B_AssaultPack_rgr",[["200Rnd_65x39_cased_Box",3,200]]],"CUP_H_OpsCore_Black_SF","ake_halo_bk_clr_fleeceblcv_bk",[],["ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"]]

	};
	
	case "B_soldier_LAT_F" : { _unit setUnitLoadout
	
	[["CUP_arifle_HK416_CQB_Black","cup_muzzle_snds_m16","cup_acc_anpeq_15_black","cup_optic_eotech553_black",["CUP_30Rnd_556x45_PMAG_QP",30],[],""],["launch_MRAWS_green_rail_F","","","",["MRAWS_HEAT_F",1],[],""],[],["ake_acs_MCBK",[["ACE_elasticBandage",15],["ACE_morphine",3],["ACE_epinephrine",2]]],["milgp_v_mmac_assaulter_belt_rgr",[["ACE_CableTie",2],["CUP_30Rnd_556x45_PMAG_QP",10,30],["HandGrenade",2,1],["SmokeShell",2,1]]],["B_AssaultPack_rgr",[["MRAWS_HEAT55_F",2,1],["MRAWS_HE_F",1,1]]],"VSM_Mich2000_Multicam","ake_halo_bk_clr_fleeceblcv_bk",[],["ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"]]

	};

	case "B_Soldier_GL_F" : { _unit setUnitLoadout
	
	[["CUP_arifle_HK416_CQB_Black","cup_muzzle_snds_m16","cup_acc_anpeq_15_black","cup_optic_eotech553_black",["CUP_30Rnd_556x45_PMAG_QP",30],[],""],[],["ptv_hk69","","","",["1Rnd_HE_Grenade_shell",1],[],""],["ake_acs_MCBK",[["ACE_elasticBandage",15],["ACE_morphine",3],["ACE_epinephrine",2]]],["milgp_v_mmac_grenadier_belt_rgr",[["ACE_CableTie",2],["CUP_30Rnd_556x45_PMAG_QP",9,30],["HandGrenade",2,1],["SmokeShell",2,1],["1Rnd_HE_Grenade_shell",6,1]]],["B_TacticalPack_blk",[["ACE_wirecutter",1],["1Rnd_HE_Grenade_shell",3,1],["1Rnd_HE_Grenade_shell",12,1],["1Rnd_SmokeRed_Grenade_shell",1,1],["1Rnd_Smoke_Grenade_shell",3,1],["200Rnd_65x39_cased_Box",1,200],["MRAWS_HEAT_F",1,1]]],"CUP_H_OpsCore_Black_SF","ake_Mframe3_bk_clr_fleeceblcv_bk",[],["ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"]]

	};
	
	case "B_medic_F" : { _unit setUnitLoadout
	
	[["CUP_arifle_HK416_CQB_Black","cup_muzzle_snds_m16","cup_acc_anpeq_15_black","cup_optic_eotech553_black",["CUP_30Rnd_556x45_PMAG_QP",30],[],""],[],[],["ake_acs_MCBK",[["ACE_elasticBandage",15],["ACE_morphine",3],["ACE_epinephrine",2]]],["milgp_v_mmac_medic_belt_rgr",[["ACE_CableTie",2],["CUP_30Rnd_556x45_PMAG_QP",10,30],["HandGrenade",2,1],["SmokeShell",2,1]]],["B_TacticalPack_blk",[["ACE_elasticBandage",40],["ACE_tourniquet",20],["ACE_epinephrine",20],["ACE_morphine",20],["ACE_salineIV",10],["ACE_salineIV_500",8]]],"H_HelmetB_light_black","ake_Mframe3_bk_clr_fleeceblcv_bk",[],["ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"]]


	};
	
	case "B_soldier_repair_F" : { _unit setUnitLoadout
	
	[["ffaa_armas_ump","muzzle_snds_L","cup_acc_anpeq_15_black","cup_optic_eotech553_black",["ffaa_9x19_ump",30],[],""],[],[],["ake_acs_MCBK",[["ACE_elasticBandage",15],["ACE_morphine",3],["ACE_epinephrine",2]]],["milgp_v_mmac_teamleader_belt_rgr",[["ACE_CableTie",2],["HandGrenade",2,1],["SmokeShell",2,1],["ffaa_9x19_ump",8,30]]],["B_AssaultPack_rgr",[["ToolKit",1]]],"H_HelmetB_light_black","ake_halo_bk_clr_fleeceblcv_bk",[],["ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"]]


	};

	default {hint "Script failed while switching to 404 Group"};
};

if (_unit == player) then {[] call TFB_fnc_armskote};

if true exitwith {};