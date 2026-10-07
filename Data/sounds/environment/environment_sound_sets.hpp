/// @brief Wind ambient beds used by CfgEnvSounds in config.cpp.
/// @brief Copies of the vanilla (mostly Sakhal) wind sets, 25 % quieter. Vanilla volumeFactor kept, "* 0.75" appended.
/// @brief Own classes so the vanilla sets - and Sakhal itself - stay untouched.
class Sakhal_WindForestLight_SoundSet;
class Sakhal_WindForestHeavy_SoundSet;
class Sakhal_WindHousesLight_SoundSet;
class Sakhal_WindHousesHeavy_SoundSet;
class Sakhal_WindMeadowsLight_SoundSet;
class Sakhal_WindMeadowsHeavy_SoundSet;
class Sakhal_WindCoastHeavy_SoundSet;
class Sakhal_WindSeatHeavy_SoundSet;
class WindHills_SoundSet;

class CRDTN_WindForestLight_SoundSet : Sakhal_WindForestLight_SoundSet
{
    volumeFactor = "0.35 * 1.6 * 0.5 * 0.75";
};

class CRDTN_WindForestHeavy_SoundSet : Sakhal_WindForestHeavy_SoundSet
{
    volumeFactor = "0.35 * 1.6 * 0.75";
};

class CRDTN_WindHousesLight_SoundSet : Sakhal_WindHousesLight_SoundSet
{
    volumeFactor = "0.35 * 1.6 * 0.75";
};

class CRDTN_WindHousesHeavy_SoundSet : Sakhal_WindHousesHeavy_SoundSet
{
    volumeFactor = "0.35 * 1.6 * 0.75";
};

class CRDTN_WindMeadowsLight_SoundSet : Sakhal_WindMeadowsLight_SoundSet
{
    volumeFactor = "0.35 * 1.6 * 1.5 * 0.75";
};

class CRDTN_WindMeadowsHeavy_SoundSet : Sakhal_WindMeadowsHeavy_SoundSet
{
    volumeFactor = "0.35 * 1.6 * 0.75";
};

class CRDTN_WindCoastHeavy_SoundSet : Sakhal_WindCoastHeavy_SoundSet
{
    volumeFactor = "0.35 * 1.6 * 0.75";
};

class CRDTN_WindSeaHeavy_SoundSet : Sakhal_WindSeatHeavy_SoundSet
{
    volumeFactor = "0.35 * 1.6 * 0.75";
};

class CRDTN_WindHills_SoundSet : WindHills_SoundSet
{
    volumeFactor = "0.35 * 1.6 * 0.75";
};
