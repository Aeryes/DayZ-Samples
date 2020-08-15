// This class deals with placement for all custom tents.
// Class that deals with default tent.
/////////////////////////////////////////////////////////////////////////
class PackedTentBase extends ItemBase
{	
	ref protected EffectSound 						m_DeployLoopSound;
	protected Object			                    CivilianTentDeployed1;
	protected Object			                    ClutterCutter;
	private bool m_IsOpend 	                        = false;
	
	void PackedTentBase()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override void EEInit()
	{
		super.EEInit();
	}

	string GetTentClass()
	{
		return "ClassExample";
	}

    // 1.03 requirement for all actions custom or otherwise.
	override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTogglePlaceObject); // 527
        AddAction(ActionDeployObject); // 231
        AddAction(ActionPackTentModded); // Custom Action..
    }

	override void OnItemLocationChanged( EntityAI old_owner, EntityAI new_owner ) 
	{
		super.OnItemLocationChanged( old_owner, new_owner );
	}	
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( IsDeploySound() )
		{
			PlayDeploySound();
		}
				
		if ( CanPlayDeployLoopSound() )
		{
			PlayDeployLoopSound();
		}
					
		if ( m_DeployLoopSound && !CanPlayDeployLoopSound() )
		{
			StopDeployLoopSound();
		}
	}
	
	//================================================================
	// ADVANCED PLACEMENT
	//================================================================			
		
	// Clutter cutter gets rid of grass clipping into the tent.
	override void OnPlacementComplete( Man player )
	{
		super.OnPlacementComplete( player );
		
		PlayerBase pb = PlayerBase.Cast( player );
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector position = player_base.GetLocalProjectionPosition();
			vector orientation = player_base.GetLocalProjectionOrientation();
			
			CivilianTentDeployed1 = GetGame().CreateObject(GetTentClass(), pb.GetLocalProjectionPosition(), false );

			ClutterCutter = GetGame().CreateObject("LargeTentClutterCutter", pb.GetLocalProjectionPosition(), false );
			CivilianTentDeployed1.SetPosition( position );
			CivilianTentDeployed1.SetOrientation( orientation );
			ClutterCutter.SetPosition( position );
			ClutterCutter.SetOrientation( orientation );
			GetGame().RemoteObjectCreate(ClutterCutter);

			this.Delete();			
		}	
		
		SetIsDeploySound( true );
	}
	
	override bool IsDeployable()
	{
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
}

class CivilianTentBase extends ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }

	string GetTentClass()
	{
		return "ClassExample";
	}

    // 1.03 requirement for all actions custom or otherwise.
    // All of the below actions were interact actions from 1.02
	override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTogglePlaceObject); // 527
        AddAction(ActionDeployObject); // 231
        AddAction(ActionPackTentModded); // Custom Action.

    }

    override bool CanPutIntoHands(EntityAI parent)
    {

        return false;

    }
}


class CivilianTentCamoPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentCamoDeployed";
	}
}

class CivilianTentBlackPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentBlackDeployed";
	}
}

class CivilianTentWoodlandCamoPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentWoodlandCamoDeployed";
	}
}

class CivilianTentDesertCamoPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentDesertDeployed";
	}
}

class CivilianTentGreyCamoPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentGreyCamoDeployed";
	}
}

class CivilianTentGreyPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentGreyDeployed";
	}
}

class CivilianTentMil001Packed extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentMil001Deployed";
	}
}

class CivilianTentRedCamoPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentRedCamoDeployed";
	}
}

class CivilianTentRedPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentRedDeployed";
	}
}

class CivilianTentWinterCamoPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentWinterCamoDeployed";
	}
}

class CivilianTentBluePacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentBlueDeployed";
	}
}

class CivilianTentYellowPacked extends PackedTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentYellowDeployed";
	}
}

// Deployed Tents.
class CivilianTentCamoDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentCamoPacked";
	}
}

class CivilianTentBlackDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentBlackPacked";
	}
}

class CivilianTentWoodlandCamoDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentWoodlandCamoPacked";
	}
}

class CivilianTentDesertDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentDesertCamoPacked";
	}
}

class CivilianTentGreyCamoDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentGreyCamoPacked";
	}
}

class CivilianTentGreyDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentGreyPacked";
	}
}

class CivilianTentMil001Deployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentMil001Packed";
	}
}

class CivilianTentRedCamoDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentRedCamoPacked";
	}
}

class CivilianTentRedDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentRedPacked";
	}
}

class CivilianTentWinterCamoDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentWinterCamoPacked";
	}
}

class CivilianTentBlueDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentBluePacked";
	}
}

class CivilianTentYellowDeployed extends CivilianTentBase
{
	override string GetTentClass()
	{
		return "CivilianTentYellowPacked";
	}
}