modded class ActionConstructor 
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);

        // Sleeping Bag Actions.
        actions.Insert(ActionPackBagModded);

        // Misc Actions.
        actions.Insert(ActionFoldLadder);
        actions.Insert(ActionDeployCrate);
        actions.Insert(ActionDeployWeaponRack);

        // Tent Actions.
        actions.Insert(ActionPackTentModded);

        // Wooden Cross Actions.
        actions.Insert(ActionDestroyWoodenCrossFull);
        actions.Insert(ActionUpgradeWoodenCrossBase);
        actions.Insert(ActionDismantleWoodenCrossFull);
        actions.Insert(ActionDismantleWoodenCrossBase);

        // Piano Actions.
        actions.Insert(ActionDestroyPianoFull);
        actions.Insert(ActionUpgradePianoBase);
        actions.Insert(ActionDismantlePianoFull);
        actions.Insert(ActionDismantlePianoBase);

        // Sandbag Actions.
        actions.Insert(ActionDestroyCurvedSandBagFull);
        actions.Insert(ActionUpgradeCurvedSandBagBase);
        actions.Insert(ActionDismantleCurvedSandBagFull);
        actions.Insert(ActionDismantleCurvedSandBagBase);  

        // Bonfire Actions. 
        actions.Insert(ActionIgniteBonfire);
        actions.Insert(ActionDestroyBonfireFull);
        actions.Insert(ActionUpgradeBonfireBase);
        actions.Insert(ActionDismantleBonfireFull);
        actions.Insert(ActionDismantleBonfireBase); 

        // Barricade Actions.
        actions.Insert(ActionLockBarricade);
        actions.Insert(ActionRipOffBarricade);

        // Cassette Player Actions.
        //actions.Insert(ActionTurnOnMusic);
        actions.Insert(ActionTurnOnPlayer);
        actions.Insert(ActionTurnOffPlayer);

    }
}
