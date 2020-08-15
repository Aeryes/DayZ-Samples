class ActionLockBarricadeCB : ActionContinuousBaseCB {
	override void CreateActionComponent() {
		m_ActionData.m_ActionComponent = new CAContinuousTime(BARRICADE_TIME);
	}
}

class ActionLockBarricade: ActionContinuousBase {
	
	void ActionLockBarricade() {
		m_CallbackClass = ActionLockBarricadeCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_ASSEMBLE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents() {
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.BASEBUILDING);
	}
		
	override string GetText() {
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( player ) {
			return "Hammer The Nails.";
		}
		return "";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item ) {	
		Object targetObject = target.GetObject();
		if ( targetObject ) {
			Barricade board = Barricade.Cast( targetObject );
			if ( board && !board.IsLocked() ) {
				return true;
			}
		}
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) {
		
		Barricade board = Barricade.Cast( action_data.m_Target.GetObject() );
		
		if ( board && !board.IsLocked() ) {
			board.Lock();
			action_data.m_MainItem.DecreaseHealth ( 1 );
		}
		action_data.m_Player.MessageStatus((board.GetPosition()-action_data.m_Player.GetPosition()).ToString());
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
	}
}