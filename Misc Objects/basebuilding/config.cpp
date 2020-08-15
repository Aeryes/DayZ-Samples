#define _ARMA_

class CfgPatches
{
	class _BaseBuilding
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {			
			"DZ_Data",
			"DZ_Structures_Military",
			"DZ_Scripts"};
	};
};

////////////////
// Attachment //
//   Slots    //
////////////////

class CfgSlots
{
	// Weapon Rack Slots Start //
	class Slot_GunOne
	{
		name="Shoulder1";
		displayName="First Gun";
		ghostIcon="Shoulder";
		selection="Shoulder1";
	};
	class Slot_GunTwo
	{
		name="Shoulder3";
		displayName="Second Gun";
		ghostIcon="Shoulder";
		selection="Shoulder3";
	};
	class Slot_GunThree
	{
		name="Shoulder3";
		displayName="Third Gun";
		ghostIcon="Shoulder";
		selection="Shoulder3";
	};
	class Slot_GunFour
	{
		name="Shoulder4";
		displayName="Fourth Gun";
		ghostIcon="Shoulder";
		selection="Shoulder4";
	};
	class Slot_GunFive
	{
		name="Shoulder5";
		displayName="Fifth Gun";
		ghostIcon="Shoulder";
		selection="Shoulder5";
	};
	class Slot_GunSix
	{
		name="Shoulder6";
		displayName="Six Gun";
		ghostIcon="Shoulder";
		selection="Shoulder6";
	};
	class Slot_GunSeven
	{
		name="Shoulder7";
		displayName="Seven Gun";
		ghostIcon="Shoulder";
		selection="Shoulder7";
	};
	class Slot_GunEight
	{
		name="Shoulder8";
		displayName="Eight Gun";
		ghostIcon="Shoulder";
		selection="Shoulder8";
	};
	class Slot_GunNine
	{
		name="Shoulder9";
		displayName="Nine Gun";
		ghostIcon="Shoulder";
		selection="Shoulder9";
	};
	class Slot_GunTen
	{
		name="Shoulder10";
		displayName="Ten Gun";
		ghostIcon="Shoulder";
		selection="Shoulder10";
	};
	class Slot_GunEleven
	{
		name="Shoulder11";
		displayName="Eleven Gun";
		ghostIcon="Shoulder";
		selection="Shoulder11";
	};
	class Slot_GunTwelve
	{
		name="Shoulder12";
		displayName="Twelve Gun";
		ghostIcon="Shoulder";
		selection="Shoulder12";
	};

	// Weapon Rack Slots End //

	// Pallisade Gate Slots Start //
	class Slot_Material_Nails_20
	{
		name = "Material_Nails_20";
		displayName = "Nails";
		selection = "material_nails_20";
		ghostIcon = "nails";
		stackMax = 20;
	};
	class Slot_Material_SandBag
	{
		name = "SandBags";
		displayName = "SandBags";
		selection = "sandbags";
		ghostIcon = "sandbag";
		stackMax = 10;
	};
	// Pallisade Gate Slots End //
};

class cfgWeapons
{
	class RifleCore;

    // Updated to 1.04, has its own class in Entities/ItemBase now.
	class Rifle_Base: RifleCore
	{
		scope=0;
		inventoryCondition="true";
		storageCategory=1;
		lootCategory="Rifles";
		targetCategory="loot";
		weaponInfoType="RscWeaponZeroing";
		rotationFlags=17;
		soundAttType="Rifle";
		cursor="aimGunGhost";
		cursorAim="aimPistol";
		//SingleUseActions[]={558,559,579,580}; <---- Unsure if this needs to be fixed or how to fix it --Aeryes
		itemSize[]={6,3};
		spawnDamageRange[]={0,0.60000002};
		damagePerShot=0.050000001;
		barrelArmor=400;
		unjamTime[]={6,10};
		autoReload=0;
		discreteDistance[]={50,100,200,300};
		discreteDistanceInitIndex=1;
		opticsZoomMin=0.414215;
		opticsZoomInit=0.57736999;
		opticsZoomMax=0.70021999;
		magazineSlot="magazine";
		inventorySlot[]=
		{
		"Shoulder1",
		"Shoulder2",
        "Shoulder3",
        "Shoulder4",
        "Shoulder5",
		"Shoulder6",
		"Shoulder7",
		"Shoulder8",
		"Shoulder9",
		"Shoulder10",
		"Shoulder11",
		"Shoulder12",
		"Shoulder"
		};
		chamberedRound="";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
		class Reliability
		{
			ChanceToJam[]={0,0.001,0.0049999999,0.050000001,1};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Barrel_ColorBase;
	class WorldContainer_Base;
	class WoodenPlank;
	class HouseNoDestruct;
	class Container_Base;
	class Static;
    
