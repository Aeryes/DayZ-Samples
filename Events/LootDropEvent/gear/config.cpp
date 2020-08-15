#define _ARMA_

class CfgPatches
{
	class _BaseBuilding
	{
		requiredAddons[] = {			
			"DZ_Data",
			"DZ_Structures_Military",
			"DZ_Scripts"};
	};
};

class CfgVehicles
{
	class Container_Base;
    
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
			itemsCargoSize[] = {10,500};
		};
	};
	class AirdropCivilian: AirdropContainerBase
	{
		scope=2;
		displayName="Airdrop";
		model="inf\LootDropEvent\gear\models\civiliancrate.p3d";
	};
	class AirdropMedical: AirdropContainerBase
	{
		scope=2;
		displayName="Airdrop";
		model="inf\LootDropEvent\gear\models\medicalcrate.p3d";
	};
	class AirdropMilitary: AirdropContainerBase
	{
		scope=2;
		displayName="Airdrop";
		model="inf\LootDropEvent\gear\models\militarycrate.p3d";
	};

};
