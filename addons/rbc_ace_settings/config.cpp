class CfgPatches
{
	class rbc_ace_settings
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"ace_interaction", "ace_repair",  "ace_common", "ace_frag", "ace_hearing", "ace_interact_menu", "ace_interaction", "ace_medical", "ace_hitreactions"};
		author[] = {"Zealot"};
		authorUrl = "";
	};
};
class ACE_Settings
{
	class ace_hitreactions_minDamageToTrigger
	{
		value = -1;
		force = 1;
		isClientSettable = 0;
	};
	class ace_medical_playerDamageThreshold
	{
		value = 0.5;
		force = 1;
		isClientSettable = 0;
	};
	class ace_medical_preventInstaDeath
	{
		value = 0;
		force = 1;
		isClientSettable = 0;
	};
	class ace_ace_frag_Enabled
	{
		value = 1;
		force = 1;
		isClientSettable = 0;
	};
	class ace_hearing_disableEarRinging
	{
		value = 1;
		isClieentSettable = 0;
	};
	class ace_hearing_enableCombatDeafness
	{
		value = 0;
		isClientSettable = 0;
	};
};
class ACE_Medical_Actions
{
	class Basic
	{
		class Bandage
		{
			treatmentTime = 10;
		};
	};
};
//};
