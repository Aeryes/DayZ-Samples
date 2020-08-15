////////////////////////////////////////////////////////////////////
//DeRap: gear\config.bin
//Produced from mikero's Dos Tools Dll version 7.12
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Wed Mar 25 13:19:35 2020 : 'file' last modified on Tue Sep 24 09:57:39 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class _Gear
	{
		units[] = {"AmericanFootball","Cash","Tweezers","Scissors","Scrap","Fabric","PlagueMask","JasonMask","FoolMask","FoolMask_Yellow","FoolMask_Black","HumanFleshMask","CombatKnife_Custom1","CombatKnife_Custom2","BarbedBat","DoubleBladedAxe","UsbHub","Laptop"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class CfgSlots
{

	class Slot_Material_Cassette
	{
		name = "Cassette";
		displayName = "Attached Cassette";
		ghostIcon = "default";
	};

};
class CfgVehicles
{
	class Container_Base;
	class Inventory_Base;
	class PersonalRadio;
	class CigarettePack_ColorBase;
	class Thermometer;
	class LongrangeOptic;
	class CombatKnife;
	class BaseballBat;
	class Paper;
	class WoodAxe;
	class Hatchet;
	class Megaphone;
	class ItemBook;

	/////////////
	//Materials//
	/////////////

	class Scrap: Inventory_Base
	{
		scope = 2;
		displayName = "Scrap Metal";
		model = "inf\gear\models\Scrap.p3d";
		descriptionShort = "Scrap metal that can be used to craft a variety of items.";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 2;
		isMeleeWeapon = 1;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 200.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"inf\gear\textures\Scrap.rvmat"}},{0.5,{"inf\gear\textures\Scrap_damage.rvmat"}},{0.0,{"inf\gear\textures\Scrap_destruct.rvmat"}}};
				};
			};
		};
	};
	class Fabric: Inventory_Base
	{
		scope = 2;
		displayName = "Fabric";
		model = "inf\gear\models\Fabric.p3d";
		descriptionShort = "Fabric that can be used to craft a variety of items.";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 2;
		isMeleeWeapon = 1;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 200.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"inf\gear\textures\Scrap.rvmat"}},{0.5,{"inf\gear\textures\Scrap_damage.rvmat"}},{0.0,{"inf\gear\textures\Scrap_destruct.rvmat"}}};
				};
			};
		};
	};

	/////////
	//Masks//
	/////////

	class Clothing_Base;
	class HockeyMask;
	class PlagueMask: HockeyMask
	{
		scope = 2;
		displayName = "Plague Mask";
		descriptionShort = "Purge the plague.";
		model = "inf\gear\models\PlagueMask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 730;
		itemSize[] = {3,1};
		heatIsolation = 0.5;
		noHelmet = 1;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "inf\gear\models\PlagueMask_m.p3d";
			female = "inf\gear\models\PlagueMask_f.p3d";
		};
	};
	class JasonMask: HockeyMask
	{
		scope = 2;
		displayName = "Jason Mask";
		descriptionShort = "Scary Jason Mask";
		model = "inf\gear\models\jasonmask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 730;
		itemSize[] = {2,3};
		heatIsolation = 0.5;
		noHelmet = 1;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "inf\gear\models\jasonmask_m.p3d";
			female = "inf\gear\models\jasonmask_f.p3d";
		};
	};
	class FoolMask: HockeyMask
	{
		scope = 2;
		displayName = "Venetian Fool Mask";
		descriptionShort = "A mask used at ballroom dances.";
		model = "inf\gear\models\FoolMask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 730;
		itemSize[] = {2,3};
		heatIsolation = 0.5;
		noHelmet = 1;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "inf\gear\models\FoolMask_m.p3d";
			female = "inf\gear\models\FoolMask_f.p3d";
		};
	};
	class FoolMask_Yellow: FoolMask
	{
		scope = 2;
		model = "inf\gear\models\FoolMask_Yellow_g.p3d";
		class ClothingTypes
		{
			male = "inf\gear\models\FoolMask_Yellow_m.p3d";
			female = "inf\gear\models\FoolMask_Yellow_f.p3d";
		};
	};
	class FoolMask_Black: FoolMask
	{
		scope = 2;
		model = "inf\gear\models\FoolMask_Black_g.p3d";
		class ClothingTypes
		{
			male = "inf\gear\models\FoolMask_Black_m.p3d";
			female = "inf\gear\models\FoolMask_Black_f.p3d";
		};
	};
	class HumanFleshMask: HockeyMask
	{
		scope = 2;
		displayName = "Human Flesh Mask";
		descriptionShort = "A mask made from the flesh of a human.";
		model = "inf\gear\models\HumanFleshMask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 730;
		itemSize[] = {2,3};
		heatIsolation = 0.5;
		noHelmet = 1;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "inf\gear\models\HumanFleshMask_m.p3d";
			female = "inf\gear\models\HumanFleshMask_f.p3d";
		};
	};
	class ShameMask: HockeyMask
	{
		scope = 2;
		displayName = "Sahme Mask";
		descriptionShort = "You should feel ashamed for what you did!!!";
		model = "inf\gear\models\shamemask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 730;
		itemSize[] = {2,3};
		heatIsolation = 0.5;
		noHelmet = 1;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "inf\gear\models\shamemask_m.p3d";
			female = "inf\gear\models\shamemask_f.p3d";
		};
	};
	class HuntingKnife;
	class Machete;

	class MosinHuntingScope: LongrangeOptic
	{
		inventorySlot[] = {"weaponOpticsMosin","weaponOpticsLRS"};
	};

	////////////
	//RP Items//
	////////////

	class AmericanFootball: Inventory_Base
	{
		scope = 2;
		displayName = "American Football";
		model = "inf\gear\models\AmericanFootball.p3d";
		descriptionShort = "A sturdy well built American Football, who knows how it got to Chernarus?";
		itemSize[] = {3,2};
		weight = 500;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"inf\gear\textures\AmericanFootball.rvmat"}},{0.5,{"inf\gear\textures\AmericanFootball_damage.rvmat"}},{0.0,{"inf\gear\textures\AmericanFootball_destruct.rvmat"}}};
				};
			};
		};
	};
	class Cash: Inventory_Base
	{
		scope = 2;
		displayName = "Roubles";
		model = "inf\gear\models\Cash.p3d";
		descriptionShort = "A stack of roubles made of 100 Rouble banknotes, for trading with other survivors or traders.";
		rotationFlags = 17;
		itemSize[] = {1,1};
		weight = 5;
		isMeleeWeapon = 1;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"inf\gear\textures\Cash.rvmat"}},{0.5,{"inf\gear\textures\Cash_damage.rvmat"}},{0.0,{"inf\gear\textures\Cash_destruct.rvmat"}}};
				};
			};
		};
	};
	class Tweezers: Inventory_Base
	{
		scope = 2;
		displayName = "Tweezers";
		model = "inf\gear\models\Tweezers.p3d";
		descriptionShort = "Use these to pluck that unibrow.";
		rotationFlags = 17;
		itemSize[] = {2,1};
		weight = 25;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"inf\gear\textures\Tweezers.rvmat"}},{0.5,{"inf\gear\textures\Tweezers_damage.rvmat"}},{0.0,{"inf\gear\textures\Tweezers_destruct.rvmat"}}};
				};
			};
		};
	};
	class Scissors: CombatKnife
	{
		scope = 2;
		displayName = "Scissors";
		model = "inf\gear\models\Scissors.p3d";
		descriptionShort = "Use these to cut fabrics.";
		rotationFlags = 17;
		itemSize[] = {1,2};
		weight = 25;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"inf\gear\textures\Tweezers.rvmat"}},{0.5,{"inf\gear\textures\Tweezers_damage.rvmat"}},{0.0,{"inf\gear\textures\Tweezers_destruct.rvmat"}}};
				};
			};
		};
	};

	class Guitar: WoodAxe
	{
		displayName = "Acoustic Guitar";
		descriptionShort = "Play some tunes with this symbol of music.";
		model = "inf\gear\models\Guitar.p3d";
	};

    ///////////////
    // cassettes //
 ///////////////////////////////////////////////////////////////////
	class CassettePlayer: Inventory_Base
	{
		scope = 2;
		displayName = "Cassette Player";
		descriptionShort = "A cassette player that can be used to play cassettes and record others as well as listen to the radio.";
		model = "inf\gear\models\CassetePlayer.p3d";
		weight = 80;
		absorbency = 0.5;
		itemSize[] = {2,2};
		rotationFlags = 1;
		oldpower = 0;
		isMeleeWeapon = 1;
		attachments[] = {"BatteryD", "Cassette"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
	};

    class Cassette;
    class ModdedCassette : Cassette
    {

        inventorySlot = "Cassette";

    };

    class LordOfLight_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Lord Of Light Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"inf\gear\textures\cassette_LordOfLight_co.paa"};
    };

    class TotoAfrica_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Toto Africa Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"inf\gear\textures\cassette_toto_co.paa"};
    };

    class USA_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Star-Spangled Banner Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"inf\gear\textures\cassette_starsandstripes_co.paa"};
    };

    class ACDCThunder_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "ACDC ThunderStruck Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class British_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "British Anthem Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class Chernarussain_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Chernarussain Anthem Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class CountryRoads_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Country Roads Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class DannyBoy_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Danny Boy Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class DavidH_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "True Survivor Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class HardBass_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Generation Hard Bass Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class Credence_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Green River Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class SlavHardBass_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Hard Bass School Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class Ireland_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Irish Anthem Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    // Wave Two Cassettes.
    class AmberRun_I_Found_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Amber Run - I Found";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class AmazingGrace_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Amazing Grace Bag Pipes";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class BlackBirdSong_Lee_Dewyze_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Lee Dewyze - Black Bird Song";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class WoundedWolf_GilesCorey_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Giles Corey - Wounded Wolf";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class GodsGoingToKnockYouDown_JohnnyCash_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Johnny Cash - Gods Going To Knock You Down";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class Hurt_JohnnyCash_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Johnny Cash - Hurt";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class Kalinka_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Kalinka Cassette";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class Wardruna_Lyfaberg_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Wardruna - Lyfaberg";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class BonIver_Rosyln_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Bon Iver - Rosyln";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class Luminers_StubbernLove_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "The Luminers - Stubborn Love";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class Ellie_ThroughTheValley_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Ellies Song - Through The Valley";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    class TravisScott_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Travis Scott";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"dz\gear\tools\data\cassette_co.paa"};
    };

    // Premium Cassettes.
    class Premium_Moody_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Cage The Elephant - Ain't No Rest For The Wicked";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"inf\gear\textures\moodycassette_co.paa"};
    };

    class Premium_Yeetera_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Tech N9ne - Hit The Ground Running";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"inf\gear\textures\yeeteracassette_co.paa"};
    };

    class Premium_Vinegar_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "Bobby Shmurda - Bobby Bitch";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"inf\gear\textures\vinegarcassette_co.paa"};
    };

    class Premium_Psychonut_Cassette : ModdedCassette // Song #1
    {
        scope = 2;
        displayName = "The Protomen - Silent Running";
        descriptionShort = "A cassette that contains music.";
        model = "dz\gear\tools\cassette.p3d";
        rotationFlags = 17;
        weight = 80;
        absorbency = 0.5;
        itemSize[] = { 2,1 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] = {"inf\gear\textures\psychonutcassette_co.paa"};
    };

