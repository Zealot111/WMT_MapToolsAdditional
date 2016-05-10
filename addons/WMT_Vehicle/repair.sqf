// 0xDB - Left Win

wmt_fnc_mainFlexiMenu =
{
	diag_log ["A3L_Interaction",_this];
    [
        ["main", " Interaction", "popup"],
        [
          [
            "Repair Vehicle", // text on button
            {diag_log ["ACTION",_this,CBA_ui_target]}, // code to run
            "", // icon
            "", // tooltip
           "_this call wmt_fnc_mainFlexiMenu",  // submenu
            DIK_R, // shortcut key
            true, // enabled?
            true // visible if true
          ],
          [
            "Repair Vehicle", // text on button
            {cursortarget setDamage 0}, // code to run
            "", // icon
            "", // tooltip
            [], // submenu
            DIK_R, // shortcut key
            true, // enabled?
            true // visible if true
          ]
        ]
    ];
};

wmt_fnc_mainFlexiMenu =
{
	diag_log ["A3L_Interaction",_this];
    [
        ["main", " Interaction", "popup"],
        [
          [
            "Repair Vehicle", // text on button
            {diag_log ["ACTION",_this,CBA_ui_target]}, // code to run
            "", // icon
            "", // tooltip
           "_this call wmt_fnc_mainFlexiMenu",  // submenu
            DIK_R, // shortcut key
            true, // enabled?
            true // visible if true
          ],
          [
            "Repair Vehicle", // text on button
            {cursortarget setDamage 0}, // code to run
            "", // icon
            "", // tooltip
            [], // submenu
            DIK_R, // shortcut key
            true, // enabled?
            true // visible if true
          ]
        ]
    ];
};



my_fnc_openFleximenu = {
    ["player", [], -100, "_this call wmt_fnc_mainFlexiMenu"] call cba_fnc_fleximenu_openMenuByDef;
};
Finally, add your keybinding in the usual way.

//["My Awesome Mod", "Open Menu", "my_fnc_openFleximenu", [0xDB,true,true,true]] call CBA_fnc_registerKeybind;


["My Awesome Mod", "Open Menu", ["My Pretty Key Name", "My Pretty Tool Tip"], { _this call my_fnc_openFleximenu }, {}, [0xDB, [false, false, false]]] call cba_fnc_addKeybind;




WMT_fnc_AbstractRepair = {




};
