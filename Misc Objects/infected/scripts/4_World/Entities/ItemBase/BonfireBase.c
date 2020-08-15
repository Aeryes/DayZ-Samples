// Class dealing with the actual Pallisade Gate.
class BonfireBase extends ItemBase 
{
	
	int getQuantity( string slotName )
	{
		int slot_id;
        ItemBase ingredient;
		slot_id = InventorySlots.GetSlotIdFromString(slotName);
		ingredient = ItemBase.Cast( GetInventory().FindAttachment(slot_id) ); 
		return ingredient.GetQuantity();
	}
	
	void removeQuanity( int amount, string slotName )
	{
		int slot_id;
        ItemBase ingredient;
		slot_id = InventorySlots.GetSlotIdFromString(slotName);
		ingredient = ItemBase.Cast( GetInventory().FindAttachment(slot_id) ); 
		ingredient.SetQuantity(ingredient.GetQuantity() - amount);
	}
		
	int inf_Logs()
	{
		int slot_id;
        ItemBase ingredient;
		slot_id = InventorySlots.GetSlotIdFromString("Material_WoodenLogs");
		ingredient = ItemBase.Cast( GetInventory().FindAttachment(slot_id) ); 
		return ingredient.GetQuantity();
	}
	
	override void OnPlacementComplete( Man player ) {		
		super.OnPlacementComplete( player );
		SetAffectPathgraph( true, false );
		SetSynchDirty();
	}

	//Destroy
	void inf_Destory()
	{
		//delete object
		GetGame().ObjectDelete( this );
	}

    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);

    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        if( !super.CanPutIntoHands( parent ) )
        {
            return false;
        }
        if ( GetNumberOfItems() == 0 )
        {
            return false;
        }
        return false;
    }
	
	bool IsFacingFront( PlayerBase player, string selection )
    {
        vector metal_pos = GetPosition();
        vector player_pos = player.GetPosition();
        vector metal_dir = GetDirection();
        
        vector metal_player_dir = player_pos - metal_pos;
        metal_player_dir.Normalize();
        metal_dir.Normalize();
        
        if ( metal_dir.Length() != 0 )
        {
            float dot = vector.Dot( metal_player_dir, metal_dir );
            
            if ( dot > 0 )
            {
                return true;
            }
        }
        
        return false;
    }
    
    bool IsFacingBack( PlayerBase player, string selection )
    {
        return !IsFacingFront( player, selection );
    }

}

