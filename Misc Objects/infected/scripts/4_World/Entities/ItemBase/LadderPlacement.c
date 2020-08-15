class NormalLadder_Packed extends ItemBase {

	void NormalLadder_Packed() {
		
	}

	override void OnPlacementComplete( Man player ) {
		super.OnPlacementComplete( player );
		PlayerBase basePlayer = PlayerBase.Cast(player);
		string placingClassName = "NormalLadder";
		Building placedLadder = Building.Cast( GetGame().CreateObject(placingClassName, "0 0 0", false) );
		placedLadder.SetPosition(basePlayer.GetLocalProjectionPosition());
		placedLadder.SetOrientation(basePlayer.GetLocalProjectionOrientation());
		this.Delete();
	}

	override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    }
    	
	override bool IsDeployable() {
		return true;
	}

    // 1.03 Requirement for actions.
	override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTogglePlaceObject); // 527
        AddAction(ActionDeployObject); // 231
        AddAction(ActionFoldLadder); // 231
    }
	
}

modded class PlayerBase {
	
	override void Init() {
		super.Init();
		DayzPlayerItemBehaviorCfg twoHanded = new DayzPlayerItemBehaviorCfg;
		twoHanded.SetTwoHanded();
		GetDayZPlayerType().AddItemInHandsProfileIK("NormalLadder_Packed", "dz/anims/workspaces/player/player_main/player_main_2h.asi", twoHanded, "dz/anims/anm/player/ik/two_handed/beartrap_g.anm");
	}
	
}