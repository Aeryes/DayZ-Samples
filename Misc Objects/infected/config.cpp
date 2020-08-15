class CfgPatches
{
	class infectedrp
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Characters",
            "DZ_Data","DZ_AI","DZ_Characters_Zombies","DZ_Data",
			"DZ_Surfaces"};
	};
};
class CfgMods
{
	class infecterp
	{
		dir = "inf";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "infectedrp";
		credits = "Aeryes";
		author = "Aeryes";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		
		dependencies[] = {"Game", "World", "Mission"};
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"inf/infected/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"inf/infected/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"inf/infected/scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
    class Clothing;
    class Inventory_Base;
    class NBCHoodBase: Clothing
    {
        scope=1;
    };
    class NBCJacketBase: Clothing
    {
        scope=1;
    };
    class NBCPantsBase: Clothing
    {
        scope=1;
    };
    class NBCBootsBase: Clothing
    {
        scope=1;
    };
    class NBCGloves_ColorBase: Clothing
    {
        scope=1;
    };	

    // Collision for building.
    class WoodenPlank: Inventory_Base
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class MetalPlate: Inventory_Base
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class CarWheel;
	class CivSedanWheel: CarWheel
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class CivSedanWheel_Ruined: CarWheel
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class HatchbackWheel: CarWheel
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class HatchbackWheel_Ruined: CarWheel
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class CarDoor;
	class CivSedanDoors_Driver: CarDoor
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class CivSedanDoors_CoDriver: CivSedanDoors_Driver
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class HatchbackDoors_Driver: CarDoor
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class HatchbackDoors_CoDriver: CivSedanDoors_Driver
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class CivSedanDoors_BackLeft: CivSedanDoors_Driver
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class CivSedanDoors_BackRight: CivSedanDoors_Driver
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class CivSedanTrunk: CarDoor
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class HatchbackHood: CarDoor
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class CivSedanHood: CarDoor
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class HatchbackTrunk: CarDoor
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
	class HouseNoDestruct;
	class GardenPlot: HouseNoDestruct
	{
		physLayer = "item_small";
		carveNavmesh = 0;
	};
};

class CfgSoundShaders
{
    class Custom_SoundShader_Base
    {
        range = 30;
    };

    class LordOfLight_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\LordOfLight.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class TotoAfrica_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\TotoAfrica.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class USA_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\usaanthem.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class ACDCThunder_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\acdcthunderstruck.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class British_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\britishanthem.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class Chernarus_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\chernarussiananthem.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class CountryRoads_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\countryroads.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class DannyBoy_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\dannyboy.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class DavidH_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\davidhasselhofftruesurvivor.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class HardBass_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\generationhardbassdjblyat.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class Credence_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\greenrivercreedence.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class SlavHardBass_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\hardbassschoolslav.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    class Ireland_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"inf\infected\sounds\irishanthem.ogg", 
        		1
        	}
        };
        volume = 1;
    };

    // Wave Two.
    class AmberRun_I_Found_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\amberrun_ifound.ogg", 
                1
            }
        };
        volume = 1;
    };

    class AmazingGrace_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\bagpipesamazinggrace.ogg", 
                1
            }
        };
        volume = 1;
    };

    class BlackBirdSong_Lee_Dewyze_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\blackbirdsong.ogg", 
                1
            }
        };
        volume = 1;
    };

    class WoundedWolf_GilesCorey_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\gilescoreywoundedwolf.ogg", 
                1
            }
        };
        volume = 1;
    };

    class GodsGoingToKnockYouDown_JohnnyCash_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\godsgoingtoknockyoudown.ogg", 
                1
            }
        };
        volume = 1;
    };

    class Hurt_JohnnyCash_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\hurt.ogg", 
                1
            }
        };
        volume = 1;
    };

    class Kalinka_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\kalinka.ogg", 
                1
            }
        };
        volume = 1;
    };

    class BonIver_Rosyln_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\rosyln.ogg", 
                1
            }
        };
        volume = 1;
    };

    class Wardruna_Lyfaberg_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\lyfaberg.ogg", 
                1
            }
        };
        volume = 1;
    };

    class Luminers_StubbornLove_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\stubbornlove.ogg", 
                1
            }
        };
        volume = 1;
    };

    class Ellie_ThroughTheValley_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\throughthevalley.ogg", 
                1
            }
        };
        volume = 1;
    };

    class TravisScott_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\travis.ogg", 
                1
            }
        };
        volume = 1;
    };

    // Premium Cassettes.
    class Moody_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\moody.ogg", 
                1
            }
        };
        volume = 1;
    };

    class Yeetera_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\yeetera.ogg", 
                1
            }
        };
        volume = 1;
    };

    class Vinegar_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\vinegar.ogg", 
                1
            }
        };
        volume = 1;
    };

    class Psyhconut_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
            {
                "inf\infected\sounds\psychonut.ogg", 
                1
            }
        };
        volume = 1;
    };
};

