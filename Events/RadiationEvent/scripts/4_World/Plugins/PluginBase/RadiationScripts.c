//Radiation Mod Scripts.
class RadiationLocationFuncs 
{

    float x, y;
    string Name;
    string Type;
    int Id;

    void RadiationLocationFuncs(float xx, float yy, string name, string type, int id)
    {
        x = xx;
        y = yy;
        Name = name;
        Type = type;
        Id = id;
    }

}

class RadiationSettingsScript
{

    static const string JSON_Path_Config = "$profile:infrad\\Config.json";
    static const string JSON_Path_Dir = "$profile:infrad\\"; 

    float RadiationSpawnInterval;
    int OuterRadiusDmg;
    int MiddleRadiusDmg;
    int InnerRadiusDmg;
    ref array<ref RadiationLocationFuncs> RadiationLocationFuncsArray;

    void RadiationSettingsScript()
    {
        RadiationLocationFuncsArray = new ref array<ref RadiationLocationFuncs>;
    }

    void RadiationDefaultSettings()
    {
        ref array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);

        RadiationSpawnInterval = 15.0;

        //////////////////////////////////
        // Military Radation Locations. //
        //////////////////////////////////

        //Kamensk Military
        RadiationLocationFuncsArray.Insert(new ref RadiationLocationFuncs(7866, 14697, "Kamensk Military", "military", 0)); 

        // Tisy
        RadiationLocationFuncsArray.Insert(new ref RadiationLocationFuncs(1648, 14234, "Tisy Military Base", "military", 1));

        // Vybor Test Zone.
        RadiationLocationFuncsArray.Insert(new ref RadiationLocationFuncs(3822, 8863, "Vybor Test Zone", "military", 2));

        if (!FileExist(JSON_Path_Dir))
        {
            MakeDirectory(JSON_Path_Dir);
        }

        JsonFileLoader<RadiationSettingsScript>.JsonSaveFile(JSON_Path_Config, this);
    }

    static ref RadiationSettingsScript Load()
    {
        ref RadiationSettingsScript settings = new RadiationSettingsScript();

        if (FileExist(JSON_Path_Config))
        {
            JsonFileLoader<RadiationSettingsScript>.JsonLoadFile(JSON_Path_Config, settings);
            //settings.RadiationDefaultSettings();
            Print("[INF RAD] Using config file settings for Radiation.");
        }
        else
        {
            settings.RadiationDefaultSettings();
            Print("[INF RAD] Using hard-coded settings for Radiation.");
        }

        return settings;
    }

}

class RadiationBaseScript
{
    ref Timer m_SpawnTimer;
    ref array<int> AvailableLocations;
    ref RadiationLocationFuncs m_ActiveRadiationLocationFuncs;
    ref RadiationLocationFuncs spawnLocation;
    ref RadiationSettingsScript m_ActiveRadiationSettings;

    void RadiationBaseScript() 
    {
        m_ActiveRadiationSettings = RadiationSettingsScript.Load();
        
        m_SpawnTimer = new Timer();
        
        AvailableLocations = new array<int>;

        m_SpawnTimer.Run(m_ActiveRadiationSettings.RadiationSpawnInterval, this, "SpawnRadiation", NULL, true);

    }

    void ~RadiationBaseScript()
    {
        m_SpawnTimer.Stop();
    }

    void findPlayersNear() {

        ref array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);
        //bool distanceCheck = false;

