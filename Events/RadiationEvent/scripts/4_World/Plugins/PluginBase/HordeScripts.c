// Zombie horde scripts.
class HordeLocationFuncs
{
    float x, y;
    string Name;
    string Type;

    void HordeLocationFuncs(float xx, float yy, string name, string type)
    {
        x = xx;
        y = yy;
        Name = name;
        Type = type;
    }

}

class HordeSettingsScript
{
    static const string JSON_Path_Config = "$profile:infhorde\\Config.json";
    static const string JSON_Path_Dir = "$profile:infhorde\\";

    float HordeSpawnInterval;
    int CityCount;
    int TownCount;
    int VillageCount;
    int MilitaryCount;
    ref TStringArray HordeCivilianList;
    ref TStringArray HordeMilitaryList;
    ref array<ref HordeLocationFuncs> HordeLocationFuncsArray;

    void HordeSettingsScript()
    {
        HordeLocationFuncsArray = new ref array<ref HordeLocationFuncs>;
        HordeCivilianList = new ref TStringArray;
        HordeMilitaryList = new ref TStringArray;
    }

    void HordeDefaultSettings()
    {
        ref array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);

        // Horde zombie count and time to wait for each spawn.
        // Performance mode check for spawn values. Lower values if over 70 players online.
        if(players.Count() >= 55) {

            HordeSpawnInterval = 3600.0;
            CityCount = 0;
            TownCount = 25;
            VillageCount = 20;
            MilitaryCount = 35;

        } else {

            HordeSpawnInterval = 3600.0;
            CityCount = 50;
            TownCount = 40;
            VillageCount = 30;
            MilitaryCount = 60;

        }
        
