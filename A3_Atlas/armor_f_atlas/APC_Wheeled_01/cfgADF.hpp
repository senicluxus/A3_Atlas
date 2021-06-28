class Atlas_B_A_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
{
	author = "BranFlakes";
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_APC_Wheeled_01_cannon_v2_F.jpg";
	scope = public;
	scopeCurator = public;
    displayName = "AMV-7 Marshall";
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Crew_F;
	typicalCargo[] = {Atlas_B_A_Crew_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_base_ADF_CO.paa",
		"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_adds_ADF_CO.paa",
		"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_tows_ADF_CO.paa",
        "\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        "\A3\Armor_F\Data\cage_sand_CO.paa"
	};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_AUG_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_F,12);
		mag_xx(200Rnd_556x45_Box_Red_F,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,4);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(MRAWS_HEAT55_F,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_aucamo_F,2);
	};
};