////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Mar 15 21:32:32 2016 : Created on Tue Mar 15 21:32:32 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class WMT_NewMed : config.bin{
class CfgPatches
{
	class NewMed
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_NATO","A3_Weapons_F_Launchers_Titan","A3_Soft_F","A3_Boat_F_Boat_Armed_01","A3_Boat_F","A3_Structures_F_Civ_Constructions","A3_Data_F","A3_Weapons_F_Explosives"};
		authorUrl = "";
		author[] = {"Zealot"};
		version = "1.5.0";
		versionStr = "1.5.0";
		versionAr[] = {1,5,0};
	};
};
class CfgWeapons
{
	class ItemCore;
	class FirstAidKit: ItemCore
	{
		model = "\A3\Structures_F_EPA\Items\Medical\Bandage_F.p3d";
		picture = "\NewMed\bandage_ca.paa";
	};
};
//};
