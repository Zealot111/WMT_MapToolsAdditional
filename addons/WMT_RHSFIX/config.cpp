////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Thu Mar 31 01:19:56 2016 : Created on Thu Mar 31 01:19:56 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class WMT_RHSFIX : config.bin{
class CfgPatches
{
	class WMT_RHSFIX
	{
		units[] = {"RHS_UH60M_base","RHS_CH_47F_base","RHS_C130J","RHS_AH64_base","RHS_A10"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Dubbing_Radio_F","A3_Air_F","A3_Air_F_Beta","A3_Air_F_EPC_Plane_CAS_01","RHS_US_A2_AirImport","A3_Air_F","A3_Air_F_Beta","A3_Air_F_EPC_Plane_CAS_02","A3_Air_F_Heli_Light_02","A3_Air_F_Beta_Heli_Attack_02","rhs_c_a2port_air","RHS_A2_AirImport","rhs_main","rhs_c_heavyweapons","rhs_decals","rhs_optics","rhs_c_troops","A3_Armor_F","A3_Soft_F","A3_Characters_F","A3_Characters_F_Beta","A3_Characters_F_Gamma","A3_Characters_F_EPA","A3_Characters_F_EPB"};
		author = "Zealot";
		authorUrl = "https://github.com/Zealot111/WMT_MapToolsAdditional";
		magazines[] = {};
		ammo[] = {"rhs_ammo_TOW_AT"};
	};
};
class CfgVoice
{
	class Base;
	class ENG: Base
	{
		protocol = "";
	};
	class ENGB: Base
	{
		protocol = "";
	};
	class GRE: Base
	{
		protocol = "";
	};
	class PER: Base
	{
		protocol = "";
	};
	class ENGVR: Base
	{
		protocol = "";
	};
	class RHS_BaseENGF: Base
	{
		protocol = "";
	};
	class RHS_ENGF: RHS_BaseENGF
	{
		protocol = "";
	};
	class rhs_Female01ENG: RHS_ENGF
	{
		protocol = "";
	};
	class BaseRUS: Base
	{
		protocol = "";
	};
	class RUS: BaseRUS
	{
		protocol = "";
	};
};
class Turrets;
class MainTurret;
class OpticsIn;
class CfgVehicles
{
	class Helicopter_Base_H;
	class Plane;
	class Heli_Light_02_base_F;
	class RHS_Mi8_base: Heli_Light_02_base_F
	{
		radarType = 8;
	};
	class RHS_UH60_Base;
	class RHS_UH60M_base: RHS_UH60_Base
	{
		radarType = 8;
	};
	class Heli_Transport_02_base_F;
	class RHS_CH_47F_base: Heli_Transport_02_base_F
	{
		radarType = 8;
	};
	class RHS_C130J_Base;
	class RHS_C130J: RHS_C130J_Base
	{
		radarType = 8;
	};
	class Heli_Attack_01_base_F;
	class RHS_AH64_base: Heli_Attack_01_base_F
	{
		radarType = 8;
	};
	class RHS_AH1Z_base: Heli_Attack_01_base_F
	{
		radarType = 8;
	};
	class Plane_CAS_01_base_F;
	class RHS_A10: Plane_CAS_01_base_F
	{
		radarType = 8;
	};
	class O_Plane_CAS_02_F;
	class RHS_su25_base: O_Plane_CAS_02_F
	{
		radarType = 8;
	};
	class Heli_Attack_02_base_F;
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
		radarType = 8;
	};
	class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		radarType = 8;
	};
	class sab_an2_BASE: Plane
	{
		radarType = 8;
	};
	class sab_C130_J_Base: Plane
	{
		radarType = 8;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class RDS_6Rnd_TOW_HMMWV: VehicleMagazine
	{
		ammo = "rhs_ammo_TOW2_AT";
	};
	class RDS_6Rnd_TOW2: VehicleMagazine
	{
		ammo = "rhs_ammo_TOW2_AT";
	};
	class RDS_6Rnd_AT13: VehicleMagazine
	{
		ammo = "rhs_ammo_9m113";
	};
	class RDS_Igla: VehicleMagazine
	{
		ammo = "rhs_ammo_9k38";
	};
	class RDS_2Rnd_Igla: VehicleMagazine
	{
		ammo = "rhs_ammo_9k38";
	};
};
class CfgAmmo
{
	class M_Titan_AT;
	class rhs_ammo_TOW_AT: M_Titan_AT
	{
		irLock = 0;
	};
};
//};
