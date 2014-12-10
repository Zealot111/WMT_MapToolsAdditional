class CfgPatches {
	class WMT_RHSIAN {
		units[] = {};
		weapons[] = {"rhs_m4_compm4"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Acc","rhsusf_c_weapons","iansky_opt"};
		author = "Zealot";
		authorUrl = "https://github.com/Zealot111/WMT_MapToolsAdditional";
	};
};


class SlotInfo;

class rhs_western_rifle_scopes_slot: SlotInfo
{
	compatibleItems[] = 
	{
		"rhsusf_acc_LEUPOLDMK4",
		"rhsusf_acc_LEUPOLDMK4_2",
		"rhsusf_acc_HAMR",
		"rhsusf_acc_EOTECH",
		"rhsusf_acc_compm4",
		"rhsusf_acc_ELCAN",
		"rhsusf_acc_ACOG",
		"rhsusf_acc_ACOG2",
		"rhsusf_acc_ACOG3",
		"iansky_rds",
		"iansky_rx01",
		"iansky_t1",
		"iansky_deltapoint"
	};
};



class CfgWeapons
{
	class rhs_weap_m4;
	class rhs_m4_compm4 : rhs_weap_m4
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "iansky_rx01";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15";
			};
		};
	};

	class rhs_weap_m4_grip;
	class rhs_m4_grip_compm4 : rhs_weap_m4_grip
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "iansky_rx01";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15";
			};
		};
	};
	class rhs_m4_m320;
	class rhs_m4_m320_compm4 : rhs_m4_m320
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "iansky_rx01";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15";
		};
	};
	};


};