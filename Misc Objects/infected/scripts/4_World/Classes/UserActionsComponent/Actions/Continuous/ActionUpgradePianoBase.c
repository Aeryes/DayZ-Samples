int log_remain_base_piano = 0;
int nail_remain_base_piano = 0;

class ActionUpgradePianoBaseCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_CONSTRUCT ); // use +,-,*,/ to adjust the time.  //BBP_BASE_TIME
	}
};

class ActionUpgradePianoBase: ActionContinuousBase
{

	protected Object PianoBase1;

	void ActionUpgradePianoBase()
	{
		m_CallbackClass = ActionUpgradePianoBaseCB;
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
			return "Upgrade To Piano";
		}
		
		return "";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();
		PianoBase BasePiano = PianoBase.Cast( targetObject );
		vector position = BasePiano.GetPosition();
		vector orientation = BasePiano.GetOrientation();
		if ( targetObject ) 
		{
			//Global var update
			log_remain_base_piano = BasePiano.inf_Logs();
			nail_remain_base_piano = BasePiano.inf_Nails();
			
			if ( (BasePiano) && ( log_remain_base_piano >= 2 && nail_remain_base_piano >= 20 ) )
			{	
				return true;
			}
		}
		
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		//target existing model
		PianoBase BasePiano = PianoBase.Cast( action_data.m_Target.GetObject() );
		
		if ( BasePiano ) 
		{
			//create new model
			vector position = BasePiano.GetPosition();
			vector orientation = BasePiano.GetOrientation();
			PianoBase1 = GetGame().CreateObject("PianoFull", BasePiano.GetPosition(), false );
			PianoBase1.SetPosition( position );
			PianoBase1.SetOrientation( orientation );
			//SetSynchDirty();
			
			//delete existing model
			BasePiano.inf_Destory();
			
			//add damage to tool
			action_data.m_MainItem.DecreaseHealth( UADamageApplied.BUILD, false );
		}
		action_data.m_Player.MessageStatus((BasePiano.GetPosition()-action_data.m_Player.GetPosition()).ToString());
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
