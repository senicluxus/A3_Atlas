class B_Carryall_cbr_IUAmmo_F: B_Carryall_cbr
{
	author = "BranFlakes";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,8);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(NLAW_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_AssaultPack_cbr;
class B_AssaultPack_cbr_IUMedic_F: B_AssaultPack_cbr
{
	author = "BranFlakes";
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_Carryall_cbr_IUEng_F: B_Carryall_cbr
{
	author = "BranFlakes";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(HandGrenade,1);
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_AssaultPack_cbr_ILAT_F: B_AssaultPack_cbr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,1);
	};
};