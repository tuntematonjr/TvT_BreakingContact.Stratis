waitUntil {!isNull player};

player createDiaryRecord ["Diary",["Mission Rules","
<br/>- We have gentlemen rule that we don't use  Armor and Heavy tab.
"]];

player createDiaryRecord ["Diary",["Mod and Game Mechanic Info","
--Volume and View distance adjustments--<br/>
You can directly adjust audio volume and view distance (within mission parameter limits) with F1-F4 keys.<br/>
<br/>
--Suppression and weapon sway--<br/>
AFI utilizes suppression and weapon sway mods. Shots landing near cause vision anomalies and increased weapon sway. Firing weapons rapidly also increases weapon sway.<br/>
<br/>
--Wave respawn--<br/>
This mission uses wave respawn. Your side will respawn in waves. This way reinforcements come in larger groups.  During the downtime you are able to talk to other players that are waiting to respawn.<br/>
<br/>
--Markers--<br/>
We use Sweet Markers System.<br/>
<br/>
--Ace3 A-Medical--<br/>
We use A-medical. Wound reopening is enabled. Splints heal any limb damage.<br/>
<br/>
--Safestart time--<br/>
Each mission has a timer during which units cannot be damaged or fire their weapons. Some special rules may be imposed in the briefing notes by the missinmaker to be in effect during this time.<br/>
<br/>
--Admin Call--<br/>
You can contact admins using “call admin” -action in esc menu while in mission.<br/>
<br/>
--JIP--<br/>
JIP in respawn missions is always possible, but precise behavior depends on the mission.<br/>
<br/>
--Radios--<br/>
You are unable to pick up enemy radios.<br/>
You can change radio channels easily from self interaction menu and from briefing notes.<br/>
<br/>
--Friendly forces--<br/>
You can easily see your sides equipment ,vehicles and troop positions during the briefing from the briefing notes and the map.<br/>
<br/>
--Ace_Hearing--<br/>
Ace_hearing is disabled.
"]];

player createDiaryRecord ["Diary",["General AFI Rules","
1. Be polite, kind and consider others in all situations<br/>
2. Play fair. Don’t cheat/hack/ghost.<br/>
3. Listen to the event host and admin<br/>
4. Act according to your leaders intent<br/>
5. Do not use any enemy vehicles or equipment unless specifically instructed by the mission<br/>
6. Do not misuse markers.<br/>
7. Do not solo. Always accompany your friendly forces. If separated, find friendly forces.<br/>
8. Do not loot dead bodies for additional equipment during mission start.
"]];

player createDiaryRecord ["Diary",["General info","<br/>
Brief Gamemode Explanation:<br/>
<br/>
Main Goal:<br/>
Opfor: Transmit on 2 points 22 mins each.<br/>
Blufor: Disable the radio truck via ACE Interact. Its strictly forbidden for any side to destroy it (its classified stuff you need to analyze, if you want lore). This rule is abandoned as soon as the terminal is purchased by opfor (indicated by blue pulsing marker on map during transmission).<br/>
<br/>
Setup:<br/>
Opfor Commander chooses a spawn position (best be a road as it searches for the nearest road anyway).<br/>
Gamemode chooses a spawn position for Blufor in a ~4km radius.<br/>
<br/>
Freeze time starts with a countdown for briefing and vehicle purchase (done with ace interact on the start vehicle by the respective commander). This is a soft freeze, players can mount up and built up convoy but are not allowed to move out yet or start a transmission yet. Vehicles purchased spawn near the start vehicle on the road and are temporarily marked with 3d markers for the own side.<br/>
<br/>
Game Start:<br/>
After freeze time is over Opfor can either start transmission right away or move as long as they want to to their preferred position. Blufor can start scouting for their position.<br/>
<br/>
Transmission:<br/>
Opfor needs to get into driver seat of the radio truck to start transmission (deploy mast mousewheel action). In this transmission state the radio truck cant move and everyone sees its position on the map. You can always abandon transmission by retracting but also continue transmission as long as you are inside the 500m radius circle around the truck (marked on map). You can also start new transmission points by driving away and deploying or you can always return to an abandoned position to re-start there. Transmission duration can be seen by opfor on the map. For blufor a rough estimate is shown after some time. There is not technical limit about the amount of transmissions you can start apart from the distance to each other, so you can only run out of space.<br/>
<br/>
Transmission terminal:<br/>
Transmission marker can be red (then its only the radio truck transmitting) or blue (then its only the transmission terminal transmitting) or both. The terminal replaces the radio truck as the main goal to be disabled and has a transmission strength of 50-100% depending on distance to radio truck (if the radio truck is deployed, otherwise its 50% always). Its main benefit is being draggable and as such being a bit more versatile to be placed in harder to reach locations. Please keep the egg hunt on a reasonable level. <br/>
"]];