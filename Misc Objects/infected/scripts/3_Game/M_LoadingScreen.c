modded class LoadingScreen
{
    protected ref LoadingScreenTextures m_LoadingScreenTextures = new LoadingScreenTextures();
    
    override void Show()
    {
        super.Show();

        string screen = m_LoadingScreenTextures.GetRandomLoadingScreen();
        m_ImageWidgetBackground.LoadImageFile(0, screen);
        m_ImageWidgetBackground.LoadMaskTexture(screen);
        m_ImageWidgetBackground.SetMaskProgress(1.0);
        m_ImageBackground.LoadImageFile(0, screen);
        m_ImageBackground.LoadMaskTexture(screen);
        m_ImageBackground.SetMaskProgress(1.0);
        m_ImageLogoMid.LoadImageFile(0, "inf/infected/data/blank.edds"); // should be blank.edds
        m_ImageLogoMid.Show(false);
        m_ImageLogoMid.SetAlpha(0.0);
        m_ImageLogoCorner.LoadImageFile(0, "inf/infected/data/blank.edds"); // should be blank.edds
        m_ImageLogoCorner.Show(false);
        m_ImageLogoCorner.SetAlpha(0.0);
    }
}

modded class LoginQueueBase 
{
    protected ref LoadingScreenTextures m_LoadingScreenTextures = new LoadingScreenTextures();


    override Widget Init() {
        string screen = m_LoadingScreenTextures.GetRandomLoadingScreen();
        Widget w = super.Init();
        ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
        imageWidgetBackground.LoadMaskTexture("");
        imageWidgetBackground.LoadImageFile(0, screen);
        return w;
    }
}

modded class LoginTimeBase
{
    protected ref LoadingScreenTextures m_LoadingScreenTextures = new LoadingScreenTextures();
    ImageWidget m_ImageBackground;

	override Widget Init()
	{
        layoutRoot = super.Init();
        m_ImageBackground =  ImageWidget.Cast(layoutRoot.FindAnyWidget("Background"));
        
        return layoutRoot;
    }

    override void Show()
    {
        super.Show();

        string screen = m_LoadingScreenTextures.GetRandomLoadingScreen();
        m_ImageBackground.LoadImageFile(0, screen);
        m_ImageBackground.LoadMaskTexture(screen);
    }
}

class LoadingScreenTextures
{
    protected ref TStringArray m_LoadingScreenTextures = new TStringArray;
    void LoadingScreenTextures()
    {
        //m_LoadingScreenTextures.Insert("inf/infected/data/infectedrp.paa");
        m_LoadingScreenTextures.Insert("inf/infected/data/crpOne.paa");
        m_LoadingScreenTextures.Insert("inf/infected/data/crpTwo.paa");
        m_LoadingScreenTextures.Insert("inf/infected/data/crpThree.paa");
    }
    
    string GetRandomLoadingScreen()
    {
        return m_LoadingScreenTextures.GetRandomElement();
    }
}