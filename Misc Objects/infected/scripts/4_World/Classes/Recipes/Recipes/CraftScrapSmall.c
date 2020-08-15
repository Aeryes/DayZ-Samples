class CraftScrapSmall extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Scrap Metal";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2.0;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1

		//Melee Weapons.
		InsertIngredient(0,"MetalWire");
		InsertIngredient(0,"CombatKnife");
		InsertIngredient(0,"Crowbar");
		InsertIngredient(0,"FieldShovel");
		InsertIngredient(0,"FirefighterAxe");
		InsertIngredient(0,"FirefighterAxe_Black");
		InsertIngredient(0,"FirefighterAxe_Green");
		InsertIngredient(0,"LugWrench");
		InsertIngredient(0,"Machete");
		InsertIngredient(0,"PickAxe");
		InsertIngredient(0,"PitchFork");
		InsertIngredient(0,"Shovel");
		InsertIngredient(0,"ScrewDriver");
		InsertIngredient(0,"SledgeHammer");
		InsertIngredient(0,"SteakKnife");
		InsertIngredient(0,"Sword");
		InsertIngredient(0,"DoubleBladedAxe");
		InsertIngredient(0,"KnifeOne");
		InsertIngredient(0,"KnifeTwo");
		InsertIngredient(0,"WoodAxe");
		InsertIngredient(0,"Wrench");
		InsertIngredient(0,"Hatchet");
		InsertIngredient(0,"Cleaver");
		InsertIngredient(0,"HuntingKnife");
		InsertIngredient(0,"NailedBaseballBat");
		InsertIngredient(0,"PipeWrench");
		InsertIngredient(0,"BrassKnuckles_ColorBase");
		InsertIngredient(0,"TelescopicBaton");

		// Guns.
		InsertIngredient(0,"Colt1911_Base");
		InsertIngredient(0,"CZ75_Base");
		InsertIngredient(0,"Glock19_Base");
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("Scrap");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 30;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
	}
};