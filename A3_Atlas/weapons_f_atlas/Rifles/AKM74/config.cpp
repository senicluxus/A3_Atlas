#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Atlas\Weapons_F_Atlas\ASDG.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class CowsSlot_Rail;
class CowsSlot_Dovetail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class WeaponSlotsInfo;
class CfgWeapons
{
    class arifle_AKM_F;
    class arifle_AKM74_F: arifle_AKM_F
    {
        author = "Grave";
        descriptionShort = $STR_A3_A_CfgWeapons_arifle_AKM74_base_F1;
        baseWeapon = arifle_AKM74_F;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_F0;
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AKM74\Data\UI\icon_arifle_AK74_F_ca.paa";
		hiddenSelectionsTextures[] = {"A3_Atlas\weapons_f_atlas\Rifles\AKM74\Data\arifle_AK74_01_wood_CO.paa","A3_Atlas\weapons_f_atlas\Rifles\AKM74\Data\arifle_AK74_02_wood_CO.paa","\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"};
        hiddenSelectionsMaterials[] = {"A3_Atlas\weapons_f_atlas\Rifles\AKM74\Data\akm74.rvmat","A3_Atlas\weapons_f_atlas\Rifles\AKM74\Data\akm74_wood.rvmat"};
		recoil = "recoil_aks";
		inertia = 0.5;
		magazines[]=
		{
			30Rnd_545x39_Mag_F,
			30Rnd_545x39_Mag_Green_F,
			30Rnd_545x39_Mag_Tracer_F,
			30Rnd_545x39_Mag_Tracer_Green_F
		};
		magazineWell[]=
		{
			AK_545x39
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Dovetail
			{
				iconPosition[] = {0.55,0.38};
				iconScale = 0.2;
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{  
				iconPosition[] = {-0.02,0.41};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
			class PointerSlot{};
			mass = 100;
		};
        class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_AKM74_base_F_Library0;
		};

		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.17782794,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_reload",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",0.17782794,1,5};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
		};
    };
	class arifle_AKM74_polymer: arifle_AKM74_F
	{
		author = "Grave";
		baseWeapon = arifle_AKM74_polymer;
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AKM74\Data\UI\icon_arifle_AK74_polymer_F_ca.paa";
		magazines[]=
		{
			30Rnd_545x39_Black_Mag_F,
			30Rnd_545x39_Black_Mag_Tracer_F
		};
		scope = public;
		hiddenSelections[] = {"camo_1","camo_2","camo_3"};
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_polymer_F0;
		hiddenSelectionsTextures[] = {"A3_Atlas\weapons_f_atlas\Rifles\AKM74\Data\arifle_AK74_01_black_CO.paa","A3_Atlas\weapons_f_atlas\Rifles\AKM74\Data\arifle_AK74_02_black_CO.paa","\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"};
	};
	class arifle_AKM74_polymer_alt: arifle_AKM74_F
	{
		author = "Grave";
		baseWeapon = arifle_AKM74_polymer_alt;
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AKM74\Data\UI\icon_arifle_AK74_polymer_alt_F_ca.paa";
		scope = public;
		hiddenSelections[] = {"camo_1","camo_2","camo_3"};
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_polymer_alt_F0;
		hiddenSelectionsTextures[] = {"A3_Atlas\weapons_f_atlas\Rifles\AKM74\Data\arifle_AK74_01_plum_CO.paa","A3_Atlas\weapons_f_atlas\Rifles\AKM74\Data\arifle_AK74_02_plum_CO.paa","\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"};
	};
};