// Class for the wooden crate item.
class Laptop extends ItemBase {

    ref protected EffectSound                       m_DeployLoopSound;
    bool m_IsOpend                                  = false;

    void Laptop()
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

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTogglePlaceObject); // 527
        AddAction(ActionDeployObject); // 231
        AddAction(ActionOpenLaptop); // Custom Action.
    }

    override bool IsHeavyBehaviour() {
        return false;
    }

    override bool IsOneHandedBehaviour()
    { 
        return true;
    }

    override bool IsDeployable() {
        return true;
    }

    override string GetDeploySoundset()
    {
        return "putDown_FenceKit_SoundSet";
    }
    
    override string GetLoopDeploySoundset()
    {
        return "BarbedWire_Deploy_loop_SoundSet";
    }
    
    void PlayDeployLoopSound()
    {       
        if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
        {       
            m_DeployLoopSound = SEffectManager.PlaySound( GetLoopDeploySoundset(), GetPosition() );
        }
    }
    
    void StopDeployLoopSound()
    {
        if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
        {   
            m_DeployLoopSound.SoundStop();
            delete m_DeployLoopSound;
        }
    }

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}      
        if ( GetNumberOfItems() == 0 )
        {
            return true;
        }
        return true;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {

        return true;

    }

    // Prevents all rifle base items from been stored in this container.
    override bool CanReceiveItemIntoCargo(EntityAI cargo)
    {
        if(cargo.IsKindOf("UsbHub"))
        {
            return true;
        }
        return false;
    }
}