////////////////////////////////////////////////////////////////////////////////////////////////////////
	class UsbHub: Inventory_Base
	{
		scope = 2;
		displayName = "USB";
		model = "inf\gear\models\usb.p3d";
		descriptionShort = "A USB can be used to store information on.";
		rotationFlags = 17;
		itemSize[] = {1,2};
		weight = 2;
		isMeleeWeapon = 1;
		canBeSplit = 1;
	};

	class Laptop: Inventory_Base
	{
		scope = 2;
		displayName = "Laptop";
		model = "inf\gear\models\laptop.p3d";
		descriptionShort = "A Laptop made by Triad Industries. Laptops are used for many purposes, it looks like this one was used for some sort of official buisness.";
		rotationFlags = 17;
		itemSize[] = {3,2};
		weight = 2;
		isMeleeWeapon = 1;
		canBeSplit = 1;
		itemsCargoSize[] = {1,2};
		class AnimationSources
		{
			class door
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};

    /////////////////
	//Melee Weapons//
    /////////////////

	class Immolator: Hatchet
	{
		scope = 2;
		displayName = "Immolator";
		descriptionShort = "A crafted weapon of destruction. Crude but effective.";
		model = "inf\gear\models\immolator.p3d";
		repairableWithKits[] = {5,4};
		repairCosts[] = {30,25};
		rotationFlags = 12;
		autoQuickbar = 1;
		weight = 1550;
		itemSize[] = {2,7};
		itemBehaviour = 2;
		fragility = 0.01;
		inventorySlot = "Melee";
		lootCategory = "Tools";
		lootTag[] = {"Historical"};
		openItemSpillRange[] = {20,40};
		itemInfo[] = {"Axe"};
		isMeleeWeapon = 1;
		suicideAnim = "woodaxe";
	};
	class DoubleBladedAxe: WoodAxe
	{
		scope = 2;
		displayName = "Double Bladed Axe";
		descriptionShort = "An old double bladed axe from a time long forgotten.";
		model = "inf\gear\models\waraxe.p3d";
		repairableWithKits[] = {5,4};
		repairCosts[] = {30,25};
		rotationFlags = 12;
		autoQuickbar = 1;
		weight = 1550;
		itemSize[] = {2,7};
		itemBehaviour = 2;
		fragility = 0.01;
		inventorySlot = "Melee";
		lootCategory = "Tools";
		lootTag[] = {"Historical"};
		openItemSpillRange[] = {20,40};
		itemInfo[] = {"Axe"};
		isMeleeWeapon = 1;
		suicideAnim = "woodaxe";
	};
	class BarbedBat: BaseballBat
	{
		scope = 2;
		displayName = "Barbed Baseball Bat";
		descriptionShort = "A Baseball Bat with barbed wire attached for extra blunt force.";
		model = "inf\gear\models\BarbedBat.p3d";
		rotationFlags = 17;
		autoQuickbar = 1;
		inventorySlot = "Melee";
		weight = 566;
		itemSize[] = {1,7};
		itemBehaviour = 2;
		fragility = 0.02;
		lootTag[] = {"Civilian","Work"};
		lootCategory = "Tools";
		openItemSpillRange[] = {40,80};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBat";
				range = 1.5;
			};
			class Heavy
			{
				ammo = "MeleeBat_Heavy";
				range = 1.5;
			};
			class Sprint
			{
				ammo = "MeleeBat_Heavy";
				range = 4.0;
			};
		};
	};
	class CombatKnife_Custom1: CombatKnife
	{
		scope = 2;
		displayName = "Tactical Knife";
		descriptionShort = "A deadly tactical knife with multiple uses.";
		model = "inf\gear\models\CombatKnife_Custom1.p3d";
	};
	class CombatKnife_Custom2: CombatKnife
	{
		scope = 2;
		displayName = "Tactical Knife";
		descriptionShort = "A deadly tactical knife with multiple uses.";
		model = "inf\gear\models\CombatKnife_Custom2.p3d";
	};
	class Bloodspiller: WoodAxe
	{
		scope = 2;
		displayName = "Blood Spiller";
		descriptionShort = "The Bloodspiller is crafted in a way that one strike will cause the opponents guts and blood to spill out.";
		model = "inf\gear\models\bloodspiller.p3d";
		repairableWithKits[] = {5,4};
		repairCosts[] = {30,25};
		rotationFlags = 12;
		autoQuickbar = 1;
		weight = 1550;
		itemSize[] = {2,7};
		itemBehaviour = 2;
		fragility = 0.01;
		inventorySlot = "Melee";
		lootCategory = "Tools";
		lootTag[] = {"Historical"};
		openItemSpillRange[] = {20,40};
		itemInfo[] = {"Axe"};
		isMeleeWeapon = 1;
		suicideAnim = "woodaxe";
	};
	class BeanBasher: Hatchet
	{
		scope = 2;
		displayName = "Bean Basher";
		descriptionShort = "The Bean Basher is made out of rough materials, but it gets the job done. Smashing heads has never been easier.";
		model = "inf\gear\models\beanbasher.p3d";
		repairableWithKits[] = {5,4};
		repairCosts[] = {30,25};
		rotationFlags = 12;
		autoQuickbar = 1;
		weight = 1550;
		itemSize[] = {2,7};
		itemBehaviour = 2;
		fragility = 0.01;
		inventorySlot = "Melee";
		lootCategory = "Tools";
		lootTag[] = {"Historical"};
		openItemSpillRange[] = {20,40};
		itemInfo[] = {"Axe"};
		isMeleeWeapon = 1;
		suicideAnim = "woodaxe";
	};
	class PipeAxe: Hatchet
	{
		scope = 2;
		displayName = "Pipe Axe";
		descriptionShort = "The pipe axe is made using whatever can be found in the area. A tool of desperation capable of death.";
		model = "inf\gear\models\pipeaxe.p3d";
		repairableWithKits[] = {5,4};
		repairCosts[] = {30,25};
		rotationFlags = 12;
		autoQuickbar = 1;
		weight = 1550;
		itemSize[] = {2,7};
		itemBehaviour = 2;
		fragility = 0.01;
		inventorySlot = "Melee";
		lootCategory = "Tools";
		lootTag[] = {"Historical"};
		openItemSpillRange[] = {20,40};
		itemInfo[] = {"Axe"};
		isMeleeWeapon = 1;
		suicideAnim = "woodaxe";
	};
	class OathBreaker: Hatchet
	{
		scope = 2;
		displayName = "Oath Breaker";
		descriptionShort = "This crafted Katana is used to kill those who would hold you back in your path to success. No matter the cost...";
		model = "inf\gear\models\scavengedkatana.p3d";
		repairableWithKits[] = {5,4};
		repairCosts[] = {30,25};
		rotationFlags = 12;
		autoQuickbar = 1;
		weight = 1550;
		itemSize[] = {2,7};
		itemBehaviour = 2;
		fragility = 0.01;
		inventorySlot = "Melee";
		lootCategory = "Tools";
		lootTag[] = {"Historical"};
		openItemSpillRange[] = {20,40};
		itemInfo[] = {"Axe"};
		isMeleeWeapon = 1;
		suicideAnim = "woodaxe";
	};
};
