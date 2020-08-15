class AirDropContainerBase extends Container_Base
{

    protected Particle m_infSmoke;

	  void AirDropContainerBase()
	  {
        CreateAndInitInventory();

        if (GetGame().IsClient() || !GetGame().IsMultiplayer()) 
            m_infSmoke = Particle.PlayOnObject(ParticleList.INFDROPSMOKE, this, GetMemoryPointPos("light"));

        OnSpawn();
	  }  
	
	  void ~AirDropContainerBase()
	  {

        if (m_infSmoke)
            m_infSmoke.Stop();
	  }

	  void OnSpawn()
	  {

	  }

	  override bool CanPutIntoHands( EntityAI parent )
	  {
		    return false;
	  }

	  override bool CanPutInCargo ( EntityAI parent )
	  {
		    return false;
	  }

	  override bool IsInventoryVisible()
    {
        return true;
    }

	  override bool CanUseConstruction()
    {
        return true;
    }
}

class AirdropLoot
{
    string Name;
    ref TStringArray Loot;

    void AirdropLoot( string name, ref TStringArray loot )
    {
        Name = name;
        Loot = loot;
    }
}

class AirdropSettings
{

    static const string JSON_Path_Config = "$profile:lootpile\\Config.json";
    static const string JSON_Path_Dir = "$profile:lootpile\\"; 

    int Items;

	  ref TStringArray AirdropContainers;
    ref TStringArray HordeList;
    ref array<ref AirdropLoot> LootTiers;

	  void AirdropSettings()
	  {
		    LootTiers = new ref array< ref AirdropLoot>;
		    AirdropContainers = new ref TStringArray;
        HordeList = new ref TStringArray;
	  }
	
