modded class MissionGameplay
{
	
	void MissionGameplay()
    {
		
		if (GetGame().IsServer()) 
        {
            g_RadiationBaseScript = null;
            GetRadiationBaseScript();
        }
	}
}
