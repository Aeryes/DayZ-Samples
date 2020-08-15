class ActionPackTentModdedCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT );
	}
}

class ActionPackTentModded: ActionContinuousBase
{

	CivilianTentBase m_tent;

	void ActionPackTentModded()
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

	void attachTent(CivilianTentBase t)
	{
		m_tent = t;
	}	

	override string GetText()
	{
		return "#fold";
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		Object targetObject = target.GetObject();
		if (targetObject.IsKindOf("CivilianTentBase"))
		{

            attachTent(targetObject);

			if(m_tent.GetNumberOfItems() == 0) {

				return true;
			}
		}
		return false;
	}
	
override void OnFinishProgressServer(ActionData action_data)
    {
        Object targetObject = action_data.m_Target.GetObject();
        CivilianTentBase tent;
        if (Class.CastTo(tent, targetObject))
        {
            Object m_Object;
            if (GetGame().IsServer())
            {
                m_Object = GetGame().CreateObject(tent.GetTentClass(), targetObject.GetPosition(), false);
                m_Object.SetPosition(targetObject.GetPosition());
                GetGame().ObjectDelete(action_data.m_Target.GetObject());
            }
        }
    }
}

modded class PlayerBase {
	
	override void SetActions() {
		super.SetActions();

		AddAction(ActionPackTentModded);

	}
	
}