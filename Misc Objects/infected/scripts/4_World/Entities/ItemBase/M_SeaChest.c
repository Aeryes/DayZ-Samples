modded class SeaChest: Container_Base 
{

    // Prevents all rifle base items from been stored in this container.
    override bool CanReceiveItemIntoCargo( EntityAI cargo )
    {
        // if(cargo.IsKindOf("Rifle_Base"))
        // {
        //     return false;
        // }
        // return true;
    }
}