	  void AirdropDefaults()
	  {
       	Items = 100;

		    //AirdropContainers.Insert( "AirdropMedical" );
		    AirdropContainers.Insert( "AirdropMilitary" );
		    //AirdropContainers.Insert( "AirdropCivilian" );

        // Inserting values into an array for zombie models.
        HordeList.Insert("ZmbM_priestPopSkinny");
        HordeList.Insert("ZmbM_SkaterYoung_Grey");
        HordeList.Insert("ZmbM_SkaterYoung_Green");
        HordeList.Insert("ZmbM_SkaterYoung_Brown");
        HordeList.Insert("ZmbM_SkaterYoung_Blue");
        HordeList.Insert("ZmbM_PrisonerSkinny");
        HordeList.Insert("ZmbM_PolicemanSpecForce");
        HordeList.Insert("ZmbM_PolicemanFat");
        HordeList.Insert("ZmbM_PatientSkinny");
        HordeList.Insert("ZmbM_ParamedicNormal_Red");
        HordeList.Insert("ZmbM_ParamedicNormal_Green");
        HordeList.Insert("ZmbM_ParamedicNormal_Blue");
        HordeList.Insert("ZmbM_ParamedicNormal_Black");
        HordeList.Insert("ZmbM_OffshoreWorker_Yellow");
        HordeList.Insert("ZmbM_OffshoreWorker_Red");
        HordeList.Insert("ZmbM_OffshoreWorker_Orange");
        HordeList.Insert("ZmbM_OffshoreWorker_Green");
        HordeList.Insert("ZmbM_MotobikerFat_Black");
        HordeList.Insert("ZmbM_MotobikerFat_Beige");
        HordeList.Insert("ZmbM_MechanicSkinny_Red");
        HordeList.Insert("ZmbM_MechanicSkinny_Grey");
        HordeList.Insert("ZmbM_MechanicSkinny_Green");
        HordeList.Insert("ZmbM_MechanicSkinny_Blue");
        HordeList.Insert("ZmbM_JournalistSkinny");
        HordeList.Insert("ZmbM_Jacket_stripes");
        HordeList.Insert("ZmbM_Jacket_magenta");
        HordeList.Insert("ZmbM_Jacket_khaki");
        HordeList.Insert("ZmbM_Jacket_grey");
        HordeList.Insert("ZmbM_Jacket_greenchecks");
        HordeList.Insert("ZmbM_Jacket_brown");
        HordeList.Insert("ZmbM_Jacket_bluechecks");
        HordeList.Insert("ZmbM_Jacket_blue");
        HordeList.Insert("ZmbM_Jacket_black");
        HordeList.Insert("ZmbM_Jacket_beige");
        HordeList.Insert("ZmbM_HunterOld_Winter");
        HordeList.Insert("ZmbM_HunterOld_Summer");
        HordeList.Insert("ZmbM_HunterOld_Spring");
        HordeList.Insert("ZmbM_HunterOld_Autumn");
        HordeList.Insert("ZmbM_HikerSkinny_Yellow");
        HordeList.Insert("ZmbM_HikerSkinny_Green");
        HordeList.Insert("ZmbM_HikerSkinny_Blue");
        HordeList.Insert("ZmbM_HermitSkinny_Red");
        HordeList.Insert("ZmbM_HermitSkinny_Green");
        HordeList.Insert("ZmbM_HermitSkinny_Black");
        HordeList.Insert("ZmbM_HermitSkinny_Beige");
        HordeList.Insert("ZmbM_HeavyIndustryWorker");
        HordeList.Insert("ZmbM_HandymanNormal_White");
        HordeList.Insert("ZmbM_HandymanNormal_Grey");
        HordeList.Insert("ZmbM_HandymanNormal_Green");
        HordeList.Insert("ZmbM_HandymanNormal_Blue");
        HordeList.Insert("ZmbM_HandymanNormal_Beige");
        HordeList.Insert("ZmbM_FishermanOld_Red");
        HordeList.Insert("ZmbM_FishermanOld_Grey");
        HordeList.Insert("ZmbM_FishermanOld_Green");
        HordeList.Insert("ZmbM_FishermanOld_Blue");
        HordeList.Insert("ZmbM_FirefighterNormal");
        HordeList.Insert("ZmbM_FarmerFat_Green");
        HordeList.Insert("ZmbM_FarmerFat_Brown");
        HordeList.Insert("ZmbM_FarmerFat_Blue");
        HordeList.Insert("ZmbM_FarmerFat_Beige");
        HordeList.Insert("ZmbM_DoctorFat");
        HordeList.Insert("ZmbM_ConstrWorkerNormal_Grey");
        HordeList.Insert("ZmbM_ConstrWorkerNormal_Green");
        HordeList.Insert("ZmbM_ConstrWorkerNormal_Black");
        HordeList.Insert("ZmbM_ConstrWorkerNormal_Beige");
        HordeList.Insert("ZmbM_CommercialPilotOld_Olive");
        HordeList.Insert("ZmbM_CommercialPilotOld_Grey");
        HordeList.Insert("ZmbM_CommercialPilotOld_Brown");
        HordeList.Insert("ZmbM_CommercialPilotOld_Blue");
        HordeList.Insert("ZmbM_ClerkFat_White");
        HordeList.Insert("ZmbM_ClerkFat_Khaki");
        HordeList.Insert("ZmbM_ClerkFat_Grey");
        HordeList.Insert("ZmbM_ClerkFat_Brown");
        HordeList.Insert("ZmbM_CitizenBFat_Red");
        HordeList.Insert("ZmbM_CitizenBFat_Green");
        HordeList.Insert("ZmbM_CitizenBFat_Blue");
        HordeList.Insert("ZmbM_CitizenASkinny_Red");
        HordeList.Insert("ZmbM_CitizenASkinny_Grey");
        HordeList.Insert("ZmbM_CitizenASkinny_Brown");
        HordeList.Insert("ZmbM_CitizenASkinny_Blue");
        HordeList.Insert("ZmbF_VillagerOld_White");
        HordeList.Insert("ZmbF_VillagerOld_Red");
        HordeList.Insert("ZmbF_VillagerOld_Green");
        HordeList.Insert("ZmbF_VillagerOld_Blue");
        HordeList.Insert("ZmbF_SurvivorNormal_White");
        HordeList.Insert("ZmbF_SurvivorNormal_Red");
        HordeList.Insert("ZmbF_SurvivorNormal_Orange");
        HordeList.Insert("ZmbF_SurvivorNormal_Blue");
        HordeList.Insert("ZmbF_SkaterYoung_Violet");
        HordeList.Insert("ZmbF_SkaterYoung_Striped");
        HordeList.Insert("ZmbF_SkaterYoung_Brown");
        HordeList.Insert("ZmbF_ShortSkirt_yellow");
        HordeList.Insert("ZmbF_ShortSkirt_white");
        HordeList.Insert("ZmbF_ShortSkirt_stripes");
        HordeList.Insert("ZmbF_ShortSkirt_red");
        HordeList.Insert("ZmbF_ShortSkirt_grey");
        HordeList.Insert("ZmbF_ShortSkirt_green");
        HordeList.Insert("ZmbF_ShortSkirt_checks");
        HordeList.Insert("ZmbF_ShortSkirt_brown");
        HordeList.Insert("ZmbF_ShortSkirt_black");
        HordeList.Insert("ZmbF_ShortSkirt_beige");
        HordeList.Insert("ZmbF_PoliceWomanNormal");
        HordeList.Insert("ZmbF_PatientOld");
        HordeList.Insert("ZmbF_ParamedicNormal_Red");
        HordeList.Insert("ZmbF_ParamedicNormal_Green");
        HordeList.Insert("ZmbF_ParamedicNormal_Blue");
        HordeList.Insert("ZmbF_NurseFat");
        HordeList.Insert("ZmbF_MilkMaidOld_Grey");
        HordeList.Insert("ZmbF_MilkMaidOld_Green");
        HordeList.Insert("ZmbF_MilkMaidOld_Black");
        HordeList.Insert("ZmbF_MilkMaidOld_Beige");
        HordeList.Insert("ZmbF_MechanicNormal_Orange");
        HordeList.Insert("ZmbF_MechanicNormal_Grey");
        HordeList.Insert("ZmbF_MechanicNormal_Green");
        HordeList.Insert("ZmbF_MechanicNormal_Beige");
        HordeList.Insert("ZmbF_JournalistNormal_White");
        HordeList.Insert("ZmbF_JournalistNormal_Red");
        HordeList.Insert("ZmbF_JournalistNormal_Green");
        HordeList.Insert("ZmbF_JournalistNormal_Blue");
        HordeList.Insert("ZmbF_JoggerSkinny_Red");
        HordeList.Insert("ZmbF_JoggerSkinny_Green");
        HordeList.Insert("ZmbF_JoggerSkinny_Brown");
        HordeList.Insert("ZmbF_JoggerSkinny_Blue");
        HordeList.Insert("ZmbF_HikerSkinny_Red");
        HordeList.Insert("ZmbF_HikerSkinny_Grey");
        HordeList.Insert("ZmbF_HikerSkinny_Green");
        HordeList.Insert("ZmbF_HikerSkinny_Blue");
        HordeList.Insert("ZmbF_DoctorSkinny");
        HordeList.Insert("ZmbF_Clerk_Normal_White");
        HordeList.Insert("ZmbF_Clerk_Normal_Red");
        HordeList.Insert("ZmbF_Clerk_Normal_Green");
        HordeList.Insert("ZmbF_Clerk_Normal_Blue");
        HordeList.Insert("ZmbF_CitizenBSkinny");
        HordeList.Insert("ZmbF_CitizenANormal_Brown");
        HordeList.Insert("ZmbF_CitizenANormal_Blue");
        HordeList.Insert("ZmbF_CitizenANormal_Beige");
        HordeList.Insert("ZmbF_BlueCollarFat_White");
        HordeList.Insert("ZmbF_BlueCollarFat_Red");
        HordeList.Insert("ZmbF_BlueCollarFat_Green");
        HordeList.Insert("ZmbF_BlueCollarFat_Blue");
        
        // Military Zombies.
        HordeList.Insert("ZmbM_SoldierNormal");
        HordeList.Insert("ZmbM_PatrolNormal_Autumn");
        HordeList.Insert("ZmbM_PatrolNormal_Flat");
        HordeList.Insert("ZmbM_PatrolNormal_PautRev");
        HordeList.Insert("ZmbM_PatrolNormal_Summer");

		// LootTiers.Insert( new ref AirdropLoot("AirdropCivilian", {
  //       "Izh18",
  //       "Mosin9130",
		// "SawedoffMosin9130",
		// "CZ527",
		// "CZ61",
		// "SKS",
		// "Mosin_Bayonet",
		// "Mosin_Compensator",
  //       "AmmoBox_762x54_20Rnd",
  //       "AmmoBox_762x39_20Rnd",
		// "PUScopeOptic",
		// "SKS_Bayonet",
  //       "IRP_GoldBars", //mod
  //       "FP4_Milk", //mod
  //       "Sweater_Skeleton", //mod
  //       "Gloves_skeleton", //mod
  //       "M1_Garand", //mod
  //       "Ammo_338", //mod
  //       "AmmoBox_338", //mod
  //       "Snipe_Mask_Uzor", //mod
  //       "Snipe_Mask_Orange",//mod
  //       "Snipe_Mask_Uzor",//mod
  //       "Snipe_Mask_blood",//mod
  //       "Snipe_Mask_Jeans",//mod
  //       "Snipe_Mask_Green",//mod
  //       "Snipe_Mask_black",//mod
  //       "CombinationLock",
  //       "Nails",
  //       "SteelNails",
  //       "CombinationLock4",
  //       "CodeLock",
  //       "Ammo_nails",
  //       "NailgGun",
  //       "JasonMask",
  //       "BarbedBat",
  //       "Guitar",
  //       "DoubleBladedAxe",
  //       "HumanFleshMask",
  //       "FoolMask_Yellow",
  //       "FoolMask_Black",
  //       "FoolMask",
  //       "Infected_Eyepatch",
  //       "Cash",
  //       "AmericanFootball",
  //       "IRP_BasketBall",
  //       "IRP_CoinCash",
  //       "IRP_PaperCash",
  //       "IRP_CoinCashStack",
  //       "IRP_Winchester70_Camo",
  //       "IRP_Sneakers_Blackgrey",
  //       "IRP_White_CargoPants",
  //       "IRP_CustomDrink1",
  //       "IRP_MonstasEnergys",
  //       "IRP_CustomDrink2",
  //       "IRP_CustomDrink3",
  //       "IRP_Cigarette",
  //       "IRP_BookSebbesDIY",
  //       "IRP_BookLearnSwedish",
  //       "IRP_BookSexGuideForMen",
  //       "IRP_Chocolate_Irish",
  //       "IRP_Chocolate",
  //       "IRP_BandanaMask_blackgold",
  //       "IRP_BandanaMask_Zombie",
  //       "IRP_BandanaMask_Doll2",
  //       "IRP_UKAssVest_White",
  //       "IRP_Hunting_Black",
  //       "IRP_Hunting_Travel",
  //       "IRP_Hunting_Canada",
  //       "IRP_Black_MountainBag",
  //       "IRP_DryBag_Chernarussian",
  //       "IRP_DryBag_UnionJack",
  //       "IRP_DryBag_Tiger",
  //       "IRP_FlatCap_Irish",
  //       "IRP_MiniDress_Flames",
  //       "IRP_MiniDress_Mulitcolor",
  //       "BaseballCap_Red",
  //       "Battery9V",
  //       "BatteryCharger",
  //       "BeanieHat_Beige",
  //       "BeanieHat_Black",
  //       "BeanieHat_Blue",
  //       "BeanieHat_Pink",
  //       "Blouse_Violet",
  //       "BomberJacket_Black",
  //       "BomberJacket_Blue",
  //       "BomberJacket_Brown",
  //       "BomberJacket_Grey",
  //       "BomberJacket_Maroon",
  //       "BoonieHat_Black",
  //       "BoxCerealCrunchin",
  //       "BrassKnuckles_Dull",
  //       "CableReel",
  //       "Camonet",
  //       "CanisterGasoline",
  //       "CanOpener",
  //       "CargoPants_Green",
  //       "CarTent",
  //       "CarRadiator",
  //       "Chemlight_Blu",
  //       "Chemlight_Green",
  //       "Chemlight_Red",
  //       "Chemlight_White",
  //       "Chemlight_Yellow",
  //       "ChernarusMap",
  //       "ChestHolster",
  //       "ChildBag_Blue",
  //       "CivilianBelt",
  //       "Compass",
  //       "CowboyHat_black",
  //       "CowboyHat_Brown",
  //       "Crowbar",
  //       "CZ527",
  //       "CZ61",
  //       "CZ75",
  //       "DarkMotoHelmet_Grey",
  //       "DarkMotoHelmet_Green",
  //       "DarkMotoHelmet_Re",
  //       "DenimJacket",
  //       "DesignerGlasses",
  //       "DryBag_Black",
  //       "DryBag_Red",
  //       "DryBag_Yellow",
  //       "DuctTap",
  //       "ElectronicRepairKit",
  //       "EngineOil",
  //       "EpoxyPutty",
  //       "FirefighterAxe",
  //       "FirefighterAxe_Black",
  //       "FirefighterAxe_Green",
  //       "FirefightersHelmet_Red",
  //       "Flashlight",
  //       "FlatCap_Brown",
  //       "GardenLime",
  //       "Handcuffs",
  //       "HandcuffKeys",
  //       "Hammer",
  //       "Hacksaw",
  //       "GreenBellPepper",
  //       "GP5GasMask",
  //       "HandSaw",
  //       "Headtorch_Grey",
  //       "HikingBootsLow_Beige",
  //       "HikingJacket_Blue",
  //       "HikingJacket_Red",
  //       "HockeyHelmet_Black",
  //       "Hoodie_Blac",
  //       "HunterPants_Winter",
  //       "HunterPants_Spring",
  //       "HunterPants_Summer",
  //       "HuntingBag",
  //       "HuntingJacket_Autumn",
  //       "HuntingJacket_Spring",
  //       "HuntingJacket_Winter",
  //       "HuntingKnife",
  //       "HuntingOptic",
  //       "HuntingVest",
  //       "Jeans_Black",
  //       "Jeans_Blue",
  //       "KitchenKnife",
  //       "LargeGasCanister",
  //       "LargeTent",
  //       "LeatherSewingKit",
  //       "Lockpick",
  //       "LugWrench",
  //       "Machete",
  //       "MakarovIJ70",
  //       "Matchbox",
  //       "Marmalade",
  //       "MediumGasCanister",
  //       "MediumTent",
  //       "Megaphone",
  //       "MetalPlate",
  //       "MetalWire",
  //       "Mosin9130_Black",
  //       "Mp133Shotgun",
  //       "MountainBag_Red",
  //       "MountainBag_Blue",
  //       "NailBox",
  //       "NioshFaceMask",
  //       "PeachesCan",
  //       "PersonalRadio",
  //       "Pliers",
  //       "PoliceVest",
  //       "Pot",
  //       "Potato",
  //       "PowderedMilk",
  //       "Rope",
  //       "Roadflare",
  //       "Rice",
  //       "SeaChest",
  //       "Spotlight",
  //       "SteakKnife",
  //       "TaloonBag_Yellow",
  //       "TaloonBag_Cyan",
  //       "BomberJacket_Pentagra",
  //       "PlagueMask",
  //       "Fabric",
  //       "Scrap",
  //       "CassetePlayer",
  //       "Scissors",
  //       "Locked_Safe",
  //       }));

		// LootTiers.Insert( new ref AirdropLoot("AirdropMedical", {
  //       "Canteen",
		// "BandageDressing",
		// "Morphine",
		// "Epinephrine",
		// "TacticalBaconCan",
		// "VitaminBottle",
		// "PainkillerTablets",
		// "CharcoalTablets",
  //       "Syringe",
  //       "IRP_swabs_pads",
  //       "IRP_BandageDressing",
  //       "IRP_Armband_MedicalWhite",
  //       "IRP_Armband_MedicalRed",
  //       "IRP_Medic_MountainBag",
  //       "Battery9V",
  //       "BatteryCharger",
  //       "BloodBagEmpty",
  //       "BloodTestKit",
  //       "CanisterGasoline",
  //       "Chemlight_Blu",
  //       "Chemlight_Green",
  //       "Chemlight_Red",
  //       "Chemlight_White",
  //       "Chemlight_Yellow",
  //       "Compass",
  //       "Defibrillator",
  //       "DisinfectantAlcohol",
  //       "DisinfectantSpray",
  //       "DuctTap",
  //       "Epinephrine",
  //       "FirstAidKit",
  //       "Heatpack",
  //       "LabCoat",
  //       "MedicalScrubsShirt_Green",
  //       "MedicalScrubsShirt_Blue",
  //       "MedicalScrubsShirt_White",
  //       "MedicalScrubsPants_White",
  //       "MedicalScrubsPants_Green",
  //       "MedicalScrubsPants_Blue",
  //       "MedicalScrubsHat_White",
  //       "MedicalScrubsHat_Gree",
  //       "MedicalScrubsHat_Blue",
  //       "MediumGasCanister",
  //       "MetalWire",
  //       "Morphine",
  //       "Netting",
  //       "NurseDress_Blue",
  //       "NurseDress_White",
  //       "PainkillerTablets",
  //       "ParamedicJacket_Blue",
  //       "SalineBag",
  //       "Rope",
  //       "Roadflare",
  //       "StartKitIV",
  //       "SurgicalGloves_Green",
  //       "SurgicalGloves_Blue",
  //       "SurgicalGloves_White",
  //       "SurgicalGloves_LightBlue",
  //       "SurgicalMask",
  //       "Tweezers",
  //       "Scissors",
  //       }));

  LootTiers.Insert( new ref AirdropLoot("AirdropMilitary", {
		"M4A1",
		"Morphine",
		"AKM",
		"M4A1",
		"AKM",
		"M4A1",
		"AKM",
		"M4_Suppressor",
		"M4_CarryHandleOptic",
		"BUISOptic",
		"M68Optic",
		"M4_T3NRDSOptic",
		"ReflexOptic",
		"ACOGOptic",
		"M4_OEBttstck",
		"M4_MPBttstck",
		"M4_CQBBttstck",
		"M4_PlasticHndgrd",
		"M4_RISHndgrd",
		"M4_MPHndgrd",
		"KashtanOptic",
		"GrozaOptic",
		"KobraOptic",
		"AK_Bayonet",
		"AK_Suppressor",
		"AK_WoodBttstck",
		"AK_FoldingBttstck",
		"AK_PlasticBttstck",
		"AK_WoodHndgrd",
		"AK_RailHndgrd",
		"AK_PlasticHndgrd",
		"RGD2Grenade",
		"M67Grenade",
		"M18SmokeGrenade_Red",
		"M18SmokeGrenade_Green",
		"M18SmokeGrenade_Yellow",
		"M18SmokeGrenade_Purple",
		"M18SmokeGrenade_White",
		"PlateCarrierPouches",
		"PlateCarrierVest",
		"PlateCarrierHolster",
    "Mag_STANAG_30Rnd",
		"Mag_AKM_30Rnd",
		"AmmoBox_762x54_20Rnd",
    "AmmoBox_762x39_20Rnd",
		"Mag_STANAG_30Rnd",
		"Mag_AKM_30Rnd",
		"AmmoBox_762x54_20Rnd",
    "AmmoBox_762x39_20Rnd",
		"Mag_STANAG_30Rnd",
		"Mag_AKM_30Rnd",
		"AmmoBox_762x54_20Rnd",
        "AmmoBox_762x39_20Rnd",
        "M590A1", //mod
        "SniperOptic", //mod
        "L115A3", //mod
        "L115A3_Green", //mod
        "L115A3_Woodland", //mod
        "Mag_L115A3_5Rnd", //mod
        "IRP_MP40", //mod
        "Mag_MP40_32Rnd", //mod
        "M500", //mod
        "R870", //mod
        "APS_Pistol", //mod
        "Mag_APS_20Rnds", //mod
        "MP433", //mod
        "Mag_MP433_17rnd", //mod
        "Glock17", //mod
        "Mag_Glock17_17Rnd", //mod
        "USP_Suppressor", //mod
        "USP", //mod
        "Mag_USP_12Rnd", //mod
        "IRP_K63_Helmet", //mod
        "OTS33", //mod
        "AmmoBox_9x18", //mod
        "AmmoBox_792x33", //mod
        "M98B", //mod
        "Mag_m98b_10rnd", //mod
        "PlateCarrierPouches",
        "PlateCarrierVest",
        "PlateCarrierHolster",
        "AN94", //mod
        "AK_Hndgrd_M", //mod
        "AK_Bttstck_M", //mod
        "Mag_CMAG_100Rnd", //mod
        "IRP_MK14_EBR", //mod
        "Mag_MK14EBR_20Rnd", //mod
        "M14", //mod
        "Mag_M14_20rnd", //mod
        "IRP_TranqRifle", //mod
        "Mag_Tranq_20Rnd", //mod
        "L85A2", //mod
        "IRP_G36K", //mod
        "IRP_AK12", //mod
        "Mag_AK12_65Drum", //mod
        "Mag_AK12_30Rnd", //mod
        "IRP_M1014", //mod
        "RPD", //mod
        "mag_RPD_100rnd", //mod
        "HK_MP7", //mod
        "Mag_MP7_20Rnds", //mod
        "SA_VZ58", //mod
        "RK62", //mod
        "AEK971", //mod
        "AEK973", //mod
        "FP4_SOCOM_16", //mod
        "L96A1_Optic", //mod
        "L96A1", //mod
        "L96A1_tactical", //mod
        "SV98", //mod
        "Mag_SV98_10Rnd", //mod
        "Military_cap_green", //mod
        "Military_cap_desert", //mod
        "Tactical_Helmet", //mod
        "AmmoBox_12x99_10Rnd", //mod
        "AmmoBox_9x39_20Rnd_Tracer",
        "AmmoBox_792x57_25Rnd",
        "AmmoBox_762x33_20Rnd",
        "AmmoBox_762x25_25Rnd",
        "AmmoBox_12x99_10Rnd_TracerYel",
        "AmmoBox_12x99_10Rnd_TracerGreen",
        "Ammo_12x99",
        "Ammo_9x39Tracer",
        "Ammo_792x57",
        "mag_svt_10rnd",
        "Mag_RPK_40Rnd",
        "Mag_Nailgun_50n",
        "VSK94",
        "DDM",
        "PB1967",
        "Pistol_Tokarev",
        "K_98",
        "Vintorez_veteran",
        "Vintorez",
        "glock_18",
        "AK74UM",
        "sg550",
        "M1935",
        "SR2_black",
        "GSH18",
        "SVD_1963",
        "FN_SCAR_Blac",
        "FN_SCAR_H",
        "IRP_ABU_PatternPants",
        "IRP_ABU_PatternJacket",
        "IRP_TacticalShirt_Tropicam",
        "IRP_Flektran_PatternPants",
        "IRP_Flektran_PatternJacket",
        "IRP_MilitaryBeret_Skull",
        "IRP_BaseballCap_UN",
        "MassPlateCarrierPouches_ODG",
        "MassPlateCarrierPouches_Winter",
        "MassPlateCarrierPouches_PartizanM",
        "Massm300_camo",
        "MassMolleBagDesert",
        "MassMolleBagBlack",
        "MassMolleBagGorka",
        "MassSuppressor308",
        "MassSVT40",
        "MassPPSH41",
        "Massppshdrum",
        "Mass_WW2Vest",
        "MassSSww2Camopants",
        "Massww2SShelmet",
        "MassMolleBelt",
        "MassMolleBeltBlack",
        "MassMolleBeltODG",
        "MassMolleBeltWD",
        "MassTacticalBag",
        "MassTacticalBagBlack",
        "MassAR15",
        "Massmini14",
        "MassRuckBagDesert",
        "MassRuckBagBlack",
        "MassRuckBagGorka",
        "MassRuckBagGreen",
        "MassLargeMollePouch",
        "MassLargeMollePouchBlack",
        "BaseRadio",
        "Battery9V",
        "BDUPants",
        "CanisterGasoline",
        "Canteen",
        "CombatBoots_Black",
        "CombatBoots_Gree",
        "CombatBoots_Brown",
        "CombatBoots_Gre",
        "CombatKnife",
        "Compass",
        "DuctTap",
        "FAL",
        "FlashGrenade",
        "FNX45",
        "GasMas",
        "GhillieAtt_Moss",
        "GorkaEJacket_Autumn",
        "GorkaEJacket_Flat",
        "GorkaHelmet",
        "GorkaHelmetVisor",
        "GorkaPants_Autumn",
        "HighCapacityVest_Black",
        "HighCapacityVest_Olive",
        "KashtanOptic",
        "KazuarOptic",
        "M18SmokeGrenade_Green",
        "M18SmokeGrenade_Purple",
        "M18SmokeGrenade_White",
        "M18SmokeGrenade_Red",
        "HK416",
        "M4_MPBttstck",
        "M4_MPHndgrd",
        "M4_CQBBttstc",
        "M4_RISHndgrd",
        "M4_PlasticHndgrd",
        "M4_Suppressor",
        "M65Jacket_Black",
        "M65Jacket_Khaki",
        "M65Jacket_Olive",
        "M65Jacket_Tan",
        "M68Optic",
        "MilitaryBelt",
        "NBCBootsGray",
        "NBCGlovesGray",
        "NBCHoodGray",
        "NBCJacketGray",
        "NBCPantsGray",
        "NVGHeadstra",
        "NVGoggles",
        "IRP_MRE",
        "SVD",
        "AK101",
        "AK101_Black",
        "AK74",
        "AKS74U",
        "AKS74U_Bttstck",
        "Alicebag_Black",
        "Alicebag_Camo",
        "AmmoBox",
        "AmmoBox_00buck_10rnd",
        "AmmoBox_12gaSlug_10Rnd",
        "AmmoBox_308WinTracer_20Rnd",
        "AmmoBox_308Win_20Rnd",
        "AmmoBox_357_20Rnd",
        "AmmoBox_380_35rnd",
        "AmmoBox_45ACP_25rnd",
        "AmmoBox_545x39Tracer_20Rnd",
        "AmmoBox_545x39_20Rnd",
        "AmmoBox_556x45Tracer_20Rnd",
        "AmmoBox_556x45_20Rnd",
        "AmmoBox_762x39Tracer_20Rnd",
        "AmmoBox_762x39_20Rnd",
        "AmmoBox_762x54Tracer_20Rnd",
        "AmmoBox_9x19_25rnd",
        "AmmoBox_9x39AP_20Rnd",
        "AssaultBag_Black",
        "BUISOptic",
        "BallisticHelmet_Black",
        "BallisticHelmet_Green",
        "BaseRadio",
        "Battery9V",
        "BearTrap",
        "Binoculars",
        "BurlapSack",
        "CZ527",
        "CZ61",
        "CZ75",
        "Camonet",
        "Canteen",
        "CarTent",
        "CargoPants_Black",
        "CargoPants_Beige",
        "CargoPants_Green",
        "Chemlight_Blue",
        "Colt1911",
        "CombatBoots_Black",
        "CombatBoots_Beige",
        "CombatKnife",
        "DuctTape",
        "Engraved1911",
        "Epinephrine",
        "FAL",
        "FNP45_MRDSOptic",
        "FNX45",
        "Fal_FoldingBttstck",
        "Fal_OeBttstck",
        "FirstAidKit",
        "FlashGrenade",
        "GhillieAtt_Mossy",
        "GhillieBushrag_Mossy",
        "GhillieHood_Mossy",
        "GhillieSuit_Mossy",
        "GhillieTop_Mossy",
        "GorkaHelmet",
        "GorkaHelmetVisor",
        "Heatpack",
        "HighCapacityVest_Olive",
        "HighCapacityVest_Black",
        "LandMineTrap",
        "LargeTent",
        "M18SmokeGrenade_Purple",
        "M18SmokeGrenade_Green",
        "M18SmokeGrenade_Red",
        "M18SmokeGrenade_White",
        "M18SmokeGrenade_Yellow",
        "M4A1",
        "M4A1_Black",
        "M4_CQBBttstck",
        "M4_MPHndgrd",
        "M4_RISHndgrd",
        "M4_Suppressor",
        "M4_T3NRDSOptic",
        "M65Jacket_Black",
        "M67Grenade",
        "M68Optic",
        "MKII",
        "MP5K",
        "MP5_RailHndgrd",
        "Mag_1911_7Rnd",
        "Mag_AK101_30Rnd",
        "Mag_AK74_30Rnd",
        "Mag_AKM_30Rnd",
        "Mag_AKM_Drum75Rnd",
        "Mag_CMAG_20Rnd",
        "Mag_CMAG_30Rnd",
        "Mag_CMAG_40Rnd",
        "Mag_CZ61_20Rnd",
        "Mag_FAL_20Rnd",
        "Mag_FNX45_15Rnd",
        "Mag_Glock_15Rnd",
        "Mag_MKII_10Rnd",
        "Mag_MP5_30Rnd",
        "Mag_STANAGCoupled_30Rnd",
        "Mag_STANAG_30Rnd",
        "Mag_SVD_10Rnd",
        "Mag_UMP_25Rnd",
        "Matchbox",
        "MediumTent",
        "Megaphone",
        "MilitaryBelt",
        "Mich2001Helmet",
        "NVGHeadstrap",
        "NVGoggles",
        "NailBox",
        "Netting",
        "PSO11Optic",
        "PSO1Optic",
        "PistolSuppressor",
        "PlateCarrierPouches",
        "PlateCarrierHolster",
        "PlateCarrierVest",
        "ReflexOptic",
        "Rope",
        "SKS",
        "SVD",
        "Saiga",
        "Saiga_Bttstck",
        "SalineBag",
        "SeaChest",
        "SmershBag",
        "SmershVest",
        "SparkPlug",
        "TetracyclineAntibiotics",
        "TortillaBag",
        "UKAssVest_Black",
        "UKAssVest_Camo",
        "UMP45",
        "Winchester70",
        "IRP_MilitaryBackpack",
        "IRP_L_PlateCarrierVest_AOR2",
        "IRP_L_PlateCarrierVest_MC",
        "IRP_L_PlateCarrierVest_MCA",
        "IRP_L_TacticalHelmet_AOR1",
        "IRP_L_TacticalHelmet_AOR2",
        "IRP_L_TacticalHelmet_MC",
        "IRP_L_TacticalHelmet_MCA",
        "IRP_Earphones",
        "IRP_GhostOptic",
        "IRP_Vertical_ForegripBipod",
        "IRP_Stubby_GripBipod",
        "IRP_Bipod",
        "IRP_M249",
        "Mag_M249_Box200Rnd",
        "IRP_M45A1",
        "Mag_M45A1_15Rnd",
        "IRP_G43",
        "Mag_G43_10Rnd",
        "IRP_STG58",
        "Mag_STG58_20Rnd",
        "IRP_SCAR_L",
        "IRP_M712",
        "Mag_M712",
        "IRP_SG552",
        "Mag_SG552_30Rnd",
        "IRP_SamuraiSword",
        "MP5SD",
        "AimpointT2Optic",
        "M40A3",
        "P226",
        "Mag_P226_15Rnd",
        "M590A1",
        "SniperOptic",
        "L115A3",
        "Mag_L115A3_5Rnd",
        "IRP_Nazi_Gold_Stack",
        "IRP_Nazi_Gold",
        "M14",
        "Mag_M14_20rnd",
        "IRP_M24",
        "Mag_M24_10rnd",
        "M14Rail",
        "AK12",
        "Mag_PKM_Box200Rnd",
        "IRP_PKM",
        "CodeLock",
        "IRP_CrystalMeth",
        "IRP_Cocain",
        "IRP_BallisticVest_Black",
        "AimpointCS",
        "HK416",
        "IRP_Vector",
        "MassM16",
        "MassMP153",
        "MassBallisticShield",
        "MassScope",
        "MassScoutSuppressor",
        "MassScoutLRS",
        "MassScout556",
        "MassMolleBagBlack",
        "MassPPSH41",
        "Massppshdrum",
        "MassMolleBeltBlack",
        "MassLargePlateCarrierPouches",
        "MassLargeSmersh",
        "MassLargeSmersh_Black",
        "MassMRE10",
        "CombatKnife_Custom2",
        "CombatKnife_Custom1",
        "JasonMask",
        "CassetePlayer",
        "Guitar",
  }));

    if (!FileExist(JSON_Path_Dir))
        {
            MakeDirectory(JSON_Path_Dir);
        }

        JsonFileLoader<AirdropSettings>.JsonSaveFile(JSON_Path_Config, this);
    }

