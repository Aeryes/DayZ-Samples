int log_remain_base_Bonfire = 0;
int nail_remain_base_Bonfire = 0;

class ActionUpgradeBonfireBaseCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_CONSTRUCT ); // use +,-,*,/ to adjust the time.  //BBP_BASE_TIME
	}
};

class ActionUpgradeBonfireBase: ActionContinuousBase
{

	protected Object BonfireBase1;

	void ActionUpgradeBonfireBase()
	{
		m_CallbackClass = ActionUpgradeBonfireBaseCB;
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
			return "Upgrade To Bonfire";
		}
		
		return "";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();
		BonfireBase BaseBonfire = BonfireBase.Cast( targetObject );
		vector position = BaseBonfire.GetPosition();
		vector orientation = BaseBonfire.GetOrientation();
		if ( targetObject ) 
		{
			//Global var update
			log_remain_base_Bonfire = BaseBonfire.inf_Logs();
			
			if ( (BaseBonfire) && ( log_remain_base_Bonfire >= 2 ) )
			{	
				return true;
			}
		}
		
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		//target existing model
		BonfireBase BaseBonfire = BonfireBase.Cast( action_data.m_Target.GetObject() );
		
		if ( BaseBonfire ) 
		{
			//create new model
			vector position = BaseBonfire.GetPosition();
			vector orientation = BaseBonfire.GetOrientation();
			BonfireBase1 = GetGame().CreateObject("BonfireFull", BaseBonfire.GetPosition(), false );
			BonfireBase1.SetPosition( position );
			BonfireBase1.SetOrientation( orientation );
			//SetSynchDirty();
			
			//delete existing model
			BaseBonfire.inf_Destory();
			
			//add damage to tool
			action_data.m_MainItem.DecreaseHealth( UADamageApplied.BUILD, false );
		}
		action_data.m_Player.MessageStatus((BaseBonfire.GetPosition()-action_data.m_Player.GetPosition()).ToString());
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
				m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_ASSEMBLE;
				break;
		}
	}
}
