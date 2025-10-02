[] call BC_setup_fnc_initialSpawnClient;

[] call BC_setup_fnc_addInteractions; // add interactions

player addEventHandler ["handleRating", {
    0
}];

// disable spectating the fucking civs
[[west, east], [civilian, independent]] call ace_spectator_fnc_updateSides;

[] spawn compile preprocessFileLineNumbers "briefing.sqf";