// Action for camo tent.
class ActionOpenLaptopCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 1 );
	}
}

class ActionOpenLaptop: ActionContinuousBase
{

    Laptop laptop;

	void ActionOpenLaptop()
	{
		m_CallbackClass = ActionOpenLaptopCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}

	override string GetText()
	{
		return "Open/Close Laptop";
	}

	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNone;
		m_ConditionItem = new CCINone;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();
		Class.CastTo(laptop, target.GetObject());

		if (targetObject.IsInherited( Laptop ))
		{
			return true;
		}
		return false;
	}

	override void OnFinishProgressServer(ActionData action_data)
	{
		Object targetObject = action_data.m_Target.GetObject();
		if (targetObject.IsInherited(Laptop))
		{


				if(laptop.GetAnimationPhase("door") == 0) {

                    laptop.SetAnimationPhase("door", 1);

				} else {

                    laptop.SetAnimationPhase("door", 0);

				}
		}
	}
}

modded class PlayerBase {
	
	PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());

	override void SetActions() {
		super.SetActions();

        if(player) {

		    AddAction(ActionOpenLaptop);

        }
	}
}
