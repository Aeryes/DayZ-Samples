modded class PluginRecipesManager {   

    override void RegisterRecipies() {
        super.RegisterRecipies();

        // Base Recipes.
        RegisterRecipe(new CraftFabric);
        RegisterRecipe(new CraftScrapSmall);
        RegisterRecipe(new CraftScrapLarge);
        RegisterRecipe(new CraftWire);
        RegisterRecipe(new CraftNails);
        RegisterRecipe(new CraftSteelNails);
        RegisterRecipe(new CraftSheetMetal);
        RegisterRecipe(new CraftSandBag);
        RegisterRecipe(new CraftRope);

        // Item Recipes.
        RegisterRecipe(new CraftHumanMask);
        RegisterRecipe(new CraftBarbedBat);
        RegisterRecipe(new CraftScissors);
        RegisterRecipe(new CraftImmolator);
        RegisterRecipe(new CraftBloodSpiller);
        RegisterRecipe(new CraftOathBreaker);
        RegisterRecipe(new CraftBeanBasher);
        RegisterRecipe(new CraftPipeAxe);

        // Clothing Recipes.
        RegisterRecipe(new CraftBurlapSack);
        RegisterRecipe(new CraftJeanShortsBlack);
        RegisterRecipe(new CraftJeanShortsBlue);
        RegisterRecipe(new CraftJeanShortsBrown);
        RegisterRecipe(new CraftJeanShortsDarkblue);
        RegisterRecipe(new CraftJeanShortsGreen);
        RegisterRecipe(new CraftChestHolster);
        RegisterRecipe(new CraftHipHolster);
        RegisterRecipe(new CraftHipHolsterOlive);
        RegisterRecipe(new CraftHipHolsterBlack);
        RegisterRecipe(new CraftCivilianBelt);
        RegisterRecipe(new CraftLeatherKnifeSheath);
        RegisterRecipe(new CraftShameMask);
        
        // Base Building Recipes.
        RegisterRecipe(new CraftWoodenCrateModded);
        RegisterRecipe(new CraftWeaponRack);
        RegisterRecipe(new CraftNormalLadder);
        RegisterRecipe(new CraftWoodenCrossKit);
        RegisterRecipe(new CraftPianoKit);
        RegisterRecipe(new CraftCurvedSandBagKit);
        RegisterRecipe(new CraftBonfireKit);
        RegisterRecipe(new CraftBarricade);

    }
};
