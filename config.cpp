#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class AWTOH_UNITS
	{
		units[] =
		{	//Buhriz Movement
			"BM_Auto_Rifleman_Heavy",
			"BM_Auto_Rifleman_Standard",
			"BM_Auto_Rifleman_Light",
			"BM_AntiArmor_Heavy",
			"BM_AntiArmor_Standard",
			"BM_AntiArmor_Light",								
			"BM_AntiArmor_Disposable",
			"BM_AntiAir_Standard",
			"BM_AntiAir_Light",
			"BM_Bonesetter",
			"BM_Bomber",
			"BM_Crewman",
			"BM_Driver",
			"BM_Grenadier_Standard",
			"BM_Grenadier_Light",
			"BM_Insurgent_1",
			"BM_Insurgent_2",
			"BM_Insurgent_3",
			"BM_Insurgent_4",
			"BM_Insurgent_Affiliate",
			"BM_Insurgent_Associate",
			"BM_Iskandar_AntiArmor",
			"BM_Iskandar_Rifleman",
			"BM_Iskandar_Grenadier",
			"BM_Iskandar_Autorifleman",
			"BM_Iskandar_Sharpshooter",
			"BM_Marksman_Standard",
			"BM_Marksman_Light",
			"BM_Medic",
			"BM_Officer",
			"BM_Officer_Armed",
			"BM_Pilot",
			"BM_Rifleman_AKMS_Standard",
			"BM_Rifleman_AKMS_Light",
			"BM_Rifleman_AK74_Standard",
			"BM_Rifleman_AK74_Light",
			"BM_Sharpshooter",
			"BM_Sniper_Standard",
			"BM_Sniper_Light",
			"BM_Warlord_Heavy",
			"BM_Warlord_Standard",
			"BM_Warlord_Light",
			"BM_Offroad",
			"BM_Offroad_AT",
			"BM_Offroad_HMG",
			"BM_Static_AGS",
			"BM_Static_DShKM",
			"BM_Static_DShKM_Minitripod",
			"BM_Static_Igla",
			"BM_Static_Kornet",
			"BM_Static_Metis",
			"BM_Static_Mortar",
			"BM_Static_Mk19",
			"BM_Pickup",
			"BM_Pickup_AT",
			"BM_Pickup_HMG",
			"BM_Truck",
			"BM_Ural",
			"BM_Ural_Covered",
			"BM_Ural_AA",
			"BM_BTR60BM",
			"BM_BMP_1",
			"BM_BMP_2",
			"BM_ZSU_23_4",
			"BM_T_55A",
			"BM_T_72",
			"BM_Mi_8",
			//Buhriz Movement Non-units
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
			"Insurgent_Affiliate_Backpack",
			"Insurgent_Associate_Backpack",
			"Medic_Bag",
			
			
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
			"LCP_HQ_Commander",
			"LCP_HQ_Coordinator",
			"LCP_HQ_Officer",
			"LCP_HQ_Quartermaster",
			"LCP_HQ_Radioman",
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
			"LCP_Raider_RaidLeader",
			"LCP_Raider_Rocketeer",
			"LCP_Raider_Sniper",
			"LCP_Rebel_AntiTank",
			"LCP_Rebel_Grenadier",
			"LCP_Rebel_Machinegunner",
			"LCP_Rebel_Rifleman",
			"LCP_Rebel_SectionLeader",
			"LCP_Rebel_TeamLeader",
			"LCP_Veteran_AntiTank",
			"LCP_Veteran_Grenadier",
			"LCP_Veteran_Machinegunner",
			"LCP_Veteran_Rifleman",
			"LCP_Veteran_SectionLeader",
			"LCP_Veteran_TeamLeader",
			"LCP_Static_AGS_17",
			"LCP_Static_DShKM",
			"LCP_Static_DShKM_Low",
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
			//Leskovets Communist Party Non-units
			"LCP_Radiopack",
			"LCP_Fighterpack",
			"LCP_Gunnerpack",
			"LCP_RaiderRocketeerPack",
			"LCP_Rebel_Machinegun",
			"LCP_Rebel_RPG",
			"LCP_Veteran_Machinegun",
			"LCP_Veteran_RPG",
			
			
			//ABTM OPFOR
			"ABTM_AntiAir",
			"ABTM_AntiTank",
			"ABTM_ATGM",
			"ABTM_ATGMAssist",
			"ABTM_Autorifleman",
			"ABTM_Crewman",
			"ABTM_DMR",
			"ABTM_DMRAssist",
			"ABTM_Driver",
			"ABTM_Engineer",
			"ABTM_HeliCrew",
			"ABTM_HeliPilot",
			"ABTM_Machinegunner",
			"ABTM_MachinegunnerAssist",
			"ABTM_Pilot",
			"ABTM_Radioman",
			"ABTM_Rifleman",
			"ABTM_RiflemanRPG1",
			"ABTM_RiflemanRPG2",
			"ABTM_Sentry1",
			"ABTM_Sentry2",
			"ABTM_SquadLeader",
			"ABTM_TeamLeader",
			"ABTM_Static_AALauncher",
			"ABTM_Static_AARadar",
			"ABTM_Static_AGS17",
			"ABTM_Static_D30ATGun",
			"ABTM_Static_DShKM_High",
			"ABTM_Static_DShKM_Low",
			"ABTM_Static_Kornet",
			"ABTM_Static_M2ShieldHigh",
			"ABTM_Static_M2ShieldLow",
			"ABTM_Static_Metis",
			"ABTM_Static_Mortar",
			"ABTM_Static_Radar",
			"ABTM_Static_SAM",
			"ABTM_Static_SAMIR",
			"ABTM_Static_Searchlight",
			"ATBM_Static_SpottingScope",
			"ABTM_Static_TOW",
			"ABTM_Static_ZU23",
			"ABTM_Vehicle_AMX13",
			"ABTM_Vehicle_AMX13AA",
			"ABTM_Vehicle_BRDM2G",
			"ABTM_Vehicle_BM21",
			"ABTM_Vehicle_BTR40",
			"ABTM_Vehicle_BTR40DShKM",
			"ABTM_Vehicle_BTR60",
			"ABTM_Vehicle_M113",
			"ABTM_Vehicle_M151",
			"ABTM_Vehicle_M151HMG",
			"ABTM_Vehicle_M163PIVADS",
			"ABTM_Vehicle_M1A1",
			"ABTM_Vehicle_M1A3",
			"ABTM_Vehicle_M939",
			"ABTM_Vehicle_M939Covered",
			"ABTM_Vehicle_T3485M2",
			"ABTM_Vehicle_T55A",
			"ABTM_Vehicle_T64F1",
			"ABTM_Vehicle_T72F2A1",
			"ABTM_Vehicle_T90F3",
			"ABTM_Vehicle_UAZ452",
			"ABTM_Vehicle_ZSU232",
			"ABTM_Vehicle_ZSU234",
			"ABTM_Vehicle_ZSU234Afghanski",
			
			/// SECTIONED OFF INTO REDLAND AGGRESSORS WOODLAND ///
			
			"ABTM_AntiAirWDL",
			"ABTM_AntiTankWDL",
			"ABTM_ATGMWDL",
			"ABTM_ATGMAssistWDL",
			"ABTM_AutoriflemanWDL",
			"ABTM_CrewmanWDL",
			"ABTM_DMRWDL",
			"ABTM_DMRAssistWDL",
			"ABTM_DriverWDL",
			"ABTM_EngineerWDL",
			"ABTM_MachinegunnerWDL",
			"ABTM_MachinegunnerAssistWDL",
			"ABTM_RadiomanWDL",
			"ABTM_RiflemanWDL",
			"ABTM_RiflemanRPG1WDL",
			"ABTM_RiflemanRPG2WDL",
			"ABTM_Sentry1WDL",
			"ABTM_Sentry2WDL",
			"ABTM_SquadLeaderWDL",
			"ABTM_TeamLeaderWDL",
			"ABTM_Static_AALauncherWDL",
			"ABTM_Static_AARadarWDL",
			"ABTM_Static_AGS17WDL",
			"ABTM_Static_D30ATGunWDL",
			"ABTM_Static_DShKM_HighWDL",
			"ABTM_Static_DShKM_LowWDL",
			"ABTM_Static_KornetWDL",
			"ABTM_Static_M2ShieldHighWDL",
			"ABTM_Static_M2ShieldLowWDL",
			"ABTM_Static_MetisWDL",
			"ABTM_Static_MortarWDL",
			"ABTM_Static_RadarWDL",
			"ABTM_Static_SAMWDL",
			"ABTM_Static_SAMIRWDL",
			"ABTM_Static_SearchlightWDL",
			"ATBM_Static_SpottingScopeWDL",
			"ABTM_Static_TOWWDL",
			"ABTM_Static_ZU23WDL",
			"ABTM_Vehicle_AMX13WDL",
			"ABTM_Vehicle_AMX13AAWDL",
			"ABTM_Vehicle_BRDM2GWDL",
			"ABTM_Vehicle_BM21WDL",
			"ABTM_Vehicle_BTR40WDL",
			"ABTM_Vehicle_BTR40DShKMWDL",
			"ABTM_Vehicle_BTR60WDL",
			"ABTM_Vehicle_M113WDL",
			"ABTM_Vehicle_M151WDL",
			"ABTM_Vehicle_M151HMGWDL",
			"ABTM_Vehicle_M163PIVADSWDL",
			"ABTM_Vehicle_M1A1WDL",
			"ABTM_Vehicle_M1A3WDL",
			"ABTM_Vehicle_M939WDL",
			"ABTM_Vehicle_M939CoveredWDL",
			"ABTM_Vehicle_T3485M2WDL",
			"ABTM_Vehicle_T55AWDL",
			"ABTM_Vehicle_T64F1WDL",
			"ABTM_Vehicle_T72F2A1WDL",
			"ABTM_Vehicle_T90F3WDL",
			"ABTM_Vehicle_UAZ452WDL",
			"ABTM_Vehicle_ZSU232WDL",
			"ABTM_Vehicle_ZSU234WDL",
			"ABTM_Vehicle_ZSU234AfghanskiWDL",
			
			/// SECTIONED OFF INTO REDLAND AGGRESSORS COMMAND ///
			
			"ABTMCommand_Driver",
			"ABTMCommand_FieldCommander1",
			"ABTMCommand_FieldCommander2",
			"ABTMCommand_FieldCommander3",
			"ABTMCommand_FieldCommander4",
			"ABTMCommand_RTOInterceptor",
			"ABTMCommand_RTOJammer",
			"ABTMCommand_RTORadio",
			"ABTMCommand_SecurityBodyguardMachinegunner",
			"ABTMCommand_SecurityBodyguardRifle",
			"ABTMCommand_SecurityBodyguardSMG",
			"ABTMCommand_SecurityGuard",
			"ABTMCommand_SecurityPatrolman",
			"ABTMCommand_SecuritySentry",
			"ABTMCommand_Vehicle_BRDM2G2C",
			"ABTMCommand_Vehicle_M151",
			"ABTMCommand_Vehicle_M939",
			"ABTMCommand_Vehicle_M939Ammo",
			"ABTMCommand_Vehicle_M939Cargo",
			"ABTMCommand_Vehicle_M939Covered",
			"ABTMCommand_Vehicle_M939Fuel",
			"ABTMCommand_Vehicle_M939Repair",
			"ABTMCommand_Vehicle_OffroadComms",
			"ABTMCommand_Vehicle_OffroadCovered",
			"ABTMCommand_Vehicle_UAZ",
			"ABTMCommand_Vehicle_UAZCovered",
			
			/// SECTIONED OFF INTO REDLAND AGGRESSORS REAR LINES ///
			
			"ABTMGarrison_Pistol1",
			"ABTMGarrison_Pistol2",
			"ABTMGarrison_Pistol3",
			"ABTMGarrison_SMG1",
			"ABTMGarrison_SMG2",
			"ABTMGarrison_SMG3",
			"ABTMGarrison_Static_Searchlight",
			"ABTMGarrison_Vehicle_OffroadComms",
			"ABTMGarrison_Vehicle_OffroadCovered",
			"ABTMGarrison_Vehicle_UAZ",
			"ABTMGarrison_Vehicle_UAZCovered",
			"ABTMGarrison_Vehicle_UAZ452",
			
			/// SECTIONED OFF INTO REDLAND AGGRESSORS GUERILLAS ///
			
			"ABTMGuerilla_Advisor1",
			"ABTMGuerilla_Advisor2",
			"ABTMGuerilla_Advisor3",
			"ABTMGuerilla_BasePersonnel",
			"ABTMGuerilla_BasePersonnelArmed",
			"ABTMGuerilla_BasePersonnelSentry",
			"ABTMGuerilla_Commissar",
			"ABTMGuerilla_Conscript1",
			"ABTMGuerilla_Conscript2",
			"ABTMGuerilla_Conscript3",
			"ABTMGuerilla_Conscript4",
			"ABTMGuerilla_Conscript5",
			"ABTMGuerilla_Conscript6",
			"ABTMGuerilla_Coordinator",
			"ABTMGuerilla_Crewman",
			"ABTMGuerilla_Driver",
			"ABTMGuerilla_FighterAntiTank",
			"ABTMGuerilla_FighterGunCrew",
			"ABTMGuerilla_FighterMachineGunner",
			"ABTMGuerilla_FighterParamilitaryAKMS",
			"ABTMGuerilla_FighterParamilitaryBren",
			"ABTMGuerilla_FighterParamilitaryM14",
			"ABTMGuerilla_FighterParamilitarySKS",
			"ABTMGuerilla_FighterParamilitarySterling",
			"ABTMGuerilla_FighterSniper",
			"ABTMGuerilla_FighterSquadLeader",
			"ABTMGuerilla_Militia1",
			"ABTMGuerilla_Militia2",
			"ABTMGuerilla_Militia3",
			"ABTMGuerilla_NightRaiderAssaultLeader",
			"ABTMGuerilla_NightRaider_M16",
			"ABTMGuerilla_NightRaider_M3A1",
			"ABTMGuerilla_NightRaider_Romat",
			"ABTMGuerilla_NightRaider_Type56",
			"ABTMGuerilla_Officer",
			"ABTMGuerilla_OfficerBodyguard",
			"ABTMGuerilla_OfficerForeign",
			"ABTMGuerilla_ReconM79",
			"ABTMGuerilla_ReconRadio",
			"ABTMGuerilla_ReconRunner",
			"ABTMGuerilla_ReconSniper",
			"ABTMGuerilla_ReconSpotter",
			"ABTMGuerilla_SMG1",
			"ABTMGuerilla_SMG2",
			"ABTMGuerilla_SMG3",
			"ABTMGuerilla_SuicideBomber",
			"ABTMGuerilla_SuicideGrenadier",
			"ABTMGuerilla_Static_D30ATGun",
			"ABTMGuerilla_Static_M2ShieldHigh",
			"ABTMGuerilla_Static_M2ShieldHigh",
			"ABTMGuerilla_Static_M2ShieldLow",
			"ABTMGuerilla_Vehicle_AMX13",
			"ABTMGuerilla_Vehicle_BTR40",
			"ABTMGuerilla_Vehicle_Hilux",
			"ABTMGuerilla_Vehicle_HiluxAGS17",
			"ABTMGuerilla_Vehicle_HiluxAT",
			"ABTMGuerilla_Vehicle_HiluxATGM",
			"ABTMGuerilla_Vehicle_HiluxHMG",
			"ABTMGuerilla_Vehicle_HiluxUB32",
			"ABTMGuerilla_Vehicle_HiluxZSU232",
			"ABTMGuerilla_Vehicle_Pickup",
			"ABTMGuerilla_Vehicle_PickupHMG",
			"ABTMGuerilla_Vehicle_T3485M",
			"ABTMGuerilla_Vehicle_T55A",
			
			/// SECTIONED OFF INTO REDLAND AGGRESSORS SF ///
			
			"ABTMSFLight_AntiTank",
			"ABTMSFLight_Machinegunner",
			"ABTMSFLight_Radioman",
			"ABTMSFLight_Recon",
			"ABTMSFLight_Rifleman",
			"ABTMSFLight_Specialist",
			"ABTMSFLight_TeamLeader",		
			"ABTMSF_AntiTank",
			"ABTMSF_Autorifleman",
			"ABTMSF_Breacher",
			"ABTMSF_GroupLeader",
			"ABTMSF_Operator",
			"ABTMSF_Razvedka",
			"ABTMSF_RTO",
			
			/// SECTIONED OFF INTO REDLAND AGGRESSORS Airforce ///
			
			"ABTM_VehicleAir_A10",
			"ABTM_VehicleAir_A10ACE",
			"ABTM_VehicleAir_A7Corsair",
			"ABTM_VehicleAir_A7CorsairACE",
			"ABTM_VehicleAir_AH1",
			"ABTM_VehicleAir_AH64",
			"ABTM_VehicleAir_C47",
			"ABTM_VehicleAir_CH47",
			"ABTM_VehicleAir_F4Phantom",
			"ABTM_VehicleAir_F4PhantomACE",
			"ABTM_VehicleAir_JAS39Gripen",
			"ABTM_VehicleAir_JAS39GripenACE",
			"ABTM_VehicleAir_Mi_24",
			"ABTM_VehicleAir_Mi_8",
			"ABTM_VehicleAir_Mi_8MTV",
			"ABTM_VehicleAir_Mirage2000",
			"ABTM_VehicleAir_Mirage2000ACE",
			"ABTM_VehicleAir_UH_1",
			"ABTM_VehicleAir_UH_60",
			
			//ABTM OPFOR Non-units
						
			"ABTM_Command_Jammer",
			"ABTM_Command_RTO",
			"ABTM_Command_RTOInterceptor",
			"ABTM_Guerilla_AT",
			"ABTM_Guerilla_ReconM79Bag",
			"ABTM_Main_ARAmmoBag",
			"ABTM_Main_ARAmmoBagWDL",
			"ABTM_Main_ATAmmoBag",
			"ABTM_Main_ATAmmoBagWDL",
			"ABTM_Main_ATGMAmmoBag",
			"ABTM_Main_ATGMAmmoBagWDL",
			"ABTM_Main_MachinegunnerAmmoBag",
			"ABTM_Main_MachinegunnerAmmoBagWDL",
			"ABTM_Main_Radiopack",
			"ABTM_Main_RadiopackWDL",
			"ABTM_Misc_Kit",
			"ABTM_Misc_RPGs1",
			"ABTM_Misc_RPGs2",
			"ABTM_SF_Backpack",
			
			
			//Fulguda Army
			"FulgudaCamo_AntiTank",
			"FulgudaCamo_Machinegunner",
			"FulgudaCamo_Marksman",
			"FulgudaCamo_Rifleman",
			"FulgudaCamo_SquadLeader",
			"FulgudaCamo_TeamLeader",
			"FulgudaCamo_",
			"FulgudaHQ_Bodyguard",
			"FulgudaHQ_Commander",
			"FulgudaHQ_CommanderCompany",
			"FulgudaHQ_CommanderPlatoon",
			"FulgudaHQ_Lieutenant",
			"FulgudaHQ_Major",
			"FulgudaHQ_Officer",
			"FulgudaHQ_Radioman",
			"FulgudaHQ_SecurityRifle",
			"FulgudaHQ_SecurityShotgunner",
			"FulgudaHQ_SecuritySMG",
			"FulgudaHQ_Sergeant",
			"FulgudaHQ_",
			"FulgudaNormal_AntiTank",
			"FulgudaNormal_Crewman",
			"FulgudaNormal_HeliCrew",
			"FulgudaNormal_HeliPilot",
			"FulgudaNormal_Machinegunner",
			"FulgudaNormal_Marksman",
			"FulgudaNormal_Pilot",
			"FulgudaNormal_Rifleman",
			"FulgudaNormal_SquadLeader",
			"FulgudaNormal_TeamLeader",
			"FulgudaNormal_",
			"FulgudaSF_AntiAir",
			"FulgudaSF_AntiTank",
			"FulgudaSF_AntiTankHeavy",
			"FulgudaSF_Autorifleman",
			"FulgudaSF_Breacher1",
			"FulgudaSF_Breacher2",
			"FulgudaSF_CQC",
			"FulgudaSF_CQCGrenadier",
			"FulgudaSF_Gunner",
			"FulgudaSF_Operator",
			"FulgudaSF_SquadLeader",
			"FulgudaSFRecee_FireCoordinator",
			"FulgudaSFRecee_JTAC",
			"FulgudaSFRecee_RTO",
			"FulgudaSFRecee_Shooter",
			"FulgudaSFRecee_Spotter",
			"FulgudaSpecialPurpose_Advisor",
			"FulgudaSpecialPurpose_Overseer",
			"FulgudaSpecialPurpose_Overseer",
			"FulgudaSpecialPurpose_Operator",
			"FulgudaSpecialPurpose_SectionLeader",
			"FulgudaSpecialPurposeCBRN_Advisor",
			"FulgudaSpecialPurposeCBRN_Overseer",
			"FulgudaSpecialPurposeCBRN_Overseer",
			"FulgudaSpecialPurposeCBRN_Operator",
			"FulgudaSpecialPurposeCBRN_SectionLeader",
			
			
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
			"ADFX02",
			"ACE_BLACKWASP",
			"ACE_F16C",
			"ACE_F35B",
			"ACE_F4PHANTOM",
			"ACE_HARRIER",
			"ACE_MIRAGE2000",
			"ACE_SHIKRA",
			"FICTIONAL_F_12H",
			"FICTIONAL_F_19",
			"FICTIONAL_F_5G",
			"FICTIONAL_MIG_21G",
			"FICTIONAL_MIG_24A",
			"FICTIONAL_SU_23",
			"JAMMED_A7CORSAIR",
			"JAMMED_A10",
			"JAMMED_AH64D",
			"JAMMED_BLACKWASP",
			"JAMMED_BM21",
			"JAMMED_BMP1",
			"JAMMED_BMP2",
			"JAMMED_BMP3",
			"JAMMED_BTR60",
			"JAMMED_BTR80A",
			"JAMMED_BTR90",
			"JAMMED_C130",
			"JAMMED_CH47",
			"JAMMED_F16C",
			"JAMMED_F35B",
			"JAMMED_F4PHANTOM",
			"JAMMED_HUMVEEDESERT",
			"JAMMED_HUMVEEDESERTM2",
			"JAMMED_HUMVEEWOODLAND",
			"JAMMED_HUMVEEWOODLANDM2",
			"JAMMED_KA50",
			"JAMMED_KA52",
			"JAMMED_KAMAZ",
			"JAMMED_KAMAZCOVERED",
			"JAMMED_M1A1",
			"JAMMED_M1A2",
			"JAMMED_M2A2",
			"JAMMED_M2A3",
			"JAMMED_MI24P",
			"JAMMED_MI24V",
			"JAMMED_MI8AMT",
			"JAMMED_MI8MTV3",
			"JAMMED_MIRAGE2000",
			"JAMMED_MTVRDESERT",
			"JAMMED_MTVRWOODLAND",
			"JAMMED_OFFROAD",
			"JAMMED_OFFROADAT",
			"JAMMED_OFFROADHMG",
			"JAMMED_SAMLAUNCHER",
			"JAMMED_SHIKRA",
			"JAMMED_SUV",
			"JAMMED_T72",
			"JAMMED_T90A",
			"JAMMED_VODNIK",
			"JAMMED_VODNIKPKM",
			"JAMMED_VODNIKAGS",
			"JAMMED_VODNIKBPPU",
			"JAMMED_VODNIKKPVT",
			"JAMMED_VODNIKMEDEVAC",
			"JAMMED_UAZ",
			"JAMMED_UAZCOVERED",
			"JAMMED_UH1Y",
			"JAMMED_UH1YGUNSHIP",
			"JAMMED_MH60L",
			"JAMMED_MH60LDAP",
			"JAMMED_URAL",
			"JAMMED_URALCOVERED",
			"JAMMED_ZSU_23_4",
			"JAMMED_ZU_23_2"
			
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
	class ABTM_Redland_Aggressors
	{
		displayName="Redland Aggressors";
		priority=2;
		side=2;
	};
	class ABTM_Redland_Aggressors_Airforce
	{
		displayName="Redland Aggressors (Airforce)";
		priority=2;
		side=2;
	};
	class ABTM_Redland_Aggressors_Command
	{
		displayName="Redland Aggressors (Command)";
		priority=2;
		side=2;
	};
	class ABTM_Redland_Aggressors_Garrison
	{
		displayName="Redland Aggressors (Garrison)";
		priority=2;
		side=2;
	};
	class ABTM_Redland_Aggressors_Guerillas
	{
		displayName="Redland Aggressors (Guerillas)";
		priority=2;
		side=2;
	};
	class ABTM_Redland_Aggressors_SF
	{
		displayName="Redland Aggressors (Special Forces)";
		priority=2;
		side=2;
	};
	class ABTM_Redland_Aggressors_Woodland
	{
		displayName="Redland Aggressors (Woodland)";
		priority=2;
		side=2;
	};
	class Fulguda_Army
	{
		displayName="Fulguda Army";
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
	class ABTM_Infantry
	{
		displayName="Infantry";
		priority=1;
	};
	class ABTM_Guerillas
	{
		displayName="Guerillas";
		priority=1;
	};
	class ABTM_Garrison
	{
		displayName="Garrison";
		priority=1;
	};
	class ABTM_SF
	{
		displayName="Special Forces";
		priority=1;
	};
	class ABTM_Cars
	{
		displayName="Vehicles";
		priority=2;
	};
	class ABTM_Armour
	{
		displayName="Armour";
		priority=3;
	};
	class ABTM_Aircraft
	{
		displayName="Helicopters";
		priority=3;
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
	class CUP_srifle_M14;
	class CUP_arifle_M16A2;
	class CUP_arifle_M16A4_Base;
	class CUP_arifle_M4A1_MOE_wdl;
	class CFP_EBR_wdl_F;
	class ADFU_minimi;
	class CUP_smg_MP5A5;
	class CUP_arifle_M4A1_standard_short_wdl;
	class CUP_hgun_Colt1911;
	class hlc_pistol_P229R_Elite;
	class CUP_arifle_M4A3_black;
	class CUP_arifle_M4A1_BUIS_GL;
	class CUP_srifle_Mk12SPR;
	class CUP_lmg_Mk48_nohg;
	class SMG_03C_TR_camo;
	class CUP_arifle_AK47;
	class CUP_arifle_M16A1E1;
	class CUP_smg_M3A1_blk;
	class CUP_arifle_IMI_Romat;
	class CUP_arifle_Mk16_CQC_FG_black;
	class CUP_srifle_LeeEnfield;
	class CUP_arifle_TYPE_56_2_Early;
	class CUP_hgun_Browning_HP;
	class CUP_srifle_ksvk;
	class hgun_Pistol_heavy_01_green_F;
	
	//Define Weapons with attachments
  	class SVD_Scoped: CUP_srifle_SVD
	{
		displayName = "Buhriz SVD Scoped";
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
		displayName = "Buhriz Mosin Nagant Scoped";
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
		displayName = "Buhriz M4A1 Modded";
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
		displayName = "FN TAR-21 w/ EOTech";
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
		displayName = "FN Silenced CPW w/ T-1";
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
		displayName = "FN CPW w/ T-1";
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
		displayName = "FN G3A3 Magnified Scoped";
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
		displayName = "FN HK416 Modded";
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
	class SVD_ScopedMagnified: CUP_srifle_SVD
	{
		displayName = "SVD Magnified Scoped";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_pso_3_open";
			};
		};
	};
	class ABTM_M14_ScopedMagnified: CUP_srifle_M14
	{
		displayName = "RA M14 Falcon";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_lrps";
			};
		};
	};
	class ABTM_Minimi: ADFU_minimi
	{
		displayName = "RA Minimi Enforcer";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "ACE_optic_Hamr_PIP";
			};
		};
	};
	class ABTM_Guerilla_AKN: CUP_arifle_AK47
	{
		displayName = "RA Guerilla AKN 'Tack'";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_flashlight";
			};
		};
	};
	class ABTM_Guerilla_LeeEnfield: CUP_srifle_LeeEnfield
	{
		displayName = "RA Guerilla Lee Enfield 'Volk'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_no23mk2";
			};
		};
	};
	class ABTM_Guerilla_KSVK: CUP_srifle_ksvk
	{
		displayName = "RA Guerilla KSVK 'Salt'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_pso_3_open";
			};
		};
	};
	class ABTM_Guerilla_NR_M16A1E1: CUP_arifle_M16A1E1
	{
		displayName = "RA Guerilla M16A1E1 'Coval'";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m";
			};
		};
	};
	class ABTM_Guerilla_NR_M3A1: CUP_smg_M3A1_blk
	{
		displayName = "RA Guerilla M3A1 'Theo'";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "cup_muzzle_snds_m3a1_blk";
			};
		};
	};
	class ABTM_Guerilla_NR_Romat: CUP_arifle_IMI_Romat
	{
		displayName = "RA Guerilla Romat 'Cade'";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
		};
	};
	class ABTM_Guerilla_NR_Type56: CUP_arifle_TYPE_56_2_Early
	{
		displayName = "RA Guerilla Type 56-2 'Rulco'";
		class LinkedItems
		{	
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_Bizon";
			};
		};
	};
	class ABTM_Guerilla_NR_Mk16: CUP_arifle_Mk16_CQC_FG_black
	{
		displayName = "RA Guerilla Mk16 'Dauz'";
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
				item = "muzzle_snds_m";
			};
		};
	};
	class ABTM_Guerilla_NR_BrowningHP: CUP_hgun_Browning_HP
	{
		displayName = "RA Guerilla Browning HP 'Venture'";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "cup_muzzle_snds_m9";
			};
		};
	};
	class ABTM_Security_M16A2: CUP_arifle_M16A2
	{
		displayName = "RA M16A2 'Patrol'";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_flashlight";
			};
		};
	};
	class ABTM_Security_M16A4: CUP_arifle_M16A4_Base
	{
		displayName = "RA M16A4 'Defender'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_mars";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_anpeq_15_flashlight_black_l";
			};
		};
	};
	class ABTM_Security_Mk48: CUP_lmg_Mk48_nohg
	{
		displayName = "RA Mk 48 Mod 2 'Hammerhead'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_CompM2_low";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_anpeq_15_flashlight_black_l";
			};
		};
	};
	class ABTM_Security_P90: SMG_03C_TR_camo
	{
		displayName = "RA P90 'Striker'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Yorris";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_anpeq_15_flashlight_black_l";
			};
		};
	};
	class ABTM_WDL_LIGHT_FNX: hgun_Pistol_heavy_01_green_F
	{
		displayName = "RA FNX-45 'Kemko'";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_octane45";
			};
		};
	};
	class ABTM_WDL_LIGHT_M4A1: CUP_arifle_M4A1_MOE_wdl
	{
		displayName = "RA M4A1 MOE 'Freedom'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_compm2_woodland";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_anpeq_15_od";
			};
		};
	};
	class ABTM_WDL_LIGHT_M14: CFP_EBR_wdl_F
	{
		displayName = "RA M14 MOD 0 'Gazelle'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_elcan_specterdr_od";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b_lush_f";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_anpeq_15_od";
			};
		};
	};
	class ABTM_WDL_LIGHT_MP5: CUP_smg_MP5A5
	{
		displayName = "RA MP5A5 'Kite'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_holoblack";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_l";
			};
		};
	};
	class ABTM_WDL_LIGHT_M4A1TL: CUP_arifle_M4A1_standard_short_wdl
	{
		displayName = "RA M4A1 'Liberty'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_mars_od";
			};
		};
	};
	class ABTM_SF_P229R: hlc_pistol_P229R_Elite
	{
		displayName = "RA P229R 'Contact'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "hlc_optic228_docter_cadex";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_octane9";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_cz_m3x";
			};
		};
	};
	class ABTM_SF_M4A3: CUP_arifle_M4A3_black
	{
		displayName = "RA M4A3 'Aggressor'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_compm2_low";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_anpeq_15_flashlight_black_l";
			};
		};
	};
	class ABTM_SF_M4A3GL: CUP_arifle_M4A1_BUIS_GL
	{
		displayName = "RA M4A3 'Aggressor' w/ M203";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_compm2_low";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "cup_acc_anpeq_15_flashlight_black_l";
			};
		};
	};
	class ABTM_SF_Mk12SPR: CUP_srifle_Mk12SPR
	{
		displayName = "RA Mk 12 'Sparrow'";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_sb_11_4x20_pm";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "cup_muzzle_snds_mk12";
			};
		};
	};
};
class CfgVehicles
{
	// Soldiers
	class B_Pilot_F;
	class B_Soldier_F;
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
	class I_officer_F;
	class I_helipilot_F;
	class I_pilot_F;
	class I_Fighter_Pilot_F;
	class I_UAV_AI_F;
	
