class CfgPatches
{
	class rbc_spectator_cl
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
	class rbc_spectator_cl
	{
		class fnc
		{
			file = "rbc_spectator_cl\functions";
			class init {postInit = 1;};
		};
	};
};