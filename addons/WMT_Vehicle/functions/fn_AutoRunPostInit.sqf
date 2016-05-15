WMT_mutexAction = false;
WMT_Local_hardFieldRepairParts 	= ["HitEngine", "HitLTrack","HitRTrack"];
WMT_Local_fieldRepairHps	= ["HitLFWheel","HitLBWheel","HitLMWheel","HitLF2Wheel","HitRFWheel","HitRBWheel","HitRMWheel","HitRF2Wheel"] + WMT_Local_hardFieldRepairParts;
if (!hasInterface) exitWith {};

// 0xDB - Left Win

wmt_fnc_mainFlexiMenu = {
		diag_log ["wmt_fnc_mainFlexiMenu",_this];
		// Field Repair
		private _objs  = (nearestObjects [player,["LandVehicle","Air","Ship"], 10]);
		private _veh = objNull;
		private _vehName = "";
		private _fieldRepEnabled = false;
		private _dragStaticWpnEnabled = false;
		if (count _objs != 0) then {
				_veh = _objs select 0;
				_vehName =  getText (configFile / "CfgVehicles" / typeof _veh / "displayname");
				if (alive player && {(vehicle player == player)} && {speed _veh < 3} && {!WMT_mutexAction} && {alive _veh} && {_veh call WMT_fnc_vehicleIsDamaged}) then {
						_fieldRepEnabled = true;
				};
				if (alive player && {(vehicle player == player)} && {speed _veh < 3} && {!WMT_mutexAction}
						&& {alive _veh} && {_veh isKindOf "StaticWeapon"} && {not (_veh getVariable ["WMT_drag", false])} && {count crew _veh == 0}) then {
								_dragStaticWpnEnabled = true;
						};

		};

    [
        ["main",  localize "STR_WMT_INT_MENU" , "popup"],
        [
					[
						localize "STR_CANCEL_ACTION", // text on button
						{WMT_mutexAction = false;}, // code to run
						"\A3\ui_f\data\igui\cfg\actions\ico_OFF_ca.paa", // icon
						"", // tooltip
						"",  // submenu
						0x1E, // shortcut key
						WMT_mutexAction, // enabled?
						WMT_mutexAction // visible if true
					],
          [
            format [ localize "STR_FREPAIR_MENU", _vehName], // text on button
            {[] spawn wmt_fnc_FieldRepairVehicle}, // code to run
            "\A3\ui_f\data\map\vehicleicons\pictureRepair_ca.paa", // icon
            "", // tooltip
           	"",  // submenu
            0x13, // shortcut key
            _fieldRepEnabled, // enabled?
            _fieldRepEnabled // visible if true
          ],
					[
            format [ localize "STR_CARRY_MENU", _vehName], // text on button
            {[] spawn WMT_fnc_StaticWpnDrag}, // code to run
            "\A3\ui_f\data\igui\cfg\actions\take_ca.paa", // icon
            "", // tooltip
           	"",  // submenu
            0x2E, // shortcut key
            _dragStaticWpnEnabled, // enabled?
            _dragStaticWpnEnabled // visible if true
          ]
        ]
    ];
};

if (!(player diarySubjectExists "scripts")) then {
		player createDiarySubject ["scripts", localize "STR_DIARY_SCRIPTS"];
};
player createDiaryRecord ["scripts", [localize "STR_FIELD_REPAIR", localize "STR_FIELDREPAIR_HELP"]];
player createDiaryRecord ["scripts", [localize "STR_DRAG_STATIC", localize "STR_DRAG_HELP"]];


my_fnc_openFleximenu = {
    ["player", [], -100, "_this call wmt_fnc_mainFlexiMenu"] call cba_fnc_fleximenu_openMenuByDef;
};

//LWIN
["WMT", "OpenInteractionMenu", ["Open interaction menu", "Open interaction menu"], { if (!dialog) then {_this spawn my_fnc_openFleximenu}; }, {}, [0xDB, [false, false, false]]] call cba_fnc_addKeybind;
// 0
["WMT", "WeaponOnBack", ["Move weapon on back", "Move weapon on back"], { if (alive player) then {player action ["SWITCHWEAPON", vehicle player, vehicle player, 99]}; }, {}, [0x0B, [false, false, false]]] call cba_fnc_addKeybind;

/*
(not isNull cursorTarget) and {alive player} and {(player distance cursortarget) <= 7} and
{(vehicle player == player)} and {speed cursortarget < 3} and {not WMT_mutexAction} and {alive cursortarget} and {cursortarget call WMT_fnc_vehicleIsDamaged}
*/
[] spawn {
  sleep 0.1;
  player addAction ["<t color='#0353f5'>"+localize("STR_CANCEL_ACTION")+"</t>", {WMT_mutexAction = false}, [], 10, false, true, '', 'WMT_mutexAction'];

};
