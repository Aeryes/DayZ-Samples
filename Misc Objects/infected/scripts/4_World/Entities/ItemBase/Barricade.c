static const int BARRICADE_TIME = 5; // in seconds.

class Barricade extends ItemBase 
{
	
	private bool m_isLocked;
	private bool m_shouldPlaySound;
	
	void Barricade() {
		RegisterNetSyncVariableBool("m_isLocked");
		RegisterNetSyncVariableBool("m_shouldPlaySound");
		m_isLocked = false;
		m_shouldPlaySound = false;
	}
	override bool IgnoreOutOfReachCondition()
    {
        return true;
    } 
	override bool CanPutIntoHands(EntityAI parent) {
		if(super.CanPutIntoHands(parent)) {
			return !m_isLocked;
		} else {
			return false;
		}
	}
	
	override bool CanPutInCargo( EntityAI parent ) {
		if(super.CanPutInCargo(parent)) {
			return !m_isLocked;
		} else {
			return false;
		}
	}
	
	override bool IsTwoHandedBehaviour() {
		return true;
	}

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
		//AddAction(ActionDeployObject);
	}

	override bool IsDeployable()
	{
		return true;
	}

	override void OnPlacementComplete( Man player ) {		
		super.OnPlacementComplete( player );
		SetAffectPathgraph( true, false );
		SetSynchDirty();
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() ) {
			PlayPlaceSound();
		}
	}
	
	void PlayPlaceSound() {
		EffectSound sound =	SEffectManager.PlaySound( "MediumTent_Door_Open_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void PlayLockInSound() {
		EffectSound sound =	SEffectManager.PlaySound( "MediumTent_Door_Open_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void PlayRipOffSound() {
		EffectSound sound =	SEffectManager.PlaySound( "MediumTent_Door_Open_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	bool IsLocked() {
		return m_isLocked;
	}
	
	override void OnStoreSave( ParamsWriteContext ctx ) {
		super.OnStoreSave(ctx);
		ctx.Write(m_isLocked);
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version ) {
		super.OnStoreLoad(ctx, version);
		ctx.Read(m_isLocked);
		return true;
	}
	
	override void OnVariablesSynchronized() {
		super.OnVariablesSynchronized();
		if(IsLocked()) {
			if(m_shouldPlaySound) {
				PlayLockInSound();
			}
			//SetAnimationPhase( "nails", 0 );
		} else {
			if(m_shouldPlaySound) {
				PlayRipOffSound();
			}
			//SetAnimationPhase( "nails", 1 );
		}
	}
	
	void Lock() {
		m_isLocked = true;
		m_shouldPlaySound = true;
		SetSynchDirty();
	}
	
	void RipOff() {
		m_isLocked = false;
		vector pos = this.GetPosition();
		pos[1] = GetGame().SurfaceY(pos[0], pos[2]);
		this.SetPosition(pos);
		this.SetOrientation(GetGame().SurfaceGetNormal(pos[0], pos[2]));
		m_shouldPlaySound = true;
		GetGame().CreateObject("WoodenPlank", pos, false );
		SetSynchDirty();
	}
	
}

modded class ActionPlaceObjectCB {
	
	override void DropDuringPlacing() {
		
	}
	
	override void OnAnimationEvent(int pEventID) {
		
	}
};
