// class ActionTurnOnMusicCB : ActionContinuousBaseCB
// {
// 	override void CreateActionComponent()
// 	{
// 		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT );
// 	}
// }

// class ActionTurnOnMusic: ActionContinuousBase
// {
// 	void ActionTurnOnMusic()
// 	{
// 		m_CallbackClass     = ActionFoldBaseBuildingObjectCB;
// 		m_CommandUID        = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
// 		m_CommandUIDProne   = DayZPlayerConstants.CMD_ACTIONFB_ITEM_ON;
// 		m_FullBody = false;
// 		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
// 		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
// 	}

// 	override void CreateConditionComponents()  
// 	{	
		
//         m_ConditionItem = new CCINonRuined();
//         m_ConditionTarget = new CCTNone();

// 	}

// 	override string GetText()
// 	{
// 		return "# Play/Stop Music";
// 	}
		
// 	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
// 	{
// 		CassettePlayer cplayer;

// 		if (Class.CastTo(cplayer, item))
//             return true;

//         return false;
//         Print("[Debug] ActionCondition evaluated...");		

// 	}
		
// 	override void OnFinishProgressServer( ActionData action_data )
// 	{

// 		CassettePlayer m_player;
//         Object targetObject = action_data.m_Target.GetObject();
//         Class.CastTo(m_player, targetObject);
//         Print("[Debug] " + m_player);
//         Print("[Debug] isOn: " + m_player.isOn);

// 		if(m_player.isOn)
// 		{

// 		    m_player.SwitchedOn();
// 		    m_player.isOn = false;
// 		    Print("[Debug] Switched on the server.");

// 		} else
// 		{

//             m_player.SwitchedOff();
//             m_player.isOn = true;
//             Print("[Debug] Switched off the server.");

// 		}

// 		Print("[Debug] Outer print...");
		
// 	}

// 	override void OnFinishProgressClient( ActionData action_data )
// 	{

// 		CassettePlayer m_playerTwo;
//         Object targetObject = action_data.m_Target.GetObject();
//         Class.CastTo(m_playerTwo, targetObject);

// 		if(m_playerTwo.isOn)
// 		{

// 		    m_playerTwo.SwitchedOn();
// 		    m_playerTwo.isOn = false;
// 		    Print("[Debug] Switched on the client.");

// 		} else
// 		{

//             m_playerTwo.SwitchedOff();
//             m_playerTwo.isOn = true;
//             Print("[Debug] Switched off the client.");

// 		}

// 	}
// }
