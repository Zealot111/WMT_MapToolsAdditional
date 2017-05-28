if (hasInterface) then {

	0 spawn {
		waitUntil{sleep 3; !isNil "rbc_spectator_uids_global"};
			if !(getPlayerUID player in rbc_spectator_uids_global) then 
			{
				HIA3_Spectator_ShowEnemy = false;
				HIA3_Spectator_Tag = 1;
				HIA3_Spectator_FreeView = false;
				HIA3_Spectator_FreeViewTI = false;
				HIA3_Spectator_SpecialAdmin = true;
			};
	};
};



