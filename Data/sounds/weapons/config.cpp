class CfgPatches
{
	class CRDTN_SoundsWeapons
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects"
		};
	};
};
class CfgWeapons
{
	class Rifle_Base;
	class Shotgun_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class BoltActionRifle_Base;
	class Pistol_Base;
	class AKM_Base: Rifle_Base
	{
		aimSoundSet="AK";
	};
	class AK101_Base: Rifle_Base
	{
		aimSoundSet="AK";
	};
	class AK74_Base: Rifle_Base
	{
		aimSoundSet="AK";
	};
	class B95_Base: Rifle_Base
	{
		aimSoundSet="Winchester70";
	};
	class Colt1911_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class CZ61_Base: Rifle_Base
	{
		aimSoundSet="CZ61";
	};
	class CZ527_Base: BoltActionRifle_Base
	{
		aimSoundSet="CR527";
	};
	class CZ75_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class Deagle_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class FAL_Base: Rifle_Base
	{
		aimSoundSet="SVD";
	};
	class FNX45_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class Glock19_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class Izh18_Base: Rifle_Base
	{
		aimSoundSet="CR527";
	};
	class Izh43Shotgun_Base: Shotgun_Base
	{
		aimSoundSet="Saiga";
	};
	class M4A1_Base: Rifle_Base
	{
		aimSoundSet="VSS";
	};
	class Magnum_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class MakarovIJ70_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		aimSoundSet="Mosin";
	};
	class Mp133Shotgun_Base: Shotgun_Base
	{
		aimSoundSet="Saiga";
	};
	class MP5K_Base: Rifle_Base
	{
		aimSoundSet="VSS";
	};
	class Repeater_Base: Rifle_Base
	{
		aimSoundSet="CR527";
	};
	class Ruger1022_Base: Rifle_Base
	{
		aimSoundSet="CR527";
	};
	class Saiga_Base: Rifle_Base
	{
		aimSoundSet="Saiga";
	};
	class Scout_Base: BoltActionRifle_Base
	{
		aimSoundSet="CR527";
	};
	class SKS_Base: Rifle_Base
	{
		aimSoundSet="CR527";
	};
	class SVD_Base: Rifle_Base
	{
		aimSoundSet="SVD";
	};
	class UMP45_Base: Rifle_Base
	{
		aimSoundSet="VSS";
	};
	class VSS_Base: Rifle_Base
	{
		aimSoundSet="VSS";
	};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
		aimSoundSet="Winchester70";
	};
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class SoundSet_CRDTN_AK_Base
	{
		volumeFactor=0.2;
		frequencyFactor=1;
		spatial=0;
	};
	class aim_in_Base_SoundSet: baseCharacter_SoundSet
	{
		frequencyRandomizer=1;
		volumeRandomizer=1;
	};
	class aim_out_Base_SoundSet: baseCharacter_SoundSet
	{
		frequencyRandomizer=1;
		volumeRandomizer=1;
	};
	class AK_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK_aim_in_SoundShader"
		};
	};
	class AK_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK_aim_out_SoundShader"
		};
	};
	class CR527_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"CR527_aim_in_SoundShader"
		};
	};
	class CR527_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"CR527_aim_out_SoundShader"
		};
	};
	class CZ61_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"CZ61_aim_in_SoundShader"
		};
	};
	class CZ61_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"CZ61_aim_out_SoundShader"
		};
	};
	class FNX45_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"FNX45_aim_in_SoundShader"
		};
	};
	class FNX45_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"FNX45_aim_out_SoundShader"
		};
	};
	class Mosin_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mosin_aim_in_SoundShader"
		};
	};
	class Mosin_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mosin_aim_out_SoundShader"
		};
	};
	class M4_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"M4_aim_in_SoundShader"
		};
	};
	class M4_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"M4_aim_out_SoundShader"
		};
	};
	class Saiga_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"Saiga_aim_in_SoundShader"
		};
	};
	class Saiga_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"Saiga_aim_out_SoundShader"
		};
	};
	class SVD_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"SVD_aim_in_SoundShader"
		};
	};
	class SVD_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"SVD_aim_out_SoundShader"
		};
	};
	class VSS_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"VSS_aim_in_SoundShader"
		};
	};
	class VSS_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"VSS_aim_out_SoundShader"
		};
	};
	class Winchester70_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[]=
		{
			"Winchester70_aim_in_SoundShader"
		};
	};
	class Winchester70_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[]=
		{
			"Winchester70_aim_out_SoundShader"
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader
	{
		volume=1;
		range=3500;
		rangeCurve="closeShotAttenuationCurve";
	};
	class closeShotRifle_SoundShader: base_closeShot_SoundShader
	{
		rangeCurve="closeShotRifleCurve";
		range=3000;
	};
	class base_midShot_SoundShader
	{
		volume=1;
		range=3500;
		rangeCurve="midShotAttenuationCurve";
	};
	class midShotRifle_SoundShader: base_midShot_SoundShader
	{
		rangeCurve="midShotRifleCurve";
		range=3000;
	};
	class base_distShot_SoundShader
	{
		volume=1;
		range=3500;
		rangeCurve="distShotAttenuationCurve";
	};
	class distShotRifle_SoundShader: base_distShot_SoundShader
	{
		rangeCurve="distShotRifleCurve";
		range=3000;
	};
	class base_ProfessionalSilenced_closeShot_SoundShader
	{
		volume=1;
		range=150;
		rangeCurve="closeShotProfessionalSilencedAttenuationCurve";
	};
	class closeShotPistol_SoundShader: base_closeShot_SoundShader
	{
		rangeCurve="closeShotPistolCurve";
		range=1000;
	};
	class Glock19_closeShot_SoundShader: closeShotPistol_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\GLOCK\glock_shoot",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\GLOCK\glock_shoot1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\GLOCK\glock_shoot2",
				1
			}
		};
	};
	class Glock19_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\GLOCK\glock_shot_sil",
				1
			}
		};
	};
	class AK_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shoot",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shoot1",
				1
			}
		};
		volume=0.70794576;
	};
	class AK_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shot_sil",
				1
			}
		};
		volume=1;
	};
	class AK_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\_distance_shooting_mid\ak_distant",
				1
			}
		};
		volume=0.3548134;
	};
	class AK_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\_distance_shooting_far\ak_distant",
				1
			}
		};
		volume=0.3548134;
	};
	class base_ProfessionalSilenced_midShot_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class base_ProfessionalSilenced_tailForest_SoundShader;
	class base_ProfessionalSilenced_tailHouses_SoundShader;
	class base_ProfessionalSilenced_tailInterior_SoundShader;
	class base_ProfessionalSilenced_tailMeadows_SoundShader;
	class base_ProfessionalSilenced_tailTrees_SoundShader;
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class base_HomeSilenced_tailForest_SoundShader;
	class base_HomeSilenced_tailHouses_SoundShader;
	class base_HomeSilenced_tailInterior_SoundShader;
	class base_HomeSilenced_tailMeadows_SoundShader;
	class base_HomeSilenced_tailTrees_SoundShader;
	class M4_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot5",
				1
			}
		};
		volume=1;
	};
	class M4_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4a1_shot_sil",
				1
			}
		};
		volume=1;
	};
	class M4_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4a1_shot_sil",
				1
			}
		};
		volume=0.56234133;
	};
	class M4_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4a1_shot_sil",
				1
			}
		};
		volume=1;
	};
	class M4_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",
				1
			}
		};
	};
	class M4_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",
				1
			}
		};
	};
	class M4_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_indoor_tail",
				1
			}
		};
	};
	class M4_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",
				1
			}
		};
	};
	class M4_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",
				1
			}
		};
	};
	class M4_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_close_1",
				1
			}
		};
		volume=1;
	};
	class M4_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_close_1",
				1
			}
		};
		volume=0.56234133;
	};
	class M4_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",
				1
			}
		};
		volume=1;
	};
	class M4_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",
				1
			}
		};
	};
	class M4_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",
				1
			}
		};
	};
	class M4_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_indoor_tail",
				1
			}
		};
	};
	class M4_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",
				1
			}
		};
	};
	class M4_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",
				1
			}
		};
	};
	class M4_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\_distance_shooting_mid\scar_distant",
				1
			}
		};
		volume=0.56234133;
	};
	class M4_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\_distance_shooting_far\scar_distant",
				1
			}
		};
		volume=1;
	};
	class aim_Base_SoundShader: baseCharacter_SoundShader
	{
		volume=0.55000001;
		range=20;
	};
	class aim_in_Base_SoundShader: aim_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\M4A1\handling\jamming_01",
				1
			}
		};
	};
	class aim_out_Base_SoundShader: aim_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\M4A1\handling\hand_0",
				1
			}
		};
		volume=0.5;
	};
	class AK_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\NewAK\handling\jamming_01",
				1
			}
		};
		volume=0.80000001;
	};
	class AK_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\NewAK\handling\hand_0",
				1
			}
		};
		volume=2.8;
	};
	class CR527_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\cr527\handling\jamming_01",
				1
			}
		};
		volume=0.89999998;
	};
	class CR527_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\cr527\handling\hand1_0",
				1
			}
		};
		volume=0.80000001;
	};
	class CZ61_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\CZ61\handling\jamming_01",
				1
			}
		};
		volume=0.60000002;
	};
	class CZ61_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\CZ61\handling\hand_0",
				1
			}
		};
		volume=0.5;
	};
	class FNX45_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\fnx45\handling\jamming_01",
				1
			}
		};
		volume=0.30000001;
	};
	class FNX45_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\fnx45\handling\jamming_06",
				1
			}
		};
		volume=0.1;
	};
	class M4_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\M4A1\handling\jamming_07",
				1
			}
		};
		volume=0.2;
	};
	class M4_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\M4A1\handling\jamming_01",
				1
			}
		};
		volume=1.4;
	};
	class Mosin_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\hand_0",
				1
			}
		};
		volume=3;
	};
	class Mosin_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_01",
				1
			}
		};
		volume=1;
	};
	class Saiga_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\shotguns\saiga12\handling\jamming_01",
				1
			}
		};
	};
	class Saiga_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\shotguns\saiga12\handling\hand_0",
				1
			}
		};
		volume=2.5999999;
	};
	class SVD_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_01",
				1
			}
		};
		volume=1;
	};
	class SVD_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\hand_0",
				1
			}
		};
		volume=2.8;
	};
	class VSS_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\vss_vintorez\handling\hand_5",
				1
			}
		};
		volume=1.5;
	};
	class VSS_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\vss_vintorez\handling\hand_1",
				1
			}
		};
		volume=1.5;
	};
	class Winchester70_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\winchester70\handling\jamming_01",
				1
			}
		};
		volume=2;
	};
	class Winchester70_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\winchester70\handling\tail\hand_1_tail_interior",
				1
			}
		};
		volume=2.3;
	};
};
