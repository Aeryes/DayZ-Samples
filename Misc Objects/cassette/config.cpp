class CfgPatches
{
	class cassette
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Data",
			"DZ_AI",
			"DZ_Characters_Zombies",
			"DZ_Data",
			"DZ_Surfaces"
		};
	};
};
class CfgMods
{
	class cassette
	{
		dir="inf";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="cassette";
		credits="Aeryes";
		author="Aeryes";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"inf/cassette/scripts/4_World"
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class Custom_SoundShader_Base
	{
		range=30;
	};
	class CircleOfDust_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\circleofdust.ogg",
				1
			}
		};
		volume=1;
	};
	class LA_HaveAWonderfulDay_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\haveawonderfulday.ogg",
				1
			}
		};
		volume=1;
	};
	class Deftones_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\deftoneschange.ogg",
				1
			}
		};
		volume=1;
	};
	class KingForADay_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\kingforaday.ogg",
				1
			}
		};
		volume=1;
	};
	class Witness_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\witness.ogg",
				1
			}
		};
		volume=1;
	};
	class Celldweller_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\celldweller.ogg",
				1
			}
		};
		volume=1;
	};
	class Ghost_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\ghost.ogg",
				1
			}
		};
		volume=1;
	};
	class Mozart_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\mozart.ogg",
				1
			}
		};
		volume=1;
	};
	class Against_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\against.ogg",
				1
			}
		};
		volume=1;
	};
	class Thriller_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\thriller.ogg",
				1
			}
		};
		volume=1;
	};
	class CaliforniaBlue_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\cali.ogg",
				1
			}
		};
		volume=1;
	};
	class Sweet_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\sweet.ogg",
				1
			}
		};
		volume=1;
	};
	class Radio_SoundShader: Custom_SoundShader_Base
	{
		samples[]=
		{
			
			{
				"inf\cassette\sounds\radio.ogg",
				1
			}
		};
		volume=1;
	};
};
class CfgSoundSets
{
	class Custom_SoundSet_Base
	{
		sound3DProcessingType="character3DProcessingType";
		volumeCurve="characterAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};
	class CircleOfDust_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"CircleOfDust_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class LA_HaveAWonderfulDay_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"LA_HaveAWonderfulDay_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class Deftones_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"Deftones_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class KingForADay_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"KingForADay_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class Witness_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"Witness_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class Celldweller_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"Celldweller_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class Ghost_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"Ghost_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class Mozart_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"Mozart_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class Against_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"Against_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class Thriller_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"Thriller_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class CaliforniaBlue_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"CaliforniaBlue_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class Sweet_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"Sweet_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
	class Radio_SoundSet: Custom_SoundSet_Base
	{
		soundShaders[]=
		{
			"Radio_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
		volume=1;
	};
};
