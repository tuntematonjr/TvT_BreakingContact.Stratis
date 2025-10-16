//a different set of buyables
class RussiaW {
    side = "Opfor";
    loadout = "russiaw";
    mode = "conquer";
    
    // needs to be in every faction
    class StartVehicle {
        deployAction = "";
        retractAction = "";
        condition = "false";
        driverGps = "true";
        crewHelmet = "rhs_tsh4";
        disableTIEquipment = "true";
        terminalPositionOffset = "[0.3,-2.85,0.7]";
        terminalVectorDirAndUp = "[[0,1,0.3],[0,0,0.7]]";

        class rhs_gaz66_r142_vdv {
            condition = "true";
            vehicleInit = "[['rhs_sand',1], ['mast_handler',0,'cover_hide',0,'spare_hide',0,'bench_hide',0,'rear_numplate_hide',1,'light_hide',1]]";
            code = "[(_this select 0)] call BC_buyables_fnc_configureOpforStartVehicle;";
        };
    };

    class Logistics {
        displayName = "Logistics";
        kindOf = "Vehicles";
        maxBuyCount = 9;
        minPlayerCount = 0;

        class RWR_ural_camo {
            displayName = "Ural (Winter)";
            description = "The workhorse of your army.";
            price = 10;
            stock = 7;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "true";
            code = "[(_this select 0),['RWR_winter',1],['spare_hide',0,'bench_hide',0,'people_tag_hide',0,'rear_numplate_hide',1,'light_hide',1]] call BIS_fnc_initVehicle;";
            vehicleInit = "[[],[]]";
        };

        class RWR_tigr_camo {
            displayName = "Tigr (Winter)";
            description = "Armored car, unlike the HMMWV it can take a hit. Probably.";
            price = 10;
            stock = 7;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "true";
            vehicleInit = "[[], []]";
        };
    };

    class Recon {
        displayName = "Recon";
        kindOf = "Vehicles";
        maxBuyCount = 2;
        minPlayerCount = 20;

        class RWR_tigr_m_camo {
            displayName = "Tigr-M (Winter)";
            description = "The perfect commander limousine.";
            price = 10;
            stock = 2;
            wheelCargo = 2;
            spawnEmpty = 1;
            condition = "true";
            vehicleInit = "[[],[]]";
        };        
        
        class RWR_BRDM2_HQ_camo {
            displayName = "BRDM-2HQ (Winter)";
            description = "Armed with pkm, good for recon and command.";
            stock = 1;
            price = 10;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "true";
            vehicleInit = "[[], []]";
        };
    };


    class Support {
        displayName = "Support";
        kindOf = "Vehicles";
        maxBuyCount = 1;
        minPlayerCount = 40;
  
        class RWR_btr80_camo {
            displayName = "BTR-80 (Winter)";
            description = "Armored APC.";
            stock = 1;
            price = 10;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "true";
            code = "[(_this select 0),['RWR_winter',1],['crate_l1_unhide',1,'crate_l2_unhide',1,'crate_l3_unhide',1,'crate_l4_unhide',1,'crate_r1_unhide',1,'crate_r2_unhide',1,'crate_r3_unhide',1,'crate_r4_unhide',1,'water_1_unhide',1,'water_2_unhide',1,'wheel_1_unhide',1,'wheel_2_unhide',1]] call BIS_fnc_initVehicle;"
            vehicleInit = "[[],[]]";
        };        
        
        class RWR_BRDM2_camo {
            displayName = "BRDM-2 (Winter)";
            description = "Armed version of BRDM2.";
            stock = 1;
            price = 10;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "true";
            vehicleInit = "[[], []]";
        };
    };


    // class Armor {
    //     displayName = "Armor";
    //     kindOf = "Vehicles";
    //     maxBuyCount = 1;
    //     minPlayerCount = 60;

    //     // class rhs_t80bvk {
    //     //     displayName = "T80-BVK";
    //     //     description = "Heavy tank, best vehicle you can get.";
    //     //     stock = 1;
    //     //     spawnEmpty = 1;
    //     //     trackCargo = 2;
    //     //     condition = "true";
    //     //     vehicleInit = "[['standard',1], ['hide_com_shield',1,'sightElevationAPFSDS',0]]";
    //     // };

    //     // class rhs_bmp1d_msv {
    //     //     displayName = "BMP1-D";
    //     //     description = "Carries more soldiers but is less protected.";
    //     //     stock = 1;
    //     //     spawnEmpty = 1;
    //     //     trackCargo = 2;
    //     //     condition = "true";
    //     //     vehicleInit = "[['standard',1], ['crate_l1_unhide',1,'crate_l2_unhide',1,'crate_l3_unhide',1,'crate_r1_unhide',1,'crate_r2_unhide',1,'crate_r3_unhide',1,'wood_1_unhide',1,'maljutka_hide_source',1,'cargoHandler1',0]]";
    //     // };
    // };

    class Special {
        displayName = "Special";
        kindOf = "Special";
        maxBuyCount = 2;

        class Land_DataTerminal_01_F {
            kindOf = "Special";
            displayName = "Radio Relay Terminal";
            description = "Replaces radio truck internal module.\nIs attached to the radio truck but can be detached.\nSends with 50-100% strength depending on distance to radio truck.";
            stock = 1;
            picturePath = "pic\terminal.paa";
            code = "diag_log str (_this); private _terminal = missionNameSpace getVariable ['GRAD_tracking_terminalObj', objNull]; [_terminal, (_this select 1)] call GRAD_tracking_fnc_terminalAttachToVeh;";
        };

        class Land_BagFence_Round_F {
            kindOf = "Special";
            displayName = "Defense Pack";
            description = "1 KORD MG, Sandbag-Fortificatons and 2 Axes for cutting vegetation in Radio Truck.";
            stock = 1;
            code = "diag_log str (_this);private _mg = 'rhs_KORD_high_VDV' createVehicle [0,0,0];_mg attachTo [(_this select 1), [0,0,0]];[_mg, (_this select 1)] call ace_cargo_fnc_loadItem; (_this select 1) addItemCargoGlobal ['grad_axe', 2]; [(_this select 1), 'Land_CzechHedgehog_01_new_F', 9] call grad_fortifications_fnc_addFort; [(_this select 1), 'Land_BagFence_Long_F', 9] call grad_fortifications_fnc_addFort;";
            spawnEmpty = 1;
        };

        class Land_WeldingTrolley_01_F {
            kindOf = "Special";
            displayName = "Radio Truck Armor";
            description = "Selfmade armor for radio truck to protect its tires against small arms fire.";
            stock = 2;
            code = "diag_log str (_this); [(_this select 1)] call BC_buymenu_fnc_applyTruckArmor;";
        };
    };
};