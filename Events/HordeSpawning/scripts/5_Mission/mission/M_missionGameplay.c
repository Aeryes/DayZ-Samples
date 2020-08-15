modded class MissionGameplay
{
	
	void MissionGameplay()
    {
		
		if (GetGame().IsServer()) 
        {
            g_HordeBaseScript = null;
            GetHordeBaseScript();
            Print("[HORDE DEBUG] MissionGameplay loaded the script.");

        }
	}
}
