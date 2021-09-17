/* UNO - Sahrani */
class Atlas_I_UNO_Offroad_01_F: Offroad_01_military_base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
	textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
    {
		"\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa"
	};
    animationList[] =
	{
		HideBumper1,0,
		HideBumper2,0,
		HideConstruction,0,
		HideDoor3,0.33,
		HideBackpacks,0.83
	};
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
};

class Atlas_I_UNO_Offroad_armed_01_F: Offroad_01_armed_base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Offroad_armed_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
	textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
    {
		"\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa"
	};
    animationList[] =
	{
		HideBumper1,0,
		HideBumper2,0,
		HideConstruction,0,
		HideDoor3,0.33,
		HideBackpacks,0.83
	};
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
};

class Atlas_I_UNO_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Offroad_covered_01_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_cover_UN_CO.paa"
	};
    animationList[] =
	{
		HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
    /* Scripts */
	class EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
};
class Atlas_I_UNO_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Offroad_comms_01_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_cover_UN_CO.paa"
	};
    animationList[] =
    {
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
};

/* UNO - Chernarus */
class Atlas_I_UNO_wdl_Offroad_01_F: Atlas_I_UNO_Offroad_01_F
{
    side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};

    /* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag_red,10);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
	};
};

class Atlas_I_UNO_wdl_Offroad_armed_01_F: Offroad_01_armed_base_F
{
    side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};

    /* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag_red,10);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
	};
};

class Atlas_I_UNO_wdl_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
    side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};

    /* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag_red,10);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
	};
};

class Atlas_I_UNO_wdl_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
    side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};

    /* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag_red,10);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
	};
};