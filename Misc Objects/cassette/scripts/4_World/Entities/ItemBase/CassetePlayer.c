class CassettePlayer extends ItemBase
{

    const string USA                                = "CircleOfDust_SoundSet";
    const string ELC                                = "LA_HaveAWonderfulDay_SoundSet";
    const string FSE                                = "Deftones_SoundSet";
    const string MOZ                                = "Mozart_SoundSet";
    const string SAD                                = "KingForADay_SoundSet";
    const string SCT                                = "Witness_SoundSet";
    const string STR                                = "Celldweller_SoundSet";
    const string SUM                                = "Ghost_SoundSet";
    const string PIA                                = "Against_SoundSet";
    const string ELT                                = "Thriller_SoundSet";
	const string CAL		                        = "CaliforniaBlue_SoundSet";
	const string SWE		                        = "Sweet_SoundSet";
	const string RAD                                = "Radio_SoundSet";
	const string SOUND_TURN_ON			            = "turnOnRadio_SoundSet";
	const string SOUND_TURN_OFF			            = "turnOffRadio_SoundSet";
	const string SOUND_TEST                         = "HeavyFire_SoundSet";

    EffectSound                                     m_SoundMusic;
    EffectSound                                     m_TurnOff;
    EffectSound                                     m_TurnOn;

    ref TStringArray CassettesTypes;

    void CassettePlayer()
    {

        CassettesTypes = new ref TStringArray;

    };
	
	void OnSwitchOn()
	{

		PlayerTurnOn();
		PlayMusic();
		SetSynchDirty();

		if(GetGame().IsClient())
		{


		}
		//Print("[Debug] SwitchedOn Completed.");

	};

    void OnSwitchOff()
    {

		//super.OnSwitchOff();
		PlayerTurnOff();
		StopMusic();
		SetSynchDirty();
	    if(GetGame().IsClient())
		{


		}
		//Print("[Debug] SwitchedOff Completed.");

    };

	override bool CanReleaseAttachment(EntityAI attachment)
	{
		if(this.GetCompEM().IsWorking())
		{
			return false;
		}
		return true;
	}

    void PlayMusic()
    {
        
        //Print("[Debug] Entered PlayMusic Function...");

        // Array insertions for cassettes.
        CassettesTypes.Insert("CircleOfDust_Cassette");
        CassettesTypes.Insert("LA_HaveAWonderfulDay_Cassette");
        CassettesTypes.Insert("Deftones_Cassette");
        CassettesTypes.Insert("Mozart_Cassette");
        CassettesTypes.Insert("KingForADay_Cassette");
        CassettesTypes.Insert("Witness_Cassette");
        CassettesTypes.Insert("Celldweller_Cassette");
        CassettesTypes.Insert("Against_Cassette");
        CassettesTypes.Insert("Thriller_Cassette");
        CassettesTypes.Insert("CaliforniaBlue_Cassette");
        CassettesTypes.Insert("Sweet_Cassette");
        CassettesTypes.Insert("Radio_Cassette");
        CassettesTypes.Insert("Ghost_Cassette");

		for (int i = 0; i < CassettesTypes.Count(); i++)
		{
			Object CassetteOne = this.FindAttachmentBySlotName("Cassette");
			//Print("[Debug] Cassette is: " + CassetteOne.GetType());

			if (CassetteOne == NULL)
			{
				//Print("[Debug] There is no cassette attached to the slot.");
			}

			else
			{
				if (CassetteOne.IsKindOf(CassettesTypes.Get(i)))
				{
					string StringCasette = CassetteOne.GetType();

					switch (StringCasette)
					{

					case "Deftones_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, FSE, 0.3, 0.4);
					}
					break;

					case "LA_HaveAWonderfulDay_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, ELC, 0.3, 0.4);
					}
					break;

					case "CircleOfDust_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, USA, 0.3, 0.4);
					}
					break;

					case "Mozart_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, MOZ, 0.3, 0.4);
					}
					break;

					case "KingForADay_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, SAD, 0.3, 0.4);
					}
					break;

					case "Witness_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, SCT, 0.3, 0.4);
					}
					break;

					case "Celldweller_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, STR, 0.3, 0.4);
					}
					break;

					case "Against_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, PIA, 0.3, 0.4);
					}
					break;

					case "Thriller_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, ELT, 0.3, 0.4);
					}
					break;

					case "CaliforniaBlue_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, CAL, 0.3, 0.4);
					}
					break;

					case "Sweet_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, SWE, 0.3, 0.4);
					}
					break;

					case "Ghost_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, SUM, 0.3, 0.4);
					}
					break;

					case "Radio_Cassette":
					{
						PlaySoundSetLoop(m_SoundMusic, RAD, 0.3, 0.4);
					}
					break;

					default:
						////Print("[Debug] Could not play music due to no inserted cassette.");
						break;
					}
				}
			}
		}      

    };

	void StopMusic()
	{

        ////Print("[Debug] Entered the StopMusic function...");
        StopSoundSet(m_SoundMusic);

		if (GetGame().IsMultiplayer() && GetGame().IsServer())
		{
			StopSoundSet(m_SoundMusic);
		}

		if (GetGame().IsMultiplayer() && GetGame().IsClient())
		{
			StopSoundSet(m_SoundMusic);
		}

		//Print("[Debug] Music Stopped.");
	};

	void PlayerTurnOn()
	{

		PlaySoundSet(m_TurnOn, SOUND_TURN_ON, 0.0, 0.0);
		//Print("[Debug] PlayerTurnOn played...");

	};

	void PlayerTurnOff()
	{

		PlaySoundSet(m_TurnOff, SOUND_TURN_OFF, 0.0, 0.0);
		//Print("[Debug] PlayerTurnOff played...");

	};

	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionTurnOnPlayer);
		AddAction(ActionTurnOffPlayer);

	};
};

modded class PlayerBase
{

	override void SetActions()
	{
		super.SetActions();

	};

}
