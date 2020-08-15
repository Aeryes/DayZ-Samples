modded class Rifle_Base extends Weapon_Base
{
    void Rifle_Base ()
    {
    }

    // 1.03 requirement for all actions custom or otherwise.
	override void SetActions()
    {
        super.SetActions();
        AddAction(FirearmActionAttachMagazine); // 558
        AddAction(FirearmActionLoadBullet); // 559
        AddAction(ActionTurnOnWeaponFlashlight); // 579
        AddAction(ActionTurnOffWeaponFlashlight); // 580
        AddAction(ActionDeployWeaponRack); // Custom Action.
    }

};