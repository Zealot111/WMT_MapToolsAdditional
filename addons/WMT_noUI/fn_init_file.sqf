diag_log "WMT_noUI started";
//onMapSingleClick {if (_shift) then {};true};
if (!isServer) exitWith{};
[] spawn {
    WMT_Global_PatchesNames=[];
    private "_patches";
    _patches = [configFile >> "CfgPatches", 2, true, true] call BIS_fnc_returnChildren;
    {WMT_Global_PatchesNames pushBack (configName _x);} forEach _patches;
    WMT_Global_PatchesNames = WMT_Global_PatchesNames - ["AiA_BaseConfig_F","CUP_ibr_plants"];
    publicVariable "WMT_Global_PatchesNames";
    sleep 15;
    zlt_pbo_checked = [];
    addMissionEventHandler ["HandleDisconnect", {zlt_pbo_checked = zlt_pbo_checked - [_this select 2];}];
    {
        if (alive _x && isPlayer _x && {!(getPlayerUid _x in zlt_pbo_checked )}) then {
            [[[],
            {
                waitUntil {!isnull player};
                private ["_patches","_patchesNames","_diff"];
                _patches = [configFile >> "CfgPatches", 2, true, true] call BIS_fnc_returnChildren;
                _patchesNames = []; {  _patchesNames pushBack (configName _x);  } forEach _patches;
                waitUntil {!isNil "WMT_Global_PatchesNames"};
                _diff = +(WMT_Global_PatchesNames);
                {_diff = _diff - [_x];} forEach _patchesNames;
                if (count _diff != 0) then {
                    [[[name player, getPlayerUid player,_diff], {diag_log ["ZLTCHECKPBO",_this];}], "bis_fnc_spawn",false] call bis_fnc_mp;
                    diag_log ["ZLTCHECKPBO",[name player, getPlayerUid player,_diff]];
                    // should be tested
                    // serverCommand format["#kick %1",getPlayerUid player];
                };
            }], "bis_fnc_spawn",_x] call bis_fnc_mp;
            zlt_pbo_checked pushBack (getplayerUid _x);
        };
        sleep 5.4;
    } foreach playableUnits;
};
