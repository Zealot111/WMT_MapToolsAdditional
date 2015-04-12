////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Sun Apr 12 17:25:28 2015 : Source 'file' date Sun Apr 12 17:25:28 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class WMT_noUI2 : config.bin{
class CfgPatches
{
	class WMT_noUI
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Dubbing_Radio_F","A3_UI_F"};
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
		class WMT_noUI
		{
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
			class init_file
			{
				postInit = 1;
			};
		};
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
};
class cfgInGameUI
{
	class CommandBar
	{
		left = 0;
		top = 7777;
	};
	class Cursor
	{
		select = "\WMT_noUI\empty.paa";
		leader = "\WMT_noUI\empty.paa";
		mission = "\WMT_noUI\empty.paa";
		customMark = "\WMT_noUI\empty.paa";
		outArrow = "\WMT_noUI\empty.paa";
		selectColor[] = {0,0,0,0};
		leaderColor[] = {0,0,0,0};
		customMarkColor[] = {0,0,0,0};
	};
	class PeripheralVision
	{
		cueTexture = "A3\ui_f\data\igui\cfg\PeripheralVision\cueTexture_gs.paa";
		bloodTexture = "A3\ui_f\data\igui\cfg\PeripheralVision\bloodTexture_ca.paa";
		bloodColor[] = {1,1,1,0.75};
		cueColor[] = {0,0,0,0};
		cueEnemyColor[] = {0,0,0,0};
		cueFriendlyColor[] = {0,0,0,0};
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
class CfgDiary
{
	class FixedPages
	{
		class Units
		{
			type = "";
		};
		class Statistics
		{
			type = "";
		};
	};
	class Icons
	{
		playerWest = "A3\ui_f\data\map\diary\icons\playerUnknown_ca.paa";
		playerEast = "A3\ui_f\data\map\diary\icons\playerUnknown_ca.paa";
		playerCiv = "A3\ui_f\data\map\diary\icons\playerUnknown_ca.paa";
		playerGuer = "A3\ui_f\data\map\diary\icons\playerUnknown_ca.paa";
	};
};

class RscControlsGroup;class RscXSliderH;class RscEdit;class CA_TextDisplayMode; class RscText;

class RscDisplayOptionsVideo {
	class Controls {
		class QualityGroup: RscControlsGroup{
			class controls{
				class CA_SliderBrightness: RscText{
					idc = 112;
					x = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "Для медвежат";
					tooltip = "Перезайдите без модов RBC чтобы отредактировать яркость";
				};
				class CA_ValueBrightness: RscText{
					idc = 111;
					style = 0;
					x = "16.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "Перезайдите в игру без модов RBC чтобы отредактировать яркость";
				};
				class CA_SliderGamma: RscText{
					idc = 110;
					x = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "Перезайдите в игру без модов RBC чтобы отредактировать гамму";
					text = "Для медвежат";
				};
				class CA_ValueGamma: RscText{
					idc = 109;
					style = 0;
					x = "16.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "Перезайдите в игру без модов RBC чтобы отредактировать гамму";
				};
		    };
		};
	};
};


class RscActiveText;class RscDisplayMainMap;
class RscDisplayGetReady: RscDisplayMainMap{
	class Controls{
        class TopRight: RscControlsGroup{
            class controls{
                class ButtonPlayer: RscActiveText{
                    onbuttonclick = "";
                    color[] = {0,0,0,0};
                    text =  "\WMT_noUI\empty.paa";
                    colorText[] = {0,0,0,0};
                    colorActive[] = {0,0,0,0};
                    tooltip = "";
                };
            };
        };
    };
};

class RscDisplayServerGetReady: RscDisplayGetReady{
	class Controls{
        class TopRight: RscControlsGroup{
            class controls{
                class ButtonPlayer: RscActiveText{
                    onbuttonclick = "";
                    color[] = {0,0,0,0};
                    text =  "\WMT_noUI\empty.paa";
                    colorText[] = {0,0,0,0};
                    colorActive[] = {0,0,0,0};
                    tooltip = "";
                };
            };
        };
    };
};

class RscDisplayClientGetReady: RscDisplayGetReady{
	class Controls{
        class TopRight: RscControlsGroup{
            class controls{
                class ButtonPlayer: RscActiveText{
                    onbuttonclick = "";
                    color[] = {0,0,0,0};
                    text =  "\WMT_noUI\empty.paa";
                    colorText[] = {0,0,0,0};
                    colorActive[] = {0,0,0,0};
                    tooltip = "";
                };
            };
        };
    };
};

//};