    static ref AirdropSettings Load()
    {
        ref AirdropSettings settings = new AirdropSettings();

        if (FileExist(JSON_Path_Config))
        {
            JsonFileLoader<AirdropSettings>.JsonLoadFile(JSON_Path_Config, settings);
            
            Print("[CRP LOOT PILE] Using config file settings for Loot Pile Events.");
        }
        else
        {
            settings.AirdropDefaults();
            Print("[CRP LOOT PILE] Using hard-coded settings for Loot Pile Events.");
        }

        return settings;
    }
}

class AirDropEvent 
{
	
    ref EventLocationFuncs activeLocation;
    static ref array<Object> SpawnedInfected;
    static ref array<Object> SpawnedLoot;
    ref AirdropSettings m_ActiveAirdropSettings;
    ref Timer m_DespawnTimerLoot;
    ref Timer m_DespawnTimerHorde;

    //Fields.
    int ZombieCount = 25;

	  // Init.
    void AirDropEvent(EventLocationFuncs location) {

        SpawnedInfected = new array<Object>;
        SpawnedLoot = new array<Object>;
        activeLocation = location;
        m_ActiveAirdropSettings = AirdropSettings.Load();

        // Spawn zombies.
        SpawnHorde();

        // Spawn loot.
        SpawnLoot();

    }

