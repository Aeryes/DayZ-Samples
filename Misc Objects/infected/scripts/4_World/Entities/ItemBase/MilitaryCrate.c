modded class PlayerBase
{
    override void Init()
    {
        super.Init();
        DayzPlayerItemBehaviorCfg heavyItemBehaviour = new DayzPlayerItemBehaviorCfg;
        heavyItemBehaviour.SetHeavyItems();
        GetDayZPlayerType().AddItemInHandsProfileIK("MilitaryCrateBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour, "dz/anims/anm/player/ik/heavy/wooden_log.anm");
    }
}

class MilitaryCrateBase extends ItemBase {

    void MilitaryCrateBase()
    {
    }
	
	override void OnPlacementComplete( Man player )
	{
        super.OnPlacementComplete( player );

        if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
        {
            SoundParams soundParams = new SoundParams("Wooden_Place_Soundset");
            SoundObjectBuilder soundBuilder = new SoundObjectBuilder(soundParams);
            SoundObject soundObject = soundBuilder.BuildSoundObject();
            soundObject.SetPosition(GetPosition());
            GetGame().GetSoundScene().Play3D(soundObject, soundBuilder);
        }
    }

    override bool IsHeavyBehaviour() {
        return true;
    }

    override bool IsTwoHandedBehaviour() {
        return true;
    }

    override bool IsDeployable() {
        return true;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
       if( super.CanPutIntoHands( parent ) )
        {
        return (GetInventory().AttachmentCount() == 0);
        }
       return false;
    }
	
	// New method for actions in 1.03
	override void SetActions()
    {
        super.SetActions();
        AddAction(ActionDeployCrate);
        AddAction(ActionTogglePlaceObject); // 527
        AddAction(ActionDeployObject); // 231
    }
}