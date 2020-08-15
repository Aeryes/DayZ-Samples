modded class IngameHud
{
    ImageWidget m_Logo;
    bool m_LogoVisible = true;

	override void Init(Widget hud_panel_widget)
	{
        super.Init(hud_panel_widget);

        m_Logo = GetGame().GetWorkspace().CreateWidgets("inf/logo/layouts/logo.layout", hud_panel_widget);
        m_Logo.Show(true);
    }

    void ToggleLogo()
    {
        if (!m_LogoVisible)
            m_Logo.Show(true);
        else
            m_Logo.Show(false);

        m_LogoVisible = !m_LogoVisible;
    }
}

