// This class is basically a handler for success and errors from the entire process.
class RESTAPICurlCallback extends RestCallback
{

    // We create our variables that we wish to use for our GET or POST messeges 
    // as well as creating an instance of PlayerIdentity.
    PlayerIdentity sender;
    string a;
    string b;
    string c;

    // If there is an error, process the error code.
    override void OnError( int errorCode )
    {
        Print("Error Code:" + errorCode);
    };

    // If there is a timeout process the timeout.
    override void OnTimeout()
    {
        Print("Request Timeout");
    };

    // Here is the place where we handle data that has being recieved from hour requests.
    // In this small sample the data is recieved in JSON format and processed.
    override void OnSuccess( string data, int dataSize )
    {
        if( dataSize > 0 )
        {

            // Creating an instance of our data class
            RestData cb_data;
            JsonFileLoader<SIFPData>.JsonLoadData(data, cb_data);
            
            // This sends the collected data as a msg to the player who was the sender.
            if (sender)
                GetRPCManager().SendRPC("PrintMsg", "PrintMsgOnClient", new Param3<string, string, string>(cb_data.a, cb_data.b, cb_data.c), true, sender);
        }
    }

    // Here we set the sender of the data.
    void SetSender(PlayerIdentity sender_in)
    {
        sender = sender_in;
    }
};