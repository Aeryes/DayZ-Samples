// File dealing with Base construction actions for tools.
// Actions pertaining to tools go in here in their respected classes.
modded class Hammer
{
	override void SetActions() 
	{
		super.SetActions();
		// Upgrading Actions.
		AddAction(ActionUpgradeWoodenCrossBase);
		AddAction(ActionUpgradePianoBase);
		AddAction(ActionUpgradeCurvedSandBagBase);
		AddAction(ActionLockBarricade);
		AddAction(ActionUpgradeBonfireBase);

	}
}

modded class Hatchet
{
	override void SetActions() 
	{
		super.SetActions();
		// Dismantling Actions.
		AddAction(ActionDismantleWoodenCrossFull);
		AddAction(ActionDismantleWoodenCrossBase);
		AddAction(ActionDismantlePianoFull);
		AddAction(ActionDismantlePianoBase);
        AddAction(ActionDismantleCurvedSandBagFull);
        AddAction(ActionDismantleCurvedSandBagBase);   

		// Destroy Actions.
		AddAction(ActionDestroyWoodenCrossFull);
		AddAction(ActionDestroyPianoFull);

	}	
}

modded class SledgeHammer
{
	override void SetActions() 
	{
		super.SetActions();
	    // Dismantling Actions.
		AddAction(ActionDismantleWoodenCrossFull);
		AddAction(ActionDismantleWoodenCrossBase);
		AddAction(ActionDismantlePianoFull);
		AddAction(ActionDismantlePianoBase);
        AddAction(ActionDismantleCurvedSandBagFull);
        AddAction(ActionDismantleCurvedSandBagBase);   

        // Destroy Actions.
		AddAction(ActionDestroyWoodenCrossFull);
		AddAction(ActionDestroyPianoFull);
		AddAction(ActionDestroyCurvedSandBagFull);

	}	
}

modded class WoodAxe
{
	override void SetActions() 
	{
		super.SetActions();
	    // Dismantling Actions.
		AddAction(ActionDismantleWoodenCrossFull);
		AddAction(ActionDismantleWoodenCrossBase);
		AddAction(ActionDismantlePianoFull);
		AddAction(ActionDismantlePianoBase);
        AddAction(ActionDismantleCurvedSandBagFull);
        AddAction(ActionDismantleCurvedSandBagBase);   

        // Destroy Actions.
		AddAction(ActionDestroyWoodenCrossFull);
		AddAction(ActionDestroyPianoFull);
		AddAction(ActionDestroyCurvedSandBagFull);

	}	
}

modded class FirefighterAxe
{
	override void SetActions() 
	{
		super.SetActions();
	    // Dismantling Actions.
		AddAction(ActionDismantleWoodenCrossFull);
		AddAction(ActionDismantleWoodenCrossBase);
		AddAction(ActionDismantlePianoFull);
		AddAction(ActionDismantlePianoBase);
        AddAction(ActionDismantleCurvedSandBagFull);
        AddAction(ActionDismantleCurvedSandBagBase);   

        // Destroy Actions.
		AddAction(ActionDestroyWoodenCrossFull);
		AddAction(ActionDestroyPianoFull);
		AddAction(ActionDestroyCurvedSandBagFull);
	
	}	
}

modded class Crowbar
{

	override void SetActions() 
	{
		
		super.SetActions();
	    AddAction(ActionRipOffBarricade);
	
	}    
}

// modded class Matchbox 
// {
	
// 	override void SetActions() {
// 		super.SetActions();

// 		AddAction(ActionIgniteBonfire);

// 	}
	
// };
