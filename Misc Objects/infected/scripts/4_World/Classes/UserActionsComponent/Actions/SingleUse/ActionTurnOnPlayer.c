class ActionTurnOnPlayer: ActionSingleUseBase
{
	void ActionTurnOnPlayer()
	{
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		return "#switch_on";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item.IsInherited(Roadflare) )
		{
			m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_LIGHTFLARE;
		}
		else if (item.IsInherited(Chemlight_ColorBase))
		{
			m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_LITCHEMLIGHT;
		}
		else
		{
			m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
		}
		
		
		if ( item.HasEnergyManager()  &&  item.GetCompEM().CanSwitchOn()  &&  item.GetCompEM().CanWork() )
		{
			return true;
		}
		
		return false;
	}

	override void OnExecuteServer( ActionData action_data )  //Takhle to nedelat, vyrob si action componentu a tehle check patri do jeji Execute metody. Message o selhani pak napis jako messageStartFail
	{
		if ( action_data.m_MainItem.HasEnergyManager() )
		{
			if ( action_data.m_MainItem.GetCompEM().CanWork() )
			{
				action_data.m_MainItem.GetCompEM().SwitchOn();
				action_data.m_MainItem.OnSwitchOn();
			}
			else
			{
				InformPlayers(action_data.m_Player,action_data.m_Target,UA_FAILED);
			}
		}
	}
	
	override void OnStartClient( ActionData action_data )
	{
		if ( action_data.m_MainItem  &&  action_data.m_MainItem.IsInherited(Roadflare) )
		{
			Roadflare flare = Roadflare.Cast(action_data.m_MainItem);
			flare.SetModelState( RoadflareModelStates.UNCAPPED_UNIGNITED );
		}
	}
	
	override void OnStartServer( ActionData action_data )
	{
		if ( action_data.m_MainItem  &&  action_data.m_MainItem.IsInherited(Roadflare) )
		{
			Roadflare flare = Roadflare.Cast(action_data.m_MainItem);
			flare.SetModelState( RoadflareModelStates.UNCAPPED_UNIGNITED );
		}
	}
};