class CfgSoundSets
{
    class Custom_SoundSet_Base
    {
        sound3DProcessingType = "character3DProcessingType";
        volumeCurve = "characterAttenuationCurve";
        spatial = 1;
        doppler = 0;
        loop = 0;
    };

    class LordOfLight_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "LordOfLight_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class TotoAfrica_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "TotoAfrica_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class USA_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "USA_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class ACDCThunder_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "ACDCThunder_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class British_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "British_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Chernarus_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Chernarus_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class CountryRoads_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "CountryRoads_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class DannyBoy_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "DannyBoy_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class DavidH_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "DavidH_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class HardBass_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "HardBass_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Credence_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Credence_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class SlavHardBass_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "SlavHardBass_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Ireland_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Ireland_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    // Wave Two.
    class AmberRun_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "AmberRun_I_Found_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class AmazingGrace_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "AmazingGrace_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class BlackBirdSong_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "BlackBirdSong_Lee_Dewyze_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class WoundedWolf_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "WoundedWolf_GilesCorey_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class GodsGoingToKnockYouDown_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "GodsGoingToKnockYouDown_JohnnyCash_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Hurt_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Hurt_JohnnyCash_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Kalinka_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Kalinka_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Wardruna_Lyfaberg_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Wardruna_Lyfaberg_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Rosyln_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "BonIver_Rosyln_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Luminers_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Luminers_StubbornLove_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Ellie_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Ellie_ThroughTheValley_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class TravisScott_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "TravisScott_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    // Premium Cassettes.
    class Moody_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Moody_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Yeetera_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Yeetera_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Vinegar_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Vinegar_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };

    class Psychonut_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "Psyhconut_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 1;
    };
};

//  class DZ_LightAI;
// 	class DayZInfected: DZ_LightAI{};
// 	class ZombieBase: DayZInfected
// 	{
// 		class DamageSystem
// 		{
// 			class DamageZones
// 			{
// 				class Head
// 				{
// 					class Health
// 					{
// 						hitpoints = 5;
// 						transferToGlobalCoef = 1;
// 					};
// 					componentNames[] = {"Head"};
// 					fatalInjuryCoef = -1;
// 					inventorySlots[] = {"Headgear","Mask"};
// 				};
// 				class Torso
// 				{
// 					class Health
// 					{
// 						hitpoints = 5;
// 						transferToGlobalCoef = 1;
// 					};
// 					componentNames[] = {"Spine1","Spine3"};
// 					fatalInjuryCoef = -1;
// 					transferToZonesNames[] = {"Head","LeftArm","RightArm"};
// 					transferToZonesCoefs[] = {0.0,0.0,0.0};
// 					inventorySlots[] = {"Vest","Body","Back"};
// 				};
// 				class LeftArm
// 				{
// 					class Health
// 					{
// 						hitpoints = 5;
// 						transferToGlobalCoef = 0.10000001;
// 					};
// 					componentNames[] = {"LeftArm","LeftForeArm"};
// 					fatalInjuryCoef = -1;
// 				};
// 				class RightArm
// 				{
// 					class Health
// 					{
// 						hitpoints = 5;
// 						transferToGlobalCoef = 0.10000001;
// 					};
// 					componentNames[] = {"RightArm","RightForeArm"};
// 					fatalInjuryCoef = -1;
// 				};
// 				class LeftLeg
// 				{
// 					class Health
// 					{
// 						hitpoints = 5;
// 						transferToGlobalCoef = 0.0;
// 					};
// 					componentNames[] = {"LeftLeg","LeftUpLeg"};
// 					fatalInjuryCoef = -1;
// 					inventorySlots[] = {"Legs"};
// 				};
// 				class RightLeg
// 				{
// 					class Health
// 					{
// 						hitpoints = 5;
// 						transferToGlobalCoef = 0.0;
// 					};
// 					componentNames[] = {"RightLeg","RightUpLeg"};
// 					fatalInjuryCoef = -1;
// 					inventorySlots[] = {"Legs"};
// 				};
// 				class LeftFoot
// 				{
// 					class Health
// 					{
// 						hitpoints = 5;
// 						transferToGlobalCoef = 0.0;
// 					};
// 					transferToZonesNames[] = {"LeftLeg"};
// 					transferToZonesCoefs[] = {0.5};
// 					componentNames[] = {"LeftFoot"};
// 					fatalInjuryCoef = -1;
// 					inventorySlots[] = {"Feet"};
// 				};
// 				class RightFoot
// 				{
// 					class Health
// 					{
// 						hitpoints = 5;
// 						transferToGlobalCoef = 0.0;
// 					};
// 					transferToZonesNames[] = {"RightLeg"};
// 					transferToZonesCoefs[] = {0.5};
// 					componentNames[] = {"RightFoot"};
// 					fatalInjuryCoef = -1;
// 					inventorySlots[] = {"Feet"};
// 				};
// 			};
// 		};
// 	};

