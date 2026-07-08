modded class ItemBase
{
    EffectSound sound = NULL;

    override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
    {
        super.EEItemLocationChanged(oldLoc, newLoc);

        if (GetGame().IsServer())
        {
            return;
        }

        if (!oldLoc || !newLoc)
        {
            return;
        }

        if (oldLoc.GetType() == InventoryLocationType.UNKNOWN || newLoc.GetType() == InventoryLocationType.UNKNOWN)
        {
            return;
        }

        if (GetGame().GetPlayer() && vector.Distance(GetPosition(), GetGame().GetPlayer().GetPosition()) > 15)
        {
            return;
        }

        PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
        if (player == GetGame().GetPlayer())
        {
            SEffectManager.PlaySoundOnObject(InventorySoundsets.GetSoundSet(this), GetGame().GetPlayer());
        }
    }
};