class ActionFoldLadderCB : ActionContinuousBaseCB {
	override void CreateActionComponent() {
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT );
	}
}
static const int AT_FOLD_LADDER = 1712859123;
class ActionFoldLadder: ActionContinuousBase {
	
	void ActionFoldLadder() {
		m_CallbackClass = ActionFoldLadderCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents() {	
		m_ConditionTarget = new CCTObject( UAMaxDistances.DEFAULT );
		m_ConditionItem = new CCINotPresent;
	}
		
	override string GetText() {
		return "#fold";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item ) {	
		Object targetObject = target.GetObject();
		if ( Math.AbsFloat(player.GetPosition()[1]-targetObject.GetPosition()[1]) < 0.2 ) {
			Building ladder = Building.Cast( targetObject );
			
			if ( ladder && ladder.IsKindOf("NormalLadder") ) {
				return true;
			}
		}
		return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data ) {	
		Building ladder = Building.Cast( action_data.m_Target.GetObject() );
		GetGame().CreateObject("NormalLadder_Packed", ladder.GetPosition(), false);
		ladder.Delete();
	}

};

modded class PlayerBase {
	
	override void SetActions() {
		super.SetActions();
		AddAction(ActionFoldLadder);
	}
	
}
