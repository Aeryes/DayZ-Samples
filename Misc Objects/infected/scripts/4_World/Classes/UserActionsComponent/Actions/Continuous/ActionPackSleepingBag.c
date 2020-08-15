class ActionPackBagModdedCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT );
	}
}

class ActionPackBagModded: ActionContinuousBase
{

	SleepingBagDeployedBase m_bag;

	void ActionPackBagModded()
	{
		m_CallbackClass = ActionFoldBaseBuildingObjectCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{	
		
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.DEFAULT);
		m_ConditionItem = new CCINotPresent;
	}

	void attachTent(SleepingBagDeployedBase t)
	{
		m_bag = t;
	}	

	override string GetText()
	{
		return "#fold";
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		Object targetObject = target.GetObject();
		if (targetObject.IsKindOf("SleepingBagDeployedBase"))
		{

            attachTent(targetObject);

			if(m_bag.GetNumberOfItems() == 0) {

				return true;
			}
		}
		return false;
	}
	
override void OnFinishProgressServer(ActionData action_data)
    {
        Object targetObject = action_data.m_Target.GetObject();
        SleepingBagDeployedBase bag;
        if (Class.CastTo(bag, targetObject))
        {
            Object m_Object;
            if (GetGame().IsServer())
            {
                m_Object = GetGame().CreateObject(bag.GetBagClass(), targetObject.GetPosition(), false);
                m_Object.SetPosition(targetObject.GetPosition());
                GetGame().ObjectDelete(action_data.m_Target.GetObject());
            }
        }
    }
}

modded class PlayerBase {
	
	override void SetActions() {
		super.SetActions();

		AddAction(ActionPackBagModded);

	}
	
}