	// Backpacks
	class CFP_AssaultPack_M81;
	class CFP_RPGPack_Grey;
	class CFP_RPGPack_Khaki;
	class CFP_RPGPack_TropicGreen;
	class CUP_B_AlicePack_Bedroll;
	class CUP_B_CivPack_WDL;
	class CUP_B_SLA_Medicbag;
	class B_AssaultPack_rgr;
	class B_FieldPack_khk;
	class B_FieldPack_oli;
	class B_Kitbag_rgr;
	class B_LegStrapBag_coyote_F;
	class B_LegStrapBag_black_F;
	class B_RadioBag_01_black_F;
	class B_TacticalPack;
	class B_TacticalPack_blk;
	class B_TacticalPack_oli;
	class milgp_bp_Tomahawk_rgr;
	class sfp_ra180;
	class TFAR_rt1523g_black;
	class B_RadioBag_01_oucamo_F;
	class sfp_backpack_grg_loader;
	class sfp_stridssele_backpack_grg;
	class B_LegStrapBag_olive_F;
	class cwr3_o_backpack_harness_roll;
	class B_AssaultPack_blk;
	class B_RadioBag_01_eaf_F;
	class SP_Carryall_Black;
	class B_Carryall_oli;
	class cwr3_o_backpack_rpg7;
	class CUP_B_IDF_Backpack;
	class TFAR_rt1523g_big_bwmod;
	class CUP_B_AssaultPack_Black;
	
	// Static Weapons
	class CUP_O_DSHKM_ChDKZ;
	class CUP_O_DSHkM_MiniTriPod_ChDKZ;
	class CUP_O_2b14_82mm_ChDKZ;
	class CUP_B_MK19_TriPod_US;
	class CUP_B_AGS_ACR;
	class CUP_B_Igla_AA_pod_CDF;
	class CUP_B_TOW2_TriPod_USMC;
	class CUP_O_Kornet_RU;
	class CUP_O_Metis_RU;
	class CUP_O_ZU23_RU;
	class CUP_O_D30_AT_RU;
	class I_HMG_02_F;
	class I_HMG_02_high_F;
	class B_AAA_System_01_F;
	class B_SAM_System_01_F;
	class B_SAM_System_02_F;
	class I_E_SAM_System_03_F;
	class I_E_Radar_System_01_F;
	class CUP_B_SearchLight_static_ACR;
	class ffaa_mk22;
	
	// Vehicles
	
	
	
	//// Wheeled
	class CUP_O_BM21_RU;
	class CUP_O_BM21_SLA;
	class CUP_C_LR_Transport_CTK;
	class CUP_B_LR_MG_GB_W;
	class CUP_O_LR_SPG9_TKA;
	class C_Van_01_transport_F;
	class C_Offroad_01_F;
	class I_G_Offroad_01_AT_F;
	class I_G_Offroad_01_armed_F;
	class CUP_O_Ural_Open_RU;
	class CUP_O_Ural_RU;
	class CFP_O_NKARMY_BTR_60_01;
	class CFP_O_NKARMY_BTR_80A_01;
	class CUP_O_BTR60_RU;
	class CUP_O_BTR80A_CAMO_RU;
	class CUP_O_BTR90_RU;
	class CUP_O_Datsun_PK_Random;
	class CUP_B_BRDM2_CDF;
	class CUP_B_BRDM2_ATGM_CDF;
	class CUP_O_Ural_ZU23_RU;
	class CUP_O_Kamaz_RU;
	class CUP_O_Kamaz_Open_RU;
	class CUP_O_UAZ_Unarmed_RU;
	class CUP_O_UAZ_Open_RU;
	class CUP_O_GAZ_Vodnik_Unarmed_RU;
	class CUP_O_GAZ_Vodnik_PK_RU;
	class CUP_O_GAZ_Vodnik_AGS_RU;
	class CUP_O_GAZ_Vodnik_BPPU_RU;
	class CUP_O_GAZ_Vodnik_KPVT_RU;
	class CUP_O_GAZ_Vodnik_MedEvac_RU;
	class CUP_O_SUV_TKA;
	class CFP_B_USARMY_2003_MTVR_DES_01;
	class CFP_B_USARMY_2003_MTVR_WDL_01;
	class CUP_B_HMMWV_M2_USA;
	class CUP_B_HMMWV_Unarmed_USA;
	class CUP_B_USARMY_HMMWV_M2_USA;
	class CUP_B_USARMY_HMMWV_Unarmed_USA;
	class CUP_I_V3S_Open_TKG;
	class CUP_I_V3S_Covered_TKG;
	class cwr3_b_m939;
	class cwr3_b_m939_reammo;
	class cwr3_b_m939_empty;
	class cwr3_b_m939_refuel;
	class cwr3_b_m939_open;
	class cwr3_b_m939_repair;
	class cwr3_o_mtlb_sa13;
	class cwr3_o_uaz452;
	class CFP_B_NAARMY_Land_Rover_MG_01;
	class CFP_O_SSREBELS_Land_Rover_SPG_01;
	class CFP_O_SSREBELS_Land_Rover_01;
	class CUP_O_Hilux_unarmed_OPF_G_F;
	class CUP_O_Hilux_AGS30_OPF_G_F;
	class CUP_O_Hilux_M2_OPF_G_F;
	class CUP_O_Hilux_metis_OPF_G_F;
	class CUP_O_Hilux_SPG9_OPF_G_F;
	class CUP_O_Hilux_UB32_OPF_G_F;
	class CUP_O_Hilux_zu23_OPF_G_F;
	class ACM_ARM_V_BTR40;
	class ACM_ARM_V_BTR40_Unarmed;
	class CUP_I_BRDM2_NAPA;
	class CUP_I_BRDM2_ATGM_NAPA;
	class CUP_I_BRDM2_HQ_NAPA;
	class cwr3_b_m151_m2;
	class cwr3_b_m151;
	class C_Offroad_01_covered_F;
	class C_Offroad_01_comms_F;

