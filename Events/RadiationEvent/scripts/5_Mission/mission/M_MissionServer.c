modded class MissionServer
{
    void MissionServer()
    {
        if (GetGame().IsServer()) 
        {
            g_RadiationBaseScript = null;
            GetRadiationBaseScript();
        }
    }
}