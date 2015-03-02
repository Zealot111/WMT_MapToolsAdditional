////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.69
//Sun Mar 01 16:16:00 2015 : Source 'file' date Sun Mar 01 16:16:00 2015
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
		requiredAddons[] = {"A3_Air_F","A3_Air_F_Beta","A3_Air_F_EPC_Plane_CAS_01","RHS_US_A2_AirImport","A3_Air_F","A3_Air_F_Beta","A3_Air_F_EPC_Plane_CAS_02","A3_Air_F_Heli_Light_02","A3_Air_F_Beta_Heli_Attack_02","rhs_c_a2port_air","RHS_A2_AirImport","rhs_main","rhs_c_heavyweapons","rhs_decals","rhs_optics","rhs_c_troops","A3_Armor_F","A3_Soft_F"};
		author = "Zealot";
		authorUrl = "https://github.com/Zealot111/WMT_MapToolsAdditional";
		magazines[] = {};
		ammo[] = {};
	};
};
class Turrets;
class MainTurret;
class OpticsIn;
class CfgVehicles
{
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
	class Wheeled_APC_F;
	class rhs_btr_base: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class pp61am3x12
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = "+110";
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = "+110";
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = "0.7/1.2";
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class pp61am3x4: pp61am3x12
					{
						initFov = "0.7/4";
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
					};
				};
			};
		};
	};
};
//};
