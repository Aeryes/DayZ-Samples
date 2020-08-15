class ActionIgniteBonfireCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT );
	}
}

class ActionIgniteBonfire: ActionContinuousBase
{
	void ActionIgniteBonfire()
	{
		m_CallbackClass = ActionFoldBaseBuildingObjectCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{	
		
        m_ConditionItem = new CCINonRuined();
        m_ConditionTarget = new CCTNone();

	}

	override string GetText()
	{
        return "#Ignite/Extinguish";
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		BonfireFull m_fire;
		Matchbox heldMatches;

		if (Class.CastTo(m_fire, target.GetObject()))
		{
			if (Class.CastTo(heldMatches, item))
            	return true;
		}

		return false;
	}
	
    override void OnFinishProgressServer(ActionData action_data)
    {
		BonfireFull m_fire;
        Object targetObject = action_data.m_Target.GetObject();
        Class.CastTo(m_fire, targetObject);

		//if (Class.CastTo(m_fire, targetObject))
		//{
			if (m_fire.canIgnite == true)
			{
				Print("[Debug] CreateAreaDamage...");
				m_fire.CreateAreaDamage(true);
				m_fire.TransferHeatToNearPlayers(true);
			}
			else
			{
				Print("[Debug] DestroyAreaDamage..");
				m_fire.m_AreaDamage.Destroy();
				//m_fire.SetIgnite(true);
			}

			m_fire.SetSynchDirty();
		//}
    }

    override void OnFinishProgressClient(ActionData action_data)
    {
		BonfireFull m_fire;
        Object targetObject = action_data.m_Target.GetObject();
        Class.CastTo(m_fire, targetObject);

		//if (Class.CastTo(m_fire, targetObject))
		//{
			if (m_fire.canIgnite == true)
			{
				Print("[Debug] Ignite action worked as expected...");
				m_fire.Ignite(true);
				//m_fire.CreateAreaDamage();
				//m_fire.TransferHeatToNearPlayers();
				m_fire.SetIgnite(false);
				Print("[Debug] Action set canIgnite to false...");
			}
			else
			{
				Print("[Debug] Extinguish action worked as expected..");
				m_fire.Extinguish(true);
				m_fire.m_AreaDamage.Destroy();
				m_fire.SetIgnite(true);
				Print("[Debug] Extinguished...");
			}
		//}
    }
};

modded class Matchbox 
{
	override void SetActions() {
		super.SetActions();
		AddAction(ActionIgniteBonfire);
	}
};

// modded class PlayerBase
// {
	
// 	override void SetActions() {
// 		super.SetActions();

// 		AddAction(ActionIgniteBonfire);

// 	}
	
// };
