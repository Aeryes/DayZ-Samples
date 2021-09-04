//Radiation Mod Scripts.
class EventLocationFuncs 
{

    float x, y;
    string Name;
    string Type;

    void EventLocationFuncs(float xx, float yy, string name, string type)
    {
        x = xx;
        y = yy;
        Name = name;
        Type = type;
    }

}

class EventSettingsScript
{

    static const string JSON_Path_Config = "$profile:infevent\\Config.json";
    static const string JSON_Path_Dir = "$profile:infevent\\"; 

    float EventSpawnInterval;
    ref array<ref EventLocationFuncs> EventLocationFuncsArray;

    void EventSettingsScript()
    {
        EventLocationFuncsArray = new array<ref EventLocationFuncs>;
    }

    void EventDefaultSettings()
    {
       array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);

        EventSpawnInterval = 7200.0;

        /////////////////////////////
        // Town and Village Spawns //
        /////////////////////////////
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(2924, 12358, "Topolniki", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(12100, 13750, "Cernaya Polana", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(9520, 8758, "Gorka", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(5950, 10300, "Grishino", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(2250, 11050, "Vavilovo", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(2750, 9950, "Lopatino", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(3786, 8923, "Vybor", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(5350, 8600, "Kabanino", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(6250, 7830, "Stary Sobor", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(7140, 7633, "Novy Sobor", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(10700, 8050, "Polana", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(10100, 5450, "Staroye", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(12050, 3550, "Kamyshovo", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(13600, 3000, "Skalisty Island", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(7550, 5100, "Moglievka", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(4500, 2450, "Balota", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(1700, 3850, "Pavlovo", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(4400, 4650, "Kozlovka", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(5850, 4750, "Nadezhdino", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(4500, 6400, "Pogorevka", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(3050, 7900, "Pustoshka", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(4950, 15050, "Stary Yar", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(6768, 14440, "Kamensk", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(13504, 14109, "Turovo", "town"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(11079, 12231, "Krasnostav", "town"));

        // EventLocationFuncsArray.Insert(new EventLocationFuncs(6506, 14992, "Krasnoe", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(1440, 12018, "Sinistok", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(6250, 12700, "Ratnoe", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(9500, 13750, "Svergino", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(10400, 9850, "Dubrovka", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(8400, 6650, "Guglovo", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(9650, 6550, "Shakhovka", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(12150, 7250, "Orlovets", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(12950, 8050, "Nizhnoye", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(11300, 6550, "Dolina", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(3650, 2450, "Komarovo", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(1900, 2250, "Kamenka", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(1963, 7293, "Myshkino", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(1539, 8971, "Bogatyrka", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(1159, 9956, "Zabolotye", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(3472, 14859, "Tisy", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(9372, 14508, "Nagornoe", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(13019, 15028, "Dobroe", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(14091, 14931, "Belaya Polana", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(15085, 13877, "Berezhki", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(12709, 14672, "Karmanovka", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(13404, 12900, "Olsha", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(12362, 10917, "Chelm", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(9973, 10323, "Vyshnaya Dubrovka", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(13400, 6250, "Solnechiy", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(11342, 5439, "Msta", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(12772, 4394, "Tulga", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(9101, 3961, "Pusta", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(3314, 4005, "Bor", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(3359, 4877, "Drozhino", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(437, 5218, "Zvir", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(2609, 6387, "Sosnovka", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(5009, 5638, "Pulkovo", "village"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(4813, 6738, "Rogovo", "village"));


        //////////////////////////////
        // Big City Spawn Locations //
        //////////////////////////////

        // Performance mode check.
        if(players.Count() >= 40) {

           Print("[INF EVENT] Server population above 60, performance mode activated.");

        } else {

            // EventLocationFuncsArray.Insert(new EventLocationFuncs(11852, 14477, "Central Novodmitrovsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(12052, 13925, "South Novodmitrovsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(11553, 14903, "North Novodmitrovsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(10584, 14369, "West Novodmitrovsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(12530, 14249, "East Novodmitrovsk", "city"));

            // EventLocationFuncsArray.Insert(new EventLocationFuncs(7902, 12655, "Central Severograd", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(7928, 12433, "South Severograd", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(7927, 12906, "North Severograd", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(7551, 12559, "West Severograd", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(8659, 12760, "East Severograd", "city"));

            // EventLocationFuncsArray.Insert(new EventLocationFuncs(3450, 13050, "Central Novaya Petrovka", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(3476, 13627, "North Novaya Petrovka", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(3483, 12661, "South Novaya Petrovka", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(3579, 13405, "East Novaya Petrovka", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(3178, 12978, "West Novaya Petrovka", "city"));

            // EventLocationFuncsArray.Insert(new EventLocationFuncs(13950, 13215, "Central Svetloyarsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(13869, 13387, "North Svetloyarsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(13908, 13079, "South Svetloyarsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(13619, 13297, "West Svetloyarsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(14196, 13069, "East Svetloyarsk", "city"));

            // EventLocationFuncsArray.Insert(new EventLocationFuncs(12900, 10050, "Central Lower Berezino", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(12960, 10299, "North Lower Berezino", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(13057, 10767, "South Lower Berezino", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(12725, 10116, "West Lower Berezino", "city"));

            // EventLocationFuncsArray.Insert(new EventLocationFuncs(12000, 9100, "South Upper Berezino", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(12235, 9584, "North Upper Berezino", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(11898, 9368, "West Upper Berezino", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(12207, 9297, "East Upper Berezino", "city"));

            // EventLocationFuncsArray.Insert(new EventLocationFuncs(10450, 2250, "Central Elektrozavodsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(10298, 2585, "North Elektrozavodsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(9750, 2096, "West Elektrozavodsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(10693, 2316, "East Elektrozavodsk", "city"));

            // EventLocationFuncsArray.Insert(new EventLocationFuncs(6550, 2500, "Central Chernogorsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(5703, 2681, "West Chernogorsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(6639, 3095, "North Chernogorsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(7600, 3200, "Chyornaya Bay", "city"));

            // EventLocationFuncsArray.Insert(new EventLocationFuncs(2656, 5260, "Central Zelenogorsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(2593, 5008, "South Zelenogorsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(2714, 5521, "North Zelenogorsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(2326, 5246, "West Zelenogorsk", "city"));
            // EventLocationFuncsArray.Insert(new EventLocationFuncs(2849, 5231, "East Zelenogorsk", "city"));

        }

        ///////////////////////////////
        // Military Spawn Locations. //
        ///////////////////////////////
        //NWAF
        EventLocationFuncsArray.Insert(new EventLocationFuncs(4505, 10327, "Central Northwest Airfield", "military"));
        EventLocationFuncsArray.Insert(new EventLocationFuncs(5036, 10012, "South East Northwest Airfield", "military"));
        EventLocationFuncsArray.Insert(new EventLocationFuncs(4500, 10750, "North Northwest Airfield", "military"));
        EventLocationFuncsArray.Insert(new EventLocationFuncs(4580, 9438, "South Northwest Airfield", "military"));
        EventLocationFuncsArray.Insert(new EventLocationFuncs(3878, 10523, "West Northwest Airfield", "military"));
        EventLocationFuncsArray.Insert(new EventLocationFuncs(3878, 10523, "North Northwest Airfield", "military"));
        // Tisy
        EventLocationFuncsArray.Insert(new EventLocationFuncs(1650, 14200, "Central Tisy Military Base", "military"));
        EventLocationFuncsArray.Insert(new EventLocationFuncs(631, 13697, "West Tisy Military Base", "military"));
        EventLocationFuncsArray.Insert(new EventLocationFuncs(1093, 13941, "West Tisy Military Base #2", "military"));
        EventLocationFuncsArray.Insert(new EventLocationFuncs(1808, 13687, "South Tisy Military Base", "military"));
        EventLocationFuncsArray.Insert(new EventLocationFuncs(1358, 14429, "North Tisy Military Base", "military"));
        //NEAF
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(12435, 12608, "East North East Airfield", "military"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(12036, 12579, "Central North East Airfield", "military"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(11778, 12445, "West North East Airfield", "military"));
        // //Balota
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(6669, 3584, "Central Balota Airfield", "military"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(6463, 3594, "West Balota Airfield", "military"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(6920, 3611, "East Balota Airfield", "military"));
        // // Pavlovo Military
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(2216, 3310, "South Pavlovo Military", "military"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(2119, 3546, "North Pavlovo Military", "military"));
        // //Kamensk Military
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(7717, 14685, "West Kamensk Military", "military"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(8081, 14660, "East Kamensk Military", "military"));
        // EventLocationFuncsArray.Insert(new EventLocationFuncs(7740, 14876, "North Kamensk Military", "military"));

        if (!FileExist(JSON_Path_Dir))
        {
            MakeDirectory(JSON_Path_Dir);
        }

        JsonFileLoader<EventSettingsScript>.JsonSaveFile(JSON_Path_Config, this);
    }

    static EventSettingsScript Load()
    {
        EventSettingsScript settings = new EventSettingsScript();

        if (FileExist(JSON_Path_Config))
        {
            JsonFileLoader<EventSettingsScript>.JsonLoadFile(JSON_Path_Config, settings);
            
            Print("[CRP EVENT] Using config file settings for Dynamic Events.");
        }
        else
        {
            settings.EventDefaultSettings();
            Print("[CRP EVENT] Using hard-coded settings for Dynamic Events.");
        }

        return settings;
    }

}

class EventBaseScript
{
    ref Timer m_SpawnTimer;
    ref Timer m_DeSpawnTimer;
    ref array<int> AvailableLocations;
    ref EventLocationFuncs m_ActiveEventLocationFuncs;
    ref EventLocationFuncs spawnLocation;
    ref EventSettingsScript m_ActiveEventSettings;
    int choseneventref = 0;

    void EventBaseScript() 
    {
        m_ActiveEventSettings = EventSettingsScript.Load();
        
        m_SpawnTimer = new Timer();
        m_DeSpawnTimer = new Timer();
        
        AvailableLocations = new array<int>;

        m_SpawnTimer.Run(m_ActiveEventSettings.EventSpawnInterval, this, "EventStart", NULL, true);
        m_DeSpawnTimer.Run(m_ActiveEventSettings.EventSpawnInterval / 2, this, "EventEnd", NULL, true);

    }

    void ~EventBaseScript()
    {
        m_SpawnTimer.Stop();
    }

    void EventEnd() {

        if(choseneventref == 1) {

            GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( AirDropEvent.DespawnHorde, 20, false);
            GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( AirDropEvent.DespawnLoot, 20, false);
            Print("[CRP EVENT] Event End has begun..."); 

            // Reset event ref.
            choseneventref = 0;          

        }

    }

    void EventStart()
    {
        AirDropEvent eventdrop;

        Print("[CRP EVENT] Inside EventStart function.");
        spawnLocation = m_ActiveEventSettings.EventLocationFuncsArray.GetRandomElement();

        // Messages for event start.
        string eventairdropone = "[CRP EVENT] A Loot Pile event has begun.";
        string eventairdroptwo = "*You recall a rumor about loot near " + spawnLocation.Name + "*";

        // Event Types.
        int AirDrop = 1;
   	    
        ref TStringArray MessegeList;
        ref TIntArray EventTypes;

        //Insert event ids into array.
        EventTypes = new TIntArray;
        EventTypes.Insert(AirDrop);

        //Insert Messages into array.
        MessegeList = new TStringArray;
        MessegeList.Insert(eventairdropone);
        MessegeList.Insert(eventairdroptwo);

        // Select the event id.
        int chosenevent = EventTypes.GetRandomElement();
        choseneventref = chosenevent;

        if(chosenevent == 1) {

            // Call the airdrop event fucntion.
            Print("[CRP EVENT] Loot Pile event at " + spawnLocation.Name);

            // Create new instance of airdrop class.
            eventdrop = new AirDropEvent(spawnLocation);

        }  

        array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);

        // Send a message to all players that the event has begun.
        for ( int k = 0; k < players.Count(); k++ )
        {
            PlayerBase playera = PlayerBase.Cast(players.Get(k));

            if(playera != NULL) {

                // If the selected event is an AirDrop event (id = 1) then do this.
                if(chosenevent == 1) {

                    Print("[CRP EVENT] Sending messages to players in EventStart function...");

                    // Send players message about event type.
                    Param1<string> Msgeventstart = new Param1<string> (MessegeList.Get(0));
                     GetGame().RPCSingleParam(playera, ERPCs.RPC_USER_ACTION_MESSAGE, Msgeventstart, true, playera.GetIdentity());
                    // Send players message about event lore.
                    Param1<string> Msgeventlore = new Param1<string> (MessegeList.Get(1));
                    GetGame().RPCSingleParam(playera, ERPCs.RPC_USER_ACTION_MESSAGE, Msgeventlore, true, playera.GetIdentity());         

                }
            }
        }        
    }
}

static ref EventBaseScript g_EventBaseScript;
static EventBaseScript GetEventBaseScript()
{
    if (!g_EventBaseScript)
    {
        g_EventBaseScript = new EventBaseScript();
    }

    return g_EventBaseScript;
}
