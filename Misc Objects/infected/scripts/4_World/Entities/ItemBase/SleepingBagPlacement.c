class SleepingBagPackedBase extends ItemBase
{	
	ref protected EffectSound 						m_DeployLoopSound;
	protected Object			                    SleepingBagDeployed1;
	protected Object			                    ClutterCutter;
	private bool m_IsOpend 	                        = false;
	
	void SleepingBagPackedBase()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override void EEInit()
	{
		super.EEInit();
	}

	string GetBagClass()
	{
		return "ClassExample";
	}

    // 1.03 requirement for all actions custom or otherwise.
	override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTogglePlaceObject); // 527
        AddAction(ActionDeployObject); // 231
        AddAction(ActionPackBagModded); // Custom Action..
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
			
			SleepingBagDeployed1 = GetGame().CreateObject(GetBagClass(), pb.GetLocalProjectionPosition(), false );

			ClutterCutter = GetGame().CreateObject("LargeTentClutterCutter", pb.GetLocalProjectionPosition(), false );
			SleepingBagDeployed1.SetPosition( position );
			SleepingBagDeployed1.SetOrientation( orientation );
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

class SleepingBagDeployedBase extends ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }

	string GetBagClass()
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
        AddAction(ActionPackBagModded); // Custom Action.

    }

    override bool CanPutIntoHands(EntityAI parent)
    {

        return false;

    }
}

class SleepingBagBlackPacked extends SleepingBagPackedBase
{
	override string GetBagClass()
	{
		return "SleepingBagBlackDeployed";
	}
}

class SleepingBagBluePacked extends SleepingBagPackedBase
{
	override string GetBagClass()
	{
		return "SleepingBagBlueDeployed";
	}
}

class SleepingBagGreyPacked extends SleepingBagPackedBase
{
	override string GetBagClass()
	{
		return "SleepingBagGreyDeployed";
	}
}

class SleepingBagRedPacked extends SleepingBagPackedBase
{
	override string GetBagClass()
	{
		return "SleepingBagRedDeployed";
	}
}

class SleepingBagGreenPacked extends SleepingBagPackedBase
{
	override string GetBagClass()
	{
		return "SleepingBagGreenDeployed";
	}
}

// Deployed Tents.
class SleepingBagBlackDeployed extends SleepingBagDeployedBase
{
	override string GetBagClass()
	{
		return "SleepingBagBlackPacked";
	}
}

class SleepingBagBlueDeployed extends SleepingBagDeployedBase
{
	override string GetBagClass()
	{
		return "SleepingBagBluePacked";
	}
}

class SleepingBagGreyDeployed extends SleepingBagDeployedBase
{
	override string GetBagClass()
	{
		return "SleepingBagGreyPacked";
	}
}

class SleepingBagRedDeployed extends SleepingBagDeployedBase
{
	override string GetBagClass()
	{
		return "SleepingBagRedPacked";
	}
}

class SleepingBagGreenDeployed extends SleepingBagDeployedBase
{
	override string GetBagClass()
	{
		return "SleepingBagGreenPacked";
	}
}