#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Atlas\Weapons_F_Atlas\ASDG.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_58;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class CfgWeapons
{

    class arifle_AK12_F;
    class arifle_AK12_GL_F;
    class arifle_RPK12_F;
    class arifle_NCAR15_F: arifle_AK12_F
    {
        author="STR_A3_A_Ravenholme";
        _generalMacro="arifle_CAR12E_F";
        baseWeapon="arifle_CAR12E_F";
        scope=2;
        displayName= $STR_A3_A_CfgWeapons_arifle_NCAR15_F0;
        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
        magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large"};
        class WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_58
            {
                iconPosition[] =
                {
                    0, // X
                    0.38 // Y
                };
                iconScale = 0.2;
            };
        };
    };
    class arifle_NCAR15_GL_F: arifle_AK12_GL_F
    {
        author="STR_A3_A_Ravenholme";
        _generalMacro="arifle_NCAR15_GL_F";
        baseWeapon="arifle_NCAR15_GL_F";
        scope=2;
        displayName= $STR_A3_A_CfgWeapons_arifle_NCAR15_GL_F0;
        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
        magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large"};
        class WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_58
            {
                iconPosition[] =
                {
                    0, // X
                    0.38 // Y
                };
                iconScale = 0.2;
            };
        };
    };
    class arifle_NCAR15_MG_F: arifle_RPK12_F
    {
        author="STR_A3_A_Ravenholme";
        _generalMacro="arifle_NCAR15_MG_F";
        baseWeapon="arifle_NCAR15_MG_F";
        scope=2;
        displayName= $STR_A3_A_CfgWeapons_arifle_NCAR15_MG_F0;
        magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_Tracer_F"};
        magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large"};
        class WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_58
            {
                iconPosition[] =
                {
                    0, // X
                    0.38 // Y
                };
                iconScale = 0.2;
            };
        };
    };
};


