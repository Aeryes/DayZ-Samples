class ActiondeployWeaponRackCB : ActionPlaceObjectCB {
    override void CreateActionComponent() 
    {
        m_ActionData.m_ActionComponent = new CAContinuousTime(3); //Set your time here
    }   
}

class ActionDeployWeaponRack: ActionPlaceObject {        
     
    void ActionPlaceObject() {
        m_CallbackClass        = ActiondeployWeaponRackCB; //Activating your callback with the custom time
    }
}
