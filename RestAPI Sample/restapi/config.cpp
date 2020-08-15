class CfgPatches
{
	class restapi
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
	class restapi
	{
		dir = "inf";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "restapi";
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
				files[] = {"inf/restapi/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"inf/restapi/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"inf/restapi/scripts/5_Mission"};
			};
		};
	};
};