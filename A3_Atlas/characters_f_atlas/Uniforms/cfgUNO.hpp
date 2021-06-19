class Atlas_U_I_U_CombatUniform_UNO: Uniform_Base
{
	author = "BranFlakes";
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_CombatUniform_olive0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_I_I_CombatUniform_olive_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_Sahrani_CombatFatigues_Pants.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_I_U_CombatFatigues_01_UNO_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_I_U_CombatUniform_shortsleeve_UNO: Uniform_Base
{
	author = "BranFlakes";
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_CombatUniform_shortsleeve_olive0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_I_I_CombatUniform_shortsleeve_olive_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_Sahrani_CombatFatigues_Pants.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_I_U_CombatFatigues_01_RolledUp_UNO_F;
		containerClass = Supply40;
		mass = 40;
	};
};