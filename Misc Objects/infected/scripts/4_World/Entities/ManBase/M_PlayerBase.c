//Playerbase modded script.
modded class PlayerBase
{
	
    bool isInRadK;
    bool isInRadT
    bool isInRadV;

    bool vomit;
    bool bleed;
    bool protection;
    bool showMsg;

    private PluginPlayerStatus inf_ModulePlayerStatus;

    override void Init() {
    	super.Init();
		// RegisterNetSyncVariableInt("keyval");
		// RegisterNetSyncVariableInt("value");
        // RegisterNetSyncVariableInt("hue");
        // RegisterNetSyncVariableFloat("blurval");
        // RegisterNetSyncVariableFloat("bloodsat");

        //inf_ModulePlayerStatus = PluginPlayerStatus.Cast(GetPlugin(PluginPlayerStatus));

    }

    // void DisplayBadgeRad() {

    //     if(inf_ModulePlayerStatus) {

    //         //inf_ModulePlayerStatus.inf_SetRadIcon(keyval, value);

    //     }

    // }

    // void ActivateCannabis(float blurval, float bloodsat, int hue) {

    //     if(drp_ModulePlayerStatus) {

    //         Print("[INF EFFECT] Activate Cannabis function called from playerbase.");
    //         drp_ModulePlayerStatus.SendCannabisData(blurval, bloodsat, hue);

    //     }
    // }

}
