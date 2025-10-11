//a different set of buyables
class fdfW {
    side = "Blufor";
    loadout = "fdfW";
    mode = "conquer";
    driverGps = "true";
    crewHelmet = "";
    disableTIEquipment = "true";

    // needs to be in every faction
    class StartVehicle {
        type = "rhsusf_m998_w_4dr";
        condition = "false";

        class rhsusf_m998_w_4dr {
            condition = "true";
            code = "[(_this select 0)] call BC_buyables_fnc_configureBluforStartVehicle;";
        };

        class rhsusf_m998_d_4dr {
            condition = "!BC_IS_WOODLAND";
        };
    };

    class Logistics {
        displayName = "Logistics";
        kindOf = "Vehicles";
        maxBuyCount = 9;
        minPlayerCount = 0;

        class KAR_FDF_RG32_M2 {
            displayName = "RG-32M M2 (Olive)";
            description = "5 seats";
            price = 10;
            stock = 2;
            spawnEmpty = 1;
            wheelCargo = 4;
            condition = "true";
            code = "[(_this select 0), ['rhs_olive',1], ['hide_ogpkover',0,'hide_ogpknet',0,'hide_ogpkbust',0,'hide_rhino',1,'DoorLF',0,'DoorRF',0,'DoorLB',0,'DoorRB',0,'DUKE_Hide',1,'hide_spare',0]] call BIS_fnc_initVehicle;";
            vehicleInit = "[[],[]]";
        };


        class KAR_FDF_SISU_COV {
            displayName = "SISU Covered";
            description = "Covered Truck. Carries a lot of stuff.";
            price = 10;
            stock = 3;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "true";
            code = "[(_this select 0),['KAR_FDF_SISU_COV_M05W',1], true] call BIS_fnc_initVehicle;";
            vehicleInit = "[[],[]]";
        };
		
		class KAR_FDF_SISU_FUEL {
            displayName = "Fuel Truck";
            description = "Fuel Truck. Carries a lot of fuel.";
            stock = 1;
            spawnEmpty = 1;
            wheelCargo = 3;
            condition = "true";
            code = "[(_this select 0),['KAR_FDF_SISU_FUEL_M05W',1], true] call BIS_fnc_initVehicle; (_this select 0) setVariable ['ace_rearm_isSupplyVehicle', false, true]; (_this select 0) setVariable ['ACE_isRepairVehicle', false, true];";
            vehicleInit = "[[],[]]";
        };
    };

    class Recon {
        displayName = "Recon";
        kindOf = "Vehicles";
        maxBuyCount = 5;
        minPlayerCount = 20;

        class RHS_MELB_H6M {
            displayName = "OH-6M";
            description = "1 GPS\nNO Thermals\nNO Benches";
            price = 10;
            stock = 1;
            code = "(_this select 0) addItemCargoGlobal ['ACE_NVG_Wide',2];(_this select 0) addItemCargoGlobal ['ItemGPS',1];(_this select 0) disableTIEquipment true; [(_this select 0)] call BC_setup_fnc_fuelDrain;";
            spawnEmpty = 1;
            vehicleInit = "[[],[]]";
        };

        class B_Quadbike_01_F {
            displayName = "Quadbike";
            description = "Fast and nimble.";
            price = 3;
            stock = 4;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "true";
            vehicleInit = "[[],[]]";
        };
    };

    class Support {
        displayName = "Support";
        kindOf = "Vehicles";
        maxBuyCount = 1;
        minPlayerCount = 40;

        class KAR_FDF_BTR {
            displayName = "BTR-60";
            description = "Amphibious APC.";
            stock = 1;
            spawnEmpty = 1;
            trackCargo = 3;
            price = 10;
            condition = "true";
            vehicleInit = "[['KAR_FDF_BTR_M05W',1],['crate_l1_unhide',1,'crate_l2_unhide',1,'crate_l3_unhide',1,'crate_l4_unhide',0,'crate_r1_unhide',1,'crate_r2_unhide',1,'crate_r3_unhide',0,'crate_r4_unhide',0,'water_1_unhide',0,'water_2_unhide',0,'wheel_1_unhide',1,'wheel_2_unhide',0]]";
        };
    };

    class Heavy {
        displayName = "Heavy";
        kindOf = "Vehicles";
        maxBuyCount = 1;
        minPlayerCount = 60;

        class RHS_UH60M2 {
            displayName = "UH-60M";
            description = "1 GPS\nFRIES equipped";
            stock = 1;
            code = "(_this select 0) addItemCargoGlobal ['ACE_NVG_Wide',2];(_this select 0) addItemCargoGlobal ['ItemGPS',1];[(_this select 0)] call ace_fastroping_fnc_equipFRIES;[(_this select 0)] call BC_setup_fnc_fuelDrain;";
            spawnEmpty = 1;
            vehicleInit = "[[],[]]";
        };
    };

    class Special {
        displayName = "Special";
        kindOf = "Special";
        maxBuyCount = 2;

        class I_C_Boat_Transport_01_F {
            kindOf = "Special";
            displayName = "Boat + Diving Equipment inside * 4";
            description = "Get it in the Start Vehicle (ACE Interaction).";
            stock = 1;
            code = "(_this select 1) setVariable ['grad_carryBoatCargo', 1, true];[(_this select 1), 'B_Boat_Transport_01_F'] remoteExec ['BC_buymenu_fnc_addBoatInteraction', [0,-2] select isDedicated];";
            spawnEmpty = 1;
        };

        class rhsusf_explosive_m112 {
            kindOf = "Special";
            displayName = "Breaching Equipment";
            description = "Explosives and Wirecutter in Start Vehicle.";
            stock = 1;
            code = "(_this select 1) addItemCargoGlobal ['ACE_wirecutter',2];(_this select 1) addItemCargoGlobal ['ACE_Clacker',2];(_this select 1) addMagazineCargoGlobal ['DemoCharge_Remote_Mag', 2];";
            spawnEmpty = 1;
        };

        class Land_JumpTarget_F {
            kindOf = "Special";
            displayName = "Hunt IR Equipment";
            description = "Hunt IR Equipment in Start Vehicle.";
            stock = 1;
            code = "(_this select 1) addItemCargoGlobal ['ACE_HuntIR_monitor',2];(_this select 1) addMagazineCargoGlobal ['ACE_HuntIR_M203',4];";
            spawnEmpty = 1;
        };
    };
};
