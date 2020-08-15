////////////////////////////////////////////////////////////////////
//DeRap: logo\config.bin
//Produced from mikero's Dos Tools Dll version 7.60
//https://mikero.bytex.digital/Downloads
//'now' is Sun May 03 16:44:00 2020 : 'file' last modified on Sun May 03 16:37:37 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Logo_scripts
	{
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class logo
	{
		type = "mod";
		inputs = "inf/logo/inputs/Inputs.xml";
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"inf/logo/scripts/3_Game"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"inf/logo/scripts/5_Mission"};
			};
		};
	};
};
