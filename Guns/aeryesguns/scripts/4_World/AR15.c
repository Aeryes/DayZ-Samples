class Cappie_AR15_Base : RifleBoltLock_Base
{
    override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};