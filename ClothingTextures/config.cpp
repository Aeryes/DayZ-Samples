#define _ARMA_
class CfgPatches
{
	class _Clothes
	{
		// In requiredAddons array, we list all of the needed DayZ base assets. In this case we need DZ_Data for clothing textures.
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{

    // We import the DayZ base class for our desired item. 
    // The classes you need can be found in P:\DZ\characters
	class Blouse_ColorBase;

    // Here we define the class name for our new textured item. This name will be what we use
    // to search for the item using some admin tool or to add to our types.xml to allow it to
    // spawn in the game as player loot. 
    // We then use ' : Blouse_ColorBase'. This is the parent class that our new item extends from.
    // In this case our new blouse will inherit all the features of Blouse_ColorBase.
	class Blouse_Grey: Blouse_ColorBase
	{
		// Scope defines whether a model should be seen in the world or not. If we removed this line our item would
		// not be visible ingame.
		scope = 2;
		// Hidden selection textures are defined in an objects named selections in Object Builder.
		// Object Builder will be discussed in later samples.
		// Here we define the path for our new textures. In the below example inf is the prefix I selected to use
		// for my mod packing using pboProject.
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\Blouse_Grey_co.paa",
			"inf\clothes\tops\Blouse_Grey_co.paa",
			"inf\clothes\tops\Blouse_Grey_co.paa"
		};
	};
}

// In order to add more textures you just need to follow the same process as above.
// Step 1: Find the base class name from P:\DZ\characters.
// Step 2: Add the base class name to the top of CfgVehicles similar to the example.
// Step 3: Create your class using the same mehtod as above.
// Step 4: Pack your mod using pboPorject or Addon Builder.