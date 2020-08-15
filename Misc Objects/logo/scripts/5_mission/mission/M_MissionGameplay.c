modded class MissionGameplay
{
	protected UIManager					m_UIManager;

	override void OnUpdate(float timeslice)
	{
		UAInput logo_toggle_input = GetUApi().GetInputByName("UAToggleLogo");
        
		if (logo_toggle_input.LocalPress())
            m_Hud.ToggleLogo();

        super.OnUpdate(timeslice);
    }
}