// };

// class CfgAIBehaviours
// {
// 	class Infected
// 	{
// 		name = "zombie";
// 		HeadLookBoneName = "lookat";
// 		teamName = "Zombies";
// 		class BehaviourHLZombie
// 		{
// 			class MovementWalk
// 			{
// 				maxSpeed = 2.8;
// 				minSpeed = 0;
// 				acceleration = 2;
// 				maxAngleSpeed = 360;
// 				slowRadius = 0;
// 				stopRadius = 0.5;
// 				pathFilter = "ZombieCalm";
// 			};
// 			class MovementRun
// 			{
// 				maxSpeed = 4.8;
// 				minSpeed = 0;
// 				acceleration = 2;
// 				maxAngleSpeed = 360;
// 				slowRadius = 0;
// 				goalRadius = 1.5;
// 				stopRadius = 1.7;
// 				useStartAnimation = "false";
// 				pathFilter = "ZombieAlerted";
// 			};
// 			class MovementSprint
// 			{
// 				maxSpeed = 5.8;
// 				minSpeed = 0;
// 				acceleration = 2;
// 				maxAngleSpeed = 360;
// 				maxSpeedRange = 0;
// 				slowRadius = 3.2;
// 				goalRadius = 1.5;
// 				goalSpeed = 2;
// 				stopRadius = 1.7;
// 				waypointRadius = "goalRadius";
// 				useStartAnimation = "false";
// 				startAnimationMaxSpeed = 0;
// 				slowToTurn = "false";
// 				smoothAcceleration = "true";
// 				pathFilter = "ZombieAlerted";
// 			};
// 			class SlotCalm
// 			{
// 				class BehaviourZombieCalm
// 				{
// 					StandingDurationMin = 20;
// 					StandingDurationMax = 60;
// 					WalkingDurationMin = 20;
// 					WalkingDurationMax = 60;
// 					MinLookTime = 1;
// 					MaxLookTime = 2;
// 					IsAttractMode = "false";
// 					class SoundsDuring
// 					{
// 						class Sound1
// 						{
// 							moveWithEntity = "true";
// 						};
// 						probability = 0.8;
// 						RepeatTimeMin = 12;
// 						RepeatTimeMax = 20;
// 						RepeatEnabled = "true";
// 					};
// 				};
// 			};
// 			class SlotAlerted
// 			{
// 				class BehaviourZombieAlerted
// 				{
// 					maxTimeInDisturbedState = 90;
// 					alertToAttract = 0.1;
// 					fightStateEnterDistance = 2;
// 					fightStateExitDistance = 3;
// 					fightStateEnterOrientAngleDiff = 160;
// 					fightStateExitOrientAngleDiff = 160;
// 					disturbedTargetHistoryLength = 60;
// 					disturbedVisionUtilityWeight = 1;
// 					disturbedNoiseUtilityWeight = 1;
// 					disturbedDamageUtilityWeight = 0;
// 					attractedTargetHistoryLength = 300;
// 					attractedVisionUtilityWeight = 1;
// 					attractedNoiseUtilityWeight = 1;
// 					attractedDamageUtilityWeight = 1;
// 					chaseTargetHistoryLength = 300;
// 					chaseVisionUtilityWeight = 1;
// 					chaseNoiseUtilityWeight = 1;
// 					chaseDamageUtilityWeight = 1;
// 					class SoundsEntering
// 					{
// 						class Sound1{};
// 						probability = 1;
// 					};
// 					class SoundsDuring
// 					{
// 						class Sound1{};
// 						probability = 1;
// 						RepeatTimeMin = 3.9;
// 						RepeatTimeMax = 4.1;
// 						RepeatEnabled = "true";
// 					};
// 					noiseMakeAlertPeriod = 2;
// 					class NoiseMakeAlert
// 					{
// 						strength = 100;
// 						type = "sound";
// 					};
// 				};
// 			};
// 			class AlertSystem
// 			{
// 				visionToAlertMultiplier = 1000;
// 				noiseToAlertMultiplier = 0.75;
// 				damageToAlertMultiplier = 10000;
// 				noiseShotToAlertMultiplier = 2;
// 				class Calm
// 				{
// 					DropSpeed = 5;
// 					DropDelay = 2;
// 					MaxAlertValue = 20;
// 				};
// 				class Alerted
// 				{
// 					DropSpeed = 2;
// 					DropDelay = 5;
// 					MaxAlertValue = 100;
// 				};
// 			};
// 			staminaDepletionSpeed = 5;
// 			staminaRechargeSpeed = 10;
// 		};
// 		class TargetSystemDZBase
// 		{
// 			visionProximityRange = 2.5;
// 			visionProximityStrengthMult = 3;
// 			visionCloseRange = 5;
// 			visionCloseHeight = 1.8;
// 			visionCloseStrengthMult = 3;
// 			visionRangeMin = 10;
// 			visionRangeMax = 30;
// 			visionFov = 1;
// 			visionPeripheralRangeMin = 5;
// 			visionPeripheralRangeMax = 20;
// 			visionPeripheralFov = 2.3;
// 			visionAngularSpeedMin = 0.1;
// 			visionAngularSpeedMax = 0.5;
// 			visionAngularSpeedMaxMult = 1;
// 			visionNightMinMult = 1;
// 			visionNightMaxMult = 0.7;
// 			visionRainMinMult = 1;
// 			visionRainMaxMult = 0.8;
// 			visionFogMinMult = 1;
// 			visionFogMaxMult = 0.7;
// 		};
// 		class NoiseSystemParams
// 		{
// 			rangeMin = 3;
// 			rangeMax = 35;
// 			rangeShotMin = 3;
// 			rangeShotMax = 100;
// 			class NoiseStrengthTeamMultipliers
// 			{
// 				BigGame = 1;
// 				Zombies = 0;
// 				Player = 1;
// 			};
// 		};
// 	};
// 	class InfectedFemale: Infected
// 	{
// 		class BehaviourHLZombie: BehaviourHLZombie
// 		{
// 			class SlotCalm: SlotCalm
// 			{
// 				class BehaviourZombieCalm: BehaviourZombieCalm
// 				{
// 					class SoundsDuring: SoundsDuring
// 					{
// 						class Sound1: Sound1
// 						{
// 							moveWithEntity = "true";
// 						};
// 					};
// 				};
// 			};
// 			class SlotAlerted: SlotAlerted
// 			{
// 				class BehaviourZombieAlerted: BehaviourZombieAlerted
// 				{
// 					class SoundsEntering: SoundsEntering
// 					{
// 						class Sound1: Sound1{};
// 					};
// 					class SoundsDuring: SoundsDuring
// 					{
// 						class Sound1: Sound1{};
// 					};
// 				};
// 			};
// 		};
// 	};
// 	class InfectedMale: Infected
// 	{
// 		class BehaviourHLZombie: BehaviourHLZombie
// 		{
// 			class SlotCalm: SlotCalm
// 			{
// 				class BehaviourZombieCalm: BehaviourZombieCalm
// 				{
// 					class SoundsDuring: SoundsDuring
// 					{
// 						class Sound1: Sound1
// 						{
// 							moveWithEntity = "true";
// 						};
// 					};
// 				};
// 			};
// 			class SlotAlerted: SlotAlerted
// 			{
// 				class BehaviourZombieAlerted: BehaviourZombieAlerted
// 				{
// 					class SoundsEntering: SoundsEntering
// 					{
// 						class Sound1: Sound1{};
// 					};
// 					class SoundsDuring: SoundsDuring
// 					{
// 						class Sound1: Sound1{};
// 					};
// 				};
// 			};
// 		};
// 	};
// };
// class CfgNoises
// {
// 	class ZombieStepNoise
// 	{
// 		type = "sound";
// 		continuousRange = 100;
// 		strength = 15;
// 	};
// 	class ZombieRoarNoise
// 	{
// 		type = "sound";
// 		continuousRange = 100;
// 		strength = 10;
// 	};
// };

