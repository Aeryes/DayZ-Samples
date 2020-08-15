modded class CholeraMdfr: ModifierBase
{
	static const int AGENT_THRESHOLD_ACTIVATE = 800;
	static const int AGENT_THRESHOLD_DEACTIVATE = 200;
	
	static const int CHANCE_OF_VOMIT = 5;
	static const int WATER_DRAIN_FROM_VOMIT = 5;
	static const int ENERGY_DRAIN_FROM_VOMIT = 5;
	static const float WATER_LOSS_CHOLERA = 0.1;

	override void Init()
	{
		m_TrackActivatedTime 	= false;
		m_ID 					= eModifiers.MDF_CHOLERA;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
	}
	
	override string GetDebugText()
	{
		return ("Activate threshold: "+AGENT_THRESHOLD_ACTIVATE + "| " +"Deativate threshold: "+AGENT_THRESHOLD_DEACTIVATE);
	}
	
	override protected bool ActivateCondition(PlayerBase player)
	{
		if(player.GetSingleAgentCount(eAgents.CHOLERA) >= AGENT_THRESHOLD_ACTIVATE) 
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	override protected void OnActivate(PlayerBase player)
	{
		player.IncreaseDiseaseCount();
	}

	override protected void OnDeactivate(PlayerBase player)
	{
		player.DecreaseDiseaseCount();
	}

	override protected bool DeactivateCondition(PlayerBase player)
	{
		if(player.GetSingleAgentCount(eAgents.CHOLERA) <= AGENT_THRESHOLD_DEACTIVATE) 
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	override protected void OnTick(PlayerBase player, float deltaT)
	{
		float water_loss = deltaT * WATER_LOSS_CHOLERA;	// could be replaced by fever in future
		player.GetStatWater().Add(-water_loss);

		float stomach_volume = player.m_PlayerStomach.GetStomachVolume();
		if( stomach_volume > 400 )
		{
			int roll = Math.RandomInt(0, 100);
			if( roll < CHANCE_OF_VOMIT )
			{
				SymptomBase symptom = player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
				
				if( symptom )
				{ 
					symptom.SetDuration(Math.RandomIntInclusive(4,8));

					// figure something more clever
					if (m_Player.GetStatWater().Get() > (WATER_DRAIN_FROM_VOMIT))
						m_Player.GetStatWater().Add(-1 * WATER_DRAIN_FROM_VOMIT);
					if (m_Player.GetStatEnergy().Get() > (ENERGY_DRAIN_FROM_VOMIT))
						m_Player.GetStatEnergy().Add(-1 * ENERGY_DRAIN_FROM_VOMIT);
				}
			}
		}
	}
};