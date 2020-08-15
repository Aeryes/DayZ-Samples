modded class ActionConstructor 
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);

        // Cassette Player Actions.
        actions.Insert(ActionTurnOnPlayer);
        actions.Insert(ActionTurnOffPlayer);

    }
}