// class CfgWorlds
// {
// 	class CAWorld;
// 	class ChernarusPlus: CAWorld
// 	{
// 		//access=3;
// 		// cutscenes[]=
// 		// {
// 		// 	"ChernarusPlusIntro"
// 		// };
// 		// description="Chernarus";
// 		// worldName="\DZ\worlds\chernarusplus\world\ChernarusPlus.wrp";
// 		class Navmesh
// 		{
// 			navmeshName="inf\infected\navmesh\infectednavmesh.nm";
// 			filterIsolatedIslandsOnLoad=1;
// 			visualiseOffset=0;
// 			class GenParams
// 			{
// 				tileWidth=50;
// 				cellSize1=0.25;
// 				cellSize2=0.1;
// 				cellSize3=0.1;
// 				filterIsolatedIslands=1;
// 				seedPosition[]={7500,0,7500};
// 				class Agent
// 				{
// 					diameter=0.60000002;
// 					standHeight=1.5;
// 					crouchHeight=1;
// 					proneHeight=0.5;
// 					maxStepHeight=0.44999999;
// 					maxSlope=60;
// 				};
// 				class Links
// 				{
// 					class ZedJump387_050
// 					{
// 						jumpLength=1.5;
// 						jumpHeight=0.5;
// 						minCenterHeight=0.30000001;
// 						jumpDropdownMin=0.5;
// 						jumpDropdownMax=-0.5;
// 						areaType="jump0";
// 						flags[]=
// 						{
// 							"jumpOver"
// 						};
// 						color=1727987712;
// 					};
// 					class ZedJump388_050
// 					{
// 						jumpLength=1.5;
// 						jumpHeight=0.5;
// 						minCenterHeight=-0.5;
// 						jumpDropdownMin=0.5;
// 						jumpDropdownMax=-0.5;
// 						areaType="jump0";
// 						flags[]=
// 						{
// 							"jumpOver"
// 						};
// 						color=1725781248;
// 					};
// 					class ZedJump387_110
// 					{
// 						jumpLength=3.9000001;
// 						jumpHeight=0.0;
// 						minCenterHeight=0.5;
// 						jumpDropdownMin=0.5;
// 						jumpDropdownMax=-0.5;
// 						areaType="jump0";
// 						flags[]=
// 						{
// 							"jumpOver"
// 						};
// 						color=1711308800;
// 					};
// 					class ZedJump420_160
// 					{
// 						jumpLength=4;
// 						jumpHeight=0.0;
// 						minCenterHeight=1.1;
// 						jumpDropdownMin=0.5;
// 						jumpDropdownMax=-0.5;
// 						areaType="jump0";
// 						flags[]=
// 						{
// 							"jumpOver"
// 						};
// 						color=1711276287;
// 					};
// 					class ZedJump265_210
// 					{
// 						jumpLength=2.45;
// 						jumpHeight=0.0;
// 						minCenterHeight=1.8;
// 						jumpDropdownMin=0.5;
// 						jumpDropdownMax=-0.5;
// 						areaType="jump0";
// 						flags[]=
// 						{
// 							"climb"
// 						};
// 						color=1720975571;
// 					};
// 					class Fence50_110deer
// 					{
// 						typeId=100;
// 						jumpLength=8;
// 						jumpHeight=1.1;
// 						minCenterHeight=0.5;
// 						jumpDropdownMin=1;
// 						jumpDropdownMax=-1;
// 						areaType="jump2";
// 						flags[]=
// 						{
// 							"jumpOver"
// 						};
// 						color=1722460927;
// 					};
// 					class Fence110_160deer
// 					{
// 						typeId=101;
// 						jumpLength=8;
// 						jumpHeight=1.6;
// 						minCenterHeight=1.1;
// 						jumpDropdownMin=1;
// 						jumpDropdownMax=-1;
// 						areaType="jump3";
// 						flags[]=
// 						{
// 							"jumpOver"
// 						};
// 						color=1713700856;
// 					};
// 					class Fence50_110hen
// 					{
// 						typeId=110;
// 						jumpLength=4;
// 						jumpHeight=1.1;
// 						minCenterHeight=0.5;
// 						jumpDropdownMin=0.5;
// 						jumpDropdownMax=-0.5;
// 						areaType="jump4";
// 						flags[]=
// 						{
// 							"jumpOver"
// 						};
// 						color=-22016;
// 					};
// 					class Fence110_160hen
// 					{
// 						typeId=111;
// 						jumpLength=4;
// 						jumpHeight=1.6;
// 						minCenterHeight=1.1;
// 						jumpDropdownMin=0.5;
// 						jumpDropdownMax=-0.5;
// 						areaType="jump4";
// 						flags[]=
// 						{
// 							"jumpOver"
// 						};
// 						color=-22016;
// 					};
// 				};
// 			};
// 		};
// 	};
// };