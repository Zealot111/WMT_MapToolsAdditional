class CfgPatches {
	class WMT_noUI {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Dubbing_Radio_F", "A3_UI_F"};
		author = "Zealot";
		authorUrl = "https://github.com/Zealot111/WMT_MapToolsAdditional";
	};
};

class CfgAddons {
    class PreloadAddons {
       class WMT_noUI {
          list[] = {"WMT_noUI"};
       };
    };
};

class CfgFunctions
{
	class WMT_Add
	{
		class Main
		{
			file = "WMT_noUI";
			class init_file{postInit=1;};
		};
	};
};


class CfgVoice {
	class Base;
	class ENG : Base {
		protocol = "";
	};
	class ENGB : Base {
		protocol = "";
	};
	class GRE: Base {
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
};

class cfgInGameUI {
	class CommandBar {
		left = 0;
		top = 7777;
	};
};

class RscMapControl
{
	maxSatelliteAlpha = 0.55;
	colorMainCountlines[] = {0.82,0,0};
	colorBackground[] = {0.92,0.92,0.92,1};
	colorCountlines[] = {0.64,0.52,0.3,1};
	colorLevels[] = {0,0,0,1};
	sizeExLevel = 0.025;
	colorTracks[] = {1.0,0.0,0.0,1};
	colorTracksFill[] = {1.0,1.0,0.0,1};
	colorRoads[] = {0.0,0.0,0.0,1};
	colorRoadsFill[] = {1,1,0,1};
	colorMainRoads[] = {0.0,0.0,0.0,1};
	colorMainRoadsFill[] = {1,0.62,0.43,1};
};

class CfgDiary  {
	class FixedPages  {
		class Units  {
			type = "";
		};
		class Statistics  {
			type = "";
		};
	};
	class Icons  {
		playerWest = "A3\ui_f\data\map\diary\icons\playerUnknown_ca.paa";
		playerEast = "A3\ui_f\data\map\diary\icons\playerUnknown_ca.paa";
		playerCiv = "A3\ui_f\data\map\diary\icons\playerUnknown_ca.paa";
		playerGuer = "A3\ui_f\data\map\diary\icons\playerUnknown_ca.paa";
	};
};

