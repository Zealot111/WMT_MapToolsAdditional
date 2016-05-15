 /*
 	Name: WMT_fnc_StaticWpnDrag

 	Author(s):
		Zealot

 	Description:
		Moving static objects

	Parameters:
		Nothing

 	Returns:
		Nothing
*/
private ["_wpn", "_reltxt", "_rel"];

_wpn = (nearestObjects [player,["LandVehicle","Air","Ship"], 10]) select 0;

if (isnil "_wpn" || WMT_mutexAction) exitWith {};


WMT_drag = true; WMT_mutexAction = true;
_wpn attachto [player,[0,1,1.5]];
_wpn setVariable ["WMT_drag", true, true];
player action ["SWITCHWEAPON", vehicle player, vehicle player, 99];

[[[_wpn,true], {(_this select 0) lock (_this select 1);}], "bis_fnc_spawn",_wpn] call bis_fnc_mp;


[[[player,_wpn,true], {
		waitUntil {sleep 3.4; !(isPlayer (_this select 0)) || !((_this select 0) getVariable ["WMT_drag", false])};
		if ((_this select 0) getVariable ["WMT_drag", false]) then {
				detach (_this select 1);
				(_this select 1) setposatl ((_this select 0) modelToWorld [0,1,0]);
		};
}], "bis_fnc_spawn", false] call bis_fnc_mp;

sleep 0.1;

_reltxt = format [localize("STR_RELEASE_STATIC"), getText (configFile >> "CfgVehicles" >> typeof _wpn >> "Displayname")];
_rel 	= player addaction [("<t color=""#0353f5"">") + _reltxt + "</t>",{WMT_drag = false},[],15,true,true,"","true"];
player forceWalk true;

while {count crew _wpn == 0 and WMT_drag && WMT_mutexAction and vehicle player == player and alive player && alive _wpn && currentWeapon player == "" } do {
	sleep 0.16;
};

player removeAction _rel;
player forceWalk false;

WMT_drag = false; WMT_mutexAction = false;
_wpn setVariable ["WMT_drag", false, true];

[[[_wpn,false], {(_this select 0) lock (_this select 1);}],"bis_fnc_spawn",_wpn] call bis_fnc_mp;

if not (isNull _wpn) then {
	detach _wpn;
	_wpn setposatl (player modelToWorld [0,1,0]);
};
