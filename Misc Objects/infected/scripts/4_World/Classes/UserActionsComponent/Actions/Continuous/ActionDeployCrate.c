class ActiondeployCrateCB : ActionPlaceObjectCB {
    override void CreateActionComponent() {
        m_ActionData.m_ActionComponent = new CAContinuousTime(3); //Set your time here
    }   
}

class ActionDeployCrate: ActionPlaceObject {        
     
    void ActionPlaceObject() {
        m_CallbackClass        = ActiondeployCrateCB; //Activating your callback with the custom time
    }
}
