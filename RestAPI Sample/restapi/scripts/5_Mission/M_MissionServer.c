modded class MissionServer
{

    RestApi CCore;
    RestContext c_ctx;
    ref RestCurlCallback c_cbx;
    string data;
    
    void MissionServer()
    {
        // Adds server sided RPC for printing msg to log file.
        GetRPCManager().AddRPC("PrintMsg", "PrintMsgToLogs", this, SingeplayerExecutionType.Server);
    }

    // Server RPC for requesting information from the webserver.
    void PrintMsgToLogs(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target)
    {
        if (type == CallType.Server && sender != null)    
        { 
            // Create the instance of the rest api.
            CCore = CreateRestApi();
            // Enable debug to monitor console output better.
            CCore.EnableDebug(true);
            // Create an instance of our manager class.
            c_cbx = new RestCurlCallback;
            // Set the sender to the player who pressed the button.
            c_cbx.SetSender(sender);

            // Create context for the listed ip or site.
            c_ctx = CCore.GetRestContext("Enter ip to server here. Example = https://156.54.43.69");
            // In this case we use a POST request to send data to the web server which the web server will then process.
            // and respond too. In this case it should process our steam id for validity and return a=a, b=b, c=c. It will
            // only return this if our web server has being set up to handle the request with that reponse.
            c_ctx.POST(c_cbx, "/samplerestapi", "steamid=123456789");
        }
    }
}