        /////////////////////////////
        // Town and Village Spawns //
        /////////////////////////////
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2924, 12358, "Topolniki", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12100, 13750, "Cernaya Polana", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(9520, 8758, "Gorka", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(5950, 10300, "Grishino", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2250, 11050, "Vavilovo", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2750, 9950, "Lopatino", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3786, 8923, "Vybor", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(5350, 8600, "Kabanino", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(6250, 7830, "Stary Sobor", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(7140, 7633, "Novy Sobor", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(10700, 8050, "Polana", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(10100, 5450, "Staroye", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12050, 3550, "Kamyshovo", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13600, 3000, "Skalisty Island", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(7550, 5100, "Moglievka", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(4500, 2450, "Balota", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1700, 3850, "Pavlovo", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(4400, 4650, "Kozlovka", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(5850, 4750, "Nadezhdino", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(4500, 6400, "Pogorevka", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3050, 7900, "Pustoshka", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(4950, 15050, "Stary Yar", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(6759, 14446, "Kamensk", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13504, 14109, "Turovo", "town"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(11079, 12231, "Krasnostav", "town"));

        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(6506, 14992, "Krasnoe", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1440, 12018, "Sinistok", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(6250, 12700, "Ratnoe", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(9500, 13750, "Svergino", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(10400, 9850, "Dubrovka", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(8400, 6650, "Guglovo", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(9650, 6550, "Shakhovka", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12150, 7250, "Orlovets", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12950, 8050, "Nizhnoye", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(11300, 6550, "Dolina", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3650, 2450, "Komarovo", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1900, 2250, "Kamenka", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1963, 7293, "Myshkino", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1539, 8971, "Bogatyrka", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1159, 9956, "Zabolotye", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3472, 14859, "Tisy", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(9372, 14508, "Nagornoe", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13019, 15028, "Dobroe", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(14091, 14931, "Belaya Polana", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(15085, 13877, "Berezhki", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12709, 14672, "Karmanovka", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13404, 12900, "Olsha", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12362, 10917, "Chelm", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(9973, 10323, "Vyshnaya Dubrovka", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13400, 6250, "Solnechiy", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(11342, 5439, "Msta", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12772, 4394, "Tulga", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(9101, 3961, "Pusta", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3314, 4005, "Bor", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3359, 4877, "Drozhino", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(437, 5218, "Zvir", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2609, 6387, "Sosnovka", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(5009, 5638, "Pulkovo", "village"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(4813, 6738, "Rogovo", "village"));


        //////////////////////////////
        // Big City Spawn Locations //
        //////////////////////////////

        // Performance mode check.
        if(players.Count() >= 60) {

           Print("[CRP HORDE] Server population above 60, performance mode activated.");

        } else {

            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(11852, 14477, "Central Novodmitrovsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12052, 13925, "South Novodmitrovsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(11553, 14903, "North Novodmitrovsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(10584, 14369, "West Novodmitrovsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12530, 14249, "East Novodmitrovsk", "city"));

            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(7902, 12655, "Central Severograd", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(7928, 12433, "South Severograd", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(7927, 12906, "North Severograd", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(7551, 12559, "West Severograd", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(8659, 12760, "East Severograd", "city"));

            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3450, 13050, "Central Novaya Petrovka", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3476, 13627, "North Novaya Petrovka", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3483, 12661, "South Novaya Petrovka", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3579, 13405, "East Novaya Petrovka", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3178, 12978, "West Novaya Petrovka", "city"));

            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13950, 13215, "Central Svetloyarsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13869, 13387, "North Svetloyarsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13908, 13079, "South Svetloyarsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13619, 13297, "West Svetloyarsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(14196, 13069, "East Svetloyarsk", "city"));

            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12900, 10050, "Central Lower Berezino", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12960, 10299, "North Lower Berezino", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(13057, 10767, "South Lower Berezino", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12725, 10116, "West Lower Berezino", "city"));

            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12000, 9100, "South Upper Berezino", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12235, 9584, "North Upper Berezino", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(11898, 9368, "West Upper Berezino", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12207, 9297, "East Upper Berezino", "city"));

            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(10450, 2250, "Central Elektrozavodsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(10298, 2585, "North Elektrozavodsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(9750, 2096, "West Elektrozavodsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(10693, 2316, "East Elektrozavodsk", "city"));

            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(6550, 2500, "Central Chernogorsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(5703, 2681, "West Chernogorsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(6639, 3095, "North Chernogorsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(7600, 3200, "Chyornaya Bay", "city"));

            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2656, 5260, "Central Zelenogorsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2593, 5008, "South Zelenogorsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2714, 5521, "North Zelenogorsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2326, 5246, "West Zelenogorsk", "city"));
            HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2849, 5231, "East Zelenogorsk", "city"));
        
        }

        ///////////////////////////////
        // Military Spawn Locations. //
        ///////////////////////////////
        // NWAF
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(4505, 10327, "Central Northwest Airfield", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(5036, 10012, "South East Northwest Airfield", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(4500, 10750, "North Northwest Airfield", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(4580, 9438, "South Northwest Airfield", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3878, 10523, "West Northwest Airfield", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(3878, 10523, "North Northwest Airfield", "military"));
        // Tisy
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1650, 14200, "Central Tisy Military Base", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(631, 13697, "West Tisy Military Base", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1093, 13941, "West Tisy Military Base #2", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1808, 13687, "South Tisy Military Base", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(1358, 14429, "North Tisy Military Base", "military"));
        //NEAF
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12435, 12608, "East North East Airfield", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(12036, 12579, "Central North East Airfield", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(11778, 12445, "West North East Airfield", "military"));
        //Balota
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(6669, 3584, "Central Balota Airfield", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(6463, 3594, "West Balota Airfield", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(6920, 3611, "East Balota Airfield", "military"));
        // Pavlovo Military
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2216, 3310, "South Pavlovo Military", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(2119, 3546, "North Pavlovo Military", "military"));
        //Kamensk Military
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(7717, 14685, "West Kamensk Military", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(8081, 14660, "East Kamensk Military", "military"));
        HordeLocationFuncsArray.Insert(new ref HordeLocationFuncs(7740, 14876, "North Kamensk Military", "military"));

        // Inserting values into an array for Civilian zombie models.
        HordeCivilianList.Insert("ZmbM_priestPopSkinny");
        HordeCivilianList.Insert("ZmbM_SkaterYoung_Grey");
        HordeCivilianList.Insert("ZmbM_SkaterYoung_Green");
        HordeCivilianList.Insert("ZmbM_SkaterYoung_Brown");
        HordeCivilianList.Insert("ZmbM_SkaterYoung_Blue");
        HordeCivilianList.Insert("ZmbM_PrisonerSkinny");
        HordeCivilianList.Insert("ZmbM_PolicemanSpecForce");
        HordeCivilianList.Insert("ZmbM_PolicemanFat");
        HordeCivilianList.Insert("ZmbM_PatientSkinny");
        HordeCivilianList.Insert("ZmbM_ParamedicNormal_Red");
        HordeCivilianList.Insert("ZmbM_ParamedicNormal_Green");
        HordeCivilianList.Insert("ZmbM_ParamedicNormal_Blue");
        HordeCivilianList.Insert("ZmbM_ParamedicNormal_Black");
        HordeCivilianList.Insert("ZmbM_OffshoreWorker_Yellow");
        HordeCivilianList.Insert("ZmbM_OffshoreWorker_Red");
        HordeCivilianList.Insert("ZmbM_OffshoreWorker_Orange");
        HordeCivilianList.Insert("ZmbM_OffshoreWorker_Green");
        HordeCivilianList.Insert("ZmbM_MotobikerFat_Black");
        HordeCivilianList.Insert("ZmbM_MotobikerFat_Beige");
        HordeCivilianList.Insert("ZmbM_MechanicSkinny_Red");
        HordeCivilianList.Insert("ZmbM_MechanicSkinny_Grey");
        HordeCivilianList.Insert("ZmbM_MechanicSkinny_Green");
        HordeCivilianList.Insert("ZmbM_MechanicSkinny_Blue");
        HordeCivilianList.Insert("ZmbM_JournalistSkinny");
        HordeCivilianList.Insert("ZmbM_Jacket_stripes");
        HordeCivilianList.Insert("ZmbM_Jacket_magenta");
        HordeCivilianList.Insert("ZmbM_Jacket_khaki");
        HordeCivilianList.Insert("ZmbM_Jacket_grey");
        HordeCivilianList.Insert("ZmbM_Jacket_greenchecks");
        HordeCivilianList.Insert("ZmbM_Jacket_brown");
        HordeCivilianList.Insert("ZmbM_Jacket_bluechecks");
        HordeCivilianList.Insert("ZmbM_Jacket_blue");
        HordeCivilianList.Insert("ZmbM_Jacket_black");
        HordeCivilianList.Insert("ZmbM_Jacket_beige");
        HordeCivilianList.Insert("ZmbM_HunterOld_Winter");
        HordeCivilianList.Insert("ZmbM_HunterOld_Summer");
        HordeCivilianList.Insert("ZmbM_HunterOld_Spring");
        HordeCivilianList.Insert("ZmbM_HunterOld_Autumn");
        HordeCivilianList.Insert("ZmbM_HikerSkinny_Yellow");
        HordeCivilianList.Insert("ZmbM_HikerSkinny_Green");
        HordeCivilianList.Insert("ZmbM_HikerSkinny_Blue");
        HordeCivilianList.Insert("ZmbM_HermitSkinny_Red");
        HordeCivilianList.Insert("ZmbM_HermitSkinny_Green");
        HordeCivilianList.Insert("ZmbM_HermitSkinny_Black");
        HordeCivilianList.Insert("ZmbM_HermitSkinny_Beige");
        HordeCivilianList.Insert("ZmbM_HeavyIndustryWorker");
        HordeCivilianList.Insert("ZmbM_HandymanNormal_White");
        HordeCivilianList.Insert("ZmbM_HandymanNormal_Grey");
        HordeCivilianList.Insert("ZmbM_HandymanNormal_Green");
        HordeCivilianList.Insert("ZmbM_HandymanNormal_Blue");
        HordeCivilianList.Insert("ZmbM_HandymanNormal_Beige");
        HordeCivilianList.Insert("ZmbM_FishermanOld_Red");
        HordeCivilianList.Insert("ZmbM_FishermanOld_Grey");
        HordeCivilianList.Insert("ZmbM_FishermanOld_Green");
        HordeCivilianList.Insert("ZmbM_FishermanOld_Blue");
        HordeCivilianList.Insert("ZmbM_FirefighterNormal");
        HordeCivilianList.Insert("ZmbM_FarmerFat_Green");
        HordeCivilianList.Insert("ZmbM_FarmerFat_Brown");
        HordeCivilianList.Insert("ZmbM_FarmerFat_Blue");
        HordeCivilianList.Insert("ZmbM_FarmerFat_Beige");
        HordeCivilianList.Insert("ZmbM_DoctorFat");
        HordeCivilianList.Insert("ZmbM_ConstrWorkerNormal_Grey");
        HordeCivilianList.Insert("ZmbM_ConstrWorkerNormal_Green");
        HordeCivilianList.Insert("ZmbM_ConstrWorkerNormal_Black");
        HordeCivilianList.Insert("ZmbM_ConstrWorkerNormal_Beige");
        HordeCivilianList.Insert("ZmbM_CommercialPilotOld_Olive");
        HordeCivilianList.Insert("ZmbM_CommercialPilotOld_Grey");
        HordeCivilianList.Insert("ZmbM_CommercialPilotOld_Brown");
        HordeCivilianList.Insert("ZmbM_CommercialPilotOld_Blue");
        HordeCivilianList.Insert("ZmbM_ClerkFat_White");
        HordeCivilianList.Insert("ZmbM_ClerkFat_Khaki");
        HordeCivilianList.Insert("ZmbM_ClerkFat_Grey");
        HordeCivilianList.Insert("ZmbM_ClerkFat_Brown");
        HordeCivilianList.Insert("ZmbM_CitizenBFat_Red");
        HordeCivilianList.Insert("ZmbM_CitizenBFat_Green");
        HordeCivilianList.Insert("ZmbM_CitizenBFat_Blue");
        HordeCivilianList.Insert("ZmbM_CitizenASkinny_Red");
        HordeCivilianList.Insert("ZmbM_CitizenASkinny_Grey");
        HordeCivilianList.Insert("ZmbM_CitizenASkinny_Brown");
        HordeCivilianList.Insert("ZmbM_CitizenASkinny_Blue");
        HordeCivilianList.Insert("ZmbF_VillagerOld_White");
        HordeCivilianList.Insert("ZmbF_VillagerOld_Red");
        HordeCivilianList.Insert("ZmbF_VillagerOld_Green");
        HordeCivilianList.Insert("ZmbF_VillagerOld_Blue");
        HordeCivilianList.Insert("ZmbF_SurvivorNormal_White");
        HordeCivilianList.Insert("ZmbF_SurvivorNormal_Red");
        HordeCivilianList.Insert("ZmbF_SurvivorNormal_Orange");
        HordeCivilianList.Insert("ZmbF_SurvivorNormal_Blue");
        HordeCivilianList.Insert("ZmbF_SkaterYoung_Violet");
        HordeCivilianList.Insert("ZmbF_SkaterYoung_Striped");
        HordeCivilianList.Insert("ZmbF_SkaterYoung_Brown");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_yellow");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_white");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_stripes");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_red");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_grey");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_green");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_checks");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_brown");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_black");
        HordeCivilianList.Insert("ZmbF_ShortSkirt_beige");
        HordeCivilianList.Insert("ZmbF_PoliceWomanNormal");
        HordeCivilianList.Insert("ZmbF_PatientOld");
        HordeCivilianList.Insert("ZmbF_ParamedicNormal_Red");
        HordeCivilianList.Insert("ZmbF_ParamedicNormal_Green");
        HordeCivilianList.Insert("ZmbF_ParamedicNormal_Blue");
        HordeCivilianList.Insert("ZmbF_NurseFat");
        HordeCivilianList.Insert("ZmbF_MilkMaidOld_Grey");
        HordeCivilianList.Insert("ZmbF_MilkMaidOld_Green");
        HordeCivilianList.Insert("ZmbF_MilkMaidOld_Black");
        HordeCivilianList.Insert("ZmbF_MilkMaidOld_Beige");
        HordeCivilianList.Insert("ZmbF_MechanicNormal_Orange");
        HordeCivilianList.Insert("ZmbF_MechanicNormal_Grey");
        HordeCivilianList.Insert("ZmbF_MechanicNormal_Green");
        HordeCivilianList.Insert("ZmbF_MechanicNormal_Beige");
        HordeCivilianList.Insert("ZmbF_JournalistNormal_White");
        HordeCivilianList.Insert("ZmbF_JournalistNormal_Red");
        HordeCivilianList.Insert("ZmbF_JournalistNormal_Green");
        HordeCivilianList.Insert("ZmbF_JournalistNormal_Blue");
        HordeCivilianList.Insert("ZmbF_JoggerSkinny_Red");
        HordeCivilianList.Insert("ZmbF_JoggerSkinny_Green");
        HordeCivilianList.Insert("ZmbF_JoggerSkinny_Brown");
        HordeCivilianList.Insert("ZmbF_JoggerSkinny_Blue");
        HordeCivilianList.Insert("ZmbF_HikerSkinny_Red");
        HordeCivilianList.Insert("ZmbF_HikerSkinny_Grey");
        HordeCivilianList.Insert("ZmbF_HikerSkinny_Green");
        HordeCivilianList.Insert("ZmbF_HikerSkinny_Blue");
        HordeCivilianList.Insert("ZmbF_DoctorSkinny");
        HordeCivilianList.Insert("ZmbF_Clerk_Normal_White");
        HordeCivilianList.Insert("ZmbF_Clerk_Normal_Red");
        HordeCivilianList.Insert("ZmbF_Clerk_Normal_Green");
        HordeCivilianList.Insert("ZmbF_Clerk_Normal_Blue");
        HordeCivilianList.Insert("ZmbF_CitizenBSkinny");
        HordeCivilianList.Insert("ZmbF_CitizenANormal_Brown");
        HordeCivilianList.Insert("ZmbF_CitizenANormal_Blue");
        HordeCivilianList.Insert("ZmbF_CitizenANormal_Beige");
        HordeCivilianList.Insert("ZmbF_BlueCollarFat_White");
        HordeCivilianList.Insert("ZmbF_BlueCollarFat_Red");
        HordeCivilianList.Insert("ZmbF_BlueCollarFat_Green");
        HordeCivilianList.Insert("ZmbF_BlueCollarFat_Blue");
        
        // Military Zombie models.
        HordeMilitaryList.Insert("ZmbM_SoldierNormal");
        HordeMilitaryList.Insert("ZmbM_PatrolNormal_Autumn");
        HordeMilitaryList.Insert("ZmbM_PatrolNormal_Flat");
        HordeMilitaryList.Insert("ZmbM_PatrolNormal_PautRev");
        HordeMilitaryList.Insert("ZmbM_PatrolNormal_Summer");

        if (!FileExist(JSON_Path_Dir))
        {
            MakeDirectory(JSON_Path_Dir);
        }

        JsonFileLoader<HordeSettingsScript>.JsonSaveFile(JSON_Path_Config, this);
    }

    static ref HordeSettingsScript Load()
    {
        ref HordeSettingsScript settings = new HordeSettingsScript();

        if (FileExist(JSON_Path_Config))
        {
            JsonFileLoader<HordeSettingsScript>.JsonLoadFile(JSON_Path_Config, settings);
            Print("[CRP HORDE] Using config file settings for Hordes.");
        }
        else
        {
            settings.HordeDefaultSettings();
            Print("[CRP HORDE] Using hard-coded settings for Hordes.");
        }

        return settings;
    }

}

class HordeBaseScript
{
    ref Timer m_SpawnTimer;
    ref array<Object> SpawnedInfected;
    ref array<int> AvailableLocations;
    ref HordeLocationFuncs m_ActiveHordeLocationFuncs;
    ref HordeLocationFuncs spawnLocation;
    ref HordeSettingsScript m_ActiveHordeSettings;

    void HordeBaseScript() 
    {
        m_ActiveHordeSettings = HordeSettingsScript.Load();
        
        m_SpawnTimer = new Timer();
        
        SpawnedInfected = new array<Object>;
        AvailableLocations = new array<int>;

        // Debug timer.
        m_SpawnTimer.Run(m_ActiveHordeSettings.HordeSpawnInterval, this, "SpawnHorde", NULL, true);
        Print("[CRP HORDE DEBUG] SpawnHorde timer has begun!");
    }

    void ~HordeBaseScript()
    {
        m_SpawnTimer.Stop();
        Print("[CRP HORDE DEBUG] SpawnHorde timer has stopped!");
    }

    void findPlayersNear() {

        ref array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);
        bool distanceCheck = false;

        for ( int i = 0; i < players.Count(); i++ )
        {
            PlayerBase player = PlayerBase.Cast(players.Get(i));
            vector position = player.GetPosition();

            for(int k = 0; k < m_ActiveHordeSettings.HordeLocationFuncsArray.Count(); k++) {

                HordeLocationFuncs spawnLocation = m_ActiveHordeSettings.HordeLocationFuncsArray.Get(k);

                // Checking to see if the players are within 500 co-ords of the spawn locations for hordes.
                // The more players that are near a location the greater the chance of a horde spawning.
                // No horde spawns if nobody is near the spawn locations.
                if(player != NULL) {

                    int SurvivorDistance = vector.Distance(player.GetPosition(), Vector(spawnLocation.x, 0, spawnLocation.y));
                    //Print("[CRP HORDE DEBUG] Checking player distance to add to spawn location arrays.");

                    if (SurvivorDistance <= 500.0 )
                    {
                        distanceCheck = true;
                        Print("[CRP HORDE DEBUG] Distance checked out. Adding to array.");
                    }
            
                    if (SurvivorDistance >= 500.0)
                    {
                        distanceCheck = false;
                        //Print("[CRP HORDE DEBUG] Distance did not check out. Not adding to array.");
                    }
                }

                if(distanceCheck) {

                    AvailableLocations.Insert(k);
                    distanceCheck = false;
                    //Debugging.
                    Print("[CRP HORDE] Adding " + spawnLocation.Name + " to the array for horde AvailableLocations");

                }
            }

        }
    }

    void SpawnHorde()
    {

        //Print("[CRP HORDE DEBUG] Program has entered the SpawnHorde function.");

        // Random messages for horde spawning.
        string msgone = "**You can hear screaming in the distance, you get an unsettling feeling come over you";
        string msgtwo = "**As you listen carefully, the sound of screams can be heard in the distance, you start to feel nervous";
        string msgthree = "**A sound can be heard in the distance, it sounds like screams, you start to feel on edge";
        string msgfour = "**Of in the distance a distinct sound can be heard, a sound of many screams, you start to get worried";

        ref TStringArray MessegeList;
        MessegeList = new ref TStringArray;
        MessegeList.Insert(msgone);
        MessegeList.Insert(msgtwo);
        MessegeList.Insert(msgthree);
        MessegeList.Insert(msgfour);

        AvailableLocations.Clear();
        findPlayersNear();
  
        // If AvailableLocations ends up been empty, skip the spawning.
        if(AvailableLocations.Count() <= 0) {
            
            DespawnHorde();
            // Debugging.
            Print("[CRP HORDE] No horde spawned. No players in required locations.");

        } else {

            int m_ActiveLocation = AvailableLocations.GetRandomElement();
            m_ActiveHordeLocationFuncs = m_ActiveHordeSettings.HordeLocationFuncsArray.Get(m_ActiveLocation);
            ref array<Man> players = new array<Man>;
            GetGame().GetPlayers(players);
            DespawnHorde();
        
            if (m_ActiveHordeLocationFuncs.Type == "city")
            {
                for (int i = 0; i < m_ActiveHordeSettings.CityCount; i++) {
                    Object infectedi = GetGame().CreateObject(m_ActiveHordeSettings.HordeCivilianList.GetRandomElement(), Vector(m_ActiveHordeLocationFuncs.x + Math.RandomFloat(-40.0, 40.0), 0, m_ActiveHordeLocationFuncs.y + Math.RandomFloat(-40.0, 40.0)), false, true);
                    SpawnedInfected.Insert(infectedi);
                }
                Print("[CRP HORDE] Horde spawned of type city.");

                for ( int j = 0; j < players.Count(); j++ )
                {
                    PlayerBase playera = PlayerBase.Cast(players.Get(j));

                    // Check to see if players are near the horde, if so send messege and play sound.
                    if(playera != NULL) {

                        int SurvivorDistancea = vector.Distance(playera.GetPosition(), Vector(m_ActiveHordeLocationFuncs.x, 0, m_ActiveHordeLocationFuncs.y));

                        if (SurvivorDistancea <= 500.0 )
                        {
                            Param1<string> Msgab = new Param1<string> (MessegeList.GetRandomElement());
                            GetGame().RPCSingleParam(playera, ERPCs.RPC_USER_ACTION_MESSAGE, Msgab, true, playera.GetIdentity());
                        }
                    }

                    // Debug messege.
                    //Param1<string> Msga = new Param1<string> (msga);
                    //GetGame().RPCSingleParam(playera, ERPCs.RPC_USER_ACTION_MESSAGE, Msga, true, playera.GetIdentity());
                }
            }

            if (m_ActiveHordeLocationFuncs.Type == "town")
            {
                for (int k = 0; k < m_ActiveHordeSettings.TownCount; k++) {
                    Object infectedk = GetGame().CreateObject(m_ActiveHordeSettings.HordeCivilianList.GetRandomElement(), Vector(m_ActiveHordeLocationFuncs.x + Math.RandomFloat(-100.0, 100.0), 0, m_ActiveHordeLocationFuncs.y + Math.RandomFloat(-100.0, 100.0)), false, true);
                    SpawnedInfected.Insert(infectedk);
                }
                Print("[CRP HORDE] Horde spawned of type town.");

                for ( int c = 0; c < players.Count(); c++ )
                {
                    PlayerBase playerb = PlayerBase.Cast(players.Get(c));

                    // Check to see if players are near the horde, if so send messege and play sound.
                    if(playerb != NULL) {

                        int SurvivorDistanceb = vector.Distance(playerb.GetPosition(), Vector(m_ActiveHordeLocationFuncs.x, 0, m_ActiveHordeLocationFuncs.y));

                        if (SurvivorDistanceb <= 500.0 )
                        {
                            Param1<string> Msgbb = new Param1<string> (MessegeList.GetRandomElement());
                            GetGame().RPCSingleParam(playerb, ERPCs.RPC_USER_ACTION_MESSAGE, Msgbb, true, playerb.GetIdentity());
                        }
                    }

                    //Param1<string> Msgb = new Param1<string> (msgb);
                    //GetGame().RPCSingleParam(playerb, ERPCs.RPC_USER_ACTION_MESSAGE, Msgb, true, playerb.GetIdentity());
                }
            }

            if (m_ActiveHordeLocationFuncs.Type == "village")
            {
                for (int y = 0; y < m_ActiveHordeSettings.VillageCount; y++) {
                    Object infectedy = GetGame().CreateObject(m_ActiveHordeSettings.HordeCivilianList.GetRandomElement(), Vector(m_ActiveHordeLocationFuncs.x + Math.RandomFloat(-100.0, 100.0), 0, m_ActiveHordeLocationFuncs.y + Math.RandomFloat(-100.0, 100.0)), false, true);
                    SpawnedInfected.Insert(infectedy);
                }
                Print("[CRP HORDE] Horde spawned of type village.");

                for ( int b = 0; b < players.Count(); b++ )
                {
                    PlayerBase playerc = PlayerBase.Cast(players.Get(b));

                    // Check to see if players are near the horde, if so send messege and play sound.
                    if(playerc != NULL) {

                        int SurvivorDistancec = vector.Distance(playerc.GetPosition(), Vector(m_ActiveHordeLocationFuncs.x, 0, m_ActiveHordeLocationFuncs.y));

                        if (SurvivorDistancec <= 500.0 )
                        {
                            Param1<string> Msgcb = new Param1<string> (MessegeList.GetRandomElement());
                            GetGame().RPCSingleParam(playera, ERPCs.RPC_USER_ACTION_MESSAGE, Msgcb, true, playera.GetIdentity());
                        }
                    }

                    //Param1<string> Msgc = new Param1<string> (msgc);
                    //GetGame().RPCSingleParam(playerc, ERPCs.RPC_USER_ACTION_MESSAGE, Msgc, true, playerc.GetIdentity());
                }
            }

            if (m_ActiveHordeLocationFuncs.Type == "military")
            {
                for (int z = 0; z < m_ActiveHordeSettings.MilitaryCount; z++) {
                    Object infectedz = GetGame().CreateObject(m_ActiveHordeSettings.HordeMilitaryList.GetRandomElement(), Vector(m_ActiveHordeLocationFuncs.x + Math.RandomFloat(-100.0, 100.0), 0, m_ActiveHordeLocationFuncs.y + Math.RandomFloat(-100.0, 100.0)), false, true);
                    SpawnedInfected.Insert(infectedz);;
                }

                for ( int e = 0; e < players.Count(); e++ )
                {
                    PlayerBase playerd = PlayerBase.Cast(players.Get(e));

                    // Check to see if players are near the horde, if so send messege and play sound.
                    if(playerd != NULL) {

                        int SurvivorDistanced = vector.Distance(playerd.GetPosition(), Vector(m_ActiveHordeLocationFuncs.x, 0, m_ActiveHordeLocationFuncs.y));

                        if (SurvivorDistanced <= 500.0 )
                        {
                            Param1<string> Msgdb = new Param1<string> (MessegeList.GetRandomElement());
                            GetGame().RPCSingleParam(playerd, ERPCs.RPC_USER_ACTION_MESSAGE, Msgdb, true, playerd.GetIdentity());
                        }
                    }

                    //Param1<string> Msgd = new Param1<string> (msgd);
                    //GetGame().RPCSingleParam(playerd, ERPCs.RPC_USER_ACTION_MESSAGE, Msgd, true, playerd.GetIdentity());
                }   
            }
        }
    }

    void DespawnHorde()
    {
        if (SpawnedInfected.Count() > 0)
        {
            foreach(auto Infected : SpawnedInfected)
            {
                GetGame().ObjectDelete(Infected);
            }
            SpawnedInfected.Clear();
        }
    }
}

static ref HordeBaseScript g_HordeBaseScript;
static ref HordeBaseScript GetHordeBaseScript()
{
    if (!g_HordeBaseScript)
    {
        g_HordeBaseScript = new ref HordeBaseScript();
        Print("[CRP HORDE DEBUG] Loading script to missionserver and mission gameplay.");
    }

    return g_HordeBaseScript;
}
