// Modded class dealing with RP chat channels.
modded class ChatLine
{

    const float FADE_TIMEOUT = 45;
    const float FADE_OUT_DURATION = 5;
    const float FADE_IN_DURATION = 1;

    // Declaring chat colors.
    private const int OOC_COLOR = ARGB(255, 255, 188, 0); // Blue
    private const int IC_COLOR = ARGB(255, 225, 225, 255); // Red
    private const int EMOTE_COLOR = ARGB(255, 80, 185, 10); //Green
    // Declaring chat prefix.
    private const string OOC_PREFIX = "[OOC]";
    private const string IC_PREFIX = "[IC]";
    private const string EMOTE_PREFIX = "[EMOTE]";

    override void Set(ChatMessageEventParams params) // Param 1 --> Channel, Param 2 --> sender name, Param 3 --> message, Param 4 ?? 
    { 

		int channel; 
		string msg = params.param3;
		string fmsg;

		// Debug msg.
		//Print("[RP CHAT] The chat messege is: " + params.param3);

		// If messege is OOC it starts with //.
        if(params.param3.Contains("//"))
        {

            fmsg = msg.Substring(2, msg.Length());

        }  
        // If messege is Emote it starts with **.
        else if(params.param3.Contains("**"))
        {

            fmsg = msg.Substring(2, msg.Length());

        }
        // If messege is IC it is default.
        else
        {

            fmsg = msg;

        }

		// Debug msg.
		//Print("[RP CHAT] The formatted chat messege is: " + fmsg);
		
		m_NameWidget.SetText("");
		m_TextWidget.SetText("");
		
		SetColour(IC_COLOR);
		m_RootWidget.Show(true);
		
		channel = params.param1; // 0 = Survior   1 = Game/System   2 = Admin 
		
		Print(channel);

		if ( channel & CCSystem )
		{
			// Game
			if(params.param2 != "")
			{
				m_NameWidget.SetText(GAME_PREFIX + ": " );
			} 
			SetColour(GAME_TEXT_COLOUR);
		}
		else if ( channel & CCAdmin )
		{
			// Admin
			m_NameWidget.SetText(ADMIN_PREFIX + ": ");
			SetColour(ADMIN_TEXT_COLOUR);			
		}
		else if ( channel & CCTransmitter )
		{
			// Radio - Trasnmitter
			m_NameWidget.SetText(RADIO_PREFIX + params.param2 + " : ");
		}
		else if ( channel == 0 || channel & CCDirect )
		{
			// Player
			if(params.param2 != "")
			{

               //CODE FOR CHANGING CHAT COLOR DEPENDING ON OOC/IC/EMOTE.
               // If messege is OOC it contains //.
               if(params.param3.Contains("//"))
                {
                    
                    m_NameWidget.SetText(OOC_PREFIX + " " + params.param2 + " : ");
                    m_NameWidget.SetColor(OOC_COLOR);
                    m_TextWidget.SetColor(OOC_COLOR);

                    // Debug msg.
                    //Print("[RP CHAT] Chat color set to OOC");

                }  
               // If messege is Emote it starts with **.
               else if(params.param3.Contains("**"))
                {

                    m_NameWidget.SetText(EMOTE_PREFIX + " " + params.param2 + " : ");
                    m_NameWidget.SetColor(EMOTE_COLOR);
                    m_TextWidget.SetColor(EMOTE_COLOR);

                    // Debug msg.
                    //Print("[RP CHAT] Chat color set to EMOTE");

                }
               // If messege is IC it is default.
               else
                {

                    m_NameWidget.SetText(IC_PREFIX + " " + params.param2 + " : ");
                    m_NameWidget.SetColor(IC_COLOR);
                    m_TextWidget.SetColor(IC_COLOR);

                    // Debug msg.
                    //Print("[RP CHAT] Chat color set to IC");

                }
			}
		}
        
		m_TextWidget.SetText(fmsg);
		// Debug msg.
		//Print("[RP CHAT] The messege has been sent to the server.");
		
		m_FadeTimer.FadeIn(m_RootWidget, FADE_IN_DURATION);
		m_TimeoutTimer.Run(FADE_TIMEOUT, m_FadeTimer, "FadeOut", new Param2<Widget, float>(m_RootWidget, FADE_OUT_DURATION));

    }

}