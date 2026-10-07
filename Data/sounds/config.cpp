/// @brief Big thanks to the creator of CSO - Complete sound overhaul
/// @brief  I used his mod as a base for my mod
class CfgPatches
{
    class CRDTN_SoundMod
    {
        units[] = {""};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
            {
                "DZ_Data",
                "DZ_Scripts",
                "DZ_Sounds_Effects"};
    };
};

class CfgSoundSets
{
    #include "inventory\inventory_sound_sets.hpp"
    #include "fx\fx_sound_sets.hpp"
    #include "environment\environment_sound_sets.hpp"
};

class CfgSoundShaders
{
    #include "inventory\inventory_sound_shaders.hpp"
    #include "fx\fx_sound_shaders.hpp"
};

/// @brief Ambient beds for every world without its own EnvSounds (Chernarus, SievertZone).
/// @brief Vanilla list with the classic wind loops swapped for Sakhal's wind mix (files ship in base sounds_environment.pbo).
/// @brief WindHills stays - Sakhal uses it too. Sakhal snow/cave wind sets are left out.
/// @brief Wind sets are the 25 % quieter CRDTN_ copies from environment\environment_sound_sets.hpp.
class CfgEnvSounds
{
    soundSetEnvironment[] =
        {
            "ForestDay_SoundSet",
            "ForestNight_SoundSet",
            "ForestDayBirds_SoundSet",
            "HousesDay_SoundSet",
            "HousesNight_SoundSet",
            "MeadowDay_SoundSet",
            "MeadowDayCrickets_SoundSet",
            "MeadowEveningCrickets_SoundSet",
            "MeadowNight_SoundSet",
            "MeadowNight2_SoundSet",
            "Coast_SoundSet",
            "Sea_SoundSet",
            "RainForestLight_SoundSet",
            "RainForestMedium_SoundSet",
            "RainForestHeavy_SoundSet",
            "RainHousesLight_SoundSet",
            "RainHousesMedium_SoundSet",
            "RainHousesHeavy_SoundSet",
            "CRDTN_WindForestLight_SoundSet",
            "CRDTN_WindForestHeavy_SoundSet",
            "CRDTN_WindHousesLight_SoundSet",
            "CRDTN_WindHousesHeavy_SoundSet",
            "CRDTN_WindMeadowsLight_SoundSet",
            "CRDTN_WindMeadowsHeavy_SoundSet",
            "CRDTN_WindCoastHeavy_SoundSet",
            "CRDTN_WindSeaHeavy_SoundSet",
            "CRDTN_WindHills_SoundSet",
            "FlyAmbience_SoundSet"};
};
