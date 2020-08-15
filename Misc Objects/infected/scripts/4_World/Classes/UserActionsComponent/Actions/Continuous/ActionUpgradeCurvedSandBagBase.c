int sandbag_remain_base_bag = 0;
int plank_remain_base_bag = 0;

class ActionUpgradeCurvedSandBagBaseCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_CONSTRUCT ); // use +,-,*,/ to adjust the time.  //BBP_BASE_TIME
	}
};

class ActionUpgradeCurvedSandBagBase: ActionContinuousBase
{

	protected Object CurvedSandBagBase1;

	void ActionUpgradeCurvedSandBagBase()
	{
		m_CallbackClass = ActionUpgradeCurvedSandBagBaseCB;
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
			return "Upgrade To Curved SandBag";
		}
		
		return "";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();
		CurvedSandBagBase BaseBag = CurvedSandBagBase.Cast( targetObject );
		vector position = BaseBag.GetPosition();
		vector orientation = BaseBag.GetOrientation();
		if ( targetObject ) 
		{
			//Global var update
			sandbag_remain_base_bag = BaseBag.inf_Logs();
			plank_remain_base_bag = BaseBag.inf_Nails();
			
			if ( (BaseBag) && ( sandbag_remain_base_bag >= 10 && plank_remain_base_bag >= 2 ) )
			{	
				return true;
			}
		}
		
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		//target existing model
		CurvedSandBagBase BaseBag = CurvedSandBagBase.Cast( action_data.m_Target.GetObject() );
		
		if ( BaseBag ) 
		{
			//create new model
			vector position = BaseBag.GetPosition();
			vector orientation = BaseBag.GetOrientation();
			CurvedSandBagBase1 = GetGame().CreateObject("CurvedSandBagFull", BaseBag.GetPosition(), false );
			CurvedSandBagBase1.SetPosition( position );
			CurvedSandBagBase1.SetOrientation( orientation );
			//SetSynchDirty();
			
			//delete existing model
			BaseBag.inf_Destory();
			
			//add damage to tool
			action_data.m_MainItem.DecreaseHealth( UADamageApplied.BUILD, false );
		}
		action_data.m_Player.MessageStatus((BaseBag.GetPosition()-action_data.m_Player.GetPosition()).ToString());
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
