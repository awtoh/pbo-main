#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class AWTOH_UNITS
	{
		units[] =
		{	//Buhriz Movement
			"Insurgent_Affiliate_Backpack",
			"Insurgent_Associate_Backpack",
			"AR_Heavy",
			"AR_Standard",
			"AR_Light",
			"AT_Heavy",
			"AT_Standard",
			"AT_Light",
			"AA_Standard",
			"AA_Light",
			"Bonesetter_Bag",
			"Bomber_Bag",
			"Medic_Bag",
			"Auto_Rifleman_Heavy",
			"Auto_Rifleman_Standard",
			"Auto_Rifleman_Light",
			"AntiArmor_Heavy",
			"AntiArmor_Standard",
			"AntiArmor_Light",								
			"AntiArmor_Disposable",
			"AntiAir_Standard",
			"AntiAir_Light",
			"Bonesetter",
			"Bomber",
			"Crewman",
			"Driver",
			"Grenadier_Standard",
			"Grenadier_Light",
			"Insurgent_1",
			"Insurgent_2",
			"Insurgent_3",
			"Insurgent_4",
			"Insurgent_Affiliate",
			"Insurgent_Associate",
			"Iskandar_AntiArmor",
			"Iskandar_Rifleman",
			"Iskandar_Grenadier",
			"Iskandar_Autorifleman",
			"Iskandar_Sharpshooter",
			"Marksman_Standard",
			"Marksman_Light",
			"Medic",
			"Officer",
			"Officer_Armed",
			"Pilot",
			"Rifleman_AKMS_Standard",
			"Rifleman_AKMS_Light",
			"Rifleman_AK74_Standard",
			"Rifleman_AK74_Light",
			"Sharpshooter",
			"Sniper_Standard",
			"Sniper_Light",
			"Warlord_Heavy",
			"Warlord_Standard",
			"Warlord_Light",
			"Offroad",
			"Offroad_AT",
			"Offroad_HMG",
			"Static_AGS",
			"Static_DShKM",
			"Static_DShKM_Minitripod",
			"Static_Igla",
			"Static_Kornet",
			"Static_Metis",
			"Static_Mortar",
			"Static_Mk19",
			"Pickup",
			"Pickup_AT",
			"Pickup_HMG",
			"Truck",
			"Ural",
			"Ural_Covered",
			"Ural_AA",
			"BTR60BM",
			"BMP_1",
			"BMP_2",
			"ZSU_23_4",
			"T_55A",
			"T_72",
			"Mi_8",
			
			
			//Free Nevara Organisation
			"Anti_Infantry_Operator",
			"Anti_Tank_Operator",
			"Demoman",
			"Engineer",
			"Grenadier",
			"Gunman_MP5",
			"Gunman_AKS",
			"Gunman_CPW",
			"Hacker",
			"Henchman_1",
			"Henchman_2",
			"Henchman_3",
			"HenchmanGroupLeader",
			"Henchman_Leader",
			"Hitman",
			"Hitman_Assistant",
			"Machinegunner",
			"Militant_1",
			"Militant_2",
			"Militant_3",
			"Militant_4",
			"Militant_5",
			"MilitantGroupLeader",
			"Militant_Leader",
			"Militant_Marksman",
			"Rifleman_1",
			"Rifleman_2",
			"Rifleman_3",
			
			
			//Leskovets Communist Party
			"LCP_HQ_Bodyguard",
			"LCP_HQ_Coordinator",
			"LCP_HQ_Officer",
			"LCP_HQ_Radioman",
			"LCP_HQ_Quartermaster",
			"LCP_Insurgent_AntiTank",
			"LCP_Insurgent_Fighter",
			"LCP_Insurgent_GroupLeader",
			"LCP_Insurgent_Gunner",
			"LCP_Insurgent_Skirmisher_AKM",
			"LCP_Insurgent_Skirmisher_Romat",
			"LCP_Insurgent_Skirmisher_SKS",
			"LCP_Insurgent_Sniper",
			"LCP_Raider_Assaulter",
			"LCP_Raider_Autorifleman",
			"LCP_Raider_Rocketeer",
			"LCP_Raider_Sniper",
			"LCP_Raider_RaidLeader",
			"LCP_Rebel_AntiTank",
			"LCP_Rebel_Grenadier",
			"LCP_Rebel_Machinegunner",
			"LCP_Rebel_Marksman",
			"LCP_Rebel_Rifleman",
			"LCP_Rebel_TeamLeader",
			"LCP_Rebel_SectionLeader",
			"LCP_Veteran_AntiTank",
			"LCP_Veteran_Grenadier",
			"LCP_Veteran_Machinegunner",
			"LCP_Veteran_Marksman",
			"LCP_Veteran_Rifleman",
			"LCP_Veteran_TeamLeader",
			"LCP_Veteran_SectionLeader",
			"LCP_Static_AGS_17",
			"LCP_Static_DhSKM",
			"LCP_Static_Mortar",			
			"LCP_Static_SAM",
			"LCP_Static_ZU_23_2",
			"LCP_Vehicle_BMP_1",
			"LCP_Vehicle_BMP_2",
			"LCP_Vehicle_BTR_60",
			"LCP_Vehicle_UAZ",
			"LCP_Vehicle_UAZ_Covered",
			"LCP_Vehicle_URAL",
			"LCP_Vehicle_URAL_Covered",
			"LCP_Vehicle_V3S",
			"LCP_Vehicle_V3S_Covered",
			"LCP_Vehicle_ZSU_23_4",
			
			
			//Fulguda Army
			"FulgudaCamo_AntiTank",
			"FulgudaHQ_Bodyguard",
			"FulgudaNormal_AntiTank",
			"FulgudaSF_AntiTank",
			"FulgudaSFRecee_JTAC",
			"FulgudaSpecialPurpose_Operator",
			"FulgudaSpecialPurposeCBRN_Operator",
			
			
			/*
			//Reiburian Armed Forces
			"Reiburia_AntiTank",
			"Reiburia_Autorifleman",
			"Reiburia_Crewman",
			"Reiburia_Machinegunner",
			"Reiburia_Officer",
			"Reiburia_Radioman",
			"Reiburia_Rifleman",
			"Reiburia_Signaller",
			"Reiburia_SquadLeader",
			"Reiburia_TeamLeader"
			
			
			//Shadow Company
			"SC_AA",
			"SC_AAAssist",
			"SC_AALight",
			"SC_AT",
			"SC_ATAssist",
			"SC_ATLight",
			"SC_AR",
			"SC_ARAssist",
			"SC_ARLight",
			"SC_Breacher",
			"SC_BreacherAssist",
			"SC_Crewman",
			"SC_Driver",
			"SC_Engineer",
			"SC_Grenadier",
			"SC_GrenadierLight",
			"SC_Gunner",
			"SC_HeliCrew",
			"SC_HeliPilot",
			"SC_Marksman",
			"SC_Officer",
			"SC_Operative",
			"SC_Radioman",
			"SC_RadiomanLight",
			"SC_Rifleman",
			"SC_RiflemanLight",
			"SC_Sniper",
			"SC_Spotter",
			"SC_SquadLeader",
			"SC_SquadLeaderLight",
			"SC_TeamLeader",
			"SC_TeamLeaderLight",
			//Shadow Company Vehicles
			"SC_Humvee",
			"SC_Humvee_M2",
			"SC_Humvee_Mk19",
			"SC_Humvee_Open",
			"SC_M1240",
			"SC_M1240_M2_CROWS",
			"SC_M1240_Mk19_CROWS",
			"SC_Truck",
			"SC_Truck_Open",			
			//Shadow Company Statics
			"SC_M2HB_Low",
			"SC_M2HB",
			"SC_FIM92F",
			"SC_Mk19",
			"SC_M41A4",
			//Shadow Company Helicopters
			"SC_AH6",
			"SC_CH53",
			"SC_CH53_GAU21",
			"SC_CH47",
			"SC_MH6",
			"SC_UH60",
			"SC_UH60_Medevac",
			
			
			//Erusean Royal Army
			
			
			
			,*/
			
			//Ashton's Misc.
			"ADFX01",
			"ADFX02"
			
		};
		weapons[] = {};
		requiredVersion= 0.1;
		requiredAddons[] = 
		{
			"a3_characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma"
		};
	};
};
class CfgFactionClasses
{
	class Buhriz_Movement
	{
		displayName="Buhriz Movement";
		priority=2;
		side=2;
	};
	class Jofren_Faithful
	{
		displayName="Free Nevara Organisation";
		priority=2;
		side=2;
	};
	/*
	class Shadow_Company
	{
		displayName="Shadow Company";
		priority=2;
		side=2;
	};
	*/
	class Ashton_Misc
	{
		displayName="Ashton's Miscellaneous";
		priority=2;
		side=2;
	};
	class Leskovets_Communist_Party
	{
		displayName="Leskovets Communist Party";
		priority=2;
		side=2;
	};
};
class CfgVehicleClasses
{
	class BM_Infantry
	{
		displayName="Infantry";
		priority=1;
	};
	class BM_Cars
	{
		displayName="Vehicles";
		priority=2;
	};
	class BM_Armour
	{
		displayName="Armour";
		priority=3;
	};
	class BM_Aircraft
	{
		displayName="Helicopters";
		priority=3;
	};
	class JF_Infantry
	{
		displayName="Infantry";
		priority=1;
	};
	class JF_Cars
	{
		displayName="Vehicles";
		priority=2;
	};
	class AMC_Infantry
	{
		displayName="Infantry";
		priority=1;
	};
	class AMC_Cars
	{
		displayName="Vehicles";
		priority=2;
	};
	class AMC_Armour
	{
		displayName="Armour";
		priority=3;
	};
	class AMC_Aircraft
	{
		displayName="Aircraft";
		priority=3;
	};
	class LCP_Infantry
	{
		displayName="Infantry";
		priority=1;
	};
	class LCP_Cars
	{
		displayName="Vehicles";
		priority=2;
	};
	class LCP_Armour
	{
		displayName="Armour";
		priority=3;
	};
	};
};

 ///// Weapon Attachments /////