	//// Tracked
	class clv_Amx13;
	class clv_Dragon;
	class CUP_B_M113A1_olive_USA;
	class CUP_B_M163_Vulcan_USA;
	class CFP_O_TBAN_BMP_1_01;
	class CFP_O_TBAN_BMP_2_01;
	class CUP_I_BMP1_TK_GUE;
	class CUP_I_BMP2_NAPA;
	class CUP_B_ZSU23_Afghan_CDF;
	class CUP_B_M1A1FEP_OD_USMC;
	class CUP_B_M1A2C_TUSK_II_OD_US_Army;
	class CUP_B_M1A1_NATO_T;
	class CUP_B_M1A_TUSK_NATO_T;
	class CUP_B_M2Bradley_NATO_T;
	class CUP_B_M2A3Bradley_NATO_T;
	class CUP_O_BMP3_RU;
	class CUP_O_ZSU23_SLA;
	class CUP_O_ZSU23_Afghan_SLA;
	class CUP_I_T34_NAPA;
	class CUP_O_T55_SLA;
	class CFP_O_TBAN_T55_01;
	class CUP_I_T72_NAPA;
	class CFP_O_HEZBOLLAH_T72_01;
	class CUP_O_T90_RU;
	class CFP_B_UGARMY_T90_01;
	class cwr3_o_t64b;
	class cwr3_o_t64bv;
	//// Boats
	class cwr3_b_boat;
	class CUP_O_LCVP_SLA;
	class sfp_rbb_norrkoping;
	class sfp_strb90;
	//// Aircraft
	class CUP_O_Mi8_CHDKZ;
	class O_Plane_Fighter_02_F;
	class B_Plane_Fighter_01_F;
	class F16C_BLU;
	class CUP_B_F35B_BAF;
	class F4E_BLU;
	class A7BLU;
	class CUP_B_GR9_DYN_GB;
	class M2000C_BLU;
	class CUP_B_C130J_USMC;
	class CUP_O_Ka52_RU;
	class CUP_O_Ka50_DL_RU;
	class CUP_B_C47_USA;
	class CUP_B_CH47F_USA;
	class CUP_B_AH1Z_Dynamic_USMC;
	class CUP_B_AH64_DL_USA;
	class CUP_B_AH64D_DL_USA;
	class CUP_O_Mi8_RU;
	class CUP_O_Mi8AMT_RU;
	class CUP_O_Mi24_P_Dynamic_RU;
	class CUP_O_Mi24_V_Dynamic_RU;
	class CUP_B_A10_DYN_USA;
	class CUP_B_MH60L_DAP_4x_USN;
	class CUP_B_UH60S_USN;
	class CUP_B_UH1Y_Gunship_Dynamic_USMC;
	class CUP_B_UH1Y_UNA_USMC;
	class CUP_O_SU34_RU;
	class CUP_O_Su25_Dyn_RU;
	class CUP_O_L39_TK;
	class CUP_B_AV8B_DYN_USMC;
	class I_Plane_Fighter_04_F;
	
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
		displayName="BM_Medic Bag";
		class TransportMagazines
		{
			class Medikit
			{
                name = "Medikit";
                count = 3;
            };
		};
	};
	class Bomber_Bag: B_AssaultPack_rgr	
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
			class Medikit
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
			class Medikit
			{
                name = "Medikit";
                count = 1;
            };
		};
	};
	
	////////// Leskovets Communist Party Backpacks //////////
	
	class LCP_Radiopack: B_RadioBag_01_black_F
	{
		scope=1;
		displayName="LCP Radiopack";
		class TransportMagazines
		{
			class SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=2;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
		};
	};
	class LCP_Fighterpack: CUP_B_AlicePack_Bedroll
	{
		scope=1;
		displayName="Fighter's Pack";
		class TransportMagazines
		{
			class ACE_Chemlight_Shield
			{
				magazine="ACE_Chemlight_Shield";
				count=1;
			};
			class Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class ACE_Chemlight_White
			{
				magazine="ACE_Chemlight_White";
				count=2;
			};
			class ACE_Humanitarian_Ration
			{
				magazine="ACE_Humanitarian_Ration";
				count=5;
			};
			class ACE_WaterBottle
			{
				magazine="ACE_WaterBottle";
				count=5;
			};
		};
	};
	class LCP_Gunnerpack: CFP_AssaultPack_M81
	{
		scope=1;
		displayName="Gunner's Pack";
		class TransportMagazines
		{
			class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=3;
			};
		};
	};
	class LCP_RaiderRocketeerPack: CUP_B_CivPack_WDL
	{
		scope=1;
		displayName="Rocketeer Bag";
		class TransportMagazines
		{
			class RPG7_F
			{
				magazine="RPG7_F";
				count=4;
			};
		};
	};
	class LCP_Rebel_Machinegun: CFP_AssaultPack_M81
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
	class LCP_Veteran_Machinegun: CFP_AssaultPack_M81
	{
		scope=1;
		displayName="Ammo Bag";
		class TransportMagazines
		{
			class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=3;
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
	
	////////// Redland Aggressors Backpacks //////////
	
	class ABTM_Command_Interceptor: sfp_ra180
	{
		scope=1;
		displayName="Radio (RTO Interceptor)";
		class TransportMagazines
		{
			class ACE_Cellphone
			{
				magazine="ACE_Cellphone";
				count=1;
			};
		};
	};
	class ABTM_Command_Jammer: B_RadioBag_01_oucamo_F
	{
		scope=1;
		displayName="Radio (Jammer)";
		class TransportMagazines
		{
			class ACE_Cellphone
			{
				magazine="ACE_Cellphone";
				count=1;
			};
		};
	};
	class ABTM_Command_RTO: TFAR_rt1523g_black
	{
		scope=1;
		displayName="Radio (RTO)";
		class TransportMagazines
		{
			class ACE_Cellphone
			{
				magazine="ACE_Cellphone";
				count=1;
			};
		};
	};
	class ABTM_Guerilla_AT: cwr3_o_backpack_rpg7
	{
		scope=1;
		displayName="RPG-7 Pack";
		class TransportMagazines
		{
			class RPG7_F
			{
				magazine="RPG7_F";
				count=4;
			};
		};
	};
	class ABTM_Guerilla_ReconM79Bag: B_LegStrapBag_coyote_F
	{
		scope=1;
		displayName="M79 Bag";
		class TransportMagazines
		{
			class CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=15;
			};
		};
	};
	class ABTM_Guerilla_ReconSniperBag: CUP_B_IDF_Backpack
	{
		scope=1;
		displayName="KSVK Bag";
		class TransportMagazines
		{
			class CUP_5Rnd_127x108_KSVK_M
			{
				magazine="CUP_5Rnd_127x108_KSVK_M";
				count=10;
			};
		};
	};
	class ABTM_Main_ARAmmoBag: B_AssaultPack_blk
	{
		scope=1;
		displayName="Autorifleman Ammo Bag";
		class TransportMagazines
		{
			class CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count=3;
			};
		};
	};
	class ABTM_Main_ARAmmoBagWDL: B_AssaultPack_rgr
	{
		scope=1;
		displayName="Autorifleman Ammo Bag (Woodland)";
		class TransportMagazines
		{
			class CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count=3;
			};
		};
	};
	class ABTM_Main_ATAmmoBag: B_AssaultPack_blk
	{
		scope=1;
		displayName="Anti-Tank Ammo Bag";
		class TransportMagazines
		{
			class MRAWS_HEAT55_F
			{
				magazine="MRAWS_HEAT55_F";
				count=2;
			};
			class MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=1;
			};
		};
	};
	class ABTM_Main_ATAmmoBagWDL: B_AssaultPack_rgr
	{
		scope=1;
		displayName="Anti-Tank Ammo Bag (Woodland)";
		class TransportMagazines
		{
			class MRAWS_HEAT55_F
			{
				magazine="MRAWS_HEAT55_F";
				count=2;
			};
			class MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=1;
			};
		};
	};
	class ABTM_Main_ATGMAmmoBag: B_AssaultPack_blk
	{
		scope=1;
		displayName="ATGM Ammo Bag";
		class TransportMagazines
		{
			class CUP_Javelin_M
			{
				magazine="CUP_Javelin_M";
				count=2;
			};
		};
	};
	class ABTM_Main_ATGMAmmoBagWDL: B_AssaultPack_rgr
	{
		scope=1;
		displayName="ATGM Ammo Bag (Woodland)";
		class TransportMagazines
		{
			class CUP_Javelin_M
			{
				magazine="CUP_Javelin_M";
				count=2;
			};
		};
	};
	class ABTM_Main_MachinegunnerAmmoBag: SP_Carryall_Black
	{
		scope=1;
		displayName="Machinegun Ammo Bag";
		class TransportMagazines
		{
			class ADFU_200Rnd_556x45
			{
				magazine="ADFU_200Rnd_556x45";
				count=3;
			};
		};
	};
	class ABTM_Main_MachinegunnerAmmoBagWDL: B_Carryall_oli
	{
		scope=1;
		displayName="Machinegun Ammo Bag (Woodland)";
		class TransportMagazines
		{
			class ADFU_200Rnd_556x45
			{
				magazine="ADFU_200Rnd_556x45";
				count=3;
			};
		};
	};
	class ABTM_Main_Pilot: B_LegStrapBag_olive_F
	{
		scope=1;
		displayName="Pilot Legbag";
		class TransportMagazines
		{
			class I_IR_Grenade
			{
				magazine="I_IR_Grenade";
				count=2;
			};
			class Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class ACE_Chemlight_White
			{
				magazine="ACE_Chemlight_White";
				count=2;
			};
			class ACE_HandFlare_Green
			{
				magazine="ACE_HandFlare_Green";
				count=2;
			};
		};
	};
	class ABTM_Main_Radiopack: B_RadioBag_01_black_F
	{
		scope=1;
		displayName="Radiopack";
		class TransportMagazines
		{
			class ACE_Cellphone
			{
				magazine="ACE_Cellphone";
				count=1;
			};
		};
	};
	class ABTM_Main_RadiopackWDL: B_RadioBag_01_eaf_F
	{
		scope=1;
		displayName="Radiopack (Woodland)";
		class TransportMagazines
		{
			class ACE_Cellphone
			{
				magazine="ACE_Cellphone";
				count=1;
			};
		};
	};
	class ABTM_Misc_Kit: cwr3_o_backpack_harness_roll
	{
		scope=1;
		displayName="Soldier's Kit";
		class TransportMagazines
		{
			class ACE_Cellphone
			{
				magazine="ACE_Cellphone";
				count=1;
			};
		};
	};
	class ABTM_Misc_RPGs1: sfp_backpack_grg_loader
	{
		scope=1;
		displayName="RPG-18 Carrier (4x)";
		class TransportMagazines
		{
			class CUP_launch_RPG18
			{
				magazine="CUP_launch_RPG18";
				count=4;
			};
		};
	};
	class ABTM_Misc_RPGs2: sfp_stridssele_backpack_grg
	{
		scope=1;
		displayName="RPG-18 Carrier (2x)";
		class TransportMagazines
		{
			class CUP_launch_RPG18
			{
				magazine="CUP_launch_RPG18";
				count=2;
			};
		};
	};
	class ABTM_SF_ARBag: CUP_B_AssaultPack_Black
	{
		scope=1;
		displayName="Ammo Bag";
		class TransportMagazines
		{
			class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=3;
			};
		};
	};
	class ABTM_SFLightRadiopack: TFAR_rt1523g_big_bwmod
	{
		scope=1;
		displayName="Radiopack";
		class TransportMagazines
		{
			class CUP_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine="CUP_30Rnd_556x45_Stanag_Tracer_Red";
				count=2;
			};
			class SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=1;
			};
		};
	};

    ////////// Buhriz Insurgents //////////
	
	class BM_Insurgent_1: I_Soldier_F
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
		_generalMacro="BM_Insurgent_1";
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
	class BM_Insurgent_2: I_Soldier_F
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
		_generalMacro="BM_Insurgent_2";
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
	class BM_Insurgent_3: I_Soldier_AR_F
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
		_generalMacro="BM_Insurgent_3";
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
	class BM_Insurgent_4: I_Soldier_F
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
		_generalMacro="BM_Insurgent_4";
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
	class BM_Insurgent_Affiliate: I_Soldier_TL_F
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
		_generalMacro="BM_Insurgent_Affiliate";
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
	class BM_Insurgent_Associate: I_Soldier_SL_F
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
		_generalMacro="BM_Insurgent_Associate";
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
	
	class BM_Iskandar_AntiArmor: I_Soldier_LAT_F
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
		_generalMacro="BM_Iskandar_AntiArmor";
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
	class BM_Iskandar_Autorifleman: I_Soldier_AR_F
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
		_generalMacro="BM_Iskandar_Autorifleman";
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
    class BM_Iskandar_Grenadier: I_Soldier_GL_F
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
		_generalMacro="BM_Iskandar_Grenadier";
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
	class BM_Iskandar_Rifleman: I_Soldier_F
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
		_generalMacro="BM_Iskandar_Rifleman";
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
	class BM_Iskandar_Sharpshooter: I_Soldier_M_F
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
		_generalMacro="BM_Iskandar_Sharpshooter";
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
	class BM_Bomber: I_Soldier_F
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
		_generalMacro="BM_Bomber";
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
	class BM_Bonesetter: I_medic_F
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
		_generalMacro="BM_Bonesetter";
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
	class BM_Warlord_Light: I_Officer_F
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
		_generalMacro="BM_Warlord_Light";
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
	class BM_Warlord_Standard: I_Officer_F
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
		_generalMacro="BM_Warlord_Standard";
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
	class BM_Warlord_Heavy: I_Officer_F
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
		_generalMacro="BM_Warlord_Heavy";
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
	
	class BM_AntiAir_Light: I_Soldier_AA_F
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
		_generalMacro="BM_AntiAir_Light";
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
	class BM_AntiAir_Standard: I_Soldier_AA_F
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
		_generalMacro="BM_AntiAir_Standard";
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
	class BM_AntiArmor_Disposable: I_Soldier_LAT_F
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
		_generalMacro="BM_AntiArmor_Disposable";
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
	class BM_AntiArmor_Heavy: I_Soldier_LAT_F
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
		_generalMacro="BM_AntiArmor_Heavy";
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
	class BM_AntiArmor_Standard: I_Soldier_LAT_F
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
		_generalMacro="BM_AntiArmor_Standard";
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
	class BM_AntiArmor_Light: I_Soldier_LAT_F
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
		_generalMacro="BM_AntiArmor_Light";
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
	class BM_Auto_Rifleman_Heavy: I_Soldier_AR_F
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
		_generalMacro="BM_Auto_Rifleman_Heavy";
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
	class BM_Auto_Rifleman_Standard: I_Soldier_AR_F
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
		_generalMacro="BM_Auto_Rifleman_Standard";
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
	class BM_Auto_Rifleman_Light: I_Soldier_AR_F
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
		_generalMacro="BM_Auto_Rifleman_Light";
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
	class BM_Crewman: I_crew_F
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
		_generalMacro="BM_Crewman";
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
	class BM_Driver: I_Soldier_F
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
		_generalMacro="BM_Driver";
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
    class BM_Grenadier_Standard: I_Soldier_GL_F
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
		_generalMacro="BM_Grenadier_Standard";
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
	class BM_Grenadier_Light: I_Soldier_GL_F
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
		_generalMacro="BM_Grenadier_Light";
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
	class BM_Marksman_Standard: I_Soldier_M_F
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
		_generalMacro="BM_Marksman_Standard";
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
	class BM_Marksman_Light: I_Soldier_M_F
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
		_generalMacro="BM_Marksman_Light";
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
	class BM_Medic: I_medic_F
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
		_generalMacro="BM_Medic";
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
	class BM_Officer: I_Officer_F
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
		_generalMacro="BM_Officer";
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
	class BM_Officer_Armed: I_Officer_F
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
		_generalMacro="BM_Officer_Armed";
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
	class BM_Pilot: I_Helipilot_F
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
		_generalMacro="BM_Pilot";
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
	class BM_Rifleman_AKMS_Light: I_Soldier_F
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
		_generalMacro="BM_Rifleman_AKMS_Light";
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
	class BM_Rifleman_AKMS_Standard: I_Soldier_F
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
		_generalMacro="BM_Rifleman_AKMS_Standard";
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
	class BM_Rifleman_AK74_Light: I_Soldier_F
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
		_generalMacro="BM_Rifleman_AK74_Light";
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
	class BM_Rifleman_AK74_Standard: I_Soldier_F
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
		_generalMacro="BM_Rifleman_AK74_Standard";
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
	class BM_Sharpshooter: I_Soldier_M_F
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
		_generalMacro="BM_Sharpshooter";
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
	class BM_Sniper_Standard: I_Soldier_M_F
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
		_generalMacro="BM_Sniper_Standard";
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
	class BM_Sniper_Light: I_Soldier_M_F
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
		_generalMacro="BM_Sniper_Light";
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
    class BM_Offroad: C_Offroad_01_F
    {
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Offroad"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
		gunnerType="BM_Driver";
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
	class BM_Offroad_HMG: I_G_Offroad_01_armed_F
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Offroad (HMG)"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
		gunnerType="BM_Driver";
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
	class BM_Offroad_AT: I_G_Offroad_01_AT_F
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Offroad (AT)"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
		gunnerType="BM_Driver";
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
	class BM_Static_AGS: CUP_B_AGS_ACR
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "AGS-17"; //Ingame name
        crew = "BM_Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Insurgent_1"};
		gunnerType="BM_Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class BM_Static_DShKM: CUP_O_DSHKM_ChDKZ
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "DShKM"; //Ingame name
        crew = "BM_Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Insurgent_1"};
		gunnerType="BM_Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class BM_Static_DShKM_Minitripod: CUP_O_DSHkM_MiniTriPod_ChDKZ
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "DShKM (MiniTripod)"; //Ingame name
        crew = "BM_Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Insurgent_1"};
		gunnerType="BM_Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class BM_Static_Igla: CUP_B_Igla_AA_pod_CDF
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "9K38 (Djigit)"; //Ingame name
        crew = "BM_Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Insurgent_1"};
		gunnerType="BM_Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class BM_Static_Kornet: CUP_O_Kornet_RU
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "9K113 'Kornet'"; //Ingame name
        crew = "BM_Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Insurgent_1"};
		gunnerType="BM_Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class BM_Static_Metis: CUP_O_Metis_RU
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "9K115 'Metis'"; //Ingame name
        crew = "BM_Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Insurgent_1"};
		gunnerType="BM_Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class BM_Static_Mk19: CUP_B_MK19_TriPod_US
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Mk. 19 (M3)"; //Ingame name
        crew = "BM_Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Insurgent_1"};
		gunnerType="BM_Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class BM_Static_Mortar: CUP_O_2b14_82mm_ChDKZ
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "2B14 'Podnos'"; //Ingame name
        crew = "BM_Insurgent_1"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Insurgent_1"};
		gunnerType="BM_Insurgent_1";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
    };
	class BM_Pickup: CUP_C_LR_Transport_CTK
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Pickup BM"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
		gunnerType="BM_Driver";
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
	class BM_Pickup_HMG: CUP_B_LR_MG_GB_W
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Pickup BM (HMG)"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
		gunnerType="BM_Driver";
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
	class BM_Pickup_AT: CUP_O_LR_SPG9_TKA
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Pickup BM (AT)"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
		gunnerType="BM_Driver";
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
	class BM_Truck: C_Van_01_transport_F
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Truck BM"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
		gunnerType="BM_Driver";
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
	class BM_Ural: CUP_O_Ural_Open_RU
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Ural BM"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
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
	class BM_Ural_Covered: CUP_O_Ural_RU
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Ural BM (Covered)"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
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
	class BM_Ural_AA: CUP_O_Ural_ZU23_RU
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Ural BM (ZU-23-2)"; //Ingame name
        crew = "BM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Driver"};
		gunnerType="BM_Driver";
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
	class BM_BTR60BM: CFP_O_NKARMY_BTR_60_01
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "BTR-60 BM"; //Ingame name
        crew = "BM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Crewman"};
		gunnerType="BM_Crewman";
        //hiddenSelections[] = {"LGreen"};
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
	class BM_BMP_1: CUP_I_BMP1_TK_GUE
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "BMP-1 BM"; //Ingame name
        crew = "BM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Crewman"};
		gunnerType="BM_Crewman";
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
	class BM_BMP_2: CUP_I_BMP2_NAPA
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "BMP-2 BM"; //Ingame name
        crew = "BM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Crewman"};
		gunnerType="BM_Crewman";
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
	class BM_ZSU_23_4: CUP_B_ZSU23_Afghan_CDF
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "ZSU-23-4 BM"; //Ingame name
        crew = "BM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Crewman"};
		gunnerType="BM_Crewman";
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
	class BM_T_55A: CUP_O_T55_SLA
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "T-55A BM"; //Ingame name
        crew = "BM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Crewman"};
		gunnerType="BM_Crewman";
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
	class BM_T_72: CUP_I_T72_NAPA
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "T-72 BM"; //Ingame name
        crew = "BM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Crewman"};
		gunnerType="BM_Crewman";
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
	class BM_Mi_8: CUP_O_Mi8_CHDKZ
	{
        faction = "Buhriz_Movement"; //Faction
        side = 2;
        displayName = "Mi-8 BM"; //Ingame name
        crew = "BM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"BM_Pilot"};
		gunnerType="BM_Pilot";
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
			"SP_PlateCarrier1_Green",
			"ffaa_moe_casco_02_1_b",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"CUP_G_Oakleys_Clr"
		};
		respawnLinkedItems[]=
		{
			"SP_PlateCarrier1_Green",
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
	class ACE_BLACKWASP: B_Plane_Fighter_01_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "F/A-181 Black Wasp II ACE"; //Ingame name
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
	class ACE_F16C: F16C_BLU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "F-16C ACE"; //Ingame name
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
	class ACE_F35B: CUP_B_F35B_BAF
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "F-35B Lightning II ACE"; //Ingame name
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
	class ACE_F4PHANTOM: F4E_BLU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "F-4E Phantom II ACE"; //Ingame name
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
	class ACE_HARRIER: CUP_B_GR9_DYN_GB
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "Harrier GR.9 ACE"; //Ingame name
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
	class ACE_MIRAGE2000: M2000C_BLU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "Mirage 2000EG ACE"; //Ingame name
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
	class ACE_SHIKRA: O_Plane_Fighter_02_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "To-201 Shikra ACE"; //Ingame name
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
	class FICTIONAL_F_12H: CUP_B_AV8B_DYN_USMC
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "F-12H Kestrel"; //Ingame name
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
	class FICTIONAL_F_19: F16C_BLU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "F-19 Caracara"; //Ingame name
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
	class FICTIONAL_F_5G: F4E_BLU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "F-5G Tiger III"; //Ingame name
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
	class FICTIONAL_MIG_21G: CUP_O_L39_TK
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "MiG-21G Fishbed Super"; //Ingame name
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
	class FICTIONAL_MIG_24A: CUP_O_Su25_Dyn_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "MiG-24A Foothill"; //Ingame name
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
	class FICTIONAL_SU_23: CUP_O_SU34_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "Su-23 Furnace"; //Ingame name
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
	class JAMMED_A7CORSAIR: A7BLU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_A10: CUP_B_A10_DYN_USA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_AH64D: CUP_B_AH64D_DL_USA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_BLACKWASP: B_Plane_Fighter_01_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_BM21: CUP_O_BM21_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_BMP1: CFP_O_TBAN_BMP_1_01
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_BMP2: CFP_O_TBAN_BMP_2_01
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_BMP3: CUP_O_BMP3_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_BTR60: CUP_O_BTR60_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_BTR80A0: CUP_O_BTR80A_CAMO_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_BTR90: CUP_O_BTR90_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_C130: CUP_B_C130J_USMC
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_CH47: CUP_B_CH47F_USA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_F16C: F16C_BLU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_F4PHANTOM: F4E_BLU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_HUMVEEDESERT: CUP_B_HMMWV_Unarmed_USA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_HUMVEEDESERTM2: CUP_B_HMMWV_M2_USA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_HUMVEEWOODLAND: CUP_B_USARMY_HMMWV_Unarmed_USA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_HUMVEEWOODLANDM2: CUP_B_USARMY_HMMWV_M2_USA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_KA50: CUP_O_Ka50_DL_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_KA52: CUP_O_Ka52_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_KAMAZ: CUP_O_Kamaz_Open_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_KAMAZCOVERED: CUP_O_Kamaz_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_M1A1: CUP_B_M1A1_NATO_T
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_M1A2: CUP_B_M1A_TUSK_NATO_T
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_M2A2: CUP_B_M2Bradley_NATO_T
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_M2A3: CUP_B_M2A3Bradley_NATO_T
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_MI24P: CUP_O_Mi24_P_Dynamic_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_MI24V: CUP_O_Mi24_V_Dynamic_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_MI8AMT: CUP_O_Mi8AMT_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_MI8MTV3: CUP_O_Mi8_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_MIRAGE2000: M2000C_BLU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_MTVRDESERT: CFP_B_USARMY_2003_MTVR_DES_01
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_MTVRWOODLAND: CFP_B_USARMY_2003_MTVR_WDL_01
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_OFFROAD: C_Offroad_01_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_OFFROADAT: I_G_Offroad_01_AT_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_OFFROADHMG: I_G_Offroad_01_armed_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_SAMLAUNCHER: B_SAM_System_02_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_SHIKRA: O_Plane_Fighter_02_F
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_SUV: CUP_O_SUV_TKA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_T72: CUP_I_T72_NAPA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_T90A: CUP_O_T90_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_VODNIK: CUP_O_GAZ_Vodnik_Unarmed_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_VODNIKPKM: CUP_O_GAZ_Vodnik_PK_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_VODNIKAGS: CUP_O_GAZ_Vodnik_AGS_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_VODNIKBPPU: CUP_O_GAZ_Vodnik_BPPU_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_VODNIKKPVT: CUP_O_GAZ_Vodnik_KPVT_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_VODNIKMEDEVAC: CUP_O_GAZ_Vodnik_MedEvac_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_UAZ: CUP_O_UAZ_Open_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_UAZCOVERED: CUP_O_UAZ_Unarmed_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_UH1Y: CUP_B_UH1Y_UNA_USMC
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_UH1YGUNSHIP: CUP_B_UH1Y_Gunship_Dynamic_USMC
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_MH60L: CUP_B_UH60S_USN
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_MH60LDAP: CUP_B_MH60L_DAP_4x_USN
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
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
	class JAMMED_URAL: CUP_O_Ural_Open_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_URALCOVERED: CUP_O_Ural_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_ZSU_23_4: CUP_O_ZSU23_SLA
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
	class JAMMED_ZU_23_2: CUP_O_ZU23_RU
	{
        faction = "Ashton_Misc"; //Faction
        side = 2;
        displayName = "JAMMED"; //Ingame name
        crew = "B_Soldier_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"B_Soldier_F"};
		gunnerType="B_Soldier_F";
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
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AKS74",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGO",
			"CUP_HandGrenade_RGO"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGO",
			"CUP_HandGrenade_RGO"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Olive",
			"CUP_H_C_Ushanka_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Olive",
			"CUP_H_C_Ushanka_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};	
	class LCP_HQ_Commander: I_Officer_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
		vehicleclass="LCP_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="LCP_HQ_Commander";
		scope=2;
		displayName="HQ Unit (Commander)";
		weapons[]=
		{
			"CUP_hgun_Makarov",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_Makarov",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"SmokeShell",
			"SmokeShellRed"
		};
		respawnMagazines[]=
		{
            "CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"SmokeShell",
			"SmokeShellRed"
		};
		linkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket6_01",
			"CUP_H_C_Ushanka_01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket6_01",
			"CUP_H_C_Ushanka_01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};		
	class LCP_HQ_Coordinator: I_Soldier_SL_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AKS",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS",
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
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellRed"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellRed"
		};
		linkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket2_01",
			"SP_PatrolCap_Green",
			"VSM_Peltor_m81_glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket2_01",
			"SP_PatrolCap_Green",
			"VSM_Peltor_m81_glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81_SS";
		camouflage=1.6;
	};	
	class LCP_HQ_Officer: I_Officer_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AKS74",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_PASGT_no_bags_OD",
			"SP_Beret_Red",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_PASGT_no_bags_OD",
			"SP_Beret_Red",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_HQ_Quartermaster: I_Officer_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AKS74",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74",
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
			"CUP_V_B_PASGT",
			"CUP_H_US_patrol_cap_WDL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_PASGT",
			"CUP_H_US_patrol_cap_WDL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_HQ_Radioman: I_Soldier_SL_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
		backpack="LCP_Radiopack";
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
            "30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"CFP_PatrolCap_M81",
			"VSM_Peltor_m81_glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"CFP_PatrolCap_M81",
			"VSM_Peltor_m81_glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Insurgent_AntiTank: I_Soldier_LAT_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_IMI_Romat",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_IMI_Romat",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_Light",
			"CUP_H_FR_BandanaWdl",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_Light",
			"CUP_H_FR_BandanaWdl",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Insurgent_Fighter: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
		backpack="LCP_Fighterpack";
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig",
			"CUP_H_TK_Helmet",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig",
			"CUP_H_TK_Helmet",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_PulloverUniform_Green";
		camouflage=1.6;
	};
	class LCP_Insurgent_GroupLeader: I_Soldier_SL_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AKM_GL_Early",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKM_GL_Early",
			"Binocular",
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
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"SmokeShell",
			"CUP_HandGrenade_RGO"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"SmokeShell",
			"CUP_HandGrenade_RGO"
		};
		linkedItems[]=
		{
			"CUP_V_B_ALICE",
			"CFP_Headband_wdl",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_ALICE",
			"CFP_Headband_wdl",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Insurgent_Gunner: I_Soldier_AR_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
		backpack="LCP_Gunnerpack";
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
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_SSh68NetHelmet_Green1",
			"CUP_V_OI_TKI_Jacket3_01",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_SSh68NetHelmet_Green1",
			"CUP_V_OI_TKI_Jacket3_01",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Insurgent_Skirmisher_AKM: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
            "30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F"
		};
		respawnMagazines[]=
		{
            "30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F"
		};
		linkedItems[]=
		{
			"CUP_V_RUS_Smersh_1",
			"SP_SSh68NetHelmet_Green1",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_Smersh_1",
			"SP_SSh68NetHelmet_Green1",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_GUER_ERDLpants";
		camouflage=1.6;
	};
	class LCP_Insurgent_Skirmisher_Romat: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_IMI_Romat",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_IMI_Romat",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_ALICE",
			"CUP_H_C_Ushanka_02",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_ALICE",
			"CUP_H_C_Ushanka_02",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_GUER_Tigerpants";
		camouflage=1.6;
	};
	class LCP_Insurgent_Skirmisher_SKS: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_SKS",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_SKS",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_HandGrenade_RGO",
			"CUP_HandGrenade_RGO",
			"CUP_HandGrenade_RGO"
		};
		respawnMagazines[]=
		{
            "CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_HandGrenade_RGO",
			"CUP_HandGrenade_RGO",
			"CUP_HandGrenade_RGO"
		};
		linkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket6_01",
			"CUP_H_C_Ushanka_02",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket6_01",
			"CUP_H_C_Ushanka_02",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Insurgent_Sniper: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_srifle_Mosin_Nagant",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_srifle_Mosin_Nagant",
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
			"SmokeShell"
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
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_Light",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_Light",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_GUER_M81";
		camouflage=1.6;
	};
	class LCP_Raider_Assaulter: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_IDF_2";
		camouflage=1.6;
	};
	class LCP_Raider_Autorifleman: I_Soldier_AR_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_RPK74_45",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_RPK74_45",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_IDF_2";
		camouflage=1.6;
	};
	class LCP_Raider_RaidLeader: I_Soldier_SL_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AKMS_GL",
			"CUP_hgun_Makarov",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKMS_GL",
			"CUP_hgun_Makarov",
			"Binocular",
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
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SmokeRed_GP25_M",
			"CUP_1Rnd_SmokeRed_GP25_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SmokeRed_GP25_M",
			"CUP_1Rnd_SmokeRed_GP25_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_IDF_2";
		camouflage=1.6;
	};
	class LCP_Raider_Rocketeer: I_Soldier_LAT_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
		backpack="LCP_RaiderRocketeerPack";
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
			"CUP_arifle_TYPE_56_2_Early",
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_TYPE_56_2_Early",
			"launch_RPG7_F",
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_IDF_2";
		camouflage=1.6;
	};
	class LCP_Raider_Sniper: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"SVD_ScopedMagnified",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SVD_ScopedMagnified",
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
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
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
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Olive",
			"CUP_H_RUS_SSH68_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_IDF_2";
		camouflage=1.6;
	};
	class LCP_Rebel_AntiTank: I_Soldier_LAT_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
		backpack="LCP_Rebel_RPG";
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
			"CUP_arifle_AK74_Early",
			"CUP_launch_RPG7V",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_Early",
			"CUP_launch_RPG7V",
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Rebel_Grenadier: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AK74_GL_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_GL_Early",
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
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
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
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Rebel_Machinegunner: I_Soldier_AR_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
		backpack="LCP_Rebel_Machinegun";
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
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Rebel_Rifleman: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_IMI_Romat",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_IMI_Romat",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Rebel_SectionLeader: I_Soldier_SL_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AKS74_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74_Early",
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Rebel_TeamLeader: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_8Rnd_9x18_Makarov_M",
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
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_Tactical1_M81",
			"SP_SSh68CoverHelmet_Green1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Veteran_AntiTank: I_Soldier_LAT_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
		backpack="LCP_Veteran_RPG";
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
			"CUP_arifle_AK74_Early",
			"CUP_launch_RPG7V",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_Early",
			"CUP_launch_RPG7V",
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
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Veteran_Grenadier: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AK74_GL_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74_GL_Early",
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
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SmokeRed_GP25_M",
			"CUP_1Rnd_SmokeRed_GP25_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
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
			"CUP_30Rnd_545x39_AK_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SmokeRed_GP25_M",
			"CUP_1Rnd_SmokeRed_GP25_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Veteran_Machinegunner: I_Soldier_AR_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
		backpack="LCP_Veteran_Machinegun";
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
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Veteran_Rifleman: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_IMI_Romat",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_IMI_Romat",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Veteran_SectionLeader: I_Soldier_SL_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_arifle_AKS74_Early",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74_Early",
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
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Veteran_TeamLeader: I_Soldier_F
	{
		side=2;
		faction="Leskovets_Communist_Party";
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
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed"
		};
		respawnMagazines[]=
		{
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
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_M81",
			"CUP_H_C_Ushanka_03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_BDU_M81";
		camouflage=1.6;
	};
	class LCP_Static_AGS_17: CUP_B_AGS_ACR
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "AGS-17"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Static_DShKM: CUP_O_DSHKM_ChDKZ
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "DShKM"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Static_DShKM_Low: CUP_O_DSHkM_MiniTriPod_ChDKZ
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "DShKM (Mini Tripod)"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Static_Mortar: CUP_O_2b14_82mm_ChDKZ
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "Mortar"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Static_SAM: B_SAM_System_02_F
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "SAM Launcher"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_BMP_1: CUP_I_BMP1_TK_GUE
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "BMP-1"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman", "LCP_Rebel_Rifleman", "LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_BMP_2: CUP_I_BMP2_NAPA
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "BMP-2"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman", "LCP_Rebel_Rifleman", "LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_BTR_60: CUP_O_BTR60_RU
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "BTR-60"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman", "LCP_Rebel_Rifleman", "LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_UAZ: CUP_O_UAZ_Open_RU
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "UAZ"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_UAZ_Covered: CUP_O_UAZ_Unarmed_RU
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "UAZ (Covered)"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_URAL: CUP_O_Ural_Open_RU
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "Ural"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_URAL_Covered: CUP_O_Ural_RU
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "Ural (Covered)"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_V3S: CUP_I_V3S_Open_TKG
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "V3S"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_V3S_Covered: CUP_I_V3S_Covered_TKG
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "V3S (Covered)"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	class LCP_Vehicle_ZSU_23_4: CUP_O_ZSU23_SLA
	{
        faction = "Leskovets_Communist_Party"; //Faction
        side = 2;
        displayName = "ZU-23-4"; //Ingame name
        crew = "LCP_Rebel_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"LCP_Rebel_Rifleman"};
		gunnerType="LCP_Rebel_Rifleman";
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
	
	/////// Redland Aggressors (ABTM/Ah Boys To Men OPFOR) ///////
	class ABTM_AntiAir: I_Soldier_AA_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_AntiAir";
		scope=2;
		displayName="Aggressor (AA)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_launch_9K32Strela",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_launch_9K32Strela",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_GCOVERED_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_GCOVERED_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_AntiTank: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		backpack="ABTM_Main_ATAmmoBag";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_AntiTank";
		scope=2;
		displayName="Aggressor (AT)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"launch_MRAWS_green_rail_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"launch_MRAWS_green_rail_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_ATGM: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		backpack="ABTM_Misc_Kit";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_ATGM";
		scope=2;
		displayName="Aggressor (ATGM)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_launch_Javelin",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_launch_Javelin",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_Javelin_M",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_Javelin_M",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_GCOVERED_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_GCOVERED_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_ATGMAssist: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		backpack="ABTM_Main_ATGMAmmoBag";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_ATGMAssist";
		scope=2;
		displayName="Aggressor (ATGM Asst.)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_Autorifleman: I_Soldier_AR_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Autorifleman";
		scope=2;
		displayName="Aggressor (AR)";
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
            "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_Crewman: I_crew_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Crewman";
		scope=2;
		displayName="Aggressor (Crew)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShellPurple",
			"SmokeShellYellow",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShellPurple",
			"SmokeShellYellow",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_Tactical1_Black",
			"CUP_H_SLA_TankerHelmet",
			"SP_Balaclava_Skull2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_Tactical1_Black",
			"CUP_H_SLA_TankerHelmet",
			"SP_Balaclava_Skull2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_DMR: I_Soldier_M_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_DMR";
		scope=2;
		displayName="Aggressor (DMR)";
		weapons[]=
		{
			"ABTM_M14_ScopedMagnified",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_M14_ScopedMagnified",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"CUP_H_USArmy_Boonie_hs_UCP",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"CUP_H_USArmy_Boonie_hs_UCP",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_DMRAssist: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_DMRAssist";
		scope=2;
		displayName="Aggressor (DMR Asst.)";
		weapons[]=
		{
			"CUP_arifle_M16A1",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A1",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_TL",
			"CUP_H_USArmy_Boonie_hs_UCP",
			"CFP_Shemagh_Face_Atacsau",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_TL",
			"CUP_H_USArmy_Boonie_hs_UCP",
			"CFP_Shemagh_Face_Atacsau",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_Driver: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Driver";
		scope=2;
		displayName="Aggressor (Driver)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_Tactical1_Black",
			"CUP_H_USArmy_HelmetACH_UCP",
			"G_Bandanna_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_Tactical1_Black",
			"CUP_H_USArmy_HelmetACH_UCP",
			"G_Bandanna_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_Engineer: I_engineer_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Engineer";
		scope=2;
		displayName="Aggressor (Engineer)";
		weapons[]=
		{
			"CUP_arifle_M16A1",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A1",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_HeliCrew: I_helipilot_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_HeliCrew";
		scope=2;
		displayName="Aggressor (Heli Crew)";
		weapons[]=
		{
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"SmokeShellYellow",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"SmokeShellYellow",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"cwr3_b_vest_pilot",
			"H_CrewHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"cwr3_b_vest_pilot",
			"H_CrewHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="GR_HeliPilot_Uniform";
		camouflage=1.6;
	};
	class ABTM_HeliPilot: I_helipilot_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_HeliPilot";
		scope=2;
		displayName="Aggressor (Heli Pilot)";
		weapons[]=
		{
			"cwr3_smg_uzi",
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"cwr3_smg_uzi",
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"SmokeShellYellow",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"SmokeShellYellow",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"cwr3_b_vest_pilot",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"cwr3_b_vest_pilot",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="GR_HeliPilot_Uniform";
		camouflage=1.6;
	};
	class ABTM_Machinegunner: I_Soldier_AR_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Machinegunner";
		scope=2;
		displayName="Aggressor (MG)";
		weapons[]=
		{
			"ABTM_Minimi",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Minimi",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "ADFU_200Rnd_556x45",
			"ADFU_200Rnd_556x45",
			"ADFU_200Rnd_556x45",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "ADFU_200Rnd_556x45",
			"ADFU_200Rnd_556x45",
			"ADFU_200Rnd_556x45",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_GCOVERED_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_GCOVERED_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_MachinegunnerAssist: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		backpack="ABTM_Main_MachinegunnerAmmoBag";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_MachinegunnerAssist";
		scope=2;
		displayName="Aggressor (MG Asst.)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_Pilot: I_Fighter_Pilot_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		backpack="ABTM_Main_Pilot";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Pilot";
		scope=2;
		displayName="Aggressor (Pilot)";
		weapons[]=
		{
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"SmokeShellYellow",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"SmokeShellYellow",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"cwr3_b_vest_pilot",
			"H_PilotHelmetFighter_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"cwr3_b_vest_pilot",
			"H_PilotHelmetFighter_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="cwr3_b_uniform_pilot_SF";
		camouflage=1.6;
	};
	class ABTM_Radioman: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		backpack="ABTM_Main_Radiopack";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Radioman";
		scope=2;
		displayName="Aggressor (Radioman)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_Rifleman: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Rifleman";
		scope=2;
		displayName="Aggressor (Rifleman)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Black",
			"CUP_H_USArmy_MICH_GCOVERED_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Black",
			"CUP_H_USArmy_MICH_GCOVERED_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_RiflemanRPG1: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		backpack="ABTM_Misc_RPGs1";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_RiflemanRPG1";
		scope=2;
		displayName="Aggressor (Rifleman, RPG 1)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Black3",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Black3",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_RiflemanRPG2: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		backpack="ABTM_Misc_RPGs2";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_DMR";
		scope=2;
		displayName="Aggressor (Rifleman, RPG 2)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Black3",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Black3",
			"CUP_H_USArmy_MICH_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_Sentry1: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Sentry1";
		scope=2;
		displayName="Aggressor (Sentry 1)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_Tactical1_Black",
			"CUP_H_US_patrol_cap_UCP",
			"G_Bandanna_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_Tactical1_Black",
			"CUP_H_US_patrol_cap_UCP",
			"G_Bandanna_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_Sentry2: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Sentry2";
		scope=2;
		displayName="Aggressor (Sentry 2)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_Boonie_UCP",
			"CUP_PMC_Facewrap_Skull",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"CUP_H_USArmy_Boonie_UCP",
			"CUP_PMC_Facewrap_Skull",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_SquadLeader: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_SquadLeader";
		scope=2;
		displayName="Aggressor (Squad Leader)";
		weapons[]=
		{
			"CUP_arifle_M16A2_GL",
			"CUP_hgun_M9",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2_GL",
			"CUP_hgun_M9",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Black2",
			"CUP_H_USArmy_MICH_Headset_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Black2",
			"CUP_H_USArmy_MICH_Headset_UCP",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_TeamLeader: I_Soldier_TL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_TeamLeader";
		scope=2;
		displayName="Aggressor (Team Leader)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Black3",
			"CUP_H_USArmy_MICH_ESS_Headset_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Black3",
			"CUP_H_USArmy_MICH_ESS_Headset_UCP",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_Static_AALauncher: I_E_SAM_System_03_F // ADDL = Air Defence, Data Linked
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "ADDL System (Launcher)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_AARadar: I_E_Radar_System_01_F // ADDL = Air Defence, Data Linked
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "ADDL System (AN/MPQ-217 Radar)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_AGS17: CUP_B_AGS_ACR
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "AGS-17"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_D30ATGun: CUP_O_D30_AT_RU
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "D-30 (AT)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_DShKM_High: CUP_O_DSHKM_ChDKZ
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "DShKM (High)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_DShKM_Low: CUP_O_DSHkM_MiniTriPod_ChDKZ
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "DShKM (Low)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_Kornet: CUP_O_Kornet_RU
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "Kornet AT-14"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_M2ShieldHigh: I_HMG_02_high_F
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M2 HMG .50 (High)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_M2ShieldLow: I_HMG_02_F
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M2 HMG .50 (Low)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_Metis: CUP_O_Metis_RU
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "Metis AT-13"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_Mortar: CUP_O_2b14_82mm_ChDKZ
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "Mortar (Type 84)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_Radar: I_E_Radar_System_01_F // G3C = Ground Command, Control, Coordination
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "Radar (G3C System)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_SAM: B_SAM_System_02_F // SST = Standalone, Self Tracking
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "SAM (SST System)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_Searchlight: CUP_B_SearchLight_static_ACR
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "Searchlight (Type 112)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_TOW: CUP_B_TOW2_TriPod_USMC
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "TOW-2"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Static_ZU23: CUP_O_ZU23_RU
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "ZU-23-2A"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Vehicle_AMX13: clv_Amx13
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "AMX-14A"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_AMX13AA: clv_Dragon
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "AMX-20A (20GC)"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_BM21: CUP_O_BM21_SLA
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "BM-21G"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Vehicle_BRDM2G: CUP_I_BRDM2_NAPA
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "BRDM-2G"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_BTR40: ACM_ARM_V_BTR40
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "BTR-40"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_BTR40DShKM: ACM_ARM_V_BTR40
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "BTR-40 (DShKM)"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_BTR60: CFP_O_NKARMY_BTR_60_01
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "BTR-60"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_M113: CUP_B_M113A1_olive_USA
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M113G2"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_M151: cwr3_b_m151
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M151A3"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Vehicle_M151HMG: cwr3_b_m151_m2
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M151A3 (HMG)"; //Ingame name
        crew = "ABTM_Rifleman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Rifleman"};
		gunnerType="ABTM_Rifleman";
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
	class ABTM_Vehicle_M163PIVADS: CUP_B_M163_Vulcan_USA
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M163G2 VADS"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_M1A1: CUP_B_M1A1FEP_OD_USMC
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M1A1G1"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_M1A3: CUP_B_M1A2C_TUSK_II_OD_US_Army
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M1A3"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_M939: cwr3_b_m939_open
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M939"; //Ingame name
        crew = "ABTM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Driver"};
		gunnerType="ABTM_Driver";
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
	class ABTM_Vehicle_M939Covered: cwr3_b_m939
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "M939 (Covered)"; //Ingame name
        crew = "ABTM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Driver"};
		gunnerType="ABTM_Driver";
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
	class ABTM_Vehicle_T3485M2: CUP_I_T34_NAPA
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "T-34-85M2"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_T55A: CUP_O_T55_SLA
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "T-55A"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_T90F3: CUP_O_T90_RU
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "T-90F3"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_UAZ452: cwr3_o_uaz452
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "UAZ-452"; //Ingame name
        crew = "ABTM_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Driver"};
		gunnerType="ABTM_Driver";
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
	class ABTM_Vehicle_ZSU232: CUP_O_Ural_ZU23_RU
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "ZSU-23-2G"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_ZSU234: CUP_O_ZSU23_SLA
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "ZSU-23-4GR"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_Vehicle_ZSU234Afghanski: CUP_O_ZSU23_Afghan_SLA
	{
		faction = "ABTM_Redland_Aggressors"; //Faction
        side = 2;
        displayName = "ZSU-23-4G"; //Ingame name
        crew = "ABTM_Crewman"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Crewman"};
		gunnerType="ABTM_Crewman";
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
	class ABTM_AntiAirWDL: I_Soldier_AA_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_AntiAirWDL";
		scope=2;
		displayName="Aggressor Woodland (AA)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_launch_9K32Strela",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_launch_9K32Strela",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_AntiTankWDL: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		backpack="ABTM_Main_ATAmmoBagWDL";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_AntiTankWDL";
		scope=2;
		displayName="Aggressor Woodland (AT)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"launch_MRAWS_green_rail_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"launch_MRAWS_green_rail_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_ATGMWDL: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		backpack="ABTM_Misc_Kit";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_ATGMWDL";
		scope=2;
		displayName="Aggressor Woodland (ATGM)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_launch_Javelin",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_launch_Javelin",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_Javelin_M",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_Javelin_M",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG_CF",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG_CF",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_ATGMAssistWDL: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		backpack="ABTM_Main_ATGMAmmoBagWDL";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_ATGMAssistWDL";
		scope=2;
		displayName="Aggressor Woodland (ATGM Asst.)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG_CF",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG_CF",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_AutoriflemanWDL: I_Soldier_AR_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_AutoriflemanWDL";
		scope=2;
		displayName="Aggressor Woodland (AR)";
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
            "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_CrewmanWDL: I_crew_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_CrewmanWDL";
		scope=2;
		displayName="Aggressor Woodland (Crew)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShellPurple",
			"SmokeShellYellow",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShellPurple",
			"SmokeShellYellow",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_Tactical1_Green",
			"CUP_H_SLA_TankerHelmet",
			"SP_Balaclava_Skull2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_Tactical1_Green",
			"CUP_H_SLA_TankerHelmet",
			"SP_Balaclava_Skull2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_DMRWDL: I_Soldier_M_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_DMRWDL";
		scope=2;
		displayName="Aggressor Woodland (DMR)";
		weapons[]=
		{
			"ABTM_M14_ScopedMagnified",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_M14_ScopedMagnified",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_adf",
			"H_Booniehat_khk_hs",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_adf",
			"H_Booniehat_khk_hs",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_DMRAssistWDL: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_DMRAssistWDL";
		scope=2;
		displayName="Aggressor Woodland (DMR Asst.)";
		weapons[]=
		{
			"CUP_arifle_M16A1",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A1",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_adf",
			"H_Booniehat_khk_hs",
			"CFP_Shemagh_Face_Flecktarn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_adf",
			"H_Booniehat_khk_hs",
			"CFP_Shemagh_Face_Flecktarn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_DriverWDL: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_DriverWDL";
		scope=2;
		displayName="Aggressor Woodland (Driver)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_Tactical1_Green",
			"CUP_H_Ger_M92",
			"G_Bandanna_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_Tactical1_Green",
			"CUP_H_Ger_M92",
			"G_Bandanna_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_EngineerWDL: I_engineer_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_EngineerWDL";
		scope=2;
		displayName="Aggressor Woodland (Engineer)";
		weapons[]=
		{
			"CUP_arifle_M16A1",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A1",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_20Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_MachinegunnerWDL: I_Soldier_AR_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_MachinegunnerWDL";
		scope=2;
		displayName="Aggressor Woodland (MG)";
		weapons[]=
		{
			"ABTM_Minimi",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Minimi",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "ADFU_200Rnd_556x45",
			"ADFU_200Rnd_556x45",
			"ADFU_200Rnd_556x45",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "ADFU_200Rnd_556x45",
			"ADFU_200Rnd_556x45",
			"ADFU_200Rnd_556x45",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_MachinegunnerAssistWDL: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_MachinegunnerAssistWDL";
		scope=2;
		displayName="Aggressor Woodland (MG Asst.)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_RadiomanWDL: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		backpack="ABTM_Main_RadiopackWDL";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_RadiomanWDL";
		scope=2;
		displayName="Aggressor Woodland (Radioman)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_adf_sc",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_adf_sc",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_RiflemanWDL: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_RiflemanWDL";
		scope=2;
		displayName="Aggressor Woodland (Rifleman)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92_GG",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_RiflemanRPG1WDL: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		backpack="ABTM_Misc_RPGs1";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_RiflemanRPG1WDL";
		scope=2;
		displayName="Aggressor Woodland (Rifleman, RPG 1)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_RiflemanRPG2WDL: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		backpack="ABTM_Misc_RPGs2";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_RiflemanRPG2WDL";
		scope=2;
		displayName="Aggressor Woodland (Rifleman, RPG 2)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"CUP_launch_RPG18",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_Sentry1WDL: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Sentry1WDL";
		scope=2;
		displayName="Aggressor Woodland (Sentry 1)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_Tactical1_Green",
			"CUP_H_US_patrol_cap_WDL",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_Tactical1_Green",
			"CUP_H_US_patrol_cap_WDL",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_Sentry2WDL: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_Sentry2WDL";
		scope=2;
		displayName="Aggressor Woodland (Sentry 2)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"H_Booniehat_khk",
			"CUP_PMC_Facewrap_Tropical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf",
			"H_Booniehat_khk",
			"CUP_PMC_Facewrap_Tropical",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_SquadLeaderWDL: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_SquadLeaderWDL";
		scope=2;
		displayName="Aggressor Woodland (Squad Leader)";
		weapons[]=
		{
			"CUP_arifle_M16A2_GL",
			"CUP_hgun_M9",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2_GL",
			"CUP_hgun_M9",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf_sc",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Peltor_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf_sc",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Peltor_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};
	class ABTM_TeamLeaderWDL: I_Soldier_TL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Woodland";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTM_TeamLeaderWDL";
		scope=2;
		displayName="Aggressor Woodland (Team Leader)";
		weapons[]=
		{
			"CUP_arifle_M16A2",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M16A2",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ake_ilbv_sbo3_inf_sc",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Peltor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ake_ilbv_sbo3_inf_sc",
			"CUP_H_Ger_M92",
			"VSM_Balaclava2_black_Peltor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_BattleDressUniform_woodlanddark";
		camouflage=1.6;
	};	
	class ABTM_Static_AALauncherWDL: I_E_SAM_System_03_F // ADDL = Air Defence, Data Linked
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "ADDL System (Launcher)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_AARadarWDL: I_E_Radar_System_01_F // ADDL = Air Defence, Data Linked
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "ADDL System (AN/MPQ-217 Radar)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_AGS17WDL: CUP_B_AGS_ACR
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "AGS-17"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_D30ATGunWDL: CUP_O_D30_AT_RU
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "D-30 (AT)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_DShKM_HighWDL: CUP_O_DSHKM_ChDKZ
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "DShKM (High)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_DShKM_LowWDL: CUP_O_DSHkM_MiniTriPod_ChDKZ
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "DShKM (Low)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_KornetWDL: CUP_O_Kornet_RU
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "Kornet AT-14"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_M2ShieldHighWDL: I_HMG_02_high_F
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M2 HMG .50 (High)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_M2ShieldLowWDL: I_HMG_02_F
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M2 HMG .50 (Low)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_MetisWDL: CUP_O_Metis_RU
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "Metis AT-13"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_MortarWDL: CUP_O_2b14_82mm_ChDKZ
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "Mortar (Type 84)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_RadarWDL: I_E_Radar_System_01_F // G3C = Ground Command, Control, Coordination
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "Radar (G3C System)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_SAMWDL: B_SAM_System_02_F // SST = Standalone, Self Tracking
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "SAM (SST System)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_SearchlightWDL: CUP_B_SearchLight_static_ACR
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "Searchlight (Type 112)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_TOWWDL: CUP_B_TOW2_TriPod_USMC
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "TOW-2"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Static_ZU23WDL: CUP_O_ZU23_RU
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "ZU-23-2A"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Vehicle_AMX13WDL: clv_Amx13
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "AMX-14A"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_AMX13AAWDL: clv_Dragon
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "AMX-20A (20GC)"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_BM21WDL: CUP_O_BM21_SLA
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "BM-21G"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Vehicle_BRDM2GWDL: CUP_I_BRDM2_NAPA
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "BRDM-2G"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_BTR40WDL: ACM_ARM_V_BTR40
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "BTR-40"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_BTR40DShKMWDL: ACM_ARM_V_BTR40
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "BTR-40 (DShKM)"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_BTR60WDL: CFP_O_NKARMY_BTR_60_01
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "BTR-60"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	};class ABTM_Vehicle_M113WDL: CUP_B_M113A1_olive_USA
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M113G2"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_M151WDL: cwr3_b_m151
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M151A3"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Vehicle_M151HMGWDL: cwr3_b_m151_m2
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M151A3 (HMG)"; //Ingame name
        crew = "ABTM_RiflemanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_RiflemanWDL"};
		gunnerType="ABTM_RiflemanWDL";
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
	class ABTM_Vehicle_M163PIVADSWDL: CUP_B_M163_Vulcan_USA
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M163G2 VADS"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_M1A1WDL: CUP_B_M1A1FEP_OD_USMC
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M1A1G1"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_M1A3WDL: CUP_B_M1A2C_TUSK_II_OD_US_Army
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M1A3"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_M939WDL: cwr3_b_m939_open
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M939"; //Ingame name
        crew = "ABTM_DriverWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_DriverWDL"};
		gunnerType="ABTM_DriverWDL";
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
	class ABTM_Vehicle_M939CoveredWDL: cwr3_b_m939
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "M939 (Covered)"; //Ingame name
        crew = "ABTM_DriverWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_DriverWDL"};
		gunnerType="ABTM_DriverWDL";
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
	class ABTM_Vehicle_T3485M2WDL: CUP_I_T34_NAPA
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "T-34-85M2"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_T55AWDL: CUP_O_T55_SLA
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "T-55A"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_T90F3WDL: CUP_O_T90_RU
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "T-90F3"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_UAZ452WDL: cwr3_o_uaz452
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "UAZ-452"; //Ingame name
        crew = "ABTM_DriverWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_DriverWDL"};
		gunnerType="ABTM_DriverWDL";
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
	class ABTM_Vehicle_ZSU232WDL: CUP_O_Ural_ZU23_RU
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "ZSU-23-2G"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_ZSU234WDL: CUP_O_ZSU23_SLA
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "ZSU-23-4GR"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTM_Vehicle_ZSU234AfghanskiWDL: CUP_O_ZSU23_Afghan_SLA
	{
		faction = "ABTM_Redland_Aggressors_Woodland"; //Faction
        side = 2;
        displayName = "ZSU-23-4G"; //Ingame name
        crew = "ABTM_CrewmanWDL"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_CrewmanWDL"};
		gunnerType="ABTM_CrewmanWDL";
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
	class ABTMCommand_Driver: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_Driver";
		scope=2;
		displayName="Aggressor Command (Driver)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_hgun_M9",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_15Rnd_9x19_M9",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_15Rnd_9x19_M9",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacVest_oli",
			"ake_ach1",
			"SP_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_oli",
			"ake_ach1",
			"SP_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_FieldCommander1: I_Officer_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_FieldCommander1";
		scope=2;
		displayName="Aggressor Command (Field Commander 1)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_hgun_M9",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"CUP_hgun_M9",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_15Rnd_9x19_M9",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"Laserbatteries",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
            "CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_15Rnd_9x19_M9",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"Laserbatteries",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Khaki4",
			"SP_Beret_Red",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Khaki4",
			"SP_Beret_Red",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_FieldCommander2: I_Officer_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_FieldCommander2";
		scope=2;
		displayName="Aggressor Command (Field Commander 2)";
		weapons[]=
		{
			"hgun_Pistol_01_F",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_Pistol_01_F",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"Laserbatteries",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"Laserbatteries",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_JackEllis1_NKSF",
			"SP_Beret2_Red",
			"VSM_Peltor_OD_glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_JackEllis1_NKSF",
			"SP_Beret2_Red",
			"VSM_Peltor_OD_glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_FieldCommander3: I_Officer_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_FieldCommander3";
		scope=2;
		displayName="Aggressor Command (Field Commander 3)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"Laserbatteries",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"Laserbatteries",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_Modular1_IDF",
			"SP_Beret2_Red",
			"CUP_Beard_Brown",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_Modular1_IDF",
			"SP_Beret2_Red",
			"CUP_Beard_Brown",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_FieldCommander4: I_Officer_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_FieldCommander4";
		scope=2;
		displayName="Aggressor Command (Field Commander 4)";
		weapons[]=
		{
			"CSW_M500",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CSW_M500",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CSW_5Rnd_127x41_Magnum",
			"CSW_5Rnd_127x41_Magnum",
			"CSW_5Rnd_127x41_Magnum",
			"CSW_5Rnd_127x41_Magnum",
			"CSW_5Rnd_127x41_Magnum",
			"Laserbatteries",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CSW_5Rnd_127x41_Magnum",
			"CSW_5Rnd_127x41_Magnum",
			"CSW_5Rnd_127x41_Magnum",
			"CSW_5Rnd_127x41_Magnum",
			"CSW_5Rnd_127x41_Magnum",
			"Laserbatteries",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_IOTV_Black_Empty",
			"SP_Beret_Red",
			"SP_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_IOTV_Black_Empty",
			"SP_Beret_Red",
			"SP_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_RTOInterceptor: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		backpack="ABTM_Command_Interceptor";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_RTOInterceptor";
		scope=2;
		displayName="Aggressor Command (RTO, Interceptor)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1_bare",
			"CUP_G_PMC_Facewrap_Black_Glasses_Dark_Headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1_bare",
			"CUP_G_PMC_Facewrap_Black_Glasses_Dark_Headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_RTOJammer: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		backpack="ABTM_Command_Jammer";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_RTOJammer";
		scope=2;
		displayName="Aggressor Command (RTO, Jammer)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"hgun_ACPC2_F",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"hgun_ACPC2_F",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"9Rnd_45ACP_Mag",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellYellow",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"9Rnd_45ACP_Mag",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellYellow",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_JackEllis1_NKSF",
			"ake_ach1_bare",
			"ake_halo_bk_gry_fleeceblcv_bk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_JackEllis1_NKSF",
			"ake_ach1_bare",
			"ake_halo_bk_gry_fleeceblcv_bk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_RTORadio: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		backpack="ABTM_Command_RTO";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_RTORadio";
		scope=2;
		displayName="Aggressor Command (RTO, Radio)";
		weapons[]=
		{
			"CUP_arifle_Colt727",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Colt727",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"Laserbatteries",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"Laserbatteries",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1",
			"CUP_PMC_Facewrap_Skull",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1",
			"CUP_PMC_Facewrap_Skull",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_SecurityBodyguardMachinegunner: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_SecurityBodyguardMachinegunner";
		scope=2;
		displayName="Aggressor COMMANDSEC (Bodyguard, Machinegunner)";
		weapons[]=
		{
			"ABTM_Security_Mk48",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Security_Mk48",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",		
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1_bare_mk",
			"SP_Balaclava_Green",
			"NVGogglesB_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1_bare_mk",
			"SP_Balaclava_Green",
			"NVGogglesB_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_SecurityBodyguardRifle: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_SecurityBodyguardRifle";
		scope=2;
		displayName="Aggressor COMMANDSEC (Bodyguard, Rifle)";
		weapons[]=
		{
			"ABTM_Security_M16A4",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Security_M16A4",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShell",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShell",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1_bare_mk",
			"SP_Balaclava_Green",
			"NVGogglesB_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1_bare_mk",
			"SP_Balaclava_Green",
			"NVGogglesB_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_SecurityBodyguardSMG: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_SecurityBodyguardSMG";
		scope=2;
		displayName="Aggressor COMMANDSEC (Bodyguard, SMG)";
		weapons[]=
		{
			"ABTM_Security_P90",
			"CUP_hgun_Glock17_blk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Security_P90",
			"CUP_hgun_Glock17_blk",
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
			"CUP_17Rnd_9x19_glock17",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"CUP_17Rnd_9x19_glock17",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"ACE_M84",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1_bare_mk",
			"SP_Balaclava_Green",
			"NVGogglesB_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Green",
			"ake_ach1_bare_mk",
			"SP_Balaclava_Green",
			"NVGogglesB_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_SecurityGuard: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_SecurityGuard";
		scope=2;
		displayName="Aggressor COMMANDSEC (Guard)";
		weapons[]=
		{
			"ABTM_Security_M16A4",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Security_M16A4",			
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",			
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",			
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"ake_ach1_bare_mk",
			"SP_Balaclava_Green",
			"NVGogglesB_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"ake_ach1_bare_mk",
			"SP_Balaclava_Green",
			"NVGogglesB_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_SecurityPatrolman: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_SecurityPatrolman";
		scope=2;
		displayName="Aggressor COMMANDSEC (Patrolman)";
		weapons[]=
		{
			"ABTM_Security_M16A2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Security_M16A2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"ACE_Chemlight_White",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"ACE_Chemlight_White",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_OpforRig1_Black",
			"cwr3_i_headgear_cap_steingrau",
			"CUP_G_Oakleys_Drk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_OpforRig1_Black",
			"cwr3_i_headgear_cap_steingrau",
			"CUP_G_Oakleys_Drk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_SecuritySentry: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Command";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMCommand_SecuritySentry";
		scope=2;
		displayName="Aggressor COMMANDSEC (Sentry)";
		weapons[]=
		{
			"ABTM_Security_M16A2",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Security_M16A2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"ACE_Chemlight_White",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"ACE_Chemlight_White",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"cwr3_i_headgear_cap_steingrau",
			"CUP_G_ESS_BLK_Scarf_Face_Blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"cwr3_i_headgear_cap_steingrau",
			"CUP_G_ESS_BLK_Scarf_Face_Blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_BattleDressUniform_Green";
		camouflage=1.6;
	};
	class ABTMCommand_Vehicle_BRDM2G2C: CUP_I_BRDM2_HQ_NAPA
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "BRDM-2G-C2"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_M151: cwr3_b_m151
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "M151A3"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_M939: cwr3_b_m939_open
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "M939"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_M939Ammo: cwr3_b_m939_reammo
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "M939 (Ammo)"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_M939Cargo: cwr3_b_m939_empty
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "M939"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_M939Covered: cwr3_b_m939
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "M939 (Covered)"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_M939Fuel: cwr3_b_m939_refuel
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "M939 (Fuel)"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_M939Repair: cwr3_b_m939_repair
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "M939 (Repair)"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_OffroadComms: C_Offroad_01_comms_F
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "Offroad (Comms)"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_OffroadCovered: C_Offroad_01_covered_F
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "Offroad (Covered)"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_UAZ: CUP_O_UAZ_Open_RU
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "UAZ-469"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMCommand_Vehicle_UAZCovered: CUP_O_UAZ_Unarmed_RU
	{
		faction = "ABTM_Redland_Aggressors_Command"; //Faction
        side = 2;
        displayName = "UAZ-469 (Covered)"; //Ingame name
        crew = "ABTMCommand_Driver"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTMCommand_Driver"};
		gunnerType="ABTMCommand_Driver";
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
	class ABTMGarrison_Pistol1: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Garrison";
		vehicleclass="ABTM_Garrison";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGarrison_Pistol1";
		scope=2;
		displayName="Aggressor Garrison (Pistol 1)";
		weapons[]=
		{
			"CUP_hgun_CZ75",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"cwr3_i_headgear_cap_steingrau",
			"SP_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Rangemaster_belt",
			"cwr3_i_headgear_cap_steingrau",
			"SP_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	class ABTMGarrison_Pistol2: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Garrison";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGarrison_Pistol2";
		scope=2;
		displayName="Aggressor Garrison (Pistol 2)";
		weapons[]=
		{
			"CUP_hgun_CZ75",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_OpforRig1_Black",
			"cwr3_i_headgear_cap_steingrau",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_OpforRig1_Black",
			"cwr3_i_headgear_cap_steingrau",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	class ABTMGarrison_Pistol3: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Garrison";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGarrison_Pistol3";
		scope=2;
		displayName="Aggressor Garrison (Pistol 3)";
		weapons[]=
		{
			"CUP_hgun_CZ75",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"ake_ach1_bare",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Rangemaster_belt",
			"ake_ach1_bare",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	class ABTMGarrison_SMG1: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Garrison";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGarrison_SMG1";
		scope=2;
		displayName="Aggressor Garrison (SMG 1)";
		weapons[]=
		{
			"cwr3_smg_uzi",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"cwr3_smg_uzi",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_HandGrenade_L109A1_HE",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_HandGrenade_L109A1_HE",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"ake_ach1_bare",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_RAV_Empty_Green",
			"ake_ach1_bare",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	class ABTMGarrison_SMG2: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Garrison";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGarrison_SMG2";
		scope=2;
		displayName="Aggressor Garrison (SMG 2)";
		weapons[]=
		{
			"cwr3_smg_uzi",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"cwr3_smg_uzi",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_HandGrenade_L109A1_HE",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_HandGrenade_L109A1_HE",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_OpforRig1_Black",
			"cwr3_i_headgear_cap_steingrau",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_OpforRig1_Black",
			"cwr3_i_headgear_cap_steingrau",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	class ABTMGarrison_SMG3: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Garrison";
		vehicleclass="ABTM_Infantry";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGarrison_SMG3";
		scope=2;
		displayName="Aggressor Garrison (SMG 3)";
		weapons[]=
		{
			"cwr3_smg_uzi",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"cwr3_smg_uzi",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_HandGrenade_L109A1_HE",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_HandGrenade_L109A1_HE",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_OpforRig1_Black",
			"ake_ach1_bare",
			"SP_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_OpforRig1_Black",
			"ake_ach1_bare",
			"SP_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_Green_SS";
		camouflage=1.6;
	};
	class ABTMGuerilla_Advisor1: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Advisor1";
		scope=2;
		displayName="Aggressor Guerilla (Advisor 1)";
		weapons[]=
		{
			"arifle_AKM_F",	
			"Binocular",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_AKM_F",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"sfp_handgrenade_shgr07",
			"sfp_handgrenade_shgr07",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"sfp_handgrenade_shgr07",
			"sfp_handgrenade_shgr07",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacVestIR_blk",
			"H_Booniehat_khk",
			"CUP_G_White_Scarf_Shades_GPSCombo_Beard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVestIR_blk",
			"H_Booniehat_khk",
			"CUP_G_White_Scarf_Shades_GPSCombo_Beard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_BG_Guerrilla_6_1";
		camouflage=1.6;
	};
	class ABTMGuerilla_Advisor2: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Advisor2";
		scope=2;
		displayName="Aggressor Guerilla (Advisor 2)";
		weapons[]=
		{
			"arifle_AKS_F",	
			"Binocular",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_AKS_F",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"sfp_handgrenade_shgr07",
			"sfp_handgrenade_shgr07",
			"ACE_M84",
			"ACE_M84",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"sfp_handgrenade_shgr07",
			"sfp_handgrenade_shgr07",
			"ACE_M84",
			"ACE_M84",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_PlateCarrier2_rgr_noflag_F",
			"H_Bandanna_khk",
			"CUP_G_Beard_Shades_Blonde",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier2_rgr_noflag_F",
			"H_Bandanna_khk",
			"CUP_G_Beard_Shades_Blonde",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="cwr3_i_uniform_og107_woodland";
		camouflage=1.6;
	};
	class ABTMGuerilla_Advisor3: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Advisor3";
		scope=2;
		displayName="Aggressor Guerilla (Advisor 3)";
		weapons[]=
		{
			"SMG_05_F",
			"hlc_pistol_P239",
			"Binocular",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMG_05_F",
			"hlc_pistol_P239",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"hlc_10Rnd_9x19_B_P239",
			"hlc_10Rnd_9x19_B_P239",
			"sfp_handgrenade_shgr07",
			"sfp_handgrenade_shgr07",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"hlc_10Rnd_9x19_B_P239",
			"hlc_10Rnd_9x19_B_P239",
			"sfp_handgrenade_shgr07",
			"sfp_handgrenade_shgr07",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_SmershVest_01_F",
			"H_Watchcap_blk",
			"CUP_G_Scarf_Face_Tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_SmershVest_01_F",
			"H_Watchcap_blk",
			"CUP_G_Scarf_Face_Tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_O_R_Gorka_01_black_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_BasePersonnel: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_BasePersonnel";
		scope=2;
		displayName="Aggressor Guerilla (Base Personnel)";
		weapons[]=
		{
			"hgun_Pistol_01_F",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_O_TK_CrewBelt",
			"cwr3_o_headgear_sidecap_m1973",
			"G_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_TK_CrewBelt",
			"cwr3_o_headgear_sidecap_m1973",
			"G_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Camo_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_BasePersonnelArmed: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_BasePersonnelArmed";
		scope=2;
		displayName="Aggressor Guerilla (Base Personnel, Armed)";
		weapons[]=
		{
			"ABTM_Guerilla_AKN",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Guerilla_AKN",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"CUP_HandGrenade_RGD5",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"CUP_HandGrenade_RGD5",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_OD_Patrol",
			"cwr3_o_headgear_sidecap_m1973",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_OD_Patrol",
			"cwr3_o_headgear_sidecap_m1973",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Camo_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_BasePersonnelSentry: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_BasePersonnelSentry";
		scope=2;
		displayName="Aggressor Guerilla (Base Personnel, Sentry)";
		weapons[]=
		{
			"ABTM_Guerilla_AKN",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Guerilla_AKN",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"CUP_HandGrenade_RGD5",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"CUP_HandGrenade_RGD5",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacVest_oli",
			"cwr3_o_headgear_sidecap_m1973",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_oli",
			"cwr3_o_headgear_sidecap_m1973",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Camo_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Commissar: I_Officer_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Commissar";
		scope=2;
		displayName="Aggressor Guerilla (Commissar)";
		weapons[]=
		{
			"CUP_hgun_Browning_HP",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_Browning_HP",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShellRed",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_RUS_Smersh_2",
			"cwr3_o_headgear_sidecap_m1973",
			"ake_Mframe3_bk_bk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_Smersh_2",
			"cwr3_o_headgear_sidecap_m1973",
			"ake_Mframe3_bk_bk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Camo_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Conscript1: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Conscript1";
		scope=2;
		displayName="Aggressor Guerilla (Conscript 1)";
		weapons[]=
		{
			"CUP_srifle_Remington700",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_srifle_Remington700",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		uniformClass="U_C_Poor_1";
		camouflage=1.6;
	};
	class ABTMGuerilla_Conscript2: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Conscript2";
		scope=2;
		displayName="Aggressor Guerilla (Conscript 2)";
		weapons[]=
		{
			"cwr3_srifle_l42a1",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"cwr3_srifle_l42a1",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		uniformClass="U_Marshal";
		camouflage=1.6;
	};
	class ABTMGuerilla_Conscript3: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Conscript3";
		scope=2;
		displayName="Aggressor Guerilla (Conscript 3)";
		weapons[]=
		{
			"CUP_sgun_CZ584",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_sgun_CZ584",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"CUP_1Rnd_12Gauge_Pellets_No00_Buck",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		uniformClass="U_I_L_Uniform_01_tshirt_sport_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Conscript4: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Conscript4";
		scope=2;
		displayName="Aggressor Guerilla (Conscript 4)";
		weapons[]=
		{
			"CUP_srifle_Remington700",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_srifle_Remington700",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"CUP_6Rnd_762x51_R700",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		uniformClass="U_C_Mechanic_01_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Conscript5: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Conscript5";
		scope=2;
		displayName="Aggressor Guerilla (Conscript 5)";
		weapons[]=
		{
			"cwr3_srifle_l42a1",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"cwr3_srifle_l42a1",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		uniformClass="CUP_I_B_PMC_Unit_2";
		camouflage=1.6;
	};
	class ABTMGuerilla_Conscript6: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Conscript6";
		scope=2;
		displayName="Aggressor Guerilla (Conscript 6)";
		weapons[]=
		{
			"sgun_HunterShotgun_01_F",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"sgun_HunterShotgun_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Pellets",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		uniformClass="U_C_Man_casual_1_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Coordinator: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Coordinator";
		scope=2;
		displayName="Aggressor Guerilla (Coordinator)";
		weapons[]=
		{
			"cwr3_smg_uzi",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"cwr3_smg_uzi",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_HandGrenade_L109A1_HE",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_UZI",
			"CUP_HandGrenade_L109A1_HE",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"VSM_Peltor_M81",
			"ake_fleeceblcv_bk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"VSM_Peltor_M81",
			"ake_fleeceblcv_bk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_4_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Crewman: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Crewman";
		scope=2;
		displayName="Aggressor Guerilla (Crewman)";
		weapons[]=
		{
			"CUP_arifle_AKS",
			"hgun_Pistol_01_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS",
			"hgun_Pistol_01_F",
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
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
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
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_M81",
			"H_HeadSet_black_F",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_M81",
			"H_HeadSet_black_F",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_2_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Driver: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Driver";
		scope=2;
		displayName="Aggressor Guerilla (Driver)";
		weapons[]=
		{
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"ACE_Chemlight_White",
			"ACE_HandFlare_White",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_O_TK_CrewBelt",
			"H_HeadSet_black_F",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_TK_CrewBelt",
			"H_HeadSet_black_F",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_2_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterAntiTank: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		backpack="ABTM_Guerilla_AT";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterAntiTank";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, AT)";
		weapons[]=
		{
			"CUP_arifle_AKS74_Early",	
			"launch_RPG7_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74_Early",	
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
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
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
			"CUP_30Rnd_545x39_AK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"cwr3_o_vest_6b2",
			"sfp_m37w_helmet",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"cwr3_o_vest_6b2",
			"sfp_m37w_helmet",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterGunCrew: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterGunCrew";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, Gun Crew)";
		weapons[]=
		{
			"hgun_Pistol_01_F",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"cwr3_o_vest_6b2",
			"sfp_m37w_helmet",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"cwr3_o_vest_6b2",
			"sfp_m37w_helmet",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterMachineGunner: I_Soldier_AR_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterMachineGunner";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, Machinegunner)";
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
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"cwr3_o_vest_6b2_mg",
			"sfp_m37w_helmet",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"cwr3_o_vest_6b2_mg",
			"sfp_m37w_helmet",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterParamilitaryAKMS: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterParamilitaryAKMS";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, Paramilitary AKMS)";
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_Lime",
			"sfp_m37w_helmet",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_Lime",
			"sfp_m37w_helmet",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterParamilitaryBren: I_Soldier_AR_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterParamilitaryBren";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, Paramilitary Bren)";
		weapons[]=
		{
			"cwr3_lmg_bren",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"cwr3_lmg_bren",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"hlc_50Rnd_762x51_B_fal",
			"hlc_50Rnd_762x51_B_fal",
			"hlc_50Rnd_762x51_B_fal",
			"hlc_50Rnd_762x51_B_fal",
			"hlc_50Rnd_762x51_B_fal",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"hlc_50Rnd_762x51_B_fal",
			"hlc_50Rnd_762x51_B_fal",
			"hlc_50Rnd_762x51_B_fal",
			"hlc_50Rnd_762x51_B_fal",
			"hlc_50Rnd_762x51_B_fal",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"cwr3_i_vest_lbv_mg_olive",
			"sfp_m37w_helmet",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"cwr3_i_vest_lbv_mg_olive",
			"sfp_m37w_helmet",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterParamilitaryM14: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterParamilitaryM14";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, Paramilitary M14)";
		weapons[]=
		{
			"CUP_srifle_M14",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_srifle_M14",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_GER_Carrier_Rig_2",
			"sfp_m37w_helmet_dok_camo",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_Carrier_Rig_2",
			"sfp_m37w_helmet_dok_camo",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterParamilitarySKS: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterParamilitarySKS";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, Paramilitary SKS)";
		weapons[]=
		{
			"CUP_SKS",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_SKS",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"cwr3_i_vest_anite_blk",
			"sfp_m37w_helmet",
			"CUP_G_Scarf_Face_Grn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"cwr3_i_vest_anite_blk",
			"sfp_m37w_helmet",
			"CUP_G_Scarf_Face_Grn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterParamilitarySterling: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterParamilitarySterling";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, Paramilitary Sterling)";
		weapons[]=
		{
			"cwr3_smg_sterling",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"cwr3_smg_sterling",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"cwr3_30rnd_sterling_m",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_EDRL",
			"sfp_m37w_helmet_dok_camo",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_EDRL",
			"sfp_m37w_helmet_dok_camo",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterSniper: I_Soldier_M_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterSniper";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, Sniper)";
		weapons[]=
		{
			"ABTM_Guerilla_LeeEnfield",			
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Guerilla_LeeEnfield",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_10x_303_M",
			"CUP_10x_303_M",
			"CUP_10x_303_M",
			"CUP_10x_303_M",
			"CUP_10x_303_M",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_10x_303_M",
			"CUP_10x_303_M",
			"CUP_10x_303_M",
			"CUP_10x_303_M",
			"CUP_10x_303_M",
			"CUP_HandGrenade_L109A1_HE",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"cwr3_o_vest_6b2_svd",
			"sfp_m37w_helmet_dok_camo",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"cwr3_o_vest_6b2_svd",
			"sfp_m37w_helmet_dok_camo",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_tshirt_olive_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_FighterSquadLeader: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_FighterSquadLeaderS";
		scope=2;
		displayName="Aggressor Guerilla (Fighter, Squad Leader)";
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_AK_VEST_Lime",
			"sfp_m37w_helmet",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_AK_VEST_Lime",
			"sfp_m37w_helmet",
			"G_Balaclava_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Militia1: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Militia1";
		scope=2;
		displayName="Aggressor Guerilla (Militia 1)";
		weapons[]=
		{
			"CUP_srifle_Mosin_Nagant",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_srifle_Mosin_Nagant",
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
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"cwr3_b_headgear_m1_cover_net",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"cwr3_b_headgear_m1_cover_net",
			"VSM_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_1_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Militia2: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Militia2";
		scope=2;
		displayName="Aggressor Guerilla (Militia 2)";
		weapons[]=
		{
			"CUP_srifle_Mosin_Nagant",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_srifle_Mosin_Nagant",
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
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"cwr3_b_headgear_m1_olive",
			"CFP_Shemagh_Face_Tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_grn_F",
			"cwr3_b_headgear_m1_olive",
			"CFP_Shemagh_Face_Tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_5_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_Militia3: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Militia3";
		scope=2;
		displayName="Aggressor Guerilla (Militia 3)";
		weapons[]=
		{
			"CUP_srifle_Mosin_Nagant",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_srifle_Mosin_Nagant",
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
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_5Rnd_762x54_Mosin_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_cbr_F",
			"cwr3_b_headgear_m1_cover_net",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_cbr_F",
			"cwr3_b_headgear_m1_cover_net",
			"G_Balaclava_blk",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_tshirt_olive_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_NightRaiderAssaultLeader: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_NightRaiderAssaultLeader";
		scope=2;
		displayName="Aggressor Guerilla (Night Raider, Assault Leader)";
		weapons[]=
		{
			"ABTM_Guerilla_NR_Mk16",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Guerilla_NR_Mk16",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_Modular2_Black",
			"SP_Hood_Black",
			"VSM_Balaclava2_black_Peltor",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_Modular2_Black",
			"SP_Hood_Black",
			"VSM_Balaclava2_black_Peltor",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_Coverall_Black";
		camouflage=1.6;
	};
	class ABTMGuerilla_NightRaider_M16: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_NightRaiderAssaultLeader";
		scope=2;
		displayName="Aggressor Guerilla (Night Raider, M16)";
		weapons[]=
		{
			"ABTM_Guerilla_NR_M16A1E1",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Guerilla_NR_M16A1E1",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_PlateCarrier1_Black",
			"SP_Hood_Black",
			"G_Balaclava_blk",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_PlateCarrier1_Black",
			"SP_Hood_Black",
			"G_Balaclava_blk",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_Coverall_Black";
		camouflage=1.6;
	};
	class ABTMGuerilla_NightRaider_M3A1: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_NightRaiderAssaultLeader";
		scope=2;
		displayName="Aggressor Guerilla (Night Raider, M3A1)";
		weapons[]=
		{
			"ABTM_Guerilla_NR_M3A1",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Guerilla_NR_M3A1",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_PlateCarrier1_Black",
			"SP_Hood_Black",
			"G_Balaclava_blk",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_PlateCarrier1_Black",
			"SP_Hood_Black",
			"G_Balaclava_blk",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_Coverall_Black";
		camouflage=1.6;
	};
	class ABTMGuerilla_NightRaider_Romat: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_NightRaiderAssaultLeader";
		scope=2;
		displayName="Aggressor Guerilla (Night Raider, Romat)";
		weapons[]=
		{
			"ABTM_Guerilla_NR_Romat",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Guerilla_NR_Romat",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_PlateCarrier1_Black",
			"SP_Hood_Black",
			"VSM_balaclava2_Black",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_PlateCarrier1_Black",
			"SP_Hood_Black",
			"VSM_balaclava2_Black",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_Coverall_Black";
		camouflage=1.6;
	};
	class ABTMGuerilla_NightRaider_Type56: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_NightRaider_Type56";
		scope=2;
		displayName="Aggressor Guerilla (Night Raider, Type 56-2)";
		weapons[]=
		{
			"ABTM_Guerilla_NR_Type56",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Guerilla_NR_Type56",
			"ABTM_Guerilla_NR_BrowningHP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"ACE_HandFlare_Red",
			"ACE_HandFlare_White",
			"ACE_HandFlare_White",
			"ACE_M84",
			"ACE_M84",
			"Chemlight_red",
			"Chemlight_green",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"SP_PlateCarrier1_Black",
			"SP_Hood_Black",
			"VSM_balaclava2_Black",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"SP_PlateCarrier1_Black",
			"SP_Hood_Black",
			"VSM_balaclava2_Black",
			"CUP_NVG_HMNVS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_Coverall_Black";
		camouflage=1.6;
	};
	class ABTMGuerilla_Officer: I_Officer_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Officer";
		scope=2;
		displayName="Aggressor Guerilla (Officer)";
		weapons[]=
		{
			"CUP_hgun_Browning_HP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_hgun_Browning_HP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_BandollierB_oli",
			"cwr3_o_headgear_sidecap_m1973",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_oli",
			"cwr3_o_headgear_sidecap_m1973",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Camo_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_OfficerBodyguard: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Officer";
		scope=2;
		displayName="Aggressor Guerilla (Officer's Bodyguard)";
		weapons[]=
		{
			"CUP_arifle_AKS74_Early",
			"hgun_Pistol_01_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74_Early",
			"hgun_Pistol_01_F",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ACE_M84",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"ACE_M84",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ADFU_V_TBAS_Assaulter_AMC",
			"cwr3_o_headgear_ssh68_net",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_V_TBAS_Assaulter_AMC",
			"cwr3_o_headgear_ssh68_net",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Camo_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_OfficerForeign: I_Officer_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_Officer";
		scope=2;
		displayName="Aggressor Guerilla (Officer, Foreign)";
		weapons[]=
		{
			"arifle_AKS_F",
			"CUP_hgun_Browning_HP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_AKS_F",
			"CUP_hgun_Browning_HP",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"CUP_13Rnd_9x19_Browning_HP",
			"CUP_13Rnd_9x19_Browning_HP",
			"Laserbatteries",
			"CUP_HandGrenade_RGD5",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CFP_Modular1_Woodland",
			"SP_Beret2_Brown",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CFP_Modular1_Woodland",
			"SP_Beret2_Brown",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_WorkUniform_DPM";
		camouflage=1.6;
	};
	class ABTMGuerilla_ReconM79: I_Soldier_GL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		backpack="ABTM_Guerilla_ReconM79Bag";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_ReconM79";
		scope=2;
		displayName="Aggressor Guerilla (Recon, M79)";
		weapons[]=
		{
			"CUP_glaunch_M79",
			"hgun_Pistol_01_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_AKS_F",
			"hgun_Pistol_01_F",
			"Binocular",
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
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HE_M203",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacVest_brn",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_brn",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_1_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_ReconRadio: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		backpack="ABTM_Command_RTO";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_ReconRadio";
		scope=2;
		displayName="Aggressor Guerilla (Recon, Radio)";
		weapons[]=
		{
			"CUP_arifle_Sa58V",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_Sa58V",
			"Rangefinder",
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
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
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacVest_oli",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_oli",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_1_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_ReconRunner: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		backpack="ABTM_Misc_Kit";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_ReconRunner";
		scope=2;
		displayName="Aggressor Guerilla (Recon, Runner)";
		weapons[]=
		{
			"CUP_arifle_SAIGA_MK03_Wood",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_SAIGA_MK03_Wood",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_BandollierB_rgr",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_rgr",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_3_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_ReconSniper: I_Soldier_M_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		backpack="ABTM_Guerilla_ReconSniperBag";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_ReconSniper";
		scope=2;
		displayName="Aggressor Guerilla (Recon, Sniper)";
		weapons[]=
		{
			"ABTM_Guerilla_KSVK",
			"hgun_Pistol_01_F",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_Guerilla_KSVK",
			"hgun_Pistol_01_F",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_5Rnd_127x108_KSVK_M",
			"CUP_5Rnd_127x108_KSVK_M",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_5Rnd_127x108_KSVK_M",
			"CUP_5Rnd_127x108_KSVK_M",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_BandollierB_oli",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_oli",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_2_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_ReconSpotter: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_ReconSpotter";
		scope=2;
		displayName="Aggressor Guerilla (Recon, Spotter)";
		weapons[]=
		{
			"CUP_smg_SA61",
			"hgun_Pistol_01_F",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_smg_SA61",
			"hgun_Pistol_01_F",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_50Rnd_B_765x17_Ball_M",
			"CUP_50Rnd_B_765x17_Ball_M",
			"CUP_50Rnd_B_765x17_Ball_M",
			"CUP_50Rnd_B_765x17_Ball_M",
			"CUP_50Rnd_B_765x17_Ball_M",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"Laserbatteries",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_50Rnd_B_765x17_Ball_M",
			"CUP_50Rnd_B_765x17_Ball_M",
			"CUP_50Rnd_B_765x17_Ball_M",
			"CUP_50Rnd_B_765x17_Ball_M",
			"CUP_50Rnd_B_765x17_Ball_M",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"Laserbatteries",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacVest_camo",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_camo",
			"cwr3_i_headgear_boonie_flecktarn",
			"VSM_balaclava2_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_3_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_SMG1: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_SMG1";
		scope=2;
		displayName="Aggressor Guerilla (SMG 1)";
		weapons[]=
		{
			"CUP_smg_M3A1_blk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_smg_M3A1_blk",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_cbr_F",
			"cwr3_i_headgear_cap_fleckerlteppich",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_cbr_F",
			"cwr3_i_headgear_cap_fleckerlteppich",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_4_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_SMG2: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_SMG2";
		scope=2;
		displayName="Aggressor Guerilla (SMG 2)";
		weapons[]=
		{
			"CUP_smg_M3A1_blk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_smg_M3A1_blk",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_cbr_F",
			"cwr3_i_headgear_boonie_rolled_fleckerlteppich",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_cbr_F",
			"cwr3_i_headgear_boonie_rolled_fleckerlteppich",
			"VSM_Balaclava2_black_Goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Para_2_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_SMG3: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_SMG3";
		scope=2;
		displayName="Aggressor Guerilla (SMG 3)";
		weapons[]=
		{
			"CUP_smg_M3A1_blk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_smg_M3A1_blk",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_TacChestrig_oli_F",
			"cwr3_b_headgear_headband_woodland",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacChestrig_oli_F",
			"cwr3_b_headgear_headband_woodland",
			"G_Bandanna_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_C_Soldier_Bandit_5_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_SuicideBomber: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_SuicideBomber";
		scope=2;
		displayName="Aggressor Guerilla (Suicide Bomber)";
		weapons[]=
		{
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"ACE_DeadManSwitch",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"ACE_DeadManSwitch",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket2_02",
			"CFP_Headband_wdl",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket2_02",
			"CFP_Headband_wdl",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_deserter_F";
		camouflage=1.6;
	};
	class ABTMGuerilla_SuicideGrenadier: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_Guerillas";
		vehicleclass="ABTM_Guerillas";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMGuerilla_SuicideGrenadier";
		scope=2;
		displayName="Aggressor Guerilla (Suicide Grenadier)";
		weapons[]=
		{
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_Pistol_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"10Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade"
		};
		linkedItems[]=
		{
			"usm_vest_lbe_gr",
			"CFP_Headband_wdl",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"usm_vest_lbe_gr",
			"CFP_Headband_wdl",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="U_I_L_Uniform_01_tshirt_olive_F";
		camouflage=1.6;
	};
	class ABTMSFLight_AntiTank: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		backpack="ABTM_Misc_Kit";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSFLight_AntiTank";
		scope=2;
		displayName="Aggressor Light SF (AT)";
		weapons[]=
		{
			"ABTM_WDL_LIGHT_M4A1",
			"ABTM_WDL_LIGHT_FNX",
			"CUP_launch_APILAS",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_WDL_LIGHT_M4A1",
			"ABTM_WDL_LIGHT_FNX",
			"CUP_launch_APILAS",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Armatus_BB_OD",
			"H_Booniehat_khk_hs",
			"SP_Balaclava_M81",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Armatus_BB_OD",
			"H_Booniehat_khk_hs",
			"SP_Balaclava_M81",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class ABTMSFLight_Machinegunner: I_Soldier_AR_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSFLight_Machinegunner";
		scope=2;
		displayName="Aggressor Light SF (Machinegunner)";
		weapons[]=
		{
			"CUP_lmg_M60E4_norail_jungle",
			"ABTM_WDL_LIGHT_FNX",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_lmg_M60E4_norail_jungle",
			"ABTM_WDL_LIGHT_FNX",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"milgp_v_mmac_hgunner_belt_rgr",
			"tc2002_od",
			"SP_Balaclava_M81",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"milgp_v_mmac_hgunner_belt_rgr",
			"tc2002_od",
			"SP_Balaclava_M81",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class ABTMSFLight_Radioman: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		backpack="ABTM_SFLightRadiopack";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSFLight_Radioman";
		scope=2;
		displayName="Aggressor Light SF (Radioman)";
		weapons[]=
		{
			"ABTM_WDL_LIGHT_M4A1",
			"ABTM_WDL_LIGHT_FNX",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_WDL_LIGHT_M4A1",
			"ABTM_WDL_LIGHT_FNX",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Armatus_OD",
			"VSM_Mich2000_CamoSprayOD",
			"SP_Balaclava_M81",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Armatus_OD",
			"VSM_Mich2000_CamoSprayOD",
			"SP_Balaclava_M81",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class ABTMSFLight_Recon: I_Soldier_M_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSFLight_Recon";
		scope=2;
		displayName="Aggressor Light SF (Recon)";
		weapons[]=
		{
			"ABTM_WDL_LIGHT_M14",
			"ABTM_WDL_LIGHT_FNX",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_WDL_LIGHT_M14",
			"ABTM_WDL_LIGHT_FNX",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Armatus_BB_OD",
			"CFP_BoonieHat_M81",
			"VSM_Balaclava2_OD_glasses",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Armatus_BB_OD",
			"CFP_BoonieHat_M81",
			"VSM_Balaclava2_OD_glasses",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class ABTMSFLight_Rifleman: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSFLight_Rifleman";
		scope=2;
		displayName="Aggressor Light SF (Rifleman)";
		weapons[]=
		{
			"ABTM_WDL_LIGHT_M4A1",
			"ABTM_WDL_LIGHT_FNX",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_WDL_LIGHT_M4A1",
			"ABTM_WDL_LIGHT_FNX",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Armatus_BB_OD",
			"VSM_Peltor_OD",
			"SP_Balaclava_M81",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Armatus_BB_OD",
			"VSM_Peltor_OD",
			"SP_Balaclava_M81",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class ABTMSFLight_Specialist: I_Soldier_TL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSFLight_AntiTank";
		scope=2;
		displayName="Aggressor Light SF (Specialist)";
		weapons[]=
		{
			"ABTM_WDL_LIGHT_MP5",
			"ABTM_WDL_LIGHT_FNX",
			"Rangefinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_WDL_LIGHT_MP5",
			"ABTM_WDL_LIGHT_FNX",
			"Rangefinder",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"CUP_30Rnd_Subsonic_9x19_MP5",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Armatus_BB_OD",
			"CFP_BoonieHat2_M81",
			"VSM_balaclava2_Black",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Armatus_BB_OD",
			"CFP_BoonieHat2_M81",
			"VSM_balaclava2_Black",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class ABTMSFLight_TeamLeader: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSFLight_TeamLeader";
		scope=2;
		displayName="Aggressor Light SF (Squad Leader)";
		weapons[]=
		{
			"ABTM_WDL_LIGHT_M4A1TL",
			"ABTM_WDL_LIGHT_FNX",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_WDL_LIGHT_M4A1TL",
			"ABTM_WDL_LIGHT_FNX",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_blue",
			"Chemlight_blue",
			"Chemlight_red",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Armatus_OD",
			"VSM_Bowman_cap_balaclava_Olive",
			"VSM_Goggles",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Armatus_OD",
			"VSM_Bowman_cap_balaclava_Olive",
			"VSM_Goggles",
			"ACE_NVG_Wide",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="CFP_U_FieldUniform_M81";
		camouflage=1.6;
	};
	class ABTMSF_AntiTank: I_Soldier_LAT_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		backpack="ABTM_Misc_Kit";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSF_AntiTank";
		scope=2;
		displayName="Aggressor SF (AT)";
		weapons[]=
		{
			"ABTM_SF_M4A3",
			"ABTM_SF_P229R",
			"CUP_launch_APILAS",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_SF_M4A3",
			"ABTM_SF_P229R",
			"CUP_launch_APILAS",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTMSF_Autorifleman: I_Soldier_AR_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSF_Autorifleman";
		scope=2;
		displayName="Aggressor SF (AR)";
		weapons[]=
		{
			"CUP_lmg_M240_norail",
			"ABTM_SF_P229R",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_lmg_M240_norail",
			"ABTM_SF_P229R",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTMSF_Breacher: I_Soldier_TL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSF_Breacher";
		scope=2;
		displayName="Aggressor SF (Breacher)";
		weapons[]=
		{
			"CUP_smg_BallisticShield_MP7",
			"ABTM_SF_P229R",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_smg_BallisticShield_MP7",
			"ABTM_SF_P229R",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"CUP_40Rnd_46x30_MP7",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTMSF_GroupLeader: I_Soldier_SL_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSF_GroupLeader";
		scope=2;
		displayName="Aggressor SF (Group Leader)";
		weapons[]=
		{
			"ABTM_SF_M4A3GL",
			"ABTM_SF_P229R",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_SF_M4A3GL",
			"ABTM_SF_P229R",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Grenadier_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTMSF_Operator: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSF_Operator";
		scope=2;
		displayName="Aggressor SF (Operator)";
		weapons[]=
		{
			"ABTM_SF_M4A3",
			"ABTM_SF_P229R",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_SF_M4A3",
			"ABTM_SF_P229R",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTMSF_RTO: I_Soldier_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		backpack="ABTM_Main_Radiopack";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSF_RTO";
		scope=2;
		displayName="Aggressor SF (RTO)";
		weapons[]=
		{
			"ABTM_SF_M4A3",
			"ABTM_SF_P229R",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_SF_M4A3",
			"ABTM_SF_P229R",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Rifleman_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTMSF_Razvedka: I_Soldier_M_F
	{
		side=2;
		faction="ABTM_Redland_Aggressors_SF";
		vehicleclass="ABTM_SF";
		identityTypes[]=
		{
			"NoGlasses",
		};
		author="Ashton";
		_generalMacro="ABTMSF_Razvedka";
		scope=2;
		displayName="Aggressor SF (Razvedka)";
		weapons[]=
		{
			"ABTM_SF_Mk12SPR",
			"ABTM_SF_P229R",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ABTM_SF_Mk12SPR",
			"ABTM_SF_P229R",
			"Laserdesignator_03",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"Laserbatteries",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Chemlight_red",
			"ACE_Chemlight_Orange",
			"ACE_Chemlight_IR",
			"ACE_HandFlare_White",
			"ACE_HandFlare_Green",
			"I_E_IR_Grenade",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"ACE_M14",
			"ACE_M84",
			"SmokeShellRed",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Interceptor_Base_Grey",
			"CUP_H_OpsCore_Covered_UCP",
			"G_Balaclava_blk",
			"CUP_NVG_PVS15_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="SP_0000_Standard_FieldUniform_NodUrban";
		camouflage=1.6;
	};
	class ABTM_VehicleAir_A10: CUP_B_A10_DYN_USA
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "A-10B2 Thunderbolt"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_A10ACE: CUP_B_A10_DYN_USA
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "A-10B2 Thunderbolt ACE"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_A7Corsair: A7BLU
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "A-7B1 Corsair"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_A7CorsairACE: A7BLU
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "A-7B1 Corsair ACE"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_AH1: CUP_B_AH1Z_Dynamic_USMC
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "AH-1R"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_AH64: CUP_B_AH64_DL_USA
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "AH-64R"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_C47: CUP_B_C47_USA
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "C-47R"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_CH47: CUP_B_CH47F_USA
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "CH-47R"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_F4Phantom: F4E_BLU
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "F-4R Phantom"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_F4PhantomACE: F4E_BLU
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "F-4R Phantom ACE"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_JAS39Gripen: I_Plane_Fighter_04_F
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "JAS 39 R Gripen"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo02"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_JAS39GripenACE: I_Plane_Fighter_04_F
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "JAS 39 R Gripen ACE"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo02"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_Mi_24: CUP_O_Mi24_P_Dynamic_RU
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "Mi-24R"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_Mi_8: CUP_O_Mi8_RU
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "Mi-8R"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_Mi_8MTV: CUP_O_Mi8AMT_RU
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "Mi-8MTR"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_Mirage2000: M2000C_BLU
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "M2000R Mirage"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_Mirage2000ACE: M2000C_BLU
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "M2000R Mirage ACE"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_UH_1: 
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "UH-1R"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
	};
	class ABTM_VehicleAir_UH_60: 
	{
        faction = "ABTM_Redland_Aggressors_Airforce"; //Faction
        side = 2;
        displayName = "UH-60R"; //Ingame name
        crew = "ABTM_Pilot"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		typicalCargo[] = {"ABTM_Pilot"};
		gunnerType="ABTM_Pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
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
						vehicle="BM_Insurgent_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Insurgent_2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Insurgent_3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Insurgent_4";
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
						vehicle="BM_Insurgent_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Insurgent_2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Insurgent_3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Insurgent_3";
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
						vehicle="BM_Insurgent_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Insurgent_2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Insurgent_3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Insurgent_4";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Insurgent_3";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BM_Insurgent_4";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="BM_Insurgent_2";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="BM_Insurgent_2";
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
						vehicle="BM_Insurgent_1";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Insurgent_2";
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
						vehicle="BM_Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Insurgent_Associate";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Insurgent_1";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Insurgent_2";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Insurgent_3";
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
						vehicle="BM_Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Iskandar_Grenadier";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Iskandar_Autorifleman";
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
						vehicle="BM_Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Iskandar_Rifleman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Iskandar_Autorifleman";
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
						vehicle="BM_Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Iskandar_Rifleman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Iskandar_AntiArmor";
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
						vehicle="BM_Insurgent_Affiliate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Iskandar_Rifleman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Iskandar_Sharpshooter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Iskandar_Sharpshooter";
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
						vehicle="BM_Warlord_Heavy";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Iskandar_Grenadier";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Iskandar_Rifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BM_Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="BM_Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="BM_Bonesetter";
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
						vehicle="BM_Insurgent_Associate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Iskandar_Grenadier";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Iskandar_Rifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Iskandar_Rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Iskandar_Rifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BM_Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="BM_Bonesetter";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="BM_Iskandar_AntiArmor";
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
						vehicle="BM_Iskandar_Grenadier";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Iskandar_Rifleman";
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
						vehicle="BM_Iskandar_Grenadier";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Iskandar_Sharpshooter";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Iskandar_AntiArmor";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Bonesetter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Iskandar_Rifleman";
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
						vehicle="BM_Warlord_Heavy";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Warlord_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Iskandar_Sharpshooter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Iskandar_Grenadier";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Iskandar_Autorifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BM_Bonesetter";
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
						vehicle="BM_Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Rifleman_AK74_Light";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_AntiArmor_Light";
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
						vehicle="BM_Grenadier_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Rifleman_AK74_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_AntiArmor_Standard";
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
						vehicle="BM_Grenadier_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Heavy";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Rifleman_AK74_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_AntiArmor_Heavy";
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
						vehicle="BM_Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Rifleman_AKMS_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Light";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_AntiArmor_Light";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Rifleman_AKMS_Light";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Light";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="BM_AntiArmor_Light";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="BM_Medic";
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
						vehicle="BM_Grenadier_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Rifleman_AKMS_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_AntiArmor_Standard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Rifleman_AKMS_Standard";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Standard";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="BM_AntiArmor_Standard";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="BM_Medic";
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
						vehicle="BM_Grenadier_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Rifleman_AKMS_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Heavy";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_AntiArmor_Heavy";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Grenadier_Standard";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Heavy";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="BM_AntiArmor_Heavy";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="BM_Medic";
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
						vehicle="BM_Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Rifleman_AKMS_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Standard";
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
						vehicle="BM_Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Rifleman_AKMS_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_AntiArmor_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_AntiArmor_Standard";
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
						vehicle="BM_Grenadier_Light";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Rifleman_AK74_Light";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_AntiArmor_Disposable";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Light";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Marksman_Light";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BM_Medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class Assault_Team
				{
					name="Assault Team";
					faction="Buhriz_Movement";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="BM_Insurgent_Associate";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Rifleman_AKMS_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Auto_Rifleman_Heavy";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_AntiArmor_Heavy";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_AntiArmor_Disposable";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BM_Marksman_Standard";
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
						vehicle="BM_Sniper_Standard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Sniper_Standard";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Marksman_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Insurgent_Affiliate";
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
						vehicle="BM_Officer_Armed";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BM_Warlord_Heavy";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BM_Warlord_Standard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BM_Grenadier_Standard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BM_Medic";
						rank="PRIVATE";
						position[]={9,0,0};
					};
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
		class Leskovets_Communist_Party
		{
			name="Leskovets Communist Party";
			class LCP_HQ
			{
				name="HQ/Logistics";
				class LCP_Command_Team_1
				{
					name="Command Team 1";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_HQ_Officer";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_HQ_Coordinator";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_HQ_Radioman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class LCP_Command_Team_2
				{
					name="Command Team 2";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_HQ_Commander";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_HQ_Quartermaster";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_HQ_Radioman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class LCP_Command_Team_3
				{
					name="Command Team 3";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_HQ_Commander";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_HQ_Officer";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_HQ_Radioman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_HQ_Quartermaster";
						rank="CORPORAL";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class LCP_Bodyguard_Group
				{
					name="Bodyguard Group";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_HQ_Radioman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class LCP_Fire_Support_Team
				{
					name="Fire Support Team";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_HQ_Coordinator";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_HQ_Radioman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_HQ_Bodyguard";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
			};
			name2="Insurgents";
			class LCP_Insurgents
			{
				name="Insurgents";			
				class LCP_Insurgents_Cell_AntiTank
				{
					name="Cell (Anti Tank)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_AntiTank";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class LCP_Insurgents_Cell_Gunner
				{
					name="Cell (Gunner)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Gunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class LCP_Insurgents_Cell_Sniper
				{
					name="Cell (Sniper)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Sniper";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class LCP_Insurgents_Group_Fighters
				{
					name="Group (Fighters)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class LCP_Insurgents_Group_Snipers
				{
					name="Group (Snipers)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_SKS";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Sniper";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Sniper";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_Sniper";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Insurgent_Sniper";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};				
				class LCP_Insurgents_Skirmish_Team_Rifles
				{
					name="Skirmish Team (Rifles)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_AKM";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_SKS";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Insurgent_Gunner";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class LCP_Insurgents_Skirmish_Team_Assault
				{
					name="Skirmish Team (Assault)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_AKM";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_AKM";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_AKM";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_SKS";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Insurgent_Gunner";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class LCP_Insurgents_Skirmish_Team_Carbine
				{
					name="Skirmish Team (Carbine)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_AKM";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_SKS";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_SKS";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_SKS";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_SKS";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Insurgent_Gunner";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class LCP_Insurgents_Team_AntiTank
				{
					name="Team (Anti Tank)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_AntiTank";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_AntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class LCP_Insurgents_Team_Gunners
				{
					name="Team (Gunners)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Gunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Gunner";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class LCP_Insurgents_Team_Snipers
				{
					name="Team (Snipers)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_SKS";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Sniper";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Sniper";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class LCP_Insurgents_Team_Support
				{
					name="Team (Support)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_HQ_Radioman";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class LCP_Insurgents_Squad_Ambush
				{
					name="Squad (Ambush)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_AKM";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_AntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Insurgent_AntiTank";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Insurgent_Gunner";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="LCP_Insurgent_Gunner";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class LCP_Insurgents_Squad_Rifles
				{
					name="Squad (Rifles)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_AKM";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_Fighter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Insurgent_AntiTank";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="LCP_Insurgent_Gunner";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class LCP_Insurgents_Squad_Snipers
				{
					name="Squad (Snipers)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Insurgent_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_AKM";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_SKS";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Insurgent_AntiTank";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Insurgent_Sniper";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Insurgent_Skirmisher_Romat";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="LCP_Insurgent_Sniper";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
			};
			name3="Raiders";
			class LCP_Raiders
			{
				name="Raiders";			
				class LCP_Raider_AssaultSection
				{
					name="Assault Section";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Raider_RaidLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class LCP_Raider_Party
				{
					name="Party";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Raider_RaidLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Raider_Autorifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Raider_Rocketeer";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class LCP_Raider_Squad
				{
					name="Squad";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Raider_RaidLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Raider_Rocketeer";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Raider_Autorifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Raider_Rocketeer";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Raider_Autorifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="LCP_Raider_Sniper";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class LCP_Raider_Team_Autorifles
				{
					name="Team (Autorifles)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Raider_RaidLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Raider_Autorifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Raider_Autorifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class LCP_Raider_Team_Rocketeers
				{
					name="Team (Rocketeers)";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Raider_RaidLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Raider_Assaulter";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Raider_Rocketeer";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Raider_Rocketeer";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
			};
			name4="Rebels";
			class LCP_Rebels
			{
				name="Rebels";			
				class LCP_Rebel_Squad
				{
					name="Squad";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Rebel_SectionLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Rebel_TeamLeader";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Rebel_Grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Rebel_Machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Rebel_AntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Rebel_TeamLeader";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Rebel_Grenadier";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="LCP_Rebel_Machinegunner";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="LCP_Rebel_AntiTank";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class LCP_Rebel_Fireteam
				{
					name="Fireteam";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Rebel_TeamLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Rebel_Grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Rebel_Machinegunner";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Rebel_AntiTank";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
			};
			name5="Veterans";
			class LCP_Veterans
			{
				name="Veterans";			
				class LCP_Veteran_Squad
				{
					name="Squad";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Veteran_SectionLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Veteran_TeamLeader";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Veteran_Grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Veteran_Machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="LCP_Veteran_AntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="LCP_Veteran_TeamLeader";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="LCP_Veteran_Grenadier";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="LCP_Veteran_Machinegunner";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="LCP_Veteran_AntiTank";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class LCP_Veteran_Fireteam
				{
					name="Fireteam";
					faction="Leskovets_Communist_Party";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="LCP_Veteran_TeamLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="LCP_Veteran_Grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="LCP_Veteran_Machinegunner";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="LCP_Veteran_AntiTank";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
			};
		};
		class ABTM_Redland_Aggressors
		{
			name="Redland Aggressors";
			class ABTM_RA
			{
				name="Aggressors";
				class ABTM_RA_Crewteam3x
				{
					name="Crew Team (3x)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_Crewman";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_Crewman";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Crewman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
				};
				class ABTM_RA_Crewteam4x
				{
					name="Crew Team (4x)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_Crewman";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_Crewman";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Crewman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_Crewman";
						rank="CORPORAL";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Fireteam
				{
					name="Fireteam";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_Autorifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_Rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Fireteam_AA
				{
					name="Fireteam (AA)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_Autorifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_AntiAir";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_Rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Fireteam_DMR
				{
					name="Fireteam (DMR)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_DMR";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_DMRAssist";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Fireteam_MG
				{
					name="Fireteam (MG)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_Machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssist";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_HeliPilots_Attack2x
				{
					name="Helicopter Pilots (Attack, 2x)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_HeliPilot";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_HeliPilot";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
				};
				class ABTM_RA_HeliPilots_Transport2x
				{
					name="Helicopter Pilots (Transport, 2x)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_HeliPilot";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_HeliCrew";
						rank="SERGEANT";
						position[]={3,0,0};
					};
				};
				class ABTM_RA_HeliPilots_Transport4x
				{
					name="Helicopter Pilots (Transport, 4x)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_HeliPilot";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_HeliCrew";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_HeliCrew";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_HeliCrew";
						rank="CORPORAL";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Sentry2x
				{
					name="Sentry (2x)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_Sentry1";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_Sentry2";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
				class ABTM_RA_Sentry4x
				{
					name="Sentry (4x)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_Sentry1";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_Sentry2";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Sentry1";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_Sentry2";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Squad
				{
					name="Squad";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Autorifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_Rifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_Autorifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTM_Rifleman";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class ABTM_RA_Squad_Weapons_AA
				{
					name="Squad (Weapons, AA 2x)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Autorifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_AntiAir";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_Rifleman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_Autorifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTM_AntiAir";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTM_Rifleman";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class ABTM_RA_Squad_Weapons_DMR_MG
				{
					name="Squad (Weapons, DMR + MG)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Machinegunner";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_DMR";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTM_DMRAssist";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class ABTM_RA_Squad_Weapons_MG
				{
					name="Squad (Weapons, MG 2x)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Machinegunner";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_Machinegunner";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssist";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class ABTM_RA_Team_ATGM
				{
					name="Team (ATGM)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_DMR";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_ATGM";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_ATGMAssist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_AntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class ABTM_RA_Team_AssaultEngineers
				{
					name="Team (Assault Engineers)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Engineer";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_Engineer";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_Machinegunner";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssist";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class ABTM_RA_Team_Radio
				{
					name="Team (Radio)";
					faction="ABTM_Redland_Aggressors";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeader";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Radioman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_DMR";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_DMRAssist";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_RiflemanRPG1";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			name2="Aggressors Woodland";
			class ABTM_RAWDL
			{
				name="Aggressors (Woodland)";
				class ABTM_RA_Crewteam3x
				{
					name="Crew Team Woodland (3x)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_CrewmanWDL";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_CrewmanWDL";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_CrewmanWDL";
						rank="CORPORAL";
						position[]={5,0,0};
					};
				};
				class ABTM_RA_Crewteam4x
				{
					name="Crew Team Woodland (4x)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_CrewmanWDL";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_CrewmanWDL";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_CrewmanWDL";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_CrewmanWDL";
						rank="CORPORAL";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_FireteamWDL
				{
					name="Fireteam Woodland";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_AutoriflemanWDL";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_RiflemanWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Fireteam_AAWDL
				{
					name="Fireteam Woodland (AA)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_AutoriflemanWDL";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_AntiAirWDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_RiflemanWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Fireteam_DMRWDL
				{
					name="Fireteam Woodland (DMR)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_DMRWDL";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_DMRAssistWDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Fireteam_MGWDL
				{
					name="Fireteam Woodland (MG)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_MachinegunnerWDL";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssistWDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Sentry2xWDL
				{
					name="Sentry Woodland (2x)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_Sentry1WDL";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_Sentry2WDL";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
				class ABTM_RA_Sentry4xWDL
				{
					name="Sentry Woodland (4x)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_Sentry1WDL";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_Sentry2WDL";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_Sentry1WDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_Sentry2WDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_SquadWDL
				{
					name="Squad Woodland";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeaderWDL";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_AutoriflemanWDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_RiflemanWDL";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_AutoriflemanWDL";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTM_RiflemanWDL";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class ABTM_RA_Squad_Weapons_AAWDL
				{
					name="Squad Woodland (Weapons, AA 2x)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeaderWDL";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_AutoriflemanWDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_AntiAirWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_RiflemanWDL";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_AutoriflemanWDL";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTM_AntiAirWDL";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTM_RiflemanWDL";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class ABTM_RA_Squad_Weapons_DMR_MGWDL
				{
					name="Squad Woodland (Weapons, DMR + MG)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeaderWDL";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_MachinegunnerWDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssistWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_DMRWDL";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTM_DMRAssistWDL";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class ABTM_RA_Squad_Weapons_MGWDL
				{
					name="Squad Woodland (Weapons, MG 2x)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeaderWDL";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_MachinegunnerWDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssistWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_MachinegunnerWDL";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssistWDL";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class ABTM_RA_Team_ATGMWDL
				{
					name="Team Woodland (ATGM)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeaderWDL";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_DMRWDL";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_ATGMWDL";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_ATGMAssistWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_AntiTankWDL";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class ABTM_RA_Team_AssaultEngineersWDL
				{
					name="Team Woodland (Assault Engineers)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeaderWDL";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_EngineerWDL";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_EngineerWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_MachinegunnerWDL";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTM_MachinegunnerAssistWDL";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class ABTM_RA_Team_RadioWDL
				{
					name="Team Woodland (Radio)";
					faction="ABTM_Redland_Aggressors_Woodland";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTM_SquadLeaderWDL";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTM_TeamLeaderWDL";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTM_RadiomanWDL";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTM_DMRWDL";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTM_DMRAssistWDL";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTM_RiflemanRPG1WDL";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			name3="Garrison";
			class ABTM_RA_Garrison
			{
				name="Garrison";
				class ABTM_RA_Garrison_Pistols3x
				{
					name="Pistol Team (3x)";
					faction="ABTM_Redland_Aggressors_Garrison";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGarrison_Pistol1";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGarrison_Pistol2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGarrison_Pistol3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class ABTM_RA_Garrison_Pistols6x
				{
					name="Pistol Team (6x)";
					faction="ABTM_Redland_Aggressors_Garrison";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGarrison_Pistol1";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGarrison_Pistol2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGarrison_Pistol3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGarrison_Pistol1";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGarrison_Pistol2";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGarrison_Pistol3";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class ABTM_RA_Garrison_SMG3x
				{
					name="SMG Team (3x)";
					faction="ABTM_Redland_Aggressors_Garrison";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGarrison_SMG1";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGarrison_SMG2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGarrison_SMG3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class ABTM_RA_Garrison_SMG6x
				{
					name="SMG Team (6x)";
					faction="ABTM_Redland_Aggressors_Garrison";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGarrison_SMG1";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGarrison_SMG2";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGarrison_SMG3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGarrison_SMG1";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGarrison_SMG2";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGarrison_SMG3";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			name4="Special Forces";
			class ABTM_RA_SpecialForces
			{
				name="Special Forces";
				class ABTM_RA_SpecialForces_LightSF_Team_HK_AT
				{
					name="Light SF (Team, Hunter-Killer AT)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSFLight_TeamLeader";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSFLight_Recon";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSFLight_AntiTank";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSFLight_AntiTank";
						rank="SERGEANT";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_SpecialForces_LightSF_Team_HK_Sniper
				{
					name="Light SF (Team, Hunter-Killer Sniper)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSFLight_TeamLeader";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSFLight_Specialist";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSFLight_Recon";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSFLight_Recon";
						rank="SERGEANT";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_SpecialForces_LightSF_Team_Recon
				{
					name="Light SF (Team, Recon)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSFLight_TeamLeader";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSFLight_Recon";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSFLight_Radioman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSFLight_Specialist";
						rank="SERGEANT";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_SpecialForces_LightSF_Squad
				{
					name="Light SF (Squad)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSFLight_TeamLeader";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSFLight_Recon";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSFLight_Radioman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSFLight_Specialist";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMSFLight_Machinegunner";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMSFLight_AntiTank";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMSFLight_Rifleman";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTMSFLight_Specialist";
						rank="SERGEANT";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTMSFLight_Machinegunner";
						rank="CORPORAL";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=2;
						vehicle="ABTMSFLight_AntiTank";
						rank="CORPORAL";
						position[]={17,0,0};
					};
					class Unit10
					{
						side=2;
						vehicle="ABTMSFLight_Rifleman";
						rank="CORPORAL";
						position[]={19,0,0};
					};
				};
				class ABTM_RA_SpecialForces_LightSF_Squad_Ambush
				{
					name="Light SF (Squad, Ambush)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSFLight_TeamLeader";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSFLight_Specialist";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSFLight_Radioman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSFLight_Rifleman";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMSFLight_Machinegunner";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMSFLight_Machinegunner";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMSFLight_AntiTank";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTMSFLight_Rifleman";
						rank="SERGEANT";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTMSFLight_Machinegunner";
						rank="CORPORAL";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=2;
						vehicle="ABTMSFLight_Machinegunner";
						rank="CORPORAL";
						position[]={17,0,0};
					};
					class Unit10
					{
						side=2;
						vehicle="ABTMSFLight_AntiTank";
						rank="CORPORAL";
						position[]={19,0,0};
					};
				};
				class ABTM_RA_SpecialForces_SF_Team_AT
				{
					name="SF (Team, AT)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSF_AntiTank";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSF_AntiTank";
						rank="CORPORAL";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_SpecialForces_SF_Team_AR
				{
					name="SF (Team, AR)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSF_Autorifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSF_Autorifleman";
						rank="CORPORAL";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_SpecialForces_SF_Team_Breach
				{
					name="SF (Team, Breach)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSF_Breacher";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSF_Breacher";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="CORPORAL";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_SpecialForces_SF_Team_Operators
				{
					name="SF (Team, Operators)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="CORPORAL";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_SpecialForces_SF_Team_Spotters
				{
					name="SF (Team, Spotters)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSF_Razvedka";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSF_RTO";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="CORPORAL";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_SpecialForces_SF_Squad
				{
					name="SF (Squad)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSF_Razvedka";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSF_RTO";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSF_Autorifleman";
						rank="CORPORAL";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="SERGEANT";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMSF_Autorifleman";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMSFLight_AntiTank";
						rank="CORPORAL";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTMSFLight_AntiTank";
						rank="CORPORAL";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="SERGEANT";
						position[]={17,0,0};
					};
					class Unit9
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="CORPORAL";
						position[]={19,0,0};
					};
					class Unit10
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="CORPORAL";
						position[]={21,0,0};
					};
					class Unit11
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="CORPORAL";
						position[]={23,0,0};
					};
				};
				class ABTM_RA_SpecialForces_SF_Squad_CQC
				{
					name="SF (Squad, CQC)";
					faction="ABTM_Redland_Aggressors_SF";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMSF_Razvedka";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMSF_RTO";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMSF_AntiTank";
						rank="CORPORAL";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="SERGEANT";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMSF_Breacher";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="CORPORAL";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTMSF_Autorifleman";
						rank="CORPORAL";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTMSF_GroupLeader";
						rank="SERGEANT";
						position[]={17,0,0};
					};
					class Unit9
					{
						side=2;
						vehicle="ABTMSF_Breacher";
						rank="CORPORAL";
						position[]={19,0,0};
					};
					class Unit10
					{
						side=2;
						vehicle="ABTMSF_Operator";
						rank="CORPORAL";
						position[]={21,0,0};
					};
					class Unit11
					{
						side=2;
						vehicle="ABTMSF_Autorifleman";
						rank="CORPORAL";
						position[]={23,0,0};
					};
				};
			};
		};
		class ABTM_Redland_Aggressors_Guerillas
		{
			name="Redland Aggressors (Guerillas)";
			class ABTM_RA_Guerillas_Advisors
			{
				name="Advisors";
				class ABTM_RA_Guerillas_AdvisorTeam
				{
					name="Advisor Team";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Advisor1";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_Advisor2";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_Advisor3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class ABTM_RA_Guerillas_AdvisorTeamCoordination
				{
					name="Advisor Team (Coordination)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Advisor2";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_Coordinator";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRadio";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="CORPORAL";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Guerillas_AdvisorTeamFireSupport
				{
					name="Advisor Team (Fire Support)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Advisor1";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRadio";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class ABTM_RA_Guerillas_AdvisorTeamNightRaid
				{
					name="Advisor Team (Night Raid)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Advisor3";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M16";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M16";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Romat";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Romat";
						rank="CORPORAL";
						position[]={9,0,0};
					};
				};
			};
			name2="Command";
			class ABTM_RA_Guerillas_Command
			{
				name="Command";
				class ABTM_RA_Guerillas_Bodyguards
				{
					name="Bodyguards";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={11,0,0};
					};
				};
				class ABTM_RA_Guerillas_Officers
				{
					name="Officer Team";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Officer";
						rank="MAJOR";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerForeign";
						rank="MAJOR";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_Commissar";
						rank="CAPTAIN";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_Advisor1";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={11,0,0};
					};
				};
				class ABTM_RA_Guerillas_RTO
				{
					name="RTO Team";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Officer";
						rank="MAJOR";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_Commissar";
						rank="CAPTAIN";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRadio";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRunner";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_OfficerBodyguard";
						rank="SERGEANT";
						position[]={11,0,0};
					};
				};
			};
			name3="Conscripts";
			class ABTM_RA_Guerillas_Conscripts
			{
				name="Conscripts";
				class ABTM_RA_Guerillas_Commissar_Team
				{
					name="Commissar Team";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Commissar";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_Commissar";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
			    };
				class ABTM_RA_Guerillas_ConscriptSquad
				{
					name="Conscript Squad";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript1";
						rank="PRIVATE";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript2";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript4";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript5";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript6";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript1";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript2";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript3";
						rank="CORPORAL";
						position[]={17,0,0};
					};
					class Unit9
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript4";
						rank="PRIVATE";
						position[]={19,0,0};
					};
					class Unit10
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript5";
						rank="PRIVATE";
						position[]={21,0,0};
					};
					class Unit11
					{
						side=2;
						vehicle="ABTMGuerilla_Conscript6";
						rank="PRIVATE";
						position[]={23,0,0};
					};
				};
			};
			name4="Guerillas";
			class ABTM_RA_Guerillas
			{
				name="Guerillas";
				class ABTM_RA_Guerillas_Fighter_Fireteam
				{
					name="Fighter Fireteam";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Fighter_Fireteam_AT
				{
					name="Fighter Fireteam (AT)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Fighter_Fireteam_MG
				{
					name="Fighter Fireteam (MG)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Fighter_Guncrew2x
				{
					name="Fighter Guncrew (2x)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterGunCrew";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterGunCrew";
						rank="CORPORAL";
						position[]={3,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Fighter_Squad
				{
					name="Fighter Squad";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={17,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Fighter_Squad_AT
				{
					name="Fighter Squad (AT)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={17,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Fighter_Squad_MG
				{
					name="Fighter Squad (MG)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSquadLeader";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_FighterSniper";
						rank="CORPORAL";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMGuerilla_FighterAntiTank";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit8
					{
						side=2;
						vehicle="ABTMGuerilla_FighterMachineGunner";
						rank="PRIVATE";
						position[]={17,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Militia_Squad
				{
					name="Militia Squad";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Militia1";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_Militia2";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_Militia3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_SMG1";
						rank="CORPORAL";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_SMG2";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_SMG3";
						rank="PRIVATE";
						position[]={11,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Militia_Team_Rifles
				{
					name="Militia Team (Rifles)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_Militia1";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_Militia2";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_Militia3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Militia_Team_SMG
				{
					name="Militia Team (SMG)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_SMG1";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_SMG2";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_SMG3";
						rank="PRIVATE";
						position[]={5,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Paramilitary_Cell
				{
					name="Paramilitary Cell";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitarySKS";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitarySterling";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitarySKS";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitarySterling";
						rank="PRIVATE";
						position[]={13,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Paramilitary_Cell_AKMS
				{
					name="Paramilitary Cell (AKMS)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitarySKS";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={13,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Paramilitary_Cell_Bren
				{
					name="Paramilitary Cell (Bren)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryM14";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryM14";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={13,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Paramilitary_Cell_Rifles
				{
					name="Paramilitary Cell (Rifles)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryM14";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryM14";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryM14";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryM14";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryBren";
						rank="PRIVATE";
						position[]={13,0,0};
					};
			    };
				class ABTM_RA_Guerillas_Paramilitary_Cell_Sterling
				{
					name="Paramilitary Cell (Sterling)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitarySterling";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitarySterling";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitaryAKMS";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitarySterling";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=2;
						vehicle="ABTMGuerilla_FighterParamilitarySterling";
						rank="PRIVATE";
						position[]={13,0,0};
					};
			    };
			};
			name5="Night Raiders";
			class ABTM_RA_Guerillas_NightRaiders
			{
				name="Night Raiders";
				class ABTM_RA_Guerillas_NightRaiders_StrikeTeam
				{
					name="Strike Team";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaiderAssaultLeader";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M16";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M3A1";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Romat";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Type56";
						rank="SERGEANT";
						position[]={9,0,0};
					};
			    };
				class ABTM_RA_Guerillas_NightRaiders_StrikeTeam_CQC
				{
					name="Strike Team (CQC)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaiderAssaultLeader";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M3A1";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Type56";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M3A1";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Type56";
						rank="SERGEANT";
						position[]={9,0,0};
					};
			    };
				class ABTM_RA_Guerillas_NightRaiders_StrikeTeam_M16
				{
					name="Strike Team (M16A1E1)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaiderAssaultLeader";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M16";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M16";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M16";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M16";
						rank="SERGEANT";
						position[]={9,0,0};
					};
			    };
				class ABTM_RA_Guerillas_NightRaiders_StrikeTeam_Rifles
				{
					name="Strike Team (Rifles)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaiderAssaultLeader";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Romat";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Romat";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Romat";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_Romat";
						rank="SERGEANT";
						position[]={9,0,0};
					};
			    };
				class ABTM_RA_Guerillas_NightRaiders_StrikeTeam_SMG
				{
					name="Strike Team (SMG)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaiderAssaultLeader";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M3A1";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M3A1";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M3A1";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_NightRaider_M3A1";
						rank="SERGEANT";
						position[]={9,0,0};
					};
			    };
			};
			name6="Recon";
			class ABTM_RA_Guerillas_Recon
			{
				name="Recon";
				class ABTM_RA_Guerillas_Recon_Pair_Radio
				{
					name="Pair (Radio)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRadio";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRunner";
						rank="CORPORAL";
						position[]={3,0,0};
					};
				};
				class ABTM_RA_Guerillas_Recon_Pair_Sniper
				{
					name="Pair (Sniper)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSniper";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="SERGEANT";
						position[]={3,0,0};
					};
				};
				class ABTM_RA_Guerillas_Recon_Pair_Spotters
				{
					name="Pair (Spotters)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRadio";
						rank="SERGEANT";
						position[]={3,0,0};
					};
				};
				class ABTM_RA_Guerillas_Recon_Team
				{
					name="Team";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_ReconM79";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRadio";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSniper";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRunner";
						rank="CORPORAL";
						position[]={9,0,0};
					};
				};
				class ABTM_RA_Guerillas_Recon_Team_Radio
				{
					name="Team (Radio)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_ReconM79";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRadio";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRadio";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="SERGEANT";
						position[]={9,0,0};
					};
				};
				class ABTM_RA_Guerillas_Recon_Team_Snipers
				{
					name="Team (Snipers)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_ReconM79";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSniper";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSniper";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="SERGEANT";
						position[]={9,0,0};
					};
				};
				class ABTM_RA_Guerillas_Recon_Team_Spotters
				{
					name="Team (Spotters)";
					faction="ABTM_Redland_Aggressors_Guerillas";
					side=2;
					class Unit0
					{
						side=2;
						vehicle="ABTMGuerilla_ReconM79";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=2;
						vehicle="ABTMGuerilla_ReconRadio";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="SERGEANT";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=2;
						vehicle="ABTMGuerilla_ReconSpotter";
						rank="SERGEANT";
						position[]={9,0,0};
					};
				};
			};
		};
	};
};