        for ( int i = 0; i < players.Count(); i++ )
        {
            PlayerBase player = PlayerBase.Cast(players.Get(i));
            vector position = player.GetPosition();

            for(int k = 0; k < m_ActiveRadiationSettings.RadiationLocationFuncsArray.Count(); k++) {

                RadiationLocationFuncs spawnLocation = m_ActiveRadiationSettings.RadiationLocationFuncsArray.Get(k);
                //Print("STEP TWO - [INF RAD] Location been checked is: " + spawnLocation.Name);

                // Checking to see if the players are within a certain distance from the spawn locations for Radiation.
                if(player != NULL) {

                    int SurvivorDistance = vector.Distance(player.GetPosition(), Vector(spawnLocation.x, 0, spawnLocation.y));
                    //Print("STEP THREE - [INF RAD] Survivor " + i + " distance is " + SurvivorDistance + " from " + spawnLocation.Name);

                    if(SurvivorDistance <= 800)
                    {
                        //Print("STEP FOUR - [INF RAD] Survivor is in zone for: " + spawnLocation.Name);
                    	//distanceCheck = true;
                        if(spawnLocation.Id == 1) {
                            player.isInRadT = true;
                            //Print("STEP FOUR - [INF RAD] Player is in Id 1 and isInRadT = true.");
                        } else {
                            player.isInRadT = false;
                            //Print("STEP FOUR - [INF RAD] Survivor " + i + " is more than 800m away and isInRadT = false;");
                        }

                        if(spawnLocation.Id == 0) {
                            player.isInRadK = true;
                            //Print("STEP FOUR - [INF RAD] Player is in Id 0 and isInRadK = true.");
                        } else{
                            player.isInRadK = false;
                            //Print("STEP FOUR - [INF RAD] Survivor " + i + " is more than 800m away and isInRadK = false;");
                        }

                        if(spawnLocation.Id == 2) {
                            player.isInRadV = true;
                            //Print("STEP FOUR - [INF RAD] Player is in Id 2 and isInRadV = true.");
                        } else {
                            player.isInRadV = false;
                            //Print("STEP FOUR - [INF RAD] Survivor " + i + " is more than 800m away and isInRadV = false;");
                        }

                    } 
            
                }

                // player is a PlayerBase, you must provide this from wherever you are working in
                ItemBase m_headpiece = player.FindAttachmentBySlotName("Headgear");
                ItemBase m_face = player.FindAttachmentBySlotName("Mask");
                ItemBase m_shirt = player.FindAttachmentBySlotName("Body");
                ItemBase m_pants = player.FindAttachmentBySlotName("Legs");
                ItemBase m_shoes = player.FindAttachmentBySlotName("Feet");
                ItemBase m_gloves = player.FindAttachmentBySlotName("Gloves");

                int nbc_count = 0;

                if (m_face && m_face.IsKindOf("GP5GasMask"))
                    nbc_count += 1;

                if (m_headpiece && m_headpiece.IsKindOf("NBCHoodBase"))
                    nbc_count += 1;

                if (m_shirt && m_shirt.IsKindOf("NBCJacketBase"))
                    nbc_count += 1;

                if (m_pants && m_pants.IsKindOf("NBCPantsBase"))
                    nbc_count += 1;

                if (m_shoes && m_shoes.IsKindOf("NBCBootsBase"))
                    nbc_count += 1;

                if (m_gloves && m_gloves.IsKindOf("NBCGloves_ColorBase"))
                    nbc_count += 1;

                switch (nbc_count)
                {
                    case 0:
                    player.protection = false;
                    player.bleed = true;
                    player.vomit = true;
		            player.showMsg = true;
                    break;

                    case 1:
                    player.protection = false;
                    player.bleed = true;
                    player.vomit = true;
		            player.showMsg = true;
                    break;

                    case 2:
                    player.protection = false;
                    player.bleed = true;
                    player.vomit = true;
		            player.showMsg = true;
                    break;

                    case 3:
                    player.protection = false;
                    player.bleed = true;
                    player.vomit = true;
		            player.showMsg = true;
                    break;

                    case 4:
                    player.protection = false;
                    player.bleed = true;
                    player.vomit = true;
		            player.showMsg = true;
                    break;

                    case 5:
                    player.protection = true;
                    player.bleed = false;
                    player.vomit = false;
		            player.showMsg = false;
                    break;

                    case 6:
                    player.protection = true;
                    player.bleed = false;
                    player.vomit = false;
		            player.showMsg = false;
                    break;
                }  
            }
        }
    }

    void SpawnRadiation()
    {

        //Print("STEP ONE - [INF RAD] Entering the SpawnRadiation function...");

        // Random messages for Radiation spawning.
        string outerwarning = "*You start to feel sick, sweat starts to pour down your face and you feel confused.*";
        string middlewarning = "*You are starting to feel dehydrated and your skin burns like fire.*";
        string innerwarning = "*Your nose starts to bleed as well as your gums, your hair starts to fall out.*";
        string protectionmsg = "*Your protective gear is doing its job and you feel fine.*";
   	    
        ref TStringArray MessegeList;
        ref TStringArray ProtectionList;
        MessegeList = new ref TStringArray;
        ProtectionList = new ref TStringArray;
        MessegeList.Insert(outerwarning);
        MessegeList.Insert(middlewarning);
        MessegeList.Insert(innerwarning);
        ProtectionList.Insert(protectionmsg);

	    float m_DamageOuter = 3;
	    float m_DamageMiddle = 7;
	    float m_DamageInner = 12;

       // AvailableLocations.Clear();
        findPlayersNear();

        ref array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);

        for ( int j = 0; j < players.Count(); j++ )
        {
            PlayerBase playerz = PlayerBase.Cast(players.Get(j));

            if(playerz != NULL) {

                if(playerz.isInRadT == true || playerz.isInRadK == true || playerz.isInRadV == true) {

                    //Print("STEP FIVE - [INF Rad] Radiation spawning... ");

                    if(playerz.protection == false) {
   
                        playerz.DecreaseHealth("","",m_DamageMiddle);

                    } else {

			             Param1<string> Msgc = new Param1<string> (ProtectionList.Get(0));
                        GetGame().RPCSingleParam(playerz, ERPCs.RPC_USER_ACTION_MESSAGE, Msgc, true, playerz.GetIdentity());
                            	
                    }
			                
			        if(playerz.bleed && playerz.protection == false) {

                        int chanceBleading = Math.RandomIntInclusive(0,100);

			             if (chanceBleading > 40 && playerz.protection == false) 
			             {
				              playerz.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("Head");
			             }
			        }

                    if(playerz.vomit && playerz.protection == false) {

		                int chanceVomitb = Math.RandomIntInclusive(0,100);

			            if (chanceVomitb > 60) 
			            {
			                 playerz.GetSymptomManager().QueueUpPrimarySymptom( SymptomIDs.SYMPTOM_VOMIT );
                        }
			                 
                    }

			        if(playerz.showMsg && playerz.protection == false) {
			    
			            Param1<string> Msga = new Param1<string> (MessegeList.GetRandomElement());
                        GetGame().RPCSingleParam(playerz, ERPCs.RPC_USER_ACTION_MESSAGE, Msga, true, playerz.GetIdentity());
			    
			        }

			        //Print("STEP SIX - [INF RAD] Player " + j + " was in the zone and gained effects.");

                }
            }

            playerz.isInRadT = false;
            playerz.isInRadK = false;
            playerz.isInRadV = false;
        }
    }
}

static ref RadiationBaseScript g_RadiationBaseScript;
static ref RadiationBaseScript GetRadiationBaseScript()
{
    if (!g_RadiationBaseScript)
    {
        g_RadiationBaseScript = new ref RadiationBaseScript();
    }

    return g_RadiationBaseScript;
}