    // Cleanup.
    void ~AirDropEvent() {


    }

    // Spawn Infected at the Airdrop location.
    void SpawnHorde() {

        for (int z = 0; z < ZombieCount; z++) {
            Object infectedz = GetGame().CreateObject(m_ActiveAirdropSettings.HordeList.GetRandomElement(), Vector(activeLocation.x + Math.RandomFloat(-50.0, 50.0), 0, activeLocation.y + Math.RandomFloat(-50.0, 50.0)), false, true);
            SpawnedInfected.Insert(infectedz);
        }

        Print("[CRP LOOT PILE] Zombies spawned in.");

    }

    // Despawn horde at event close.
    static void DespawnHorde()
    {

        if (SpawnedInfected.Count() > 0)
        {
            foreach(auto Infected : SpawnedInfected)
            {
                GetGame().ObjectDelete(Infected);
            }

            SpawnedInfected.Clear();
            Print("[CRP LOOT PILE] Zombies removed.");

        }
    }

    // Spawn the loot at the event location.
    void SpawnLoot() {

        ref AirdropLoot LootTier;
        LootTier = m_ActiveAirdropSettings.LootTiers.GetRandomElement();

        //m_ActiveAirdropSettings.AirdropContainers.GetRandomElement() 1st param.
		    EntityAI drop = EntityAI.Cast(GetGame().CreateObject( m_ActiveAirdropSettings.AirdropContainers.GetRandomElement(), Vector(activeLocation.x + Math.RandomFloat(-20.0, 20.0), 0, activeLocation.y + Math.RandomFloat(-20.0, 20.0)), false, false));	
        EntityAI isValid = drop;
        //Print("[INF AIRDROP] Loot Crate spawned in.");

        for(int i = 0; i < m_ActiveAirdropSettings.Items; i++) 
        {

            // Spawns loot in the crate.
            if(isValid != NULL) {

                drop.GetInventory().CreateInInventory(LootTier.Loot.GetRandomElement());

                //Print("[INF AIRDROP CRATE] Spawning loot in the crate");

            } else {

                //Print("[INF AIRDROP CRATE] Item has failed to be created in lootbox...");

            }

        }
		    SpawnedLoot.Insert(drop);
        Print("[CRP LOOT PILE] Spawning loot in the crate");
        //Print("[COORDS X]" + activeLocation.x);
        //Print("[COORDS Y]" + activeLocation.y);

    }

