modded class MissionServer
{
    void MissionServer()
    {
        if (GetGame().IsServer()) 
        {
            g_EventBaseScript = null;
            GetEventBaseScript();
        }
    }
}