class CfgPatches {
	class WMT_RHSNoradio {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Dubbing_Radio_F", "RHS_RU_Radio"};
		author = "Zealot";
		authorUrl = "https://github.com/Zealot111/WMT_MapToolsAdditional";
	};
};

class CfgAddons {
    class PreloadAddons {
       class WMT_RHSNoradio {
          list[] = {"WMT_RHSNoradio"};
       };
    };
};


class CfgVoice {
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