class CfgWeapons
{
	class CUP_srifle_Mosin_Nagant;
	class CUP_arifle_M4A1;
	class CUP_srifle_SVD;
	class arifle_TRG20_F;
	class hgun_PDW2000_F;
	class CUP_arifle_G3A3_ris_vfg_black;
	class CUP_arifle_HK416_CQB_Black;
	
	//Define Weapons with attachments
  	class SVD_Scoped: CUP_srifle_SVD
	{
		displayName = "SVD Scoped";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_pso_1_open";
			};
		};
	};
	class Scoped_Mosin_Nagant: CUP_srifle_Mosin_Nagant
	{
		displayName = "Scoped Mosin Nagant";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_pem";
			};
		};
	};
	class PMC_M4A1: CUP_arifle_M4A1
	{
		displayName = "M4A1 Modded";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_acog_ta01b_rmr_black";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "ace_muzzle_mzls_l";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class TAR21EOTech: arifle_TRG20_F
	{
		displayName = "TAR-21 w/ EOTech";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_eotech553_black";
			};
		};
	};
	class CPWMod: hgun_PDW2000_F
	{
		displayName = "Silenced CPW w/ T-1";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_microt1_low";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_l";
			};
		};
	};
	class CPWMod2: hgun_PDW2000_F
	{
		displayName = "CPW w/ T-1";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_microt1_low";
			};
		};
	};
	class G3A3Hitman: CUP_arifle_G3A3_ris_vfg_black
	{
		displayName = "Scoped G3A3";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "ptv_PMII_525";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "cup_muzzle_snds_scar_h";
			};
		};
	};
	class HK416Mod1: CUP_arifle_HK416_CQB_Black
	{
		displayName = "HK416 Modded";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_eotech553_black";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "cup_muzzle_snds_m16";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_llm01_f";
			};
		};
	};
};
class CfgVehicles
{
	class I_Soldier_TL_F;
	class I_Soldier_SL_F;
	class I_Soldier_AR_F;
	class I_Soldier_M_F;
	class I_Soldier_LAT_F;
	class I_Soldier_GL_F;
	class I_Soldier_F;
	class I_Soldier_AA_F;
	class I_engineer_F;
	class I_Soldier_UAV_F;
	class I_Soldier_exp_F;
	class I_medic_F;
	class I_crew_F;
	class I_Officer_F;
	class I_Helipilot_F;
	// Backpacks
	class CUP_B_SLA_Medicbag;
	class CFP_RPGPack_Khaki;
	class CFP_RPGPack_TropicGreen;
	class CFP_RPGPack_Grey;
	class B_TacticalPack_oli;
	class B_FieldPack_khk;
	class B_FieldPack_oli;
	class milgp_bp_Tomahawk_rgr;
	class B_LegStrapBag_coyote_F;
	class B_LegStrapBag_black_F;
	class B_TacticalPack;
	class B_TacticalPack_blk;
	class B_Kitbag_rgr;
	class B_AssualtPack_rgr;
	//Vehicles
	class CUP_O_BMP1_TKA;
	class CUP_O_BMP2_TKA;
	class CUP_C_LR_Transport_CTK;
	class CUP_B_LR_MG_GB_W;
	class CUP_O_LR_SPG9_TKA;
	class C_Van_01_transport_F;
	class C_Offroad_01_F;
	class I_G_Offroad_01_AT_F;
	class I_G_Offroad_01_armed_F;
	class CUP_O_Ural_RU;
	class CUP_B_BTR60_CDF;
	class CUP_O_T55_TK;
	class CUP_B_T72_CDF;
	class CUP_O_Datsun_PK_Random;
	class CUP_O_Mi8_CHDKZ;
	class CUP_B_ZSU23_Afghan_CDF;
	class CUP_B_BRDM2_CDF;
	class CUP_B_BRDM2_ATGM_CDF;
	class CUP_O_Ural_ZU23_RU;
	class CFP_I_SDRebelsrf_DShKM_01;
	class CFP_I_SDRebelsrf_DShKM_Low_01;
	class CFP_I_SDRebelsrf_Mortar_01;
	class CUP_B_MK19_TriPod_US;
	class CUP_B_AGS_ACR;
	class CUP_B_Igla_AA_pod_CDF;
	class CUP_O_Kornet_RU;
	class CFP_O_HAMAS_Metis_01;
	class O_Plane_Fighter_02_F;
	
	////////// Buhriz Militia Backpacks //////////
	
