modded class MissionGameplay
{
    
    void MissionGameplay()
    {

        GetRPCManager().AddRPC("PrintMsg", "PrintMsgOnClient", this, SingeplayerExecutionType.Client);

    }

    // Function that provides functionality for key presses.
    // In this sample while ingame if we press the 'p' key and the webserver has being set up to respond correctly.
    // We will see output to the server console log file.
    override void OnKeyPress(int key)
    {

        super.OnKeyPress(key);

        switch(key)
        {

            case KeyCode.KC_P:
            {

                GetRPCManager().SendRPC("PrintMsg", "PrintMsgToLogs", null, true, null);
                Print("[REST] Key press happened...");

            }
        }
    }

    // This is the client RPC for handling the msg sending.
    void PrintMsgOnClient(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target)
    {
        ref Param3<string, string, string> data;

        if (type == CallType.Client)
        {
            if (!ctx.Read(data)) return;

             // Prints the data that was given to the game server by the curl request,
            Print("a=" + data.param1);
            Print("b=" + data.param2);
            Print("c=" + data.param3);      
        }
    }
}