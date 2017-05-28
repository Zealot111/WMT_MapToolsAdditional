class CfgPatches
{
	class rbc_spectator_srv
	{
		name = "OCAP";
		author = "Zealot";
		requiredAddons[] = {"A3_Functions_F"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class rbc_spectator_srv
	{
		class fnc
		{
			file = "rbc_spectator_srv\functions";
			class init {postInit = 1;};
		};
	};
};