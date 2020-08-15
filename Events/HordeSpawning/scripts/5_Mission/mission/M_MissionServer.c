modded class MissionServer
{
    void MissionServer()
    {
        if (GetGame().IsServer()) 
        {
		    g_HordeBaseScript = null;
            GetHordeBaseScript();
            Print("[HORDE DEBUG] MissionServer loaded the script.");
        }
    }
}