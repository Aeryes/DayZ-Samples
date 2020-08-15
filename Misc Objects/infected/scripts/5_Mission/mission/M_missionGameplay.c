modded class MissionGameplay
{
	CivilianTentBase                    m_tent;
	
	void MissionGameplay()
    {
		
		if (GetGame().IsServer()) 
        {


        }
	}
 
	void attachTent(CivilianTentBase t)
	{
		m_tent = t;
	}    

	override void OnKeyRelease(int key)
	{
		super.OnKeyRelease(key);
		
		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		ActionManagerBase actmgr = player.GetActionManager();
		Object targetObject = actmgr.FindActionTarget().GetObject();
		
		// ITEM UIs
		if(player) {

		    if ( key == KeyCode.KC_F )
		    {

                // Tent functionality.
			    if( targetObject.IsKindOf( "CivilianTentBase" ) )
			    {

				    attachTent(targetObject);

				    if(m_tent.GetAnimationPhase("door") == 1) {

                        m_tent.SetAnimationPhase("door", 0);

				    } 

				    if(m_tent.GetAnimationPhase("door") == 0) {

                        m_tent.SetAnimationPhase("door", 1);

				    } 
			    }
            } //else
            //{

                //Print("[Debug] No valid tent target..");

            //}
		}
    }
}
