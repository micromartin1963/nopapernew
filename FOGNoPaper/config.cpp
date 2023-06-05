#define _ARMA_

class CfgPatches
{
	class FOGNoPaper
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class FOGNoPaper
	{
		dir = "FOGNoPaper";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "FOGNoPaper";
		credits = "Wudro";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{

			class worldScriptModule
			{
				value = "";
				files[] = {"FOG/FOGNoPaper/scripts/4_World"};
			};

		};
	};
};





