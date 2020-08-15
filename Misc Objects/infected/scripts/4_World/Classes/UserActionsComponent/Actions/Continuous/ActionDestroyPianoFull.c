class ActionDestroyPianoFullCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_CONSTRUCT ); // use +,-,*,/ to adjust the time.
	}
};

class ActionDestroyPianoFull: ActionContinuousBase
{
	void ActionDestroyPianoFull()
	{
		m_CallbackClass = ActionDestroyPianoFullCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_ASSEMBLE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.BASEBUILDING );
	}
		
	override string GetText()
	{
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( player )
		{
			return "Destroy Piano";
		}
		
		return "";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		PianoFull Piano = PianoFull.Cast( targetObject );
		if ( targetObject ) 
		{				
			if ( Piano )
			{	
				if ( Piano.IsFacingBack( player, "PianoFull") )
                {
                    return true;
                }
			}
		}
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		//target existing model
		PianoFull Piano = PianoFull.Cast( action_data.m_Target.GetObject() );
		
		if ( Piano ) 
		{	
			
			//delete existing model
			Piano.inf_Destory();
			
			//add damage to tool
			action_data.m_MainItem.DecreaseHealth( UADamageApplied.DESTROY * 4, false );
		}

		action_data.m_Player.MessageStatus((Piano.GetPosition()-action_data.m_Player.GetPosition()).ToString());
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );

	}
	
	//setup
	override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
		if( super.SetupAction( player, target, item, action_data, extra_data ) )
		{
			SetBuildingAnimation( item );
			
			return true;
		}
		
		return false;
	}
	
	void SetBuildingAnimation( ItemBase item )
	{
		switch( item.Type() )
		{
			case Shovel:
			case FieldShovel:
				m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DIGMANIPULATE;
				break;
			case Pliers:
				m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
				break;				
			default:
				m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DISASSEMBLE;
				break;
		}
	}
}
