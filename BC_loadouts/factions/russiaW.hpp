class russiaw {
    class AllUnits {
        primaryWeapon = "arifle_RWR_ak74m_npz";
        primaryWeaponMagazine = "30Rnd_545x39_7n10_RWR";
        primaryWeaponMuzzle = "rhs_acc_dtk1";
        primaryWeaponPointer = "rhs_acc_2dpZenit";
        primaryWeaponOptics = "rhs_acc_1p87";
        handgunWeapon = "rhs_weap_pya";
        handgunWeaponMagazine = "rhs_mag_9x19_17";
        uniform = "U_O_RWR_Overall_gloves";
        vest = "V_RWR_6b23_vog_headset_emr";
        backpack = "B_RWR_umbts";
        headgear = "H_RWR_6b7_bala2";
        binoculars = "Binocular";
        map = "ItemMap";
        radio = "TFAR_fadak";
        compass = "ItemCompass";
        watch = "ItemWatch";
        nvgoggles = "";
        gps = "";
    };

    class Type {
        class Soldier_F {
            addItemsToUniform[] = {
                BASE_MEDICAL,
                LIST_2("rhs_mag_9x19_17"),
                "ACE_MapTools",
                "ACE_Flashlight_KSF1"
            };
            addItemsToVest[] = {
                LIST_8("30Rnd_545x39_7n10_RWR"),
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell")
            };
            addItemsToBackpack[] = {
                LIST_10("30Rnd_545x39_7n10_RWR"),
                LIST_10("ACE_fieldDressing")
            };
        };

        // Engineer
        class Engineer_F: Soldier_F {
            backpack = "B_RWR_umbts_engi_empty";
            addItemsToBackpack[] = {
                "toolkit",
                "ACE_EntrenchingTool",
                "ACE_DefusalKit",
                "ACE_wirecutter",
                LIST_3("ACE_FlareTripMine_Mag")
            };
            addItemsToUniform[] = {
                BASE_MEDICAL,
                LIST_2("rhs_mag_9x19_17"),
                "ACE_MapTools",
                "ACE_Flashlight_KSF1"
            };
        };

        // Engineer SL
        class Soldier_repair_F: Engineer_F{
            gps = "ItemGPS";
            backpack = "TFAR_mr3000_rhs";
            addItemsToBackpack[] = {
                "toolkit",
                "ACE_EntrenchingTool",
                "ACE_DefusalKit"
            };
        };

        // Medium Machine Gunner (PKP)
        class HeavyGunner_F: Soldier_F {
            primaryWeapon = "rhs_weap_pkp";
            primaryWeaponMuzzle = "";
            primaryWeaponMagazine = "rhs_100Rnd_762x54mmR_green";
            primaryWeaponPointer = "";
            primaryWeaponOptics = "rhs_acc_ekp8_02";
            backpack = "B_RWR_umbts";
            addItemsToVest[] = {
                "rhs_100Rnd_762x54mmR_green",
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell")
            };
            addItemsToBackpack[] = {
                LIST_4("rhs_100Rnd_762x54mmR_green")
            };
        };

        // Ammo Bearer (PKP)
        class Soldier_A_F: Soldier_F {
            backpack = "B_RWR_umbts";
            addItemsToBackpack[] = {
                LIST_4("rhs_100Rnd_762x54mmR_green")
            };
        };

        // Light Machine Gunner (AKM)
        class Soldier_AR_F: Soldier_F {
            primaryWeapon = "rhs_weap_akmn";
            primaryWeaponPointer = "";
            primaryWeaponMuzzle = "rhs_acc_dtk1";
            primaryWeaponOptics = "rhs_acc_pkas";
            primaryWeaponMagazine = "rhs_75Rnd_762x39mm_tracer";
            backpack = "rhssaf_kitbag_md2camo";
            addItemsToVest[] = {
                LIST_2("rhs_75Rnd_762x39mm_tracer"),
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell")
            };
            addItemsToBackpack[] = {
                LIST_8("rhs_75Rnd_762x39mm_tracer")
            };
        };

        /* 
        Ammo Bearer (AKM) - aktuell nicht verbaut!!
        class Soldier_AAR_F: Soldier_F {
            backpack = "rhssaf_kitbag_md2camo";
            addItemsToBackpack[] = {
                LIST_8("rhs_75Rnd_762x39mm_tracer")
            };
        };
        */

        // Heavy AT-Specialist (RPG7)
        class Soldier_AT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_rpg7";
            secondaryWeaponMagazine = "rhs_rpg7_PG7V_mag";
            addItemsToBackpack[] = {
                "rhs_rpg7_PG7V_mag"
            };
        };

        // Assistant Heavy AT (RPG7)
        class Soldier_AHAT_F: Soldier_F {
            addItemsToBackpack[] = {
                LIST_2("rhs_rpg7_PG7V_mag")
            };
        };

        // LAT-Specialist (RPG26)
        class Soldier_LAT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_rpg26";
            addItemsToVest[] = {
                LIST_8("30Rnd_545x39_7n10_RWR"),
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell"),
                "rhs_rpg26_mag"
            };
        };

        // Medic
        class Medic_F: Soldier_F {
            backpack = "rhs_medic_bag";
            addItemsToBackpack[] = {    
                BASE_MEDIC,
                LIST_5("SmokeShell")
            };
        };

        // TeamLeader
        class Soldier_TL_F: Soldier_F {
            gps = "ItemGPS";
            primaryWeapon = "arifle_RWR_ak74m_gp25_npz";
            primaryWeaponPointer = "";
            primaryWeaponMagazine = "rhs_30Rnd_762x39mm_polymer_tracer";
            handgunWeapon = "rhs_weap_pya";
            handgunWeaponMagazine = "rhs_mag_9x19_17";
            underBarrelMagazine = "rhs_GRD40_White";
            addItemsToUniform[] = {
                BASE_MEDICAL,
                LIST_2("rhs_mag_9x19_17"),
                "ACE_MapTools",
                "ACE_Flashlight_KSF1"
            };
            addItemsToVest[] = {
                LIST_6("rhs_30Rnd_762x39mm_polymer_tracer"),
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell")
            };
            addItemsToBackpack[] = {
                LIST_6("rhs_30Rnd_762x39mm_polymer_tracer"),
                LIST_1("rhs_GRD40_Green"),
                LIST_4("rhs_GRD40_Red"),
                LIST_3("rhs_GRD40_White"),
                LIST_4("30Rnd_545x39_7n10_RWR")
            };
        };

        // SquadLeader
        class Soldier_SL_F: Soldier_TL_F {
            backpack = "TFAR_mr3000_rhs";
        };

        // Commander
        class officer_F: Soldier_SL_F {};

       // Neue Klasse...
    };
};