    ////////////////
    // Base Parts //
    ////////////////

    // Updated to 1.04
	class Barricade: WoodenPlank
	{
		scope=2;
		displayName="Wooden Barricade";
		descriptionShort="A barricade than can be used to block off entrances.";
		model="inf\basebuilding\models\barricade.p3d";
		weight=1500;
		itemSize[]={2,7};
		canBeSplit=1;
		forceFarBubble="true";
		varQuantityInit=1;
		varQuantityMin=1;
		varQuantityMax=1;
		varQuantityDestroyOnMin=1;
		hologramMaterial="board";
		hologramMaterialPath="inf\basebuilding\textures";
		rotationFlags=2;
		carveNavmesh=1;
		inventorySlot[]={};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health=0;
					Blood=0;
					Shock=0;
				};
				class Melee
				{
					Health=0;
					Blood=0;
					Shock=0;
				};
				class Infected
				{
					Health=0;
					Blood=0;
					Shock=0;
				};
			};
		};
		useEntityHierarchy="true";
		physLayer="item_large";
		hiddenSelections[]=
		{
			"inventory"
		};
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\board_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"inf\basebuilding\textures\board.rvmat"
		};
		class AnimationSources
		{
			class Nails
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};

	class WeaponRack_Base: Inventory_Base
	{
		displayName="Medium Weapon Rack";
		descriptionShort="A weapon rack to store weapons, the rack is crafted from locally sourced wood supplies.";
		model="inf\basebuilding\models\weaponrack.p3d";
		overrideDrawArea="8.0";
		attachments[]=
		{
		"Shoulder1",
		"Shoulder2",
		"Shoulder3",
		"Shoulder4",
		"Shoulder5"
		};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=-1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,16};
		itemBehaviour=0;
		randomQuantity=2;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=1;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class Cargo
		{
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifleslots
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5"
				};
				icon="missing";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="Wooden_Pickup_Soundset";
					id=796;
				};
				class pickUpItem
				{
					soundSet="Wooden_Pickup_Soundset";
					id=797;
				};
			};
		};
	};
	class WeaponRackNormal: WeaponRack_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\weaponrack_co.paa"
		};
		hologramMaterial="Barrel";
		hologramMaterialPath="";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};

    // Turn ladders into a recipe item???
    // Updated to 1.04
	class NormalLadder: HouseNoDestruct
	{
		scope = 2;
		model = "inf\basebuilding\models\normalladder.p3d";
		ContinuousActions[]={};
		hiddenSelections[] = {"inventory"};
		hiddenSelectionsTextures[] = {"inf\basebuilding\textures\ladder_co.paa"};
	};

	class NormalLadder_Packed : Inventory_Base
	{
		scope = 2;
		displayName = "Wooden Ladder";
		descriptionShort = "A makeshift ladder that will allow the user to climb to otherwise unreachable areas.";
		model = "inf\basebuilding\models\normalladderpacked.p3d";
		isMeleeWeapon = 0;
		weight = 16000;
		absorbency = 0;
		rotationFlags = 16;
		itemSize[] = {6,12};
		lootTag[] = {"Civilian","Office"};
		lootCategory = "Materials";
		hologramMaterial = "ladder";
		hologramMaterialPath = "inf\basebuilding\textures";
		reversed = 0;
		itemBehaviour = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class AnimationSources
		{
			class Inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	
    ///////////
	// Tents //
	///////////

	// All tents have been updated to 1.04

	class PackedTentBase: Inventory_Base
	{
		scope=2;
		displayName="Civilian Tent Packed";
		descriptionShort="A Civilian Tent large enough to hold items in storage and provide basic shelter.";
		model="inf\basebuilding\models\tentpacked.p3d";
		hiddenSelections[]={"all"};
		hiddenSelectionsTextures[]={};
		isMeleeWeapon=0;
		weight=1600;
		absorbency=0;
		rotationFlags=16;
		itemSize[]={4,2};
		lootCategory="Materials";
		reversed=0;
		itemBehaviour=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
	};

	class CivilianTentCamoPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Camo Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_co.paa"

		};
	};
	class CivilianTentBlackPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Black Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_black_co.paa"

		};
	};
	class CivilianTentWoodlandCamoPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Woodland Camo Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_woodland_co.paa"

		};
	};

	class CivilianTentDesertCamoPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Desert Camo Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_desert_camo_co.paa"

		};
	};

	class CivilianTentGreyCamoPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Grey Camo Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_grey_camo_co.paa"

		};
	};

	class CivilianTentGreyPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Grey Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_grey_co.paa"

		};
	};

	class CivilianTentMil001Packed: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Military Camo Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_mil001_co.paa"

		};
	};

	class CivilianTentRedCamoPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Red Camo Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_red_camo_co.paa"

		};
	};

	class CivilianTentRedPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Red Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_red_co.paa"

		};
	};

	class CivilianTentWinterCamoPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Winter Camo Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_winter_camo_co.paa"

		};
	};

	class CivilianTentYellowPacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Yellow Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_yellow_co.paa"

		};
	};
	class CivilianTentBluePacked: PackedTentBase
	{
		scope=2;
		displayName="Civilian Tent Blue Packed";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\tentpacked_blue_co.paa"

		};
	};

    class CustomTent : Container_Base {};
	class CivilianTentBase: CustomTent
	{
		scope=2;
		displayName="Civilian Tent";
		descriptionShort="A tent that will provide basic shelter.";
		model="inf\basebuilding\models\civiliantent.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		hiddenSelections[]={"all"};
		hiddenSelectionsTextures[]={};
		openable=0;
		carveNavmesh=1;
		itemSize[]={10,6};
		itemBehaviour=2;
		lootCategory="Tents";
		placement="ForceSlopeOnTerrain";
		physLayer="item_large";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		attachments[]={};
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
        {
            class door
            {
                source="user";
                initPhase=1;
                animPeriod=0.0099999998;
            };
        };
	};

	class CivilianTentCamoDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Camo";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_camo_co.paa"

		};
	};

	class CivilianTentDesertDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Desert Camo";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_desert_camo_co.paa"

		};
	};

	class CivilianTentGreyCamoDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Grey Camo";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_grey_camo_co.paa"

		};
	};

	class CivilianTentRedCamoDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Red Camo";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_red_camo_co.paa"

		};
	};

	class CivilianTentMil001Deployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Military Camo";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_mil001_camo_co.paa"

		};
	};

	class CivilianTentWinterCamoDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Winter Camo";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_winter_camo_co.paa"

		};
	};

	class CivilianTentYellowDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Yellow";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_yellow_co.paa"

		};
	};

	class CivilianTentWoodlandCamoDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Woodland Camo";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_woodland_camo_co.paa"

		};
	};

	class CivilianTentBlackDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Black";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_black_co.paa"

		};
	};

	class CivilianTentBlueDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Black";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_blue_co.paa"

		};
	};

	class CivilianTentGreyDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Black";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_grey_co.paa"

		};
	};

	class CivilianTentRedDeployed: CivilianTentBase
	{
		scope=2;
		displayName="Civilian Tent Black";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\civiliantent_red_co.paa"

		};
	};

    ////////////////
    // Containers //
    ////////////////

    // Sleeping bags updated to 1.04
	class SleepingBagPackedBase: Inventory_Base
	{
		scope=2;
		displayName="Packed Sleeping Bag";
		descriptionShort="A sleeping bag used to meet basic shelter needs, the sleeping bag has an affective temperature range from 3 degrees celcius to 16 degrees celcius.";
		model="inf\basebuilding\models\sleepingbagfolded.p3d";
		hiddenSelections[]={"all"};
		hiddenSelectionsTextures[]={};
		isMeleeWeapon=0;
		weight=1600;
		absorbency=0;
		rotationFlags=16;
		itemSize[]={4,2};
		lootCategory="Materials";
		reversed=0;
		itemBehaviour=2;
	};

	class SleepingBagBlackPacked: SleepingBagPackedBase
	{
		scope=2;
		displayName="Sleeping Bag Black";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbagfolded_black_co.paa"

		};
	};

	class SleepingBagBluePacked: SleepingBagPackedBase
	{
		scope=2;
		displayName="Sleeping Bag Blue";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbagfolded_blue_co.paa"

		};
	};

	class SleepingBagGreyPacked: SleepingBagPackedBase
	{
		scope=2;
		displayName="Sleeping Bag Grey";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbagfolded_grey_co.paa"

		};
	};

	class SleepingBagRedPacked: SleepingBagPackedBase
	{
		scope=2;
		displayName="Sleeping Bag Red";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbagfolded_red_co.paa"

		};
	};

	class SleepingBagGreenPacked: SleepingBagPackedBase
	{
		scope=2;
		displayName="Sleeping Bag Green";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbagfolded_green_co.paa"

		};
	};
	
	class SleepingBagDeployedBase: Container_Base
	{
		scope = 2;
		displayName="Green Sleeping Bag";
		descriptionShort="A sleeping bag used to meet basic shelter needs, the sleeping bag has an affective temperature range from 3 degrees celcius to 16 degrees celcius..";
		model="inf\basebuilding\models\sleepingbag.p3d";
		overrideDrawArea="8.0";
		forceFarBubble="true";
		attachments[]={};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,10};
		itemBehaviour=2;
		stackedUnit="ml";
		randomQuantity=2;
		liquidContainerType="";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=200000;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]={"all"};
		class Cargo
		{
			itemsCargoSize[]={8,8};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

	class SleepingBagBlackDeployed: SleepingBagDeployedBase
	{
		scope=2;
		displayName="Sleeping Bag Black";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbag_black_co.paa"

		};
	};

	class SleepingBagBlueDeployed: SleepingBagDeployedBase
	{
		scope=2;
		displayName="Sleeping Bag Blue";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbag_blue_co.paa"

		};
	};

	class SleepingBagGreyDeployed: SleepingBagDeployedBase
	{
		scope=2;
		displayName="Sleeping Bag Grey";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbag_grey_co.paa"

		};
	};

	class SleepingBagRedDeployed: SleepingBagDeployedBase
	{
		scope=2;
		displayName="Sleeping Bag Red";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbag_red_co.paa"

		};
	};

	class SleepingBagGreenDeployed: SleepingBagDeployedBase
	{
		scope=2;
		displayName="Sleeping Bag Green";
		hiddenSelectionsTextures[]={

            "inf\basebuilding\textures\sleepingbag_green_co.paa"

		};
	};

	//////////////
    //Containers//
    //////////////

    // Updated crate to 1.04
	class Crate_Base: WorldContainer_Base
	{
		displayName="Wooden Crate";
		descriptionShort="A small crate to store items in. The wood is sourced from the local area.";
		model="inf\basebuilding\models\woodencrate.p3d";
		overrideDrawArea="8.0";
		forceFarBubble="true";
		attachments[]={};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,10};
		itemBehaviour=0;
		stackedUnit="ml";
		randomQuantity=2;
		liquidContainerType="";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=200000;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};
	class WoodenCrateModded: Crate_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\woodencrate_co.paa"
		};
		hologramMaterial="Barrel";
		hologramMaterialPath="DZ\gear\containers\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class MilitaryCrateBase: WorldContainer_Base
	{
		displayName="Military Crate";
		descriptionShort="This crate is designed to withstand harsh conditions. Used by various military groups and paramilitary groups alike.";
		model="inf\basebuilding\models\militarycratestorage.p3d";
		overrideDrawArea="8.0";
		forceFarBubble="true";
		attachments[]={};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={7,4};
		itemBehaviour=0;
		stackedUnit="ml";
		randomQuantity=2;
		liquidContainerType="";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=200000;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]={"all"};
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

	class MilitaryCrateBlue: MilitaryCrateBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\militarycrate02_blue_co.paa"
		};
	};

	class MilitaryCrateBrown: MilitaryCrateBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\militarycrate02_brown_co.paa"
		};
	};

	class MilitaryCrateGrey: MilitaryCrateBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\militarycrate02_grey_co.paa"
		};
	};

	class MilitaryCrateGreen: MilitaryCrateBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\militarycrate02_green_co.paa"
		};
	};

    // Updated to 1.04
	class Locked_Safe: Container_Base
	{
		scope = 2;
		displayName = "Small Safe";
		descriptionShort = "A small safe to securly store your gear. The safe is made from very strong alloys that can prevent even the most skilled theif from breaking into it.";
		model = "inf\basebuilding\models\locked_safe.p3d";
		overrideDrawArea = "8.0";
		forceFarBubble = "true";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		quantityBar = 1;
		carveNavmesh = 1;
		canBeDigged = 0;
		heavyItem = 1;
		weight = 10000;
		itemSize[] = {4,8};
		itemBehaviour = 0;
		stackedUnit = "ml";
		randomQuantity = 2;
		liquidContainerType = "";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 200000;
		absorbency = 0.1;
		physLayer = "item_large";
		allowOwnedCargoManipulation = 1;
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class AnimationSources
		{
			class user
			{
				source = "door1";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};

	////////////////////
	// Base Buildings //
    ////////////////////

    // Kits Start //
    class Kit_Base: Inventory_Base
	{
		scope = 0;
		isMeleeWeapon = 0;
		weight = 10000;
		absorbency = 0;
		rotationFlags = 16;
		itemSize[] = {10,8};
		lootCategory = "Materials";
		reversed = 0;
		itemBehaviour = 2;
	};

	class Base_Damage: Inventory_Base
	{
		scope = 2;
		bounding = "BSphere";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		itemSize[] = {20,20};
		physLayer = "item_large";
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
					healthLevels[] = {{1,{"DZ\gear\camping\data\spotlight.rvmat"}},{0.7,{"DZ\gear\camping\data\spotlight.rvmat"}},{0.5,{"DZ\gear\camping\data\spotlight_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\spotlight_damage.rvmat"}},{0,{"DZ\gear\camping\data\spotlight_destruct.rvmat"}}};
				};
			};
		};
	};
	// Kits End //
 
    // Bonfire Start //
	class BonfireKit: Kit_Base
	{
		scope = 2;
		displayName = "Bonfire Kit";
		descriptionShort = "";
		model = "\DZ\gear\camping\watchtower_kit_folded.p3d";
		isMeleeWeapon = 0;
		weight = 10000;
		absorbency = 0;
		rotationFlags = 16;
		itemSize[] = {4,4};
		lootCategory = "Materials";
		reversed = 0;
		itemBehaviour = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
	};

	class BonfireBase: Base_Damage
	{
		scope = 2;
		displayName = "Bonfire Base";
		descriptionShort = "";
		model = "\DZ\gear\camping\watchtower_kit_deployed.p3d";
		bounding = "BSphere";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		attachments[] = {"Material_WoodenLogs"};
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 10000;
		itemSize[] = {20,20};
		physLayer = "item_large";
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Materials
			{
				name = "Base";
				description = "";
				attachmentSlots[] = {"Material_WoodenLogs"};
				icon = "missing";
			};
		};
	};

	class Bonfire_Base: Base_Damage
	{
		displayName="Bonfire";
		descriptionShort=" A big fire. Can be used to keep warm or as a signal";
		model="inf\basebuilding\models\bonfire.p3d";
		overrideDrawArea="8.0";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=-1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=20000;
		itemSize[]={10,16};
		itemBehaviour=0;
		randomQuantity=2;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class Cargo
		{
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="Wooden_Pickup_Soundset";
					id=796;
				};
				class pickUpItem
				{
					soundSet="Wooden_Pickup_Soundset";
					id=797;
				};
			};
		};
	};
	class BonfireFull: Bonfire_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\bonfire_co.paa"
		};
		hologramMaterial="Barrel";
		hologramMaterialPath="";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
	};
    // Bonfire End //

    // Wooden Cross Start //
    // Updated to 1.03
	class WoodenCrossKit: Kit_Base
	{
		scope = 2;
		displayName = "Wooden Cross Kit";
		descriptionShort = "A kit to build a wooden cross. The word cross is recorded in 10th-century Old English as cros, exclusively for the instrument of Christ's crucifixion, replacing the native Old English word rood. The word's history is complicated; it appears to have entered English from Old Irish, possibly via Old Norse, ultimately from the Latin crux (or its accusative crucem and its genitive crucis).";
		model = "\DZ\gear\camping\watchtower_kit_folded.p3d";
		isMeleeWeapon = 0;
		weight = 10000;
		absorbency = 0;
		rotationFlags = 16;
		itemSize[] = {4,4};
		lootCategory = "Materials";
		reversed = 0;
		itemBehaviour = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
	};

	class WoodenCrossBase: Base_Damage
	{
		scope = 2;
		displayName = "Wooden Cross Base";
		descriptionShort = "The word cross is recorded in 10th-century Old English as cros, exclusively for the instrument of Christ's crucifixion, replacing the native Old English word rood. The word's history is complicated; it appears to have entered English from Old Irish, possibly via Old Norse, ultimately from the Latin crux (or its accusative crucem and its genitive crucis).";
		model = "\DZ\gear\camping\watchtower_kit_deployed.p3d";
		bounding = "BSphere";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		attachments[] = {"Material_WoodenPlanks","Material_Nails_20"};
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 10000;
		itemSize[] = {20,20};
		physLayer = "item_large";
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Materials
			{
				name = "Base";
				description = "";
				attachmentSlots[] = {"Material_Nails_20", "Material_WoodenPlanks"};
				icon = "missing";
			};
		};
	};

	class WoodenCross_Base: Base_Damage
	{
		displayName="Wooden Cross";
		descriptionShort="The word cross is recorded in 10th-century Old English as cros, exclusively for the instrument of Christ's crucifixion, replacing the native Old English word rood. The word's history is complicated; it appears to have entered English from Old Irish, possibly via Old Norse, ultimately from the Latin crux (or its accusative crucem and its genitive crucis).";
		model="inf\basebuilding\models\woodencross.p3d";
		overrideDrawArea="8.0";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=-1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=20000;
		itemSize[]={10,16};
		itemBehaviour=0;
		randomQuantity=2;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class Cargo
		{
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="Wooden_Pickup_Soundset";
					id=796;
				};
				class pickUpItem
				{
					soundSet="Wooden_Pickup_Soundset";
					id=797;
				};
			};
		};
	};
	class WoodenCrossFull: WoodenCross_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\woodencross_co.paa"
		};
		hologramMaterial="Barrel";
		hologramMaterialPath="";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
	};
	// Wooden Cross End //
	
    // Piano Start //
    // Updated to 1.03
	class PianoKit: Kit_Base
	{
		scope = 2;
		displayName = "Piano Kit";
		descriptionShort = "A kit to build a wooden piano.";
		model = "\DZ\gear\camping\watchtower_kit_folded.p3d";
		isMeleeWeapon = 0;
		weight = 10000;
		absorbency = 0;
		rotationFlags = 16;
		itemSize[] = {4,4};
		lootCategory = "Materials";
		reversed = 0;
		itemBehaviour = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
	};

	class PianoBase: Base_Damage
	{
		scope = 2;
		displayName = "Piano Base";
		descriptionShort = "A piano which will allow you to play great music.";
		model = "\DZ\gear\camping\watchtower_kit_deployed.p3d";
		bounding = "BSphere";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		attachments[] = {"Material_WoodenPlanks","Material_Nails_20"};
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 10000;
		itemSize[] = {20,20};
		physLayer = "item_large";
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Materials
			{
				name = "Base";
				description = "";
				attachmentSlots[] = {"Material_WoodenPlanks","Material_Nails_20"};
				icon = "missing";
			};
		};
	};

	class Piano_Base: Base_Damage
	{
		displayName="Piano Cross";
		descriptionShort="A Piano.";
		model="inf\basebuilding\models\piano.p3d";
		overrideDrawArea="8.0";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=-1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=20000;
		itemSize[]={10,16};
		itemBehaviour=0;
		randomQuantity=2;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class Cargo
		{
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="Wooden_Pickup_Soundset";
					id=796;
				};
				class pickUpItem
				{
					soundSet="Wooden_Pickup_Soundset";
					id=797;
				};
			};
		};
	};
	class PianoFull: Piano_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\piano_co.paa"
		};
		hologramMaterial="Barrel";
		hologramMaterialPath="";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
	};
	// Piano End //
    //Sandbags Start//
	class CurvedSandBagKit: Kit_Base
	{
		scope = 2;
		displayName = "Curved Sand Bag Kit";
		descriptionShort = "A kit to build a curved sandbag.";
		model = "\DZ\gear\camping\watchtower_kit_folded.p3d";
		isMeleeWeapon = 0;
		weight = 10000;
		absorbency = 0;
		rotationFlags = 16;
		itemSize[] = {4,4};
		lootCategory = "Materials";
		reversed = 0;
		itemBehaviour = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
	};

	class CurvedSandBagBase: Base_Damage
	{
		scope = 2;
		displayName = "Curved Sand Bag Base";
		descriptionShort = "A sand bag which will provide cover from projectiles.";
		model = "\DZ\gear\camping\watchtower_kit_deployed.p3d";
		bounding = "BSphere";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		attachments[] = {"Sandbags", "Material_WoodenPlanks"};
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 10000;
		itemSize[] = {20,20};
		physLayer = "item_large";
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Materials
			{
				name = "Base";
				description = "";
				attachmentSlots[] = {"Sandbags", "Material_WoodenPlanks"};
				icon = "missing";
			};
		};
	};

	class CurvedSandBag_Base: Base_Damage
	{
		displayName="Sand Bag Wall";
		descriptionShort="A sand bag wall that is curved. Provides basic protection.";
		model="inf\basebuilding\models\sandbagcurved.p3d";
		overrideDrawArea="8.0";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=-1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=20000;
		itemSize[]={10,16};
		itemBehaviour=0;
		randomQuantity=2;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
		class Cargo
		{
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="Wooden_Pickup_Soundset";
					id=796;
				};
				class pickUpItem
				{
					soundSet="Wooden_Pickup_Soundset";
					id=797;
				};
			};
		};
	};
	class CurvedSandBagFull: CurvedSandBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"inf\basebuilding\textures\sandbagcurved_co.paa"
		};
		hologramMaterial="Barrel";
		hologramMaterialPath="";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0,{""}}};
				};
			};
		};
	}; 
	//End of SandBags//

    //////////////////////////////
    // Base Building Components //
    //////////////////////////////

	class SteelNail: Inventory_Base
	{
		scope = 2;
		displayName = "Steel Nails";
		descriptionShort = "Steel Nails that are used for more advanced construction projects. Nearly all large scale building projects require these steel nails.";
		model = "\dz\gear\consumables\Nails_loose_10.p3d";
		itemSize[] = {1,1};
		weight = 36.28;
		canBeSplit = 1;
		varQuantityInit = 70;
		varQuantityMin = 0;
		varQuantityMax = 99;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Crafted";
		inventorySlot[] = {"Material_Nails","Material_L1_Nails","Material_L1W1_Nails","Material_L1W2_Nails","Material_L1W3_Nails","Material_L2_Nails","Material_L2W1_Nails","Material_L2W2_Nails","Material_L2W3_Nails","Material_L3_Nails","Material_L3W1_Nails","Material_L3W2_Nails","Material_L3W3_Nails","Material_Nails_20"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\consumables\data\Pile of Nails.rvmat"}},{0.7,{"DZ\gear\consumables\data\Pile of Nails.rvmat"}},{0.5,{"DZ\gear\consumables\data\Pile of Nails_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\Pile of Nails_damage.rvmat"}},{0,{"DZ\gear\consumables\data\Pile of Nails_destruct.rvmat"}}};
				};
			};
		};
	};
	class ConcreteMix: Inventory_Base
	{
		scope = 2;
		displayName = "Concrete Mix";
		descriptionShort = "Concrete mix is used to construct more advanced recipes.";
		model="inf\basebuilding\models\concretemix.p3d";
		itemSize[] = {3,2};
		weight = 300;
		canBeSplit = 1;
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 500;
		varQuantityDestroyOnMin = 1;
		inventorySlot[] = {};
		lootCategory = "Crafted";
	};

	class SandBag: Inventory_Base
	{
		scope = 2;
		displayName = "Sand Bag";
		descriptionShort = "A bag full of sand.";
		model="inf\basebuilding\models\sandbag.p3d";
		itemSize[] = {3,2};
		weight = 20;
		canBeSplit = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		varQuantityDestroyOnMin = 1;
		inventorySlot[] = {"SandBags"};
		lootCategory = "Crafted";
	};

    ///////////////////////////
    // Dynamic Event Objects //
    ///////////////////////////

	class AirDropContainerBase: Container_Base
	{	
		scope=0;
		displayName="Airdrop";
		overrideDrawArea="8.0";
		forceFarBubble="true";
		attachments[]={};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={20,20};
		itemBehaviour=0;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;

		class Cargo
		{
			itemsCargoSize[] = {10,60};
		};
	};
	class AirdropCivilian: AirdropContainerBase
	{
		scope=2;
		displayName="Airdrop";
		model="inf\basebuilding\models\civiliancrate.p3d";
	};
	class AirdropMedical: AirdropContainerBase
	{
		scope=2;
		displayName="Airdrop";
		model="inf\basebuilding\models\medicalcrate.p3d";
	};
	class AirdropMilitary: AirdropContainerBase
	{
		scope=2;
		displayName="Airdrop";
		model="inf\basebuilding\models\militarycrate.p3d";
	};

};

/////////////
// Proxies //
/////////////

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyspawnWeapon1: ProxyAttachment
    {
        scope = 2; 
        inventorySlot = "Shoulder1"; // whatever inventory slot you have in your item
        model = "inf\basebuilding\proxies\spawnWeapon1.p3d"; // yourmodel
    };
    class ProxyspawnWeapon2: ProxyAttachment
    {
        scope = 2; 
        inventorySlot = "Shoulder2"; // whatever inventory slot you have in your item
        model = "inf\basebuilding\proxies\spawnWeapon2.p3d"; // yourmodel
    };
    class ProxyspawnWeapon3: ProxyAttachment
    {
        scope = 2; 
        inventorySlot = "Shoulder3"; // whatever inventory slot you have in your item
        model = "inf\basebuilding\proxies\spawnWeapon3.p3d"; // yourmodel
    };
    class ProxyspawnWeapon4: ProxyAttachment
    {
        scope = 2; 
        inventorySlot = "Shoulder4"; // whatever inventory slot you have in your item
        model = "inf\basebuilding\proxies\spawnWeapon4.p3d"; // yourmodel
    };
    class ProxyspawnWeapon5: ProxyAttachment
    {
        scope = 2; 
        inventorySlot = "Shoulder5"; // whatever inventory slot you have in your item
        model = "inf\basebuilding\proxies\spawnWeapon5.p3d"; // yourmodel
    };

};
