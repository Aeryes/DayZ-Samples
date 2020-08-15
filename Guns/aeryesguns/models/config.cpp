class CfgPatches
{
	class aeryesguns
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Characters","DZ_Weapons_Supports","DZ_Weapons_Muzzles","DZ_Weapons_Magazines","DZ_Weapons_Optics","DZ_Weapons_Lights","DZ_Weapons_Firearms_M4"};
	};
};

class OpticsInfoPistol;

class cfgWeapons
{

	class CZ75;
	class Mp133Shotgun_Base;
	class M4A1;
	class Hatchet;

    class HandCannon: CZ75
	{
		scope = 2;
		displayName = "Hand Cannon V1";
		descriptionShort = "This homemade gun is rough and ready. It packs a punch and can kill with relative ease.";
		model = "inf\aeryesguns\models\salvagedpistol.p3d";
		attachments[] = {"pistolMuzzle"};
		chamberableFrom[] = {"Ammo_357"};
		magazines[] = {};
		chamberSize = 5;
		chamberedRound="";
		itemSize[] = {4,2};
		reloadTime=0.09;
		ejectType = 0;
		DisplayMagazine = 0;
	};
};