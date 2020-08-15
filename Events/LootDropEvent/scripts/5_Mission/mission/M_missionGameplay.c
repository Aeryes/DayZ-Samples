modded class MissionGameplay
{
	
	void MissionGameplay()
    {
		
		if (GetGame().IsServer()) 
        {
            g_EventBaseScript = null;
            GetEventBaseScript();

        }
	}
}