    // Remove loot at event end.
    static void DespawnLoot() {

        if (SpawnedLoot.Count() > 0)
        {
            foreach(auto Loot : SpawnedLoot)
            {
                GetGame().ObjectDelete(Loot);
            }

            SpawnedLoot.Clear();
            Print("[CRP LOOT PILE] Loot removed.");

        }

        // MESSAGE PLAYERS ABOUT EVENTS ENDING.
        ref array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);

        // Send a message to all players that the event has ended.
        for ( int k = 0; k < players.Count(); k++ )
        {
            PlayerBase playera = PlayerBase.Cast(players.Get(k));

            if(playera != NULL) {

                Print("[CRP EVENT] Sending players event end msg...");

                // Send players messages about the events ending.
                Param1<string> Msgeventend = new Param1<string> ("[CRP EVENT] The Loot Pile event has ended.");
                GetGame().RPCSingleParam(playera, ERPCs.RPC_USER_ACTION_MESSAGE, Msgeventend , true, playera.GetIdentity());

                // Send players message about event lore.
                Param1<string> Msgeventloreend = new Param1<string> ("*It is too late to check out the rumor you heard, you decide not to go.*");
                GetGame().RPCSingleParam(playera, ERPCs.RPC_USER_ACTION_MESSAGE, Msgeventloreend, true, playera.GetIdentity());   

            }
        }
    }
}