	class Insurgent_Affiliate_Backpack: milgp_bp_Tomahawk_rgr
	{
		scope=1;
		displayName="Scav Backpack";
		class TransportMagazines
		{
			class ACE_M84
			{
				magazine="ACE_M84";
				count=2;
			};
			class ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=1;
			};
			class ACE_wirecutter
			{
				magazine="ACE_wirecutter";
				count=1;
			};
			class DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
	};
	class Insurgent_Associate_Backpack: B_LegStrapBag_coyote_F
	{
		scope=1;
		displayName="Ammo Panel";
		class TransportMagazines
		{
			class CUP_30Rnd_556x45_PMAG_QP_Tracer_Red
			{
				magazine="CUP_30Rnd_556x45_PMAG_QP_Tracer_Red";
				count=2;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
		};
	};
	class AR_Heavy: B_Kitbag_rgr	
	{
		scope=1;
		displayName="Ammo Carrier";
		class TransportMagazines
		{
			class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=3;
			};
		};
	};
	class AR_Standard: B_FieldPack_oli
	{
		scope=1;
		displayName="Ammo Bag";
		class TransportMagazines
		{
			class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=2;
			};
		};
	};
	class AR_Light: B_LegStrapBag_black_F
	{
		scope=1;
		displayName="Ammo Panel";
		class TransportMagazines
		{
			class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=1;
			};
		};
	};
	class AT_Heavy: CFP_RPGPack_Khaki
	{
		scope=1;
		displayName="RPG Carrier";
		class TransportMagazines
		{
			class CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=1;
			};
			class CUP_PG7VL_M
			{
				magazine="CUP_PG7VL_M";
				count=1;
			};
			class CUP_PG7VR_M
			{
				magazine="CUP_PG7VR_M";
				count=1;
			};
		};
	};
	class AT_Standard: CFP_RPGPack_Khaki
	{
		scope=1;
		displayName="RPG Carrier";
		class TransportMagazines
		{
			class CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=3;
			};
			class CUP_OG7_M
			{
				magazine="CUP_OG7_M";
				count=1;
			};
		};
	};
	class AT_Light: CFP_RPGPack_Khaki
	{
		scope=1;
		displayName="RPG Carrier";
		class TransportMagazines
		{
			class CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=1;
			};
			class CUP_OG7_M
			{
				magazine="CUP_OG7_M";
				count=1;
			};
			class CUP_PG7VM_M
			{
				magazine="CUP_PG7VM_M";
				count=1;
			};
		};
	};
	class Bonesetter_Bag: CUP_B_SLA_Medicbag
	{
		scope=1;
		displayName="Medic Bag";
		class TransportMagazines
		{
			class _xx_Medikit
			{
                name = "Medikit";
                count = 3;
            };
		};
	};
	class Bomber_Bag: B_AssualtPack_rgr	
	{
		scope=1;
		displayName="Bomb Bag";
		class TransportMagazines
		{
			class IEDUrbanSmall_Remote_Mag
			{
				magazine="IEDUrbanSmall_Remote_Mag";
				count=2;
			};
			class DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
			class IEDLandSmall_Remote_Mag
			{
				magazine="IEDLandSmall_Remote_Mag";
				count=1;
			};
		};
	};
	class Medic_Bag: CUP_B_SLA_Medicbag
	{
		scope=1;
		displayName="Medical Kit";
		class TransportMagazines
		{
			class _xx_Medikit
			{
                name = "Medikit";
                count = 5;
            };
		};
	};
	class Grey_RPG_Bag: CFP_RPGPack_Grey
	{
		scope=1;
		displayName="M72 Holder";
		class TransportMagazines
		{
			class _xx_Medikit
			{
                name = "Medikit";
                count = 1;
            };
		};
	};
	class LCP_Rebel_RPG: CFP_RPGPack_Khaki
	{
		scope=1;
		displayName="RPG Carrier";
		class TransportMagazines
		{
			class CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=2;
			};
			class CUP_OG7_M
			{
				magazine="CUP_OG7_M";
				count=1;
			};
		};
	};
	class LCP_Veteran_RPG: CFP_RPGPack_TropicGreen
	{
		scope=1;
		displayName="RPG Carrier";
		class TransportMagazines
		{
			class CUP_PG7V_M
			{
				magazine="CUP_PG7V_M";
				count=3;
			};
			class CUP_OG7_M
			{
				magazine="CUP_OG7_M";
				count=1;
			};
		};
	};

    ////////// Buhriz Insurgents //////////
	
	class Insurgent_1: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Insurgent_1";
		scope=2;
		displayName="Insurgent (AK74)";
		weapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"H_Shemag_olive_hs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"H_Shemag_olive_hs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CUP_I_B_PMC_Unit_3";
		camouflage=1.6;
	};
	class Insurgent_2: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Insurgent_2";
		scope=2;
		displayName="Insurgent (AKMS)";
		weapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",	
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"CFP_M23_VEST_Lime",
			"SP_Shemagh_CheckGreen",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_M23_VEST_Lime",
			"SP_Shemagh_CheckGreen",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_BlackGrey";
		camouflage=1.6;
	};
	class Insurgent_3: I_Soldier_AR_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Insurgent_3";
		scope=2;
		displayName="Insurgent (RPK)";
		weapons[]=
		{
			"CUP_arifle_RPK74",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_RPK74",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"ACE_WaterBottle",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"ACE_WaterBottle",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"CFP_M23_VEST_Lime",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_M23_VEST_Lime",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CUP_I_B_PMC_Unit_6";
		camouflage=1.6;
	};
	class Insurgent_4: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Insurgent_4";
		scope=2;
		displayName="Insurgent (AKS74U)";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white"
		};
		linkedItems[]=
		{
			"CFP_Alice_Vest2",
			"SP_Shemagh_CheckTan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_Alice_Vest2",
			"SP_Shemagh_CheckTan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_PulloverUniform_Green";
		camouflage=1.6;
	};
	class Insurgent_Affiliate: I_Soldier_TL_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="Insurgent_Affiliate_Backpack";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Insurgent_Affiliate";
		scope=2;
		displayName="Insurgent Affiliate";
		weapons[]=
		{
			"CUP_arifle_AK74_Early",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_Early",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"Chemlight_green",
			"Chemlight_green",
			"ACE_Clacker",
			"CUP_8Rnd_9x18_Makarov_M",	
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"GrenadeMolotovPSENG",
			"ACE_Humanitarian_Ration",
			"ACE_Canteen",
			"ACE_WaterBottle",
			"ACE_Cellphone"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"Chemlight_green",
			"Chemlight_green",
			"ACE_Clacker",
			"CUP_8Rnd_9x18_Makarov_M",	
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"GrenadeMolotovPSENG",
			"ACE_Humanitarian_Ration",
			"ACE_Canteen",
			"ACE_WaterBottle",
			"ACE_Cellphone"
		};
		linkedItems[]=
		{
			"milgp_v_marciras_light_rgr",
			"H_PASGT_basic_olive_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"milgp_v_marciras_light_rgr",
			"H_PASGT_basic_olive_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CUP_I_B_PARA_Unit_1";
		camouflage=1.7;
	};
	class Insurgent_Associate: I_Soldier_SL_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="Insurgent_Associate_Backpack";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_Euro"
		};
		author="Ashton";
		_generalMacro="Insurgent_Associate";
		scope=2;
		displayName="Insurgent Associate";
		weapons[]=
		{
			"PMC_M4A1",
			"CUP_hgun_Glock17",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"PMC_M4A1",
			"CUP_hgun_Glock17",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_17Rnd_9x19_glock17",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
			"CUP_17Rnd_9x19_glock17",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ffaa_moe_casco_02_1_b",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Eagle_SPC_Rifleman",
			"ffaa_moe_casco_02_1_b",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.7;
	};

	////////// Buhriz Iskandar //////////
	
	class Iskandar_AntiArmor: I_Soldier_LAT_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="AT_Light";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Iskandar_AntiArmor";
		scope=2;
		displayName="Iskandar (AT)";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.6;
	};
	class Iskandar_Autorifleman: I_Soldier_AR_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Iskandar_Autorifleman";
		scope=2;
		displayName="Iskandar (AR)";
		weapons[]=
		{
			"CUP_lmg_MG3",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_lmg_MG3",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white"
		};
		respawnMagazines[]=
		{
            "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white"
		};
		linkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_MG",
			"SP_SSh68Helmet_Black1",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_MG",
			"SP_SSh68Helmet_Black1",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.6;
	};
    class Iskandar_Grenadier: I_Soldier_GL_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Iskandar_Grenadier";
		scope=2;
		displayName="Iskandar (M79)";
		weapons[]=
		{
			"CUP_glaunch_M79",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_glaunch_M79",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		respawnMagazines[]=
		{
            "CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"CUP_G_Scarf_Face_Blk",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"CUP_G_Scarf_Face_Blk",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.6;
	};
	class Iskandar_Rifleman: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Iskandar_Rifleman";
		scope=2;
		displayName="Iskandar (Rifleman)";
		weapons[]=
		{
			"CUP_arifle_AKM_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKM_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"G_Balaclava_blk",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"G_Balaclava_blk",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.6;
	};
	class Iskandar_Sharpshooter: I_Soldier_M_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Iskandar_Sharpshooter";
		scope=2;
		displayName="Iskandar (SVDS)";
		weapons[]=
		{
			"SVD_Scoped",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SVD_Scoped",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CFP_M23_VEST_Lime",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_M23_VEST_Lime",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.6;
	};
	class Bomber: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Bomber";
		scope=2;
		displayName="Iskandar (Bomber)";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"ACE_DeadManSwitch"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"ACE_DeadManSwitch"
		};
		linkedItems[]=
		{
			"V_Chestrig_rgr",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_rgr",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.6;
	};
	class Bonesetter: I_medic_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="Medic_Bag";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Bonesetter";
		scope=2;
		displayName="Iskandar (Bonesetter)";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"G_Bandanna_blk",
			"SP_SSh68CoverHelmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"G_Bandanna_blk",
			"SP_SSh68CoverHelmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_Green";
		camouflage=1.6;
	};
	class Warlord_Light: I_Officer_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Warlord_Light";
		scope=2;
		displayName="Warlord (Light)";
		weapons[]=
		{
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5",
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
            "CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5",
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen"
		};
		linkedItems[]=
		{
			"milgp_v_battle_belt_assaulter_RGR",
			"SP_Shemagh_CheckGreen",
			"CFP_Lungee_Open_Grey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"milgp_v_battle_belt_assaulter_RGR",
			"SP_Shemagh_CheckGreen",
			"CFP_Lungee_Open_Grey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_KhetPartug_Short_M81";
		camouflage=1.6;
	};
	class Warlord_Standard: I_Officer_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Warlord_Standard";
		scope=2;
		displayName="Warlord";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5",
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5",
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen"
		};
		linkedItems[]=
		{
			"CUP_V_O_SLA_Flak_Vest02",
			"SP_Shemagh_CheckGreen",
			"CFP_Lungee_Open_Grey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_SLA_Flak_Vest02",
			"SP_Shemagh_CheckGreen",
			"CFP_Lungee_Open_Grey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_KhetPartug_Short_M81";
		camouflage=1.6;
	};
	class Warlord_Heavy: I_Officer_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Warlord_Heavy";
		scope=2;
		displayName="Warlord (Heavy)";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5",
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5",
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen"
		};
		linkedItems[]=
		{
			"CUP_V_O_SLA_Flak_Vest02",
			"SP_SSh68Helmet_Black1",
			"CUP_G_Scarf_Face_Grn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_SLA_Flak_Vest02",
			"SP_SSh68Helmet_Black1",
			"CUP_G_Scarf_Face_Grn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_KhetPartug_Short_M81";
		camouflage=1.6;
	};
	
    ////////// Buhriz Militia //////////
	
	class AntiAir_Light: I_Soldier_AA_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="AA_Light";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="AntiAir_Light";
		scope=2;
		displayName="AA Soldier (Light)";
		weapons[]=
		{
			"CUP_arifle_TYPE_56_2_Early",
			"CUP_hgun_Makarov",
			"CUP_launch_9K32Strela",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_TYPE_56_2_Early",
			"CUP_hgun_Makarov",
			"CUP_launch_9K32Strela",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"G_Balaclava_blk",
			"SP_SSh68CoverHelmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"G_Balaclava_blk",
			"SP_SSh68CoverHelmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.6;
	};
	class AntiAir_Standard: I_Soldier_AA_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="AA_Standard";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="AntiAir_Standard";
		scope=2;
		displayName="AA Soldier";
		weapons[]=
		{
			"CUP_arifle_TYPE_56_2_Early",
			"CUP_hgun_Makarov",
			"CUP_launch_FIM92Stinger",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_TYPE_56_2_Early",
			"CUP_hgun_Makarov",
			"CUP_launch_FIM92Stinger",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"G_Balaclava_blk",
			"SP_SSh68CoverHelmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"G_Balaclava_blk",
			"SP_SSh68CoverHelmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.6;
	};
	class AntiArmor_Disposable: I_Soldier_LAT_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="Grey_RPG_Bag";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="AntiArmor_Disposable";
		scope=2;
		displayName="AT Soldier (M72)";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"CUP_launch_M72A6",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"CUP_launch_M72A6",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_LOlive",
			"CUP_G_Oakleys_Drk",
			"SP_Shemagh_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_LOlive",
			"CUP_G_Oakleys_Drk",
			"SP_Shemagh_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class AntiArmor_Heavy: I_Soldier_LAT_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="AT_Heavy";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="AntiArmor_Heavy";
		scope=2;
		displayName="AT Soldier (Heavy)";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		linkedItems[]=
		{
			"CUP_V_O_SLA_6B3_2_WDL",
			"SP_Shemagh_CheckGreen",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_SLA_6B3_2_WDL",
			"SP_Shemagh_CheckGreen",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class AntiArmor_Standard: I_Soldier_LAT_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="AT_Standard";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="AntiArmor_Standard";
		scope=2;
		displayName="AT Soldier";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_LOlive",
			"SP_Shemagh_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_LOlive",
			"SP_Shemagh_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class AntiArmor_Light: I_Soldier_LAT_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="AT_Light";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="AntiArmor_Light";
		scope=2;
		displayName="AT Soldier (Light)";
		weapons[]=
		{
			"CUP_smg_SA61",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_smg_SA61",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CUP_V_CDF_CrewBelt",
			"SP_Shemagh_CheckGreen",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_CDF_CrewBelt",
			"SP_Shemagh_CheckGreen",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Auto_Rifleman_Heavy: I_Soldier_AR_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="AR_Heavy";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Auto_Rifleman_Heavy";
		scope=2;
		displayName="Autorifleman (Heavy)";
		weapons[]=
		{
			"CUP_lmg_PKM",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_lmg_PKM",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"G_Balaclava_blk",
			"SP_SSh68CoverHelmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"G_Balaclava_blk",
			"SP_SSh68CoverHelmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Auto_Rifleman_Standard: I_Soldier_AR_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="AR_Standard";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Auto_Rifleman_Standard";
		scope=2;
		displayName="Autorifleman";
		weapons[]=
		{
			"CUP_lmg_PKM",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_lmg_PKM",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Auto_Rifleman_Light: I_Soldier_AR_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="AR_Light";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Auto_Rifleman_Light";
		scope=2;
		displayName="Autorifleman (Light)";
		weapons[]=
		{
			"CUP_lmg_PKM",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_lmg_PKM",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
		};
		respawnMagazines[]=
		{
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
		};
		linkedItems[]=
		{
			"V_Chestrig_rgr",
			"SP_Shemagh_CheckGreen",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_rgr",
			"SP_Shemagh_CheckGreen",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Crewman: I_crew_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Crewman";
		scope=2;
		displayName="Crewman";
		weapons[]=
		{
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		respawnMagazines[]=
		{
            "CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		linkedItems[]=
		{
			"V_Chestrig_rgr",
			"CUP_G_ESS_BLK_Scarf_Face_Grn",
			"CUP_H_SLA_TankerHelmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_rgr",
			"CUP_G_ESS_BLK_Scarf_Face_Grn",
			"CUP_H_SLA_TankerHelmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_M81";
		camouflage=1.6;
	};
	class Driver: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Driver";
		scope=2;
		displayName="Driver";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
    class Grenadier_Standard: I_Soldier_GL_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Grenadier_Standard";
		scope=2;
		displayName="Grenadier";
		weapons[]=
		{
			"CUP_arifle_AKMS_GL_Early",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKMS_GL_Early",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M"
		};
		linkedItems[]=
		{
			"SP_Modular1_Green",
			"CFP_Shemagh_Face_Tan",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_Modular1_Green",
			"CFP_Shemagh_Face_Tan",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Grenadier_Light: I_Soldier_GL_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Grenadier_Light";
		scope=2;
		displayName="Grenadier (Light)";
		weapons[]=
		{
			"CUP_arifle_AKMS_GL_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKMS_GL_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M"
		};
		linkedItems[]=
		{
			"V_Chestrig_rgr",
			"SP_Shemagh_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_rgr",
			"SP_Shemagh_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Marksman_Standard: I_Soldier_M_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Marksman_Standard";
		scope=2;
		displayName="Marksman";
		weapons[]=
		{
			"SVD_Scoped",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SVD_Scoped",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		respawnMagazines[]=
		{
            "CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Marksman_Light: I_Soldier_M_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Marksman_Light";
		scope=2;
		displayName="Marksman (Light)";
		weapons[]=
		{
			"SVD_Scoped",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SVD_Scoped",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		respawnMagazines[]=
		{
            "CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		linkedItems[]=
		{
			"SP_OpforRig1_Green",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_OpforRig1_Green",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Medic: I_medic_F
	{
		side=2;
		faction="Buhriz_Movement";
		backpack="Medic_Bag";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Medic";
		scope=2;
		displayName="Medic";
		weapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Officer: I_Officer_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Officer";
		scope=2;
		displayName="Officer";
		weapons[]=
		{
			"CUP_arifle_AKM_Early",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKM_Early",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Officer_Armed: I_Officer_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Officer_Armed";
		scope=2;
		displayName="Officer (Armed)";
		weapons[]=
		{
			"CUP_arifle_AKM_Early",
			"RH_python",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKM_Early",
			"RH_python",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"RH_6Rnd_357_Mag",
			"RH_6Rnd_357_Mag",
			"RH_6Rnd_357_Mag",
			"CUP_HandGrenade_RGD5",
			"ptv_mag_smoke01_Orange",
			"ffp_smoke_white",
			"SmokeShellRed",
			"SmokeShellPurple"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"RH_6Rnd_357_Mag",
			"RH_6Rnd_357_Mag",
			"RH_6Rnd_357_Mag",
			"CUP_HandGrenade_RGD5",
			"ptv_mag_smoke01_Orange",
			"ffp_smoke_white",
			"SmokeShellRed",
			"SmokeShellPurple"
		};
		linkedItems[]=
		{
			"SP_Modular1_Green",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_Modular1_Green",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Pilot: I_Helipilot_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Pilot";
		scope=2;
		displayName="Pilot";
		weapons[]=
		{
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		respawnMagazines[]=
		{
            "CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"VSM_Peltor_M81",
			"CFP_Shemagh_Face_Red",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"VSM_Peltor_M81",
			"CFP_Shemagh_Face_Red",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Rifleman_AKMS_Light: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Rifleman_AKMS_Light";
		scope=2;
		displayName="Rifleman (AKMS Light)";
		weapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Rifleman_AKMS_Standard: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Rifleman_AKMS_Standard";
		scope=2;
		displayName="Rifleman (AKMS)";
		weapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_O_SLA_6B3_5_WDL",
			"G_Balaclava_blk",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_SLA_6B3_5_WDL",
			"G_Balaclava_blk",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Rifleman_AK74_Light: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Rifleman_AK74_Light";
		scope=2;
		displayName="Rifleman (AK74 Light)";
		weapons[]=
		{
			"CUP_arifle_AK74",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Rifleman_AK74_Standard: I_Soldier_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Rifleman_AK74_Standard";
		scope=2;
		displayName="Rifleman (AK74)";
		weapons[]=
		{
			"CUP_arifle_AK74",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_O_SLA_6B3_5_WDL",
			"G_Balaclava_blk",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_SLA_6B3_5_WDL",
			"G_Balaclava_blk",
			"SP_SSh68Helmet_Black1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Sharpshooter: I_Soldier_M_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Sharpshooter";
		scope=2;
		displayName="Sharpshooter";
		weapons[]=
		{
			"Scoped_Mosin_Nagant",
			"CUP_hgun_TT",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Scoped_Mosin_Nagant",
			"CUP_hgun_TT",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_8Rnd_762x25_TT",
			"CUP_8Rnd_762x25_TT",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_8Rnd_762x25_TT",
			"CUP_8Rnd_762x25_TT",
			"ffp_smoke_white",
			"ffp_smoke_white",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"H_Shemag_olive_hs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"H_Shemag_olive_hs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_Green";
		camouflage=1.6;
	};
	class Sniper_Standard: I_Soldier_M_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Sniper_Standard";
		scope=2;
		displayName="Sniper";
		weapons[]=
		{
			"Scoped_Mosin_Nagant",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Scoped_Mosin_Nagant",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M"
		};
		respawnMagazines[]=
		{
            "CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_LOlive",
			"SP_Shemagh_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_LOlive",
			"SP_Shemagh_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class Sniper_Light: I_Soldier_M_F
	{
		side=2;
		faction="Buhriz_Movement";
		vehicleclass="BM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_African"
		};
		author="Ashton";
		_generalMacro="Sniper_Light";
		scope=2;
		displayName="Sniper (Light)";
		weapons[]=
		{
			"Scoped_Mosin_Nagant",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Scoped_Mosin_Nagant",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M"
		};
		respawnMagazines[]=
		{
            "CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M"
		};
		linkedItems[]=
		{
			"SP_OpforRig1_Green",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_OpforRig1_Green",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
    class Offroad: C_Offroad_01_F
    {
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Offroad"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
		gunnerType="Driver";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Offroad_HMG: I_G_Offroad_01_armed_F
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Offroad (HMG)"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
		gunnerType="Driver";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Offroad_AT: I_G_Offroad_01_AT_F
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Offroad (AT)"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
		gunnerType="Driver";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Static_AGS: CUP_B_AGS_ACR
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "AGS30"; //Ingame name
        crew = "Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Insurgent_1"};
		gunnerType="Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class Static_DShKM: CFP_I_SDRebelsrf_DShKM_01
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "DShKM"; //Ingame name
        crew = "Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Insurgent_1"};
		gunnerType="Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class Static_DhSKM_Minitripod: CFP_I_SDRebelsrf_DShKM_Low_01
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "DShKM (MiniTripod)"; //Ingame name
        crew = "Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Insurgent_1"};
		gunnerType="Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class Static_Igla: CUP_B_Igla_AA_pod_CDF
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "9K38 (Djigit)"; //Ingame name
        crew = "Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Insurgent_1"};
		gunnerType="Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class Static_Kornet: CUP_O_Kornet_RU
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "9K1131 'KornetM'"; //Ingame name
        crew = "Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Insurgent_1"};
		gunnerType="Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class Static_Metis: CFP_O_HAMAS_Metis_01
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "9K1152 'MetisM'"; //Ingame name
        crew = "Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Insurgent_1"};
		gunnerType="Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class Static_Mk19: CUP_B_MK19_TriPod_US
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Mk. 19 (M3)"; //Ingame name
        crew = "Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Insurgent_1"};
		gunnerType="Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class Static_Mortar: CFP_I_SDRebelsrf_Mortar_01
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "2B141 'Podnos'"; //Ingame name
        crew = "Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Insurgent_1"};
		gunnerType="Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class Pickup: CUP_C_LR_Transport_CTK
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Pickup"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
		gunnerType="Driver";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Pickup_HMG: CUP_B_LR_MG_GB_W
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Pickup (HMG)"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
		gunnerType="Driver";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Pickup_AT: CUP_O_LR_SPG9_TKA
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Pickup (AT)"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
		gunnerType="Driver";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Truck: C_Van_01_transport_F
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Truck"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
		gunnerType="Driver";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Ural: CUP_O_Ural_RU
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Ural"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Ural_Covered: CUP_O_Ural_RU
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Ural (Covered)"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Ural_AA: CUP_O_Ural_ZU23_RU
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Ural (ZU232)"; //Ingame name
        crew = "Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Driver"};
		gunnerType="Driver";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class BTR60BM: CUP_B_BTR60_CDF
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "BTR-60"; //Ingame name
        crew = "Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Crewman"};
		gunnerType="Crewman";
        hiddenSelections[] = {"LGreen"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class BMP_1: CUP_O_BMP1_TKA
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "BMP1"; //Ingame name
        crew = "Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Crewman"};
		gunnerType="Crewman";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class BMP_2: CUP_O_BMP2_TKA
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "BMP2"; //Ingame name
        crew = "Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Crewman"};
		gunnerType="Crewman";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class ZSU_23_4: CUP_B_ZSU23_Afghan_CDF
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "ZSU234"; //Ingame name
        crew = "Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Crewman"};
		gunnerType="Crewman";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class T_55A: CUP_O_T55_TK
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "T-55A"; //Ingame name
        crew = "Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Crewman"};
		gunnerType="Crewman";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class T_72: CUP_B_T72_CDF
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "T-72"; //Ingame name
        crew = "Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Crewman"};
		gunnerType="Crewman";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	class Mi_8: CUP_O_Mi8_CHDKZ
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Mi8"; //Ingame name
        crew = "Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"Pilot"};
		gunnerType="Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	
	////////// Jofren's Faithful (Free Nevara Organisation) //////////
	
	class Anti_Infantry_Operator: I_Soldier_LAT_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Anti_Infantry_Operator";
		scope=2;
		displayName="Anti Infantry Operator";
		weapons[]=
		{
			"SMG_03C_black",
			"CUP_launch_RShG2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMG_03C_black",
			"CUP_launch_RShG2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white"
		};
		respawnMagazines[]=
		{
            "50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ffp_smoke_white",
			"ffp_smoke_white"
		};
		linkedItems[]=
		{
			"CFP_PlateCarrier1_M81",
			"H_Cap_headphones",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_PMC_Facewrap_Black_Glasses_Dark"
		};
		respawnLinkedItems[]=
		{
			"CFP_PlateCarrier1_M81",
			"H_Cap_headphones",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_PMC_Facewrap_Black_Glasses_Dark"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green";
		camouflage=1.6;
	};
	class Anti_Tank_Operator: I_Soldier_LAT_F
	{
		side=2;
		faction="Jofren_Faithful";
		backpack="AT_Light";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Anti_Tank_Operator";
		scope=2;
		displayName="Anti Tank Operator";
		weapons[]=
		{
			"CPWMod2",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CPWMod2",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
		};
		respawnMagazines[]=
		{
            "30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
		};
		linkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_oli"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_oli"
		};
		uniformClass="CFP_U_FieldUniform_woodlanddark";
		camouflage=1.6;
	};
	class Demoman: I_Soldier_exp_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Demoman";
		scope=2;
		displayName="Demolitions Specialist";
		weapons[]=
		{
			"TAR21EOTech",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"TAR21EOTech",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"m12_grn",
			"ffaa_moe_casco_02_1_b",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_Oakleys_Clr"
		};
		respawnLinkedItems[]=
		{
			"m12_grn",
			"ffaa_moe_casco_02_1_b",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_Oakleys_Clr"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	class Engineer: I_engineer_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Engineer";
		scope=2;
		displayName="Engineer";
		weapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"PO_H_PASGT_DPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VSM_Balaclava2_OD_Peltor_Goggles"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"PO_H_PASGT_DPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VSM_Balaclava2_OD_Peltor_Goggles"
		};
		uniformClass="CFP_U_FieldUniform_woodlanddark";
		camouflage=1.6;
	};
	class Grenadier: I_Soldier_GL_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Grenadier";
		scope=2;
		displayName="Grenadier";
		weapons[]=
		{
			"CUP_arifle_AKM_GL_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKM_GL_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"SP_Modular2_Black",
			"FGN_AAF_PASGT_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_PMC_Facewrap_Black_Glasses_Dark"
		};
		respawnLinkedItems[]=
		{
			"SP_Modular2_Black",
			"FGN_AAF_PASGT_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_PMC_Facewrap_Black_Glasses_Dark"
		};
		uniformClass="CFP_U_FieldUniform_woodlanddark";
		camouflage=1.6;
	};
	class Gunman_MP5: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Gunman_MP5";
		scope=2;
		displayName="Gunman (MP5)";
		weapons[]=
		{
			"CUP_smg_MP5A5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_smg_MP5A5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_HandGrenade_RGD5",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_HandGrenade_RGD5",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"H_HeadSet_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_beast"
		};
		respawnLinkedItems[]=
		{
			"V_Rangemaster_belt",
			"H_HeadSet_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_beast"
		};
		uniformClass="U_I_L_Uniform_01_tshirt_black_F";
		camouflage=1.6;
	};
	class Gunman_AKS: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Gunman_AKS";
		scope=2;
		displayName="Gunman (AKS-74U)";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"ACE_M84",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"V_TacVest_khk",
			"H_Bandanna_khk_hs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Scarf_Face_White"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_khk",
			"H_Bandanna_khk_hs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Scarf_Face_White"
		};
		uniformClass="U_I_L_Uniform_01_tshirt_skull_F";
		camouflage=1.6;
	};
	class Gunman_CPW: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Gunman_CPW";
		scope=2;
		displayName="Gunman (CPW)";
		weapons[]=
		{
			"CPWMod",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CPWMod",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"V_TacVest_oli",
			"H_Cap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Dark"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_oli",
			"H_Cap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Dark"
		};
		uniformClass="U_I_L_Uniform_01_tshirt_sport_F";
		camouflage=1.6;
	};
	class Hacker: I_Soldier_UAV_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Hacker";
		scope=2;
		displayName="Hacker";
		weapons[]=
		{
			"hlc_pistol_P226US",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hlc_pistol_P226US",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "hlc_15Rnd_9x19_B_P226",
			"hlc_15Rnd_9x19_B_P226",
			"hlc_15Rnd_9x19_B_P226"
		};
		respawnMagazines[]=
		{
            "hlc_15Rnd_9x19_B_P226",
			"hlc_15Rnd_9x19_B_P226",
			"hlc_15Rnd_9x19_B_P226"
		};
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"H_HeadSet_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_beast"
		};
		respawnLinkedItems[]=
		{
			"V_Rangemaster_belt",
			"H_HeadSet_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_beast"
		};
		uniformClass="U_I_L_Uniform_01_tshirt_olive_F";
		camouflage=1.6;
	};
	class Henchman_1: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Henchman_1";
		scope=2;
		displayName="Henchman (Beanie)";
		weapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"SP_Modular1_Green",
			"H_Watchcap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_blk"
		};
		respawnLinkedItems[]=
		{
			"SP_Modular1_Green",
			"H_Watchcap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_blk"
		};
		uniformClass="CFP_FieldUniform_blackacu_SS";
		camouflage=1.6;
	};
	class Henchman_2: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Henchman_2";
		scope=2;
		displayName="Henchman (Balaclava)";
		weapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"SP_Modular1_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Balaclava_blk"
		};
		respawnLinkedItems[]=
		{
			"SP_Modular1_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Balaclava_blk"
		};
		uniformClass="CFP_FieldUniform_blackacu_SS";
		camouflage=1.6;
	};
	class Henchman_3: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Henchman_3";
		scope=2;
		displayName="Henchman (Cap)";
		weapons[]=
		{
			"TAR21EOTech",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"TAR21EOTech",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
            "30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"ACE_M84",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"V_TacVest_oli",
			"VSM_Bowman_cap_balaclava_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Dark"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_oli",
			"VSM_Bowman_cap_balaclava_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Dark"
		};
		uniformClass="U_BG_Guerrilla_6_1";
		camouflage=1.6;
	};
	class HenchmanGroupLeader: I_Soldier_SL_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="HenchmanGroupLeader";
		scope=2;
		displayName="Henchman Group Leader";
		weapons[]=
		{
			"TAR21EOTech",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"TAR21EOTech",
			"CUP_hgun_Makarov",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"CUP_8Rnd_9x18_Makarov_M",
			"ACE_M84",
			"ACE_M84",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"CUP_8Rnd_9x18_Makarov_M",
			"ACE_M84",
			"ACE_M84",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_Modular1_Green",
			"H_Watchcap_camo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_oli"
		};
		respawnLinkedItems[]=
		{
			"SP_Modular1_Green",
			"H_Watchcap_camo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_oli"
		};
		uniformClass="CFP_FieldUniform_blackacu_SS";
		camouflage=1.6;
	};
	class Henchman_Leader: I_Officer_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Henchman_Leader";
		scope=2;
		displayName="Henchman Leader";
		weapons[]=
		{
			"CUP_hgun_Colt1911",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_Colt1911",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
            "CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellGreen"
		};
		linkedItems[]=
		{
			"V_BandollierB_blk",
			"H_Cap_headphones",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Aviator"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_blk",
			"H_Cap_headphones",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Aviator"
		};
		uniformClass="CFP_GUER_ERDLpants";
		camouflage=1.6;
	};
	class Hitman: I_Soldier_M_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Hitman";
		scope=2;
		displayName="Hitman";
		weapons[]=
		{
			"G3A3Hitman",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"G3A3Hitman",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_762x51_G3",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_Modular2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"PBW_Balaclava_schwarz"
		};
		respawnLinkedItems[]=
		{
			"SP_Modular2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"PBW_Balaclava_schwarz"
		};
		uniformClass="CFP_U_FieldUniform_M81_SS";
		camouflage=1.6;
	};
	class Hitman_Assistant: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Hitman_Assistant";
		scope=2;
		displayName="Hitman (Assistant)";
		weapons[]=
		{
			"HK416Mod1",
			"CUP_hgun_Colt1911",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"HK416Mod1",
			"CUP_hgun_Colt1911",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
            "CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"CUP_30Rnd_556x45_PMAG_QP",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"LOP_V_CarrierLite_BLK",
			"LOP_H_Beanie_dpmw",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Balaclava_blk"
		};
		respawnLinkedItems[]=
		{
			"LOP_V_CarrierLite_BLK",
			"LOP_H_Beanie_dpmw",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Balaclava_blk"
		};
		uniformClass="CFP_U_FieldUniform_M81_SS";
		camouflage=1.6;
	};
	class Machinegunner: I_Soldier_AR_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Machinegunner";
		scope=2;
		displayName="Machinegunner (M249)";
		weapons[]=
		{
			"CUP_lmg_M249_E1",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_lmg_M249_E1",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"LOP_V_CarrierLite_BLK",
			"H_Bandanna_sgg",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Scarf_Face_Grn"
		};
		respawnLinkedItems[]=
		{
			"LOP_V_CarrierLite_BLK",
			"H_Bandanna_sgg",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Scarf_Face_Grn"
		};
		uniformClass="CFP_U_FieldUniform_M81_SS";
		camouflage=1.6;
	};
	class Militant_1: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Militant_1";
		scope=2;
		displayName="Militant 1";
		weapons[]=
		{
			"CUP_arifle_TYPE_56_2_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_TYPE_56_2_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"SmokeShell",
			"SmokeShell",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"SmokeShell",
			"SmokeShell",
			"ACE_M84",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"V_TacChestrig_cbr_F",
			"H_HeadSet_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"PBW_Balaclava_schwarzR"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_cbr_F",
			"H_HeadSet_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"PBW_Balaclava_schwarzR"
		};
		uniformClass="CUP_I_B_PMC_Unit_4";
		camouflage=1.6;
	};
	class Militant_2: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Militant_2";
		scope=2;
		displayName="Militant 2";
		weapons[]=
		{
			"CUP_arifle_Sa58V",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Sa58V",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"PO_H_cap_tub",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VSM_Shemagh_Goggles_OD"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"PO_H_cap_tub",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VSM_Shemagh_Goggles_OD"
		};
		uniformClass="CUP_I_B_PMC_Unit_6";
		camouflage=1.6;
	};
	class Militant_3: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Militant_3";
		scope=2;
		displayName="Militant 3";
		weapons[]=
		{
			"CUP_smg_M3A1",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_smg_M3A1",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_45ACP_M3A1_M",
			"CUP_30Rnd_45ACP_M3A1_M",
			"CUP_30Rnd_45ACP_M3A1_M",
			"CUP_30Rnd_45ACP_M3A1_M",
			"CUP_30Rnd_45ACP_M3A1_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_45ACP_M3A1_M",
			"CUP_30Rnd_45ACP_M3A1_M",
			"CUP_30Rnd_45ACP_M3A1_M",
			"CUP_30Rnd_45ACP_M3A1_M",
			"CUP_30Rnd_45ACP_M3A1_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_Light",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Balaclava_oli"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_Light",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Balaclava_oli"
		};
		uniformClass="U_I_C_Soldier_Para_1_F";
		camouflage=1.6;
	};
	class Militant_4: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Militant_4";
		scope=2;
		displayName="Militant 4";
		weapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"VSM_Bowman_cap_balaclava_Olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VSM_Thermal"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_Olive",
			"VSM_Bowman_cap_balaclava_Olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VSM_Thermal"
		};
		uniformClass="U_BG_Guerilla2_3";
		camouflage=1.6;
	};
	class Militant_5: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Militant_5";
		scope=2;
		displayName="Militant 5";
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_Lime",
			"H_Booniehat_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_blk"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_Lime",
			"H_Booniehat_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"G_Bandanna_blk"
		};
		uniformClass="U_I_C_Soldier_Bandit_3_F";
		camouflage=1.6;
	};
	class MilitantGroupLeader: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="MilitantGroupLeader";
		scope=2;
		displayName="Militant Group Leader";
		weapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CFP_Alice_Vest2",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VSM_Shemagh_Facemask_OD_Peltor_Goggles"
		};
		respawnLinkedItems[]=
		{
			"CFP_Alice_Vest2",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VSM_Shemagh_Facemask_OD_Peltor_Goggles"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green";
		camouflage=1.6;
	};
	class Militant_Leader: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Militant_Leader";
		scope=2;
		displayName="Militant Leader";
		weapons[]=
		{
			"SMG_02_F",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMG_02_F",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02"
		};
		respawnMagazines[]=
		{
            "30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02"
		};
		linkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"VSM_Bowman_cap_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"VSM_Bowman_cap_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_G_resistanceLeader_F";
		camouflage=1.6;
	};
	class Militant_Marksman: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Militant_Marksman";
		scope=2;
		displayName="Militant Marksman";
		weapons[]=
		{
			"SVD_Scoped",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SVD_Scoped",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CUP_V_I_Carrier_Belt",
			"H_Bandanna_sgg",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"SP_Shemagh_CheckGreen"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_Carrier_Belt",
			"H_Bandanna_sgg",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"SP_Shemagh_CheckGreen"
		};
		uniformClass="U_I_C_Soldier_Para_4_F";
		camouflage=1.6;
	};
	class Rifleman_1: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Rifleman_1";
		scope=2;
		displayName="Rifleman 1";
		weapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKMS_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_2",
			"H_Cap_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_Scarf_Face_Grn"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_2",
			"H_Cap_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_Scarf_Face_Grn"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	class Rifleman_2: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Rifleman_2";
		scope=2;
		displayName="Rifleman 2";
		weapons[]=
		{
			"CUP_arifle_AKM_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKM_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_2",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Scarf_Face_White"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_2",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Scarf_Face_White"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	class Rifleman_3: I_Soldier_F
	{
		side=2;
		faction="Jofren_Faithful";
		vehicleclass="JF_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="Rifleman_3";
		scope=2;
		displayName="Rifleman 3";
		weapons[]=
		{
			"CUP_arifle_AKM_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKM_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_2",
			"VSM_Bowman_cap_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Dark"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_2",
			"VSM_Bowman_cap_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_ESS_BLK_Dark"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	
	////////// Ashton's Miscellaneous //////////
	
	class ADFX01: O_Plane_Fighter_02_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "ADFX-01 Morgan"; //Ingame name
        crew = "B_Pilot_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Pilot_F"};
		gunnerType="B_Pilot_F";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	
	class ADFX02: O_Plane_Fighter_02_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "ADFX-02 Morgan"; //Ingame name
        crew = "B_Pilot_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Pilot_F"};
		gunnerType="B_Pilot_F";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };

            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
	
	/////// Leskovets Communist Party (LCP) ///////
	class LCP_HQ_Bodyguard: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_HQ_Bodyguard";
		scope=2;
		displayName="HQ Unit (Bodyguard)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};	
	class LCP_HQ_Coordinator: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_HQ_Coordinator";
		scope=2;
		displayName="HQ Unit (Coordinator)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};	
	class LCP_HQ_Officer: I_Officer_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_HQ_Officer";
		scope=2;
		displayName="HQ Unit (Officer)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_HQ_Radioman: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_HQ_Radioman";
		scope=2;
		displayName="HQ Unit (Radioman)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_HQ_Quartermaster: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_HQ_Quartermaster";
		scope=2;
		displayName="HQ Unit (Quartermaster)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Insurgent_AntiTank: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Insurgent_AntiTank";
		scope=2;
		displayName="Insurgent (AT)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Insurgent_Fighter: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Insurgent_Fighter";
		scope=2;
		displayName="Insurgent (Fighter)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Insurgent_GroupLeader: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Insurgent_GroupLeader";
		scope=2;
		displayName="Insurgent (Group Leader)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Insurgent_Gunner: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Insurgent_Gunner";
		scope=2;
		displayName="Insurgent (Gunner)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Insurgent_Skirmisher_AKM: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Insurgent_Skirmisher_AKM";
		scope=2;
		displayName="Insurgent (Skirmisher AKM)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Insurgent_Skirmisher_Romat: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Insurgent_Skirmisher_Romat";
		scope=2;
		displayName="Insurgent (Skirmisher Romat)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Insurgent_Skirmisher_SKS: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Insurgent_Skirmisher_SKS";
		scope=2;
		displayName="Insurgent (Skirmisher SKS)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Insurgent_Sniper: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Insurgent_Sniper";
		scope=2;
		displayName="Insurgent (Sniper)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Raider_Assaulter: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Raider_Assaulter";
		scope=2;
		displayName="Raider (Assaulter)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Raider_Autorifleman: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Raider_Autorifleman";
		scope=2;
		displayName="Raider (Autorifleman)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Raider_Rocketeer: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Raider_Rocketeer";
		scope=2;
		displayName="Raider (Rocketeer)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Raider_Sniper: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Raider_Sniper";
		scope=2;
		displayName="Raider (Sniper)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Raider_RaidLeader: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Raider_RaidLeader";
		scope=2;
		displayName="Raider (Raid Leader)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Rebel_AntiTank: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Rebel_AntiTank";
		scope=2;
		displayName="Rebel (AT)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Rebel_Grenadier: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Rebel_Grenadier";
		scope=2;
		displayName="Rebel (Grenadier)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Rebel_Machinegunner: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Rebel_Machinegunner";
		scope=2;
		displayName="Rebel (Machinegunner)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Rebel_Marksman: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Rebel_Marksman";
		scope=2;
		displayName="Rebel (Marksman)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Rebel_Rifleman: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Rebel_Rifleman";
		scope=2;
		displayName="Rebel (Rifleman)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Rebel_TeamLeader: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Rebel_TeamLeader";
		scope=2;
		displayName="Rebel (Team Leader)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Rebel_SectionLeader: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Rebel_SectionLeader";
		scope=2;
		displayName="Rebel (Section Leader)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Veteran_AntiTank: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Veteran_AntiTank";
		scope=2;
		displayName="Veteran (AT)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Veteran_Grenadier: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Veteran_Grenadier";
		scope=2;
		displayName="Veteran (Grenadier)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Veteran_Machinegunner: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Veteran_Machinegunner";
		scope=2;
		displayName="Veteran (Machinegunner)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Veteran_Marksman: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Veteran_Marksman";
		scope=2;
		displayName="Veteran (Marksman)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Veteran_Rifleman: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Veteran_Rifleman";
		scope=2;
		displayName="Veteran (Rifleman)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Veteran_TeamLeader: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Veteran_TeamLeader";
		scope=2;
		displayName="Veteran (Team Leader)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
	class LCP_Veteran_SectionLeader: I_Soldier_F
	{
		side=2;
		faction="Leskovets Communist Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_Veteran_SectionLeader";
		scope=2;
		displayName="Veteran (Section Leader)";
		weapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "",
			""
		};
		respawnMagazines[]=
		{
            "",
			""
		};
		linkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="";
		camouflage=1.6;
	};
};
class CfgGroups
{
	class Indep
	{
		side=2;
		class Buhriz_Movement
		{
			name="Buhriz Movement";
			class Buhriz_Movement
			{
				name="Insurgents";
				class Insurgent_Fireteam
				{
					name="Fireteam";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Insurgent_2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Insurgent_3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Insurgent_4";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Insurgent_MG_Team
				{
					name="MG Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Insurgent_2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Insurgent_3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Insurgent_3";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Insurgent_Squad
				{	
				    name="Squad";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Insurgent_2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Insurgent_3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Insurgent_4";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Insurgent_3";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Insurgent_4";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="Insurgent_2";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="Insurgent_2";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class Insurgent_Sentry
				{
					name="Sentry";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Insurgent_2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
				};
				class Insurgent_Command_Team
				{
					name="Command Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Insurgent_Associate";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Insurgent_1";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Insurgent_2";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Insurgent_3";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
			};
			name2="Buhriz Iskandar";
			class Buhriz_Iskandar
			{
				name="Iskandars";
				class Iskandar_Fireteam
				{
					name="Fireteam";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Iskandar_Grenadier";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
			    };
				class Iskandar_MG_Team
				{
					name="MG Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Iskandar_Rifleman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
			    };
				class Iskandar_AT_Team
				{
					name="AT Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Iskandar_Rifleman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Iskandar_Sniper_Team
				{
					name="Sniper Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Iskandar_Rifleman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Iskandar_Sharpshooter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Iskandar_Sharpshooter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Iskandar_Squad
				{
					name="Squad";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Warlord_Heavy";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Iskandar_Grenadier";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Iskandar_Rifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="Bonesetter";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class Iskandar_Rifle_Group
				{
					name="Rifle Group";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_Associate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Iskandar_Grenadier";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Iskandar_Rifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Iskandar_Rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Iskandar_Rifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="Bonesetter";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class Iskandar_Sentry
				{
					name="Sentry";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Iskandar_Grenadier";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Iskandar_Rifleman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
				};
				class Iskandar_Patrol
				{
					name="Patrol";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Iskandar_Grenadier";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Iskandar_Sharpshooter";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Bonesetter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class Iskandar_Support_Team
				{
					name="Support Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Warlord_Heavy";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Warlord_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Iskandar_Sharpshooter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Iskandar_Grenadier";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Bonesetter";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			name3="Buhriz Militia";
			class Buhriz_Militia
			{
				name="Infantry";
				class Militia_Fireteam_Light
				{
					
					name="Fireteam (Light)";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Auto_Rifleman_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Rifleman_AK74_Light";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="AntiArmor_Light";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
			    class Militia_Fireteam
				{
					name="Fireteam (Standard)";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Auto_Rifleman_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Rifleman_AK74_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="AntiArmor_Standard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Militia_Fireteam_Heavy
				{
					name="Fireteam (Heavy)"
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Auto_Rifleman_Heavy";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Rifleman_AK74_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="AntiArmor_Heavy";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Squad_Light
				{
					name="Squad (Light)";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Rifleman_AKMS_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Auto_Rifleman_Light";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="AntiArmor_Light";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Rifleman_AKMS_Light";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Auto_Rifleman_Light";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="AntiArmor_Light";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="Medic";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class Squad
				{
					name="Squad (Standard)";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Rifleman_AKMS_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Auto_Rifleman_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="AntiArmor_Standard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Rifleman_AKMS_Standard";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Auto_Rifleman_Standard";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="AntiArmor_Standard";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="Medic";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class Squad_Heavy
				{
					name="Squad (Heavy)";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Rifleman_AKMS_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Auto_Rifleman_Heavy";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="AntiArmor_Heavy";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Grenadier_Standard";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Auto_Rifleman_Heavy";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="AntiArmor_Heavy";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="Medic";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class MG_Team
				{
					name="MG Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Rifleman_AKMS_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Auto_Rifleman_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Auto_Rifleman_Standard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class AT_Team
				{
					name="AT Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Rifleman_AKMS_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="AntiArmor_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="AntiArmor_Standard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Strike_Team
				{
					name="Strike Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Rifleman_AK74_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="AntiArmor_Disposable";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Auto_Rifleman_Light";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Marksman_Light";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class Assualt_Team
				{
					name="Assualt Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Insurgent_Associate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Rifleman_AKMS_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Auto_Rifleman_Heavy";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="AntiArmor_Heavy";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="AntiArmor_Disposable";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Marksman_Standard";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class Sniper_Team
				{
					name="Sniper Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Sniper_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Sniper_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Marksman_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Insurgent_Affiliate";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Command_Group
				{
					name="Command Group";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Officer_Armed";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Warlord_Heavy";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Warlord_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Grenadier_Standard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Medic";
						rank="PRIVATE";
						position[]={9,0,0};
					}
				};
			};
		};
		
		class Jofren_Faithful
		{
			name="Free Nevara Organisation";
			class JF_Henchmen
			{
				name="Henchmen";
				class Gunmen_Team
				{
					name="Gunmen Team";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Gunman_AKS";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Gunman_CPW";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Gunman_MP5";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class Gunmen_Gang
				{
					name="Gunmen Gang";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Gunman_AKS";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Gunman_CPW";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Gunman_MP5";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Gunman_AKS";
						rank="CORPORAL";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Gunman_CPW";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Gunman_MP5";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class Henchman_Group
				{
					name="Henchmen Group";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="HenchmanGroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Henchman_1";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Henchman_2";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Henchman_3";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="HenchmanGroupLeader";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Henchman_1";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="Henchman_2";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="Henchman_3";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class Henchman_Garrison
				{
					name="Henchmen Garrison";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="HenchmanGroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Henchman_1";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Henchman_2";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Henchman_3";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="HenchmanGroupLeader";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Henchman_1";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="Henchman_2";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="Henchman_3";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="HenchmanGroupLeader";
						rank="CORPORAL";
						position[]={17,0,0};
					};
					class Unit9
					{
						side=2;
						vehicle="Henchman_1";
						rank="PRIVATE";
						position[]={19,0,0};
					};
					class Unit10
					{
						side=2;
						vehicle="Henchman_2";
						rank="PRIVATE";
						position[]={21,0,0};
					};
					class Unit11
					{
						side=2;
						vehicle="Henchman_3";
						rank="PRIVATE";
						position[]={23,0,0};
					};
					class Unit12
					{
						side=2;
						vehicle="HenchmanGroupLeader";
						rank="CORPORAL";
						position[]={25,0,0};
					};
					class Unit13
					{
						side=2;
						vehicle="Henchman_1";
						rank="PRIVATE";
						position[]={27,0,0};
					};
					class Unit14
					{
						side=2;
						vehicle="Henchman_2";
						rank="PRIVATE";
						position[]={29,0,0};
					};
					class Unit15
					{
						side=2;
						vehicle="Henchman_3";
						rank="PRIVATE";
						position[]={31,0,0};
					};
				};
				class Hitman_Team
				{
					name="Hitman Team";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Hitman";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Hitman_Assistant";
						rank="CORPORAL";
						position[]={3,0,0};
					};
				};
			};

			name2="Militants";
			class Militants
			{
				name="Militants"
				class Militant_Cell
				{
					name="Militant Cell";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="MilitantGroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Militant_1";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Militant_3";
						rank="PRIVATE";
						position[]={0,5,0};
					};
				};
				class Militant_Squad
				{
					name="Militant Squad";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="MilitantGroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Militant_1";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Militant_2";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Militant_3";
						rank="CORPORAL";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Militant_4";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Militant_5";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="Militant_Marksman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
			};
			name3="Armed Terrorists";
			class Armed_Terrorists
			{
				name="Terrorists"
				class Terrorist_ATTeam
				{
					name="Terrorist AT Team";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Anti_Tank_Operator";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Rifleman_2";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Anti_Tank_Operator";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Terrorist_MGTeam
				{
					name="Terrorist MG Team";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Rifleman_2";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Terrorist_Team
				{
					name="Terrorist Team";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Rifleman_1";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Rifleman_2";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Rifleman_3";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class Terrorist_Squad
				{
					name="Terrorist Squad";
					faction="Jofren_Faithful";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="Grenadier";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="Rifleman_1";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="Rifleman_2";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="Anti_Tank_Operator";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="Grenadier";
						rank="SERGEANT";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="Machinegunner";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="Anti_Infantry_Operator";
						rank="CORPORAL";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="Rifleman_3";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
			};
		};
	};
};