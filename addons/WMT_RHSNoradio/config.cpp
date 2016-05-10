////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Jan 05 11:14:42 2015 : Created on Mon Jan 05 11:14:42 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class WMT_RHSNoradio : config.bin{
class CfgPatches
{
	class WMT_RHSNoradio
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Dubbing_Radio_F","rhs_c_radio"};
		author = "Zealot";
		authorUrl = "https://github.com/Zealot111/WMT_MapToolsAdditional";
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class WMT_RHSNoradio
		{
			list[] = {"WMT_RHSNoradio"};
		};
	};
};
class CfgVoice
{
	class Base;
	class BaseRUS: Base
	{
		protocol = "";
	};
	class RUS: BaseRUS
	{
		protocol = "";
	};
};
//};
