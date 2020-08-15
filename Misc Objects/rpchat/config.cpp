class CfgPatches
{
	class rpchat
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
	class rpchat
	{
		dir = "inf";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "rpchat";
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
				files[] = {"inf/rpchat/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"inf/rpchat/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"inf/rpchat/scripts/5_Mission"};
			};
		};
	};
};