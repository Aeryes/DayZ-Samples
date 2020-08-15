modded class CholeraAgent extends AgentBase
{
	override void Init()
	{
		m_Type 					= eAgents.CHOLERA;
		m_Invasibility 			= 0.1;//increase the agent count by this number per second if potent enough to grow
		m_TransferabilityIn		= 0.1;//to the player
		m_TransferabilityOut	= 0.1;//from the player
		m_AntibioticsResistance = 0;//[0..1], 0 means antibiotics have full effect, 1 means no effect
		m_MaxCount 				= 1000;
		m_Potency = EStatLevels.MEDIUM;//grow when player's immune system is at this level or lower
		m_DieOffSpeed = 2;//how fast the agent dies off when not potent enough to grow(per sec)
	}
}