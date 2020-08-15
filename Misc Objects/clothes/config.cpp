#define _ARMA_

class CfgPatches
{
	class _Clothes
	{
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	
	/*
		BACKPACKS
	*/
	class Clothing;
	class ChildBag_ColorBase;
	class HuntingBag;
	class MountainBag_ColorBase;
	class TaloonBag_ColorBase;
	class TortillaBag;
	class CoyoteBag_ColorBase;
	class AssaultBag_ColorBase;
	class SmershBag;
	
	class Staff_Bag: AssaultBag_ColorBase
	{
		scope=2;
		itemsCargoSize[]={20,500};
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\Staff_Bag_co.paa",
            "inf\clothes\backpacks\Staff_Bag_co.paa",
            "inf\clothes\backpacks\Staff_Bag_co.paa"
		};
	};
	class ChildBag_Grey: ChildBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\ChildBag_Grey.paa",
            "inf\clothes\backpacks\ChildBag_Grey.paa",
            "inf\clothes\backpacks\ChildBag_Grey.paa"
		};
	};

	class HuntingBag_Brown: HuntingBag
	{
		scope = 2;
		descriptionShort="Brown hunting bag";
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\HuntingBag_Brown.paa",
            "inf\clothes\backpacks\HuntingBag_Brown.paa",
            "inf\clothes\backpacks\HuntingBag_Brown.paa"
		};
	};
	class HuntingBag_BlackCamo: HuntingBag
	{
		scope = 2;
		descriptionShort="Black camouflage hunting bag";
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\HuntingBag_BlackCamo.paa",
            "inf\clothes\backpacks\HuntingBag_BlackCamo.paa",
            "inf\clothes\backpacks\HuntingBag_BlackCamo.paa"
		};
	};
	class MountainBag_Black: MountainBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\MountainBag_Black.paa",
            "inf\clothes\backpacks\MountainBag_Black.paa",
            "inf\clothes\backpacks\MountainBag_Black.paa"
		};
	};
	class MountainBag_Cyan: MountainBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\MountainBag_Cyan.paa",
            "inf\clothes\backpacks\MountainBag_Cyan.paa",
            "inf\clothes\backpacks\MountainBag_Cyan.paa"
		};
	};
	class MountainBag_Pink: MountainBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\MountainBag_Pink.paa",
            "inf\clothes\backpacks\MountainBag_Pink.paa",
            "inf\clothes\backpacks\MountainBag_Pink.paa"
		};
	};
	class MountainBag_Violet: MountainBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\MountainBag_Violet.paa",
            "inf\clothes\backpacks\MountainBag_Violet.paa",
            "inf\clothes\backpacks\MountainBag_Violet.paa"
		};
	};
	class TaloonBag_Black: TaloonBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\TaloonBag_Black.paa",
            "inf\clothes\backpacks\TaloonBag_Black.paa",
            "inf\clothes\backpacks\TaloonBag_Black.paa"
		};
	};
	class TaloonBag_Cyan: TaloonBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\TaloonBag_Cyan.paa",
            "inf\clothes\backpacks\TaloonBag_Cyan.paa",
            "inf\clothes\backpacks\TaloonBag_Cyan.paa"
		};
	};
	class TaloonBag_Pink: TaloonBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\TaloonBag_Pink.paa",
            "inf\clothes\backpacks\TaloonBag_Pink.paa",
            "inf\clothes\backpacks\TaloonBag_Pink.paa"
		};
	};
	class TaloonBag_Yellow: TaloonBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\TaloonBag_Yellow.paa",
            "inf\clothes\backpacks\TaloonBag_Yellow.paa",
            "inf\clothes\backpacks\TaloonBag_Yellow.paa"
		};
	};

	class TortillaBag_Black: TortillaBag
	{
		scope = 2;
		descriptionShort="Black Tortilla Backpack";
		// Hiddenselections is required for the backpack to work.
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\backpacks\TortillaBag_Black.paa",
			"inf\clothes\backpacks\TortillaBag_Black.paa",
			"inf\clothes\backpacks\TortillaBag_Black.paa"
		};
	};
	
	/*
		GLOVES
	*/
	class NBCGloves_ColorBase;
	class OMNOGloves_ColorBase;
	class WorkingGloves_ColorBase;

	class WorkingGloves_Cyan: WorkingGloves_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\gloves\WorkingGloves_Cyan.paa",
            "inf\clothes\gloves\WorkingGloves_Cyan.paa",
            "inf\clothes\gloves\WorkingGloves_Cyan.paa"
		};
	};
	class WorkingGloves_Green: WorkingGloves_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\gloves\WorkingGloves_Green.paa",
            "inf\clothes\gloves\WorkingGloves_Green.paa",
            "inf\clothes\gloves\WorkingGloves_Green.paa"
		};
	};
	class WorkingGloves_Grey: WorkingGloves_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\gloves\WorkingGloves_Grey.paa",
            "inf\clothes\gloves\WorkingGloves_Grey.paa",
            "inf\clothes\gloves\WorkingGloves_Grey.paa"
		};
	};
	class WorkingGloves_Jeans: WorkingGloves_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\gloves\WorkingGloves_Jeans.paa",
            "inf\clothes\gloves\WorkingGloves_Jeans.paa",
            "inf\clothes\gloves\WorkingGloves_Jeans.paa"
		};
	};
	class WorkingGloves_Pink: WorkingGloves_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\gloves\WorkingGloves_Pink.paa",
            "inf\clothes\gloves\WorkingGloves_Pink.paa",
            "inf\clothes\gloves\WorkingGloves_Pink.paa"
		};
	};
	class WorkingGloves_Purple: WorkingGloves_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\gloves\WorkingGloves_Purple.paa",
            "inf\clothes\gloves\WorkingGloves_Purple.paa",
            "inf\clothes\gloves\WorkingGloves_Purple.paa"
		};
	};
	class WorkingGloves_Red: WorkingGloves_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\gloves\WorkingGloves_Red.paa",
            "inf\clothes\gloves\WorkingGloves_Red.paa",
            "inf\clothes\gloves\WorkingGloves_Red.paa"
		};
	};


	/*
	    HATS
	*/
	class Bandana_ColorBase;
	class BandanaHead_ColorBase;
	class BandanaMask_ColorBase;
	class BallisticHelmet_Black;
	class BallisticHelmet_Green;
	class BaseballCap_ColorBase;
	class BeanieHat_ColorBase;
	class CowboyHat_ColorBase;
	class FlatCap_ColorBase;
	class MilitaryBeret_ColorBase;
	class MotoHelmet_ColorBase;
	class NBCHoodBase;
	class RadarCap_ColorBase;
	class Ushanka_ColorBase;
	class Ssh68Helmet;

	class BaseballCap_Jeans: BaseballCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\BaseballCap_Jeans.paa",
			"inf\clothes\hats\BaseballCap_Jeans.paa",
			"inf\clothes\hats\BaseballCap_Jeans.paa"
		};
	};
	class BaseballCap_Violet: BaseballCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\BaseballCap_Violet.paa",
			"inf\clothes\hats\BaseballCap_Violet.paa",
			"inf\clothes\hats\BaseballCap_Violet.paa"
		};
	};
	class BaseballCap_Yellow: BaseballCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\BaseballCap_Yellow.paa",
			"inf\clothes\hats\BaseballCap_Yellow.paa",
			"inf\clothes\hats\BaseballCap_Yellow.paa"
		};
	};

	class BeanieHat_Cyan: BeanieHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\BeanieHat_Cyan.paa",
			"inf\clothes\hats\BeanieHat_Cyan.paa",
			"inf\clothes\hats\BeanieHat_Cyan.paa"
		};
	};
	class BeanieHat_Orange: BeanieHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\BeanieHat_Orange.paa",
			"inf\clothes\hats\BeanieHat_Orange.paa",
			"inf\clothes\hats\BeanieHat_Orange.paa"
		};
	};
	class BeanieHat_Violet: BeanieHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\BeanieHat_Violet.paa",
			"inf\clothes\hats\BeanieHat_Violet.paa",
			"inf\clothes\hats\BeanieHat_Violet.paa"
		};
	};
	class BeanieHat_Yellow: BeanieHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\BeanieHat_Yellow.paa",
			"inf\clothes\hats\BeanieHat_Yellow.paa",
			"inf\clothes\hats\BeanieHat_Yellow.paa"
		};
	};

	class CowboyHat_Grey: CowboyHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\CowboyHat_Grey.paa",
			"inf\clothes\hats\CowboyHat_Grey.paa",
			"inf\clothes\hats\CowboyHat_Grey.paa"
		};
	};
	class CowboyHat_Jeans: CowboyHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\CowboyHat_Jeans.paa",
			"inf\clothes\hats\CowboyHat_Jeans.paa",
			"inf\clothes\hats\CowboyHat_Jeans.paa"
		};
	};

	class FlatCap_Cyan: FlatCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\FlatCap_Cyan.paa",
            "inf\clothes\hats\FlatCap_Cyan.paa",
            "inf\clothes\hats\FlatCap_Cyan.paa"
		};
	};
	class FlatCap_Green: FlatCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\FlatCap_Green.paa",
            "inf\clothes\hats\FlatCap_Green.paa",
            "inf\clothes\hats\FlatCap_Green.paa"
		};
	};
	class FlatCap_Pink: FlatCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\FlatCap_Pink.paa",
            "inf\clothes\hats\FlatCap_Pink.paa",
            "inf\clothes\hats\FlatCap_Pink.paa"
		};
	};
    class FlatCap_Violet: FlatCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\FlatCap_Violet.paa",
            "inf\clothes\hats\FlatCap_Violet.paa",
            "inf\clothes\hats\FlatCap_Violet.paa"
		};
	};
    class FlatCap_Yellow: FlatCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\FlatCap_Yellow.paa",
            "inf\clothes\hats\FlatCap_Yellow.paa",
            "inf\clothes\hats\FlatCap_Yellow.paa"
		};
	};

	class MilitaryBeret_ChernoDefForce: MilitaryBeret_ColorBase
	{
	    scope=2;
		model="DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
		{
			male="DZ\characters\headgear\MilitaryBeret_m.p3d";
			female="DZ\characters\headgear\MilitaryBeret_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\MilitaryBeret_ChernoDefForce.paa",
			"inf\clothes\hats\MilitaryBeret_ChernoDefForce.paa",
			"inf\clothes\hats\MilitaryBeret_ChernoDefForce.paa"
		};
	};
    class MilitaryBeret_CoatOfArms: MilitaryBeret_ColorBase
	{
	    scope=2;
		model="DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
		{
			male="DZ\characters\headgear\MilitaryBeret_m.p3d";
			female="DZ\characters\headgear\MilitaryBeret_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\MilitaryBeret_CoatOfArms.paa",
			"inf\clothes\hats\MilitaryBeret_CoatOfArms.paa",
			"inf\clothes\hats\MilitaryBeret_CoatOfArms.paa"
		};
	};
	class MilitaryBeret_Green: MilitaryBeret_ColorBase
	{
	    scope=2;
		model="DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
		{
			male="DZ\characters\headgear\MilitaryBeret_m.p3d";
			female="DZ\characters\headgear\MilitaryBeret_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\MilitaryBeret_Green.paa",
			"inf\clothes\hats\MilitaryBeret_Green.paa",
			"inf\clothes\hats\MilitaryBeret_Green.paa"
		};
	};


    class RadarCap_Cyan: RadarCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\RadarCap_Cyan.paa",
            "inf\clothes\hats\RadarCap_Cyan.paa",
            "inf\clothes\hats\RadarCap_Cyan.paa"
		};
	};

	class RadarCap_Grey: RadarCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\RadarCap_Grey.paa",
            "inf\clothes\hats\RadarCap_Grey.paa",
            "inf\clothes\hats\RadarCap_Grey.paa"
		};
	};
	class RadarCap_Pink: RadarCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\RadarCap_Pink.paa",
            "inf\clothes\hats\RadarCap_Pink.paa",
            "inf\clothes\hats\RadarCap_Pink.paa"
		};
	};
	class RadarCap_Violet: RadarCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\RadarCap_Violet.paa",
            "inf\clothes\hats\RadarCap_Violet.paa",
            "inf\clothes\hats\RadarCap_Violet.paa"
		};
	};
	class RadarCap_Yellow: RadarCap_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\hats\RadarCap_Yellow.paa",
            "inf\clothes\hats\RadarCap_Yellow.paa",
            "inf\clothes\hats\RadarCap_Yellow.paa"
		};
	};

	/*
		MASKS
	*/
	class BalaclavaMask_ColorBase;
	class Balaclava3Holes_ColorBase;
	class SurgicalMask;
	class SantasBeard;

	class BalaclavaMask_DarkGreen: BalaclavaMask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\masks\BalaclavaMask_DarkGreen.paa",
			"inf\clothes\masks\BalaclavaMask_DarkGreen.paa",
			"inf\clothes\masks\BalaclavaMask_DarkGreen.paa"
		};
	};
	class BalaclavaMask_Cyan: BalaclavaMask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\masks\BalaclavaMask_Cyan.paa",
			"inf\clothes\masks\BalaclavaMask_Cyan.paa",
			"inf\clothes\masks\BalaclavaMask_Cyan.paa"
		};
	};
	class BalaclavaMask_GreenSkull: BalaclavaMask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\masks\BalaclavaMask_GreenSkull.paa",
			"inf\clothes\masks\BalaclavaMask_GreenSkull.paa",
			"inf\clothes\masks\BalaclavaMask_GreenSkull.paa"
		};
	};
	class BalaclavaMask_RedSkull: BalaclavaMask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\masks\BalaclavaMask_RedSkull.paa",
			"inf\clothes\masks\BalaclavaMask_RedSkull.paa",
			"inf\clothes\masks\BalaclavaMask_RedSkull.paa"
		};
	};
	class BalaclavaMask_Violet: BalaclavaMask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\masks\BalaclavaMask_Violet.paa",
			"inf\clothes\masks\BalaclavaMask_Violet.paa",
			"inf\clothes\masks\BalaclavaMask_Violet.paa"
		};
	};
	class BalaclavaMask_YellowSkull: BalaclavaMask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\masks\BalaclavaMask_YellowSkull.paa",
			"inf\clothes\masks\BalaclavaMask_YellowSkull.paa",
			"inf\clothes\masks\BalaclavaMask_YellowSkull.paa"
		};
	};
	class BalaclavaMask_FadeSkull: BalaclavaMask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\masks\BalaclavaMask_FadeSkull.paa",
			"inf\clothes\masks\BalaclavaMask_FadeSkull.paa",
			"inf\clothes\masks\BalaclavaMask_FadeSkull.paa"
		};
	};
	class BalaclavaMask_BlackCamo: BalaclavaMask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\masks\BalaclavaMask_BlackCamo.paa",
			"inf\clothes\masks\BalaclavaMask_BlackCamo.paa",
			"inf\clothes\masks\BalaclavaMask_BlackCamo.paa"
		};
	};


	/*
		PANTS
	*/

	class GorkaPants_ColorBase;
	class NBCPantsBase;
	class TrackSuitPants_ColorBase;
	class CargoPants_ColorBase;
	class TTSKOPants;
	class Skirt_ColorBase;
	class Jeans_ColorBase;

	class CargoPants_BeigeDirty: CargoPants_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\pants\cargopants_beigedirty_co.paa",
            "inf\clothes\pants\cargopants_beigedirty_co.paa",
            "inf\clothes\pants\cargopants_beigedirty_co.paa"
		};
	};

	/*
		TOPS
	*/
	class Blouse_ColorBase;
	class BomberJacket_ColorBase;
	class DenimJacket;
	class GorkaEJacket_ColorBase;
	class HikingJacket_ColorBase;
	class Hoodie_ColorBase;
	class HuntingJacket_ColorBase;
	class M65Jacket_ColorBase;
	class NBCJacketBase;
	class QuiltedJacket_ColorBase;
	class Raincoat_ColorBase;
	class RidersJacket_ColorBase;
	class Shirt_ColorBase;
	class Sweater_ColorBase;
	class TShirt_ColorBase;
	class TTsKOJacket_ColorBase;
	class TrackSuitJacket_ColorBase;

	class Blouse_Grey: Blouse_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\Blouse_Grey.paa",
			"inf\clothes\tops\Blouse_Grey.paa",
			"inf\clothes\tops\Blouse_Grey.paa"
		};
	};

	class Blouse_Pink: Blouse_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\Blouse_Pink.paa",
			"inf\clothes\tops\Blouse_Pink.paa",
			"inf\clothes\tops\Blouse_Pink.paa"
		};
	};

	class Blouse_Yellow: Blouse_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\Blouse_Yellow.paa",
			"inf\clothes\tops\Blouse_Yellow.paa",
			"inf\clothes\tops\Blouse_Yellow.paa"
		};
	};

    class BomberJacket_Pentagram: BomberJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\BomberJacket_Pentagram.paa",
			"inf\clothes\tops\BomberJacket_Pentagram.paa",
			"inf\clothes\tops\BomberJacket_Pentagram.paa"
		};
	};

    class BomberJacket_Cyan: BomberJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\BomberJacket_Cyan.paa",
			"inf\clothes\tops\BomberJacket_Cyan.paa",
			"inf\clothes\tops\BomberJacket_Cyan.paa"
		};
	};
    class BomberJacket_Pink: BomberJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\BomberJacket_Pink.paa",
			"inf\clothes\tops\BomberJacket_Pink.paa",
			"inf\clothes\tops\BomberJacket_Pink.paa"
		};
	};
	class BomberJacket_Red: BomberJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\BomberJacket_Red.paa",
			"inf\clothes\tops\BomberJacket_Red.paa",
			"inf\clothes\tops\BomberJacket_Red.paa"
		};
	};
	class BomberJacket_Violet: BomberJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\BomberJacket_Violet.paa",
			"inf\clothes\tops\BomberJacket_Violet.paa",
			"inf\clothes\tops\BomberJacket_Violet.paa"
		};
	};
	class BomberJacket_LoneWolf: BomberJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\BomberJacket_LoneWolf.paa",
			"inf\clothes\tops\BomberJacket_LoneWolf.paa",
			"inf\clothes\tops\BomberJacket_LoneWolf.paa"
		};
	};

	class HikingJacket_GreyCamo: HikingJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\HikingJacket_GreyCamo.paa",
            "inf\clothes\tops\HikingJacket_GreyCamo.paa",
            "inf\clothes\tops\HikingJacket_GreyCamo.paa"
		};
	};
	class HikingJacket_NoGod: HikingJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\HikingJacket_nogod.paa",
            "inf\clothes\tops\HikingJacket_nogod.paa",
            "inf\clothes\tops\HikingJacket_nogod.paa"
		};
	};
	class HikingJacket_Cyan: HikingJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\HikingJacket_Cyan.paa",
            "inf\clothes\tops\HikingJacket_Cyan.paa",
            "inf\clothes\tops\HikingJacket_Cyan.paa"
		};
	};
	class HikingJacket_Pink: HikingJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\HikingJacket_Pink.paa",
            "inf\clothes\tops\HikingJacket_Pink.paa",
            "inf\clothes\tops\HikingJacket_Pink.paa"
		};
	};
	class HikingJacket_Beige: HikingJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\HikingJacket_Beige.paa",
            "inf\clothes\tops\HikingJacket_Beige.paa",
            "inf\clothes\tops\HikingJacket_Beige.paa"
		};
	};
	class HikingJacket_BabyBlue: HikingJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\HikingJacket_BabyBlue.paa",
            "inf\clothes\tops\HikingJacket_BabyBlue.paa",
            "inf\clothes\tops\HikingJacket_BabyBlue.paa"
		};
	};
	class HikingJacket_Purple: HikingJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\HikingJacket_Purple.paa",
            "inf\clothes\tops\HikingJacket_Purple.paa",
            "inf\clothes\tops\HikingJacket_Purple.paa"
		};
	};
	class HikingJacket_BlueCamo: HikingJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\HikingJacket_BlueCamo.paa",
            "inf\clothes\tops\HikingJacket_BlueCamo.paa",
            "inf\clothes\tops\HikingJacket_BlueCamo.paa"
		};
	};

	class M65Jacket_Pentagram: M65Jacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\M65Jacket_Pentagram.paa",
            "inf\clothes\tops\M65Jacket_Pentagram.paa",
            "inf\clothes\tops\M65Jacket_Pentagram.paa"
		};
	};
	class M65Jacket_CHDKZ: M65Jacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\M65Jacket_CHDKZ.paa",
            "inf\clothes\tops\M65Jacket_CHDKZ.paa",
            "inf\clothes\tops\M65Jacket_CHDKZ.paa"
		};
	};
	class M65Jacket_ChernoDefForce: M65Jacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\M65Jacket_ChernoDefForce.paa",
            "inf\clothes\tops\M65Jacket_ChernoDefForce.paa",
            "inf\clothes\tops\M65Jacket_ChernoDefForce.paa"
		};
	};
	class M65Jacket_ChernoFlag: M65Jacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\M65Jacket_ChernoFlag.paa",
            "inf\clothes\tops\M65Jacket_ChernoFlag.paa",
            "inf\clothes\tops\M65Jacket_ChernoFlag.paa"
		};
	};
	class M65Jacket_Napa: M65Jacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\M65Jacket_Napa.paa",
            "inf\clothes\tops\M65Jacket_Napa.paa",
            "inf\clothes\tops\M65Jacket_Napa.paa"
		};
	};
	class M65Jacket_BlackCamo: M65Jacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\M65Jacket_BlackCamo.paa",
            "inf\clothes\tops\M65Jacket_BlackCamo.paa",
            "inf\clothes\tops\M65Jacket_BlackCamo.paa"
		};
	};
	class M65Jacket_BlackMedic: M65Jacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\M65Jacket_BlackMedic.paa",
            "inf\clothes\tops\M65Jacket_BlackMedic.paa",
            "inf\clothes\tops\M65Jacket_BlackMedic.paa"
		};
	};

	class QuiltedJacket_Cyan: QuiltedJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\QuiltedJacket_Cyan.paa",
			"inf\clothes\tops\QuiltedJacket_Cyan.paa",
			"inf\clothes\tops\QuiltedJacket_Cyan.paa"
		};
	};
	class QuiltedJacket_Pink: QuiltedJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\QuiltedJacket_Pink.paa",
			"inf\clothes\tops\QuiltedJacket_Pink.paa",
			"inf\clothes\tops\QuiltedJacket_Pink.paa"
		};
	};

	class Raincoat_LimitedEdition: Raincoat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\Raincoat_LimitedEdition.paa",
			"inf\clothes\tops\Raincoat_LimitedEdition.paa",
			"inf\clothes\tops\Raincoat_LimitedEdition.paa"
		};
	};

	class RidersJacket_Bandidos: RidersJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\RidersJacket_Bandidos.paa",
            "inf\clothes\tops\RidersJacket_Bandidos.paa",
            "inf\clothes\tops\RidersJacket_Bandidos.paa"
		};
	};

	class TShirt_BeardStandards: TShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\TShirt_BeardStandards.paa",
			"inf\clothes\tops\TShirt_BeardStandards.paa",
			"inf\clothes\tops\TShirt_BeardStandards.paa"
		};
	};
	class TShirt_ChernoFlag: TShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\TShirt_ChernoFlag.paa",
			"inf\clothes\tops\TShirt_ChernoFlag.paa",
			"inf\clothes\tops\TShirt_ChernoFlag.paa"
		};
	};
	class TShirt_Ireland: TShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\TShirt_Ireland.paa",
			"inf\clothes\tops\TShirt_Ireland.paa",
			"inf\clothes\tops\TShirt_Ireland.paa"
		};
	};
	class TShirt_Eagle: TShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\TShirt_Eagle.paa",
			"inf\clothes\tops\TShirt_Eagle.paa",
			"inf\clothes\tops\TShirt_Eagle.paa"
		};
	};
	class TShirt_Karate: TShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\TShirt_Karate.paa",
			"inf\clothes\tops\TShirt_Karate.paa",
			"inf\clothes\tops\TShirt_Karate.paa"
		};
	};
	class TShirt_KIS: TShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\TShirt_KIS.paa",
			"inf\clothes\tops\TShirt_KIS.paa",
			"inf\clothes\tops\TShirt_KIS.paa"
		};
	};
	class TShirt_Russia: TShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\TShirt_Russia.paa",
			"inf\clothes\tops\TShirt_Russia.paa",
			"inf\clothes\tops\TShirt_Russia.paa"
		};
	};
	class TShirt_USAFreedom: TShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\TShirt_USAFreedom.paa",
			"inf\clothes\tops\TShirt_USAFreedom.paa",
			"inf\clothes\tops\TShirt_USAFreedom.paa"
		};
	};
	class TShirt_Gorilla: TShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\tops\TShirt_Gorilla.paa",
			"inf\clothes\tops\TShirt_Gorilla.paa",
			"inf\clothes\tops\TShirt_Gorilla.paa"
		};
	};
	/*
		VESTS
	*/

	class PressVest_ColorBase;
	
	class PressVest_Brown: PressVest_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\vests\PressVest_Brown.paa",
            "inf\clothes\vests\PressVest_Brown.paa",
            "inf\clothes\vests\PressVest_Brown.paa"
		};
	};
	class PressVest_GreyCamo: PressVest_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\vests\PressVest_GreyCamo.paa",
            "inf\clothes\vests\PressVest_GreyCamo.paa",
            "inf\clothes\vests\PressVest_GreyCamo.paa"
		};
	};
	class PressVest_Black: PressVest_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"inf\clothes\vests\PressVest_Black.paa",
            "inf\clothes\vests\PressVest_Black.paa",
            "inf\clothes\vests\PressVest_Black.paa"
